#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214111111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
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
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
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
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214111111_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_Q >= 4) {
  for (t1=2;t1<=PB_Q-2;t1++) {
    if (PB_M <= -1) {
      for (t2=0;t2<=min(floord(t1-1,32),floord(-t1+PB_Q-2,32));t2++) {
        for (t4=32*t2;t4<=min(min(t1-1,32*t2+31),-t1+PB_Q-2);t4++) {
          A[t1+1][t4+t1+1] = C[0] - 6;;
        }
      }
    }
    if (PB_M >= 0) {
      for (t2=0;t2<=min(floord(t1+PB_M-1,32),floord(-t1+PB_Q+PB_M-2,32));t2++) {
        for (t3=max(max(0,ceild(-t1+32*t2+1,16)),ceild(t1+32*t2-PB_Q+2,16));t3<=min(min(floord(3*PB_M,32),floord(64*t2+PB_M+60,32)),floord(32*t2+23*PB_M,256));t3++) {
          if ((t2 == 0) && (t3 == 0)) {
            A[t1+1][0 +t1+1] = C[0] - 6;;
          }
          if (t3 >= 1) {
            for (t4=max(max(1,ceild(32*t3-PB_M+2,2)),32*t2);t4<=min(min(PB_M-1,32*t2+31),16*t3+15);t4++) {
              for (t5=max(32*t3,2*t4);t5<=min(32*t3+31,2*t4+PB_M-2);t5++) {
                B[t1-1][t4][(-2*t4+t5)] = B[t1-2][t4-1][(-2*t4+t5)] + B[t4-1][(-2*t4+t5)+1][t1] + 2;;
              }
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=1;t4<=min(min(min(15,PB_M-1),t1-1),-t1+PB_Q-2);t4++) {
              A[t1+1][t4+t1+1] = C[0] - 6;;
              for (t5=2*t4;t5<=min(31,2*t4+PB_M-2);t5++) {
                B[t1-1][t4][(-2*t4+t5)] = B[t1-2][t4-1][(-2*t4+t5)] + B[t4-1][(-2*t4+t5)+1][t1] + 2;;
              }
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=max(1,PB_M);t4<=min(min(15,t1-1),-t1+PB_Q-2);t4++) {
              A[t1+1][t4+t1+1] = C[0] - 6;;
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=-t1+PB_Q-1;t4<=min(min(15,PB_M-1),t1-1);t4++) {
              for (t5=2*t4;t5<=min(31,2*t4+PB_M-2);t5++) {
                B[t1-1][t4][(-2*t4+t5)] = B[t1-2][t4-1][(-2*t4+t5)] + B[t4-1][(-2*t4+t5)+1][t1] + 2;;
              }
            }
          }
          if (t3 == 0) {
            for (t4=max(16,32*t2);t4<=min(min(t1-1,32*t2+31),-t1+PB_Q-2);t4++) {
              A[t1+1][t4+t1+1] = C[0] - 6;;
            }
          }
          if ((t2 == 0) && (t3 == 0)) {
            for (t4=t1;t4<=min(15,PB_M-1);t4++) {
              for (t5=2*t4;t5<=min(31,2*t4+PB_M-2);t5++) {
                B[t1-1][t4][(-2*t4+t5)] = B[t1-2][t4-1][(-2*t4+t5)] + B[t4-1][(-2*t4+t5)+1][t1] + 2;;
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
int ya = yA;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3214111111_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
