#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212111211_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 1
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
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
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("C");
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
            sum_C += C[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212111211_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  for (t1=0;t1<=floord(PB_M-1,32);t1++) {
    for (t2=0;t2<=min(floord(PB_M-1,16),floord(32*t1+PB_M+30,32));t2++) {
      if ((PB_L <= -1) && (t2 == 0)) {
        for (t4=max(1,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          A[t4-1] = 4;;
        }
      }
      if ((PB_L >= 0) && (t1 >= ceild(32*t2-PB_M-16*PB_L+2,32))) {
        for (t3=max(max(max(0,ceild(32*t1+16*t2-PB_M+1,32)),ceild(32*t1+32*t2-PB_M-30,64)),ceild(64*t1+64*t2-2*PB_M-31*PB_L+2,128));t3<=min(min(min(min(floord(32*t1+PB_L+29,32),floord(32*t2+PB_L+27,32)),floord(-16*t2+2*PB_M+PB_L-4,32)),floord(-864*t1+928*t2+27*PB_M+29*PB_L-27,928)),floord(32*t1+29*PB_M+30*PB_L-58,960));t3++) {
          if ((PB_L >= 2) && (PB_M >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=1;t4<=min(29,PB_M-1);t4++) {
              A[t4-1] = 4;;
              for (t5=t4;t5<=min(31,t4+PB_L-2);t5++) {
                for (t6=t4+2;t6<=min(31,t4+PB_M-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)-1][(-t4+t5)] = C[t4][(-t4+t5)] - B[(-t4+t5)+1][(-t4+t6)-1][(-t4+t5)+1] + B[(-t4+t5)][(-t4+t6)-2][(-t4+t5)] * B[(-t4+t5)+1][(-t4+t6)][(-t4+t5)+1] * B[(-t4+t5)][(-t4+t6)][(-t4+t5)] + 5;;
                }
              }
            }
          }
          if ((PB_M == 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            A[1 -1] = 4;;
          }
          if ((PB_L <= 1) && (PB_M >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
              A[t4-1] = 4;;
            }
          }
          if ((PB_L >= 2) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(30,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
              A[t4-1] = 4;;
            }
          }
          if ((PB_L >= 2) && (PB_M >= 3) && (t3 >= 1)) {
            for (t4=max(max(max(1,32*t1),32*t2-PB_M+1),32*t3-PB_L+2);t4<=min(min(min(PB_M-1,32*t1+31),32*t2+29),32*t3+31);t4++) {
              for (t5=max(32*t3,t4);t5<=min(32*t3+31,t4+PB_L-2);t5++) {
                for (t6=max(32*t2,t4+2);t6<=min(32*t2+31,t4+PB_M-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)-1][(-t4+t5)] = C[t4][(-t4+t5)] - B[(-t4+t5)+1][(-t4+t6)-1][(-t4+t5)+1] + B[(-t4+t5)][(-t4+t6)-2][(-t4+t5)] * B[(-t4+t5)+1][(-t4+t6)][(-t4+t5)+1] * B[(-t4+t5)][(-t4+t6)][(-t4+t5)] + 5;;
                }
              }
            }
          }
          if ((PB_L >= 2) && (t1 == 0) && (t2 >= 1) && (t3 == 0)) {
            for (t4=max(1,32*t2-PB_M+1);t4<=min(31,PB_M-1);t4++) {
              for (t5=t4;t5<=min(31,t4+PB_L-2);t5++) {
                for (t6=max(32*t2,t4+2);t6<=min(32*t2+31,t4+PB_M-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)-1][(-t4+t5)] = C[t4][(-t4+t5)] - B[(-t4+t5)+1][(-t4+t6)-1][(-t4+t5)+1] + B[(-t4+t5)][(-t4+t6)-2][(-t4+t5)] * B[(-t4+t5)+1][(-t4+t6)][(-t4+t5)+1] * B[(-t4+t5)][(-t4+t6)][(-t4+t5)] + 5;;
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
int yc = yC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212111211_00(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
