#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2212112221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
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
void kernel_2212112221_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  if ((PB_N >= max(max(0,ceild(-4*PB_L+20,3)),-2*PB_P+4)) && (PB_P >= 0)) {
    for (t1=0;t1<=min(floord(PB_N+PB_L+3*PB_P-5,32),floord(2*PB_N+PB_L+3*PB_P-9,32));t1++) {
      lbp=max(max(max(max(max(max(max(max(0,ceild(32*t1-PB_L-PB_P+2,32)),ceild(32*t1-PB_N-2*PB_P+4,32)),ceild(32*t1-PB_N-PB_P+2,32)),ceild(64*t1-PB_N-PB_L-4*PB_P+5,32)),ceild(32*t1-PB_N,48)),ceild(32*t1-PB_L+2,48)),ceild(160*t1-4*PB_N-PB_L-7*PB_P+17,128)),ceild(224*t1-3*PB_N-4*PB_L+20,336));
      ubp=min(min(min(min(floord(3*PB_N+2*PB_L+4*PB_P-14,64),floord(64*t1+PB_N+PB_L+59,96)),floord(192*t1+3*PB_N+67*PB_L-143,288)),floord(64*t1+33*PB_N+33*PB_L+64*PB_P-165,1120)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_L <= 4) && (PB_M >= 4) && (t1 == t2) && (t1 <= floord(PB_M-3,32))) {
          for (t3=0;t3<=min(min(PB_L-2,PB_N-4),-32*t1+PB_N-3);t3++) {
            for (t4=max(1,32*t1);t4<=min(min(PB_M-3,32*t1+31),-t3+PB_N-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= floord(PB_M-3,32))) {
          for (t3=32*t1-32*t2;t3<=min(min(min(min(floord(32*t2-PB_L+2,2),PB_L-2),PB_P-2),32*t1-32*t2+31),-32*t2+PB_N-3);t3++) {
            for (t4=32*t2;t4<=min(min(PB_M-3,32*t2+31),-t3+PB_N-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M <= 3)) {
          for (t3=max(ceild(32*t2-PB_L+3,2),32*t1-32*t2);t3<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+2);t4<=min(32*t2+31,2*t3+PB_L-3);t4++) {
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M >= 4) && (t2 >= ceild(PB_M-2,32))) {
          for (t3=max(ceild(32*t2-PB_L+3,2),32*t1-32*t2);t3<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+2);t4<=min(32*t2+31,2*t3+PB_L-3);t4++) {
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M >= 4) && (t2 <= floord(PB_M-3,32))) {
          for (t3=max(ceild(32*t2-PB_L+3,2),32*t1-32*t2);t3<=min(min(min(min(min(PB_L-2,PB_N-4),PB_P-2),16*t2+14),32*t1-32*t2+31),-32*t2+PB_N-3);t3++) {
            for (t4=max(1,32*t2);t4<=min(min(PB_M-3,2*t3+1),-t3+PB_N-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
            }
            for (t4=max(32*t2,2*t3+2);t4<=min(min(min(PB_M-3,32*t2+31),-t3+PB_N-3),2*t3+PB_L-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
            for (t4=2*t3+PB_L-2;t4<=min(min(PB_M-3,32*t2+31),-t3+PB_N-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
            }
            for (t4=max(PB_M-2,2*t3+2);t4<=min(min(32*t2+31,-t3+PB_N-3),2*t3+PB_L-3);t4++) {
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
            for (t4=max(2*t3+2,-t3+PB_N-2);t4<=min(32*t2+31,2*t3+PB_L-3);t4++) {
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M >= 4) && (t2 <= floord(PB_M-3,32))) {
          for (t3=max(PB_P-1,32*t1-32*t2);t3<=min(min(min(min(PB_L-2,PB_N-4),16*t2+14),32*t1-32*t2+31),-32*t2+PB_N-3);t3++) {
            for (t4=max(1,32*t2);t4<=min(min(PB_M-3,32*t2+31),-t3+PB_N-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M >= 4) && (PB_N <= min(min(17,PB_L+1),PB_P+1)) && (PB_N >= 3) && (t1 == 0) && (t2 == 0)) {
          for (t4=2*PB_N-4;t4<=min(31,2*PB_N+PB_L-9);t4++) {
            B[(t4-2*PB_N+6)][(PB_N-3)] = B[(t4-2*PB_N+6)+2][(PB_N-3)+1] - B[(t4-2*PB_N+6)-2][(PB_N-3)+1] * 1;;
          }
        }
        if ((PB_M >= 4) && (t2 <= floord(PB_M-3,32))) {
          for (t3=max(32*t1-32*t2,16*t2+15);t3<=min(min(min(PB_L-2,PB_N-4),32*t1-32*t2+31),-32*t2+PB_N-3);t3++) {
            for (t4=max(1,32*t2);t4<=min(min(PB_M-3,32*t2+31),-t3+PB_N-3);t4++) {
              A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M >= 4) && (t2 <= floord(PB_M-3,32))) {
          for (t3=max(max(ceild(32*t2-PB_L+3,2),32*t1-32*t2),-32*t2+PB_N-2);t3<=min(min(min(PB_L-2,PB_P-2),16*t2+14),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+2);t4<=min(32*t2+31,2*t3+PB_L-3);t4++) {
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
          }
        }
        if ((PB_L >= 5) && (PB_M >= 4) && (t2 <= floord(PB_M-3,32))) {
          for (t3=max(max(ceild(32*t2-PB_L+3,2),PB_L-1),32*t1-32*t2);t3<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+2);t4<=min(32*t2+31,2*t3+PB_L-3);t4++) {
              B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
            }
          }
        }
      }
    }
  }
  if ((PB_M >= 4) && (PB_N >= 4) && (PB_P <= -1)) {
    for (t1=0;t1<=min(floord(PB_N-3,32),floord(PB_M+PB_L-5,32));t1++) {
      lbp=max(max(0,ceild(32*t1-PB_L+2,32)),ceild(32*t1-PB_N+4,32));
      ubp=min(floord(PB_M-3,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=32*t1-32*t2;t3<=min(min(min(PB_L-2,PB_N-4),32*t1-32*t2+31),-32*t2+PB_N-3);t3++) {
          for (t4=max(1,32*t2);t4<=min(min(PB_M-3,32*t2+31),-t3+PB_N-3);t4++) {
            A[t3+t4][t4][t3+1] = C[t3+2][t4] + A[t3+t4+2][t4+2][t3+1] * A[t3+t4-1][t4][t3] - 5;;
          }
        }
      }
    }
  }
  if ((PB_L >= 5) && (PB_N <= -1) && (PB_P >= 2)) {
    for (t1=0;t1<=floord(PB_L+3*PB_P-9,32);t1++) {
      lbp=max(ceild(2*t1,3),ceild(32*t1-PB_P+2,32));
      ubp=min(min(floord(PB_L+2*PB_P-7,32),floord(64*t1+PB_L+59,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(ceild(32*t2-PB_L+3,2),32*t1-32*t2);t3<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,2*t3+2);t4<=min(32*t2+31,2*t3+PB_L-3);t4++) {
            B[(-2*t3+t4)][t3] = B[(-2*t3+t4)+2][t3+1] - B[(-2*t3+t4)-2][t3+1] * 1;;
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
kernel_2212112221_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
