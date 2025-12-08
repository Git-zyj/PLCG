#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212111121_01.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            A[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2]);
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
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                sum_A += A[i_0][i_1][i_2];
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
void kernel_3212111121_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 2) && (PB_M >= 1)) {
  for (t1=0;t1<=floord(PB_L+PB_M-1,32);t1++) {
    lbp=max(0,ceild(32*t1-PB_L-PB_M+2,32));
    ubp=min(floord(PB_M,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=0;t3<=floord(PB_L-2,32);t3++) {
        if (t3 >= 1) {
          for (t4=32*t1-32*t2;t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(PB_M,32*t2+31);t5++) {
              lbv=32*t3;
              ubv=min(PB_L-2,32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
          }
        }
        if ((t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=32*t1-32*t2;t4<=min(32*t2-1,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M,32*t2+31);t5++) {
              lbv=0;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t2 >= ceild(PB_L-1,32)) && (t3 == 0)) {
          for (t4=32*t1-32*t2;t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M,32*t2+31);t5++) {
              lbv=0;
              ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
          }
        }
        if ((PB_L <= 4) && (t1 == t2) && (t3 == 0)) {
          for (t4=0;t4<=PB_L-1;t4++) {
            for (t5=max(1,32*t1);t5<=min(PB_M,32*t1+31);t5++) {
              lbv=0;
              ubv=PB_L-2;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=0;t4<=2;t4++) {
            for (t5=1;t5<=min(31,PB_M);t5++) {
              lbv=0;
              ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(max(3,32*t2),32*t1-32*t2);t4<=min(min(PB_L-1,PB_M-2),32*t1-32*t2+31);t4++) {
            if (t2 == 0) {
              for (t5=1;t5<=2;t5++) {
                lbv=0;
                ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5-1][t4][t6+1] = 6;;
                }
              }
            }
            for (t5=max(3,32*t2);t5<=min(min(t4,PB_L-2),32*t2+31);t5++) {
              A[t5-1][t4][0 +1] = 6;;
              B[t5-1][t4] = C[t4][t5] * C[t4][t5+1] + B[t5-1][t4+1] + B[t5-3][t4] + 2;;
              lbv=1;
              ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
            if ((t1 == 2*t2) && (t4 == PB_L-1)) {
              lbv=0;
              ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                if (t1%2 == 0) {
                  A[(PB_L-1)-1][(PB_L-1)][t6+1] = 6;;
                }
              }
            }
            if (t1 == 2*t2) {
              for (t5=t4+1;t5<=min(PB_M,16*t1+31);t5++) {
                lbv=0;
                ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  if (t1%2 == 0) {
                    A[t5-1][t4][t6+1] = 6;;
                  }
                }
              }
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(max(max(3,32*t2),PB_M-1),32*t1-32*t2);t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(PB_M,32*t2+31);t5++) {
              lbv=0;
              ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5-1][t4][t6+1] = 6;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(PB_L,32*t1-32*t2);t4<=min(PB_M-2,32*t1-32*t2+31);t4++) {
            for (t5=max(3,32*t2);t5<=min(PB_L-2,32*t2+31);t5++) {
              B[t5-1][t4] = C[t4][t5] * C[t4][t5+1] + B[t5-1][t4+1] + B[t5-3][t4] + 2;;
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
int za = zA;
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212111121_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
