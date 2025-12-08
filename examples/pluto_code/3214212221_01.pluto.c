#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214212221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
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
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
        }
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
void kernel_3214212221_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  if (PB_L >= 0) {
    for (t1=0;t1<=floord(PB_M+PB_L-1,32);t1++) {
      for (t2=0;t2<=min(min(min(min(floord(PB_L,32),floord(PB_M,32)),floord(-32*t1+PB_M+PB_L-1,32)),floord(-64*t1+5*PB_M+2*PB_L-8,160)),t1);t2++) {
        for (t3=2*t2;t3<=min(min(min(min(min(min(min(floord(PB_M+PB_L-1,32),floord(32*t2+PB_L+30,32)),floord(-32*t1+2*PB_M+PB_L-1,32)),floord(-32*t1+32*t2+PB_M+PB_L+30,32)),floord(3*PB_M+4*PB_L-6,112)),floord(-224*t1+10*PB_M+7*PB_L-13,160)),floord(32*t2+11*PB_L,192)),floord(-2080*t1+96*t2+65*PB_M+65*PB_L-65,1088));t3++) {
          if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
            A[1] = A[1 -1] * 4;;
          }
          if (t3 >= 1) {
            for (t4=max(max(2,32*t1),32*t3-PB_L+1);t4<=min(min(min(PB_L-4,32*t1+31),64*t2-32*t3+PB_L+61),-32*t3+2*PB_M+PB_L-1);t4++) {
              for (t5=max(max(2,ceild(32*t3+t4-PB_L+1,2)),32*t2);t5<=min(min(min(PB_M,t4),32*t2+31),16*t3+14);t5++) {
                for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,-t4+2*t5+PB_L-1);t6++) {
                  B[t4-2][(-2*t5+t6)][(-2*t5+t6)-1] = C[t5-2][(-2*t5+t6)+2][t4] * D[t4-2][t5-1][(-2*t5+t6)+t4] * B[t4-2][(-2*t5+t6)+2][(-2*t5+t6)+1] + B[t4-2][(-2*t5+t6)-2][(-2*t5+t6)-3] * B[t4-2][(-2*t5+t6)+1][(-2*t5+t6)] - 4;;
                }
              }
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=max(2,32*t1);t4<=min(min(PB_L-4,PB_M-1),32*t1+31);t4++) {
              A[t4] = A[t4-1] * 4;;
              for (t5=2;t5<=min(14,t4);t5++) {
                for (t6=2*t5+3;t6<=min(31,-t4+2*t5+PB_L-1);t6++) {
                  B[t4-2][(-2*t5+t6)][(-2*t5+t6)-1] = C[t5-2][(-2*t5+t6)+2][t4] * D[t4-2][t5-1][(-2*t5+t6)+t4] * B[t4-2][(-2*t5+t6)+2][(-2*t5+t6)+1] + B[t4-2][(-2*t5+t6)-2][(-2*t5+t6)-3] * B[t4-2][(-2*t5+t6)+1][(-2*t5+t6)] - 4;;
                }
              }
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=max(max(2,32*t1),PB_L-3);t4<=min(PB_M-1,32*t1+31);t4++) {
              A[t4] = A[t4-1] * 4;;
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=max(PB_M,32*t1);t4<=min(PB_L-4,32*t1+31);t4++) {
              for (t5=2;t5<=min(14,PB_M);t5++) {
                for (t6=2*t5+3;t6<=min(31,-t4+2*t5+PB_L-1);t6++) {
                  B[t4-2][(-2*t5+t6)][(-2*t5+t6)-1] = C[t5-2][(-2*t5+t6)+2][t4] * D[t4-2][t5-1][(-2*t5+t6)+t4] * B[t4-2][(-2*t5+t6)+2][(-2*t5+t6)+1] + B[t4-2][(-2*t5+t6)-2][(-2*t5+t6)-3] * B[t4-2][(-2*t5+t6)+1][(-2*t5+t6)] - 4;;
                }
              }
            }
          }
        }
      }
    }
  }
  if (PB_L <= -1) {
    for (t1=0;t1<=floord(PB_M-1,32);t1++) {
      for (t4=max(1,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
        A[t4] = A[t4-1] * 4;;
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
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3214212221_01(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
