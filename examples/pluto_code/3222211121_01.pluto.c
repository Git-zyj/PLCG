#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222211121_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                sum_B += B[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        sum_C += C[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222211121_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 3) {
  for (t1=0;t1<=floord(PB_L-2,32);t1++) {
    if (PB_Q <= -1) {
      for (t4=max(1,32*t1);t4<=min(PB_L-2,32*t1+31);t4++) {
        A[t4+1] = C[t4] - A[t4-1] * 2;;
      }
    }
    if (PB_Q >= 0) {
      for (t2=0;t2<=min(min(min(floord(6*t1+2*PB_Q,3),floord(2*PB_L+PB_Q-5,32)),floord(64*t1+PB_Q+61,32)),floord(3*PB_L+2*PB_Q-9,48));t2++) {
        for (t3=max(max(max(max(max(ceild(t2-1,2),ceild(3*t2-PB_Q,6)),ceild(32*t2-PB_L-29,32)),ceild(32*t1+32*t2-PB_L-29,64)),ceild(64*t1+33*t2-2*PB_L-PB_Q+4,66)),-t1+t2-1);t3<=min(min(min(min(min(min(min(min(floord(32*t2+PB_L+28,32),floord(-32*t1+32*t2+PB_L+29,32)),floord(-32*t1+48*t2+PB_L+28,32)),floord(32*t1+PB_L+PB_Q+28,32)),floord(32*t2+2*PB_L+PB_Q+26,64)),floord(-64*t1+64*t2+2*PB_L+PB_Q+26,64)),floord(-64*t1+64*t2+2*PB_L+11*PB_Q-4,64)),floord(96*t1+3*PB_L+34*PB_Q-9,96)),floord(96*t2+6*PB_L+35*PB_Q-18,192));t3++) {
          if ((PB_Q >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=1;t4<=min(14,PB_L-2);t4++) {
              A[t4+1] = C[t4] - A[t4-1] * 2;;
              for (t5=2*t4+2;t5<=min(31,2*t4+PB_Q-1);t5++) {
                lbv=-t4+t5;
                ubv=min(31,-t4+t5+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-2*t4+t5)][t4][(t4-t5+t6)] = D[(t4-t5+t6)+1][t4+1][(-2*t4+t5)] + B[(-2*t4+t5)-2][t4+1][(t4-t5+t6)+1] + 4;;
                }
              }
            }
          }
          if ((PB_Q <= 2) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(PB_L-2,32*t1+31);t4++) {
              A[t4+1] = C[t4] - A[t4-1] * 2;;
            }
          }
          if ((PB_Q >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(15,32*t1);t4<=min(PB_L-2,32*t1+31);t4++) {
              A[t4+1] = C[t4] - A[t4-1] * 2;;
            }
          }
          if ((PB_Q >= 3) && (t3 >= 1)) {
            lbp=max(max(max(max(1,ceild(32*t2-PB_Q+1,2)),32*t1),32*t2-32*t3-31),32*t3-PB_L-PB_Q+3);
            ubp=min(min(min(min(PB_L-2,32*t1+31),16*t2+14),32*t3+29),32*t2-32*t3+PB_L+29);
#pragma omp parallel for private(lbv,ubv,t5,t6)
            for (t4=lbp;t4<=ubp;t4++) {
              for (t5=max(max(32*t2,2*t4+2),32*t3+t4-PB_L+2);t5<=min(min(32*t2+31,32*t3+t4+31),2*t4+PB_Q-1);t5++) {
                lbv=max(32*t3,-t4+t5);
                ubv=min(32*t3+31,-t4+t5+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-2*t4+t5)][t4][(t4-t5+t6)] = D[(t4-t5+t6)+1][t4+1][(-2*t4+t5)] + B[(-2*t4+t5)-2][t4+1][(t4-t5+t6)+1] + 4;;
                }
              }
            }
          }
          if ((t1 == 0) && (t2 == 1) && (t3 == 0)) {
            lbp=max(1,ceild(-PB_Q+33,2));
            ubp=min(29,PB_L-2);
#pragma omp parallel for private(lbv,ubv,t5,t6)
            for (t4=lbp;t4<=ubp;t4++) {
              for (t5=max(32,2*t4+2);t5<=min(t4+31,2*t4+PB_Q-1);t5++) {
                lbv=-t4+t5;
                ubv=31;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-2*t4+t5)][t4][(t4-t5+t6)] = D[(t4-t5+t6)+1][t4+1][(-2*t4+t5)] + B[(-2*t4+t5)-2][t4+1][(t4-t5+t6)+1] + 4;;
                }
              }
            }
          }
        }
      }
    }
  }
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3222211121_01(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
