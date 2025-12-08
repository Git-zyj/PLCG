#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212212111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
{
int i_0, i_1;
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
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
        sum_B += B[i_0];
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
void kernel_3212212111_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 3) {
  for (t1=0;t1<=floord(PB_L-1,32);t1++) {
    for (t2=0;t2<=min(floord(PB_L-2,16),2*t1+1);t2++) {
      if ((PB_M <= -1) && (t2 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          B[t4-2] = C[t4] * B[t4-1] * 3;;
        }
      }
      if ((PB_M >= 0) && (t2 <= floord(3*PB_L+PB_M-9,48))) {
        for (t3=max(max(ceild(t2-1,2),ceild(3*t2-PB_M,6)),ceild(32*t1+17*t2-PB_L+1,34));t3<=min(min(min(min(floord(32*t1+PB_M+28,32),floord(32*t2+PB_M+27,32)),floord(-16*t2+2*PB_L+PB_M-6,32)),floord(-288*t1+320*t2+9*PB_L+10*PB_M-9,320)),floord(32*t1+28*PB_L+29*PB_M-84,928));t3++) {
          if ((PB_M >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=2;t4<=min(30,PB_L-1);t4++) {
              B[t4-2] = C[t4] * B[t4-1] * 3;;
              for (t5=t4+1;t5<=min(31,2*t4-1);t5++) {
                lbp=t4;
                ubp=min(31,t4+PB_M-3);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t5)][(-t4+t6)+2] = A[(-t4+t5)-1][(-t4+t6)+1] - 4;;
                }
              }
            }
          }
          if ((PB_M >= 3) && (t3 >= 1)) {
            for (t4=max(max(max(2,32*t1),16*t2+1),32*t3-PB_M+3);t4<=min(min(min(PB_L-1,32*t1+31),32*t2+30),32*t3+31);t4++) {
              for (t5=max(32*t2,t4+1);t5<=min(32*t2+31,2*t4-1);t5++) {
                lbp=max(32*t3,t4);
                ubp=min(32*t3+31,t4+PB_M-3);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t5)][(-t4+t6)+2] = A[(-t4+t5)-1][(-t4+t6)+1] - 4;;
                }
              }
            }
          }
          if ((t1 == 0) && (t2 == 1) && (t3 == 0)) {
            for (t4=17;t4<=min(31,PB_L-1);t4++) {
              for (t5=32;t5<=2*t4-1;t5++) {
                lbp=t4;
                ubp=min(31,t4+PB_M-3);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t5)][(-t4+t6)+2] = A[(-t4+t5)-1][(-t4+t6)+1] - 4;;
                }
              }
            }
          }
          if ((PB_M <= 2) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
              B[t4-2] = C[t4] * B[t4-1] * 3;;
            }
          }
          if ((PB_M >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(31,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
              B[t4-2] = C[t4] * B[t4-1] * 3;;
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
int xc = xC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212212111_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
