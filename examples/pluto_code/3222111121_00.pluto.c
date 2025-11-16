#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222111121_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
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
void kernel_3222111121_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 1) {
  if (PB_L >= max(0,ceild(-3*PB_M+9,2))) {
    for (t1=0;t1<=min(floord(PB_L+PB_M-2,16),floord(PB_L+2*PB_M-1,32));t1++) {
      lbp=max(max(max(0,ceild(32*t1-PB_L-PB_M+2,32)),ceild(32*t1-PB_L,64)),ceild(64*t1-2*PB_L-PB_M+3,128));
      ubp=min(min(min(floord(PB_M,16),floord(PB_L+PB_M-2,32)),floord(32*t1+PB_M+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        if (t2 >= ceild(PB_M-1,32)) {
          for (t3=max(max(2,32*t1-32*t2),32*t2-PB_M+1);t3<=min(PB_L-1,32*t1-32*t2+31);t3++) {
            for (t4=max(2,32*t2);t4<=min(min(2*PB_M,32*t2+31),t3+PB_M-1);t4++) {
              lbv=max(max(1,t4-PB_M),-t3+t4+1);
              ubv=min(PB_M,t4-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
              }
            }
          }
        }
        if ((PB_M >= 3) && (PB_P >= 1) && (t1 == t2) && (t1 <= floord(PB_M-2,32))) {
          for (t4=max(1,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
            B[t4-1][1 -1] = C[t4+1][1 -1] - C[t4-1][1 -1] - B[1 -1][t4] + 5;;
          }
        }
        if (t2 <= floord(PB_M-2,32)) {
          for (t3=max(2,32*t1-32*t2);t3<=min(min(min(min(PB_P,PB_L-1),PB_M-2),32*t2+31),32*t1-32*t2+31);t3++) {
            if (t1 == 2*t2) {
              for (t4=max(2,16*t1);t4<=t3-1;t4++) {
                lbv=1;
                ubv=t4-1;
#pragma ivdep
#pragma vector always
                for (t5=lbv;t5<=ubv;t5++) {
                  if (t1%2 == 0) {
                    A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
                  }
                }
              }
            }
            for (t4=max(32*t2,t3);t4<=min(PB_M-2,32*t2+31);t4++) {
              B[t4-1][t3-1] = C[t4+1][t3-1] - C[t4-1][t3-1] - B[t3-1][t4] + 5;;
              lbv=-t3+t4+1;
              ubv=t4-1;
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
              }
            }
            for (t4=PB_M-1;t4<=min(32*t2+31,t3+PB_M-1);t4++) {
              lbv=-t3+t4+1;
              ubv=min(PB_M,t4-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 <= floord(PB_M-2,16))) {
          for (t3=max(2,PB_M-1);t3<=min(min(PB_P,PB_L-1),16*t1+31);t3++) {
            for (t4=max(2,16*t1);t4<=min(min(2*PB_M,16*t1+31),t3+PB_M-1);t4++) {
              lbv=max(max(1,t4-PB_M),-t3+t4+1);
              ubv=min(PB_M,t4-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                if (t1%2 == 0) {
                  A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
                }
              }
            }
          }
        }
        if (t2 <= floord(PB_M-2,32)) {
          for (t3=max(max(2,PB_L),32*t1-32*t2);t3<=min(min(min(PB_P,PB_M-2),32*t2+31),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,t3);t4<=min(PB_M-2,32*t2+31);t4++) {
              B[t4-1][t3-1] = C[t4+1][t3-1] - C[t4-1][t3-1] - B[t3-1][t4] + 5;;
            }
          }
        }
        if (t2 <= floord(PB_M-2,32)) {
          for (t3=max(max(2,PB_P+1),32*t1-32*t2);t3<=min(min(PB_L-1,32*t2+31),32*t1-32*t2+31);t3++) {
            for (t4=max(2,32*t2);t4<=min(min(2*PB_M,32*t2+31),t3+PB_M-1);t4++) {
              lbv=max(max(1,t4-PB_M),-t3+t4+1);
              ubv=min(PB_M,t4-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
              }
            }
          }
        }
        if (t2 <= floord(PB_M-2,32)) {
          for (t3=max(32*t1-32*t2,32*t2+32);t3<=min(PB_L-1,32*t1-32*t2+31);t3++) {
            for (t4=max(2,32*t2);t4<=min(2*PB_M,32*t2+31);t4++) {
              lbv=max(1,t4-PB_M);
              ubv=min(PB_M,t4-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5-1][(t4-t5)-1][t3-1] = A[(t4-t5)+1][t5-1][t3] * 5;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_M >= 3) && (PB_P >= 1)) {
    for (t1=0;t1<=min(floord(PB_M-2,16),floord(PB_M+PB_P-2,32));t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_P,32));
      ubp=min(floord(PB_M-2,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(1,32*t1-32*t2);t3<=min(min(PB_P,PB_M-2),32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,t3);t4<=min(PB_M-2,32*t2+31);t4++) {
            B[t4-1][t3-1] = C[t4+1][t3-1] - C[t4-1][t3-1] - B[t3-1][t4] + 5;;
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
kernel_3222111121_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
