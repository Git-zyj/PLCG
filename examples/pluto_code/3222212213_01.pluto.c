#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222212213_01.h"
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
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
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
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    sum_A += A[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            sum_B += B[i_0][i_1];
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
void kernel_3222212213_01(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_N >= 5) {
  for (t1=0;t1<=floord(3*PB_N-13,32);t1++) {
    lbp=max(0,ceild(32*t1-PB_N+3,32));
    ubp=min(floord(32*t1+PB_N+11,64),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(0,ceild(32*t1-32*t2-PB_N+4,16)),t1-2*t2),-4*t1+6*t2-2);t3<=min(min(floord(3*PB_N-11,32),floord(-96*t2+6*PB_N-23,32)),floord(64*t2+PB_N+59,32));t3++) {
        if ((t2 <= floord(PB_N-4,32)) && (t3 >= 1)) {
          for (t4=32*t1-32*t2;t4<=min(min(min(min(PB_L-1,PB_N-3),32*t3+29),32*t1-32*t2+31),-64*t2+32*t3+31);t4++) {
            for (t5=max(max(1,ceild(32*t3-PB_N+3,2)),32*t2);t5<=min(min(floord(32*t3-t4+31,2),PB_N-4),32*t2+31);t5++) {
              for (t6=max(32*t3,t4+2*t5);t6<=min(32*t3+31,2*t5+PB_N-3);t6++) {
                A[(-2*t5+t6)+2][t5][t4][t4] = A[t5+3][(-2*t5+t6)][t4][t4] * 2;;
              }
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=0;t4<=min(1,PB_L-1);t4++) {
            for (t5=1;t5<=min(floord(-t4+31,2),PB_N-4);t5++) {
              for (t6=t4+2*t5;t6<=min(31,2*t5+PB_N-3);t6++) {
                A[(-2*t5+t6)+2][t5][t4][t4] = A[t5+3][(-2*t5+t6)][t4][t4] * 2;;
              }
            }
          }
        }
        if ((t2 >= ceild(PB_N-3,32)) && (t3 == 0)) {
          for (t4=max(32*t1-32*t2,16*t2+1);t4<=min(PB_N-4,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(32*t2+31,2*t4-1);t5++) {
              B[t4][(-t4+t5)] = C[(-t4+t5)-1] * B[t4+1][(-t4+t5)] + B[t4][(-t4+t5)+1] * B[t4-1][(-t4+t5)+1] + 3;;
            }
          }
        }
        if ((t2 <= floord(PB_N-4,32)) && (t3 == 0)) {
          for (t4=max(max(32*t1-32*t2,-64*t2+32),16*t2+1);t4<=min(min(PB_N-4,32*t2+30),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,t4+1);t5<=min(32*t2+31,2*t4-1);t5++) {
              B[t4][(-t4+t5)] = C[(-t4+t5)-1] * B[t4+1][(-t4+t5)] + B[t4][(-t4+t5)+1] * B[t4-1][(-t4+t5)+1] + 3;;
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=2;t4<=min(min(29,PB_L-1),PB_N-4);t4++) {
            for (t5=1;t5<=min(floord(-t4+31,2),t4);t5++) {
              for (t6=t4+2*t5;t6<=min(31,2*t5+PB_N-3);t6++) {
                A[(-2*t5+t6)+2][t5][t4][t4] = A[t5+3][(-2*t5+t6)][t4][t4] * 2;;
              }
            }
            for (t5=t4+1;t5<=min(min(floord(-t4+31,2),PB_N-4),2*t4-1);t5++) {
              B[t4][(-t4+t5)] = C[(-t4+t5)-1] * B[t4+1][(-t4+t5)] + B[t4][(-t4+t5)+1] * B[t4-1][(-t4+t5)+1] + 3;;
              for (t6=t4+2*t5;t6<=min(31,2*t5+PB_N-3);t6++) {
                A[(-2*t5+t6)+2][t5][t4][t4] = A[t5+3][(-2*t5+t6)][t4][t4] * 2;;
              }
            }
            for (t5=2*t4;t5<=min(floord(-t4+31,2),PB_N-4);t5++) {
              for (t6=t4+2*t5;t6<=min(31,2*t5+PB_N-3);t6++) {
                A[(-2*t5+t6)+2][t5][t4][t4] = A[t5+3][(-2*t5+t6)][t4][t4] * 2;;
              }
            }
            for (t5=max(ceild(-t4+32,2),t4+1);t5<=min(min(31,PB_N-4),2*t4-1);t5++) {
              B[t4][(-t4+t5)] = C[(-t4+t5)-1] * B[t4+1][(-t4+t5)] + B[t4][(-t4+t5)+1] * B[t4-1][(-t4+t5)+1] + 3;;
            }
            for (t5=PB_N-3;t5<=min(31,2*t4-1);t5++) {
              B[t4][(-t4+t5)] = C[(-t4+t5)-1] * B[t4+1][(-t4+t5)] + B[t4][(-t4+t5)+1] * B[t4-1][(-t4+t5)+1] + 3;;
            }
          }
        }
        if ((PB_N <= min(32,PB_L+2)) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t5=1;t5<=min(floord(-PB_N+34,2),PB_N-4);t5++) {
            A[(PB_N-3)+2][t5][(PB_N-3)][(PB_N-3)] = A[t5+3][(PB_N-3)][(PB_N-3)][(PB_N-3)] * 2;;
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(2,PB_L);t4<=min(29,PB_N-4);t4++) {
            for (t5=t4+1;t5<=min(31,2*t4-1);t5++) {
              B[t4][(-t4+t5)] = C[(-t4+t5)-1] * B[t4+1][(-t4+t5)] + B[t4][(-t4+t5)+1] * B[t4-1][(-t4+t5)+1] + 3;;
            }
          }
        }
        if ((PB_N >= 34) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          B[30][1] = C[1 -1] * B[30 +1][1] + B[30][1 +1] * B[30 -1][1 +1] + 3;;
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
int za = zA;
int va = vA;
int xb = xB;
int yb = yB;
int xc = xC;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3222212213_01(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
