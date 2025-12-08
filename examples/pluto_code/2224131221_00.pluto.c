#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224131221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2224131221_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 1) {
  if ((PB_M >= max(max(0,ceild(-PB_P+6,2)),ceild(-3*PB_L+15,4))) && (PB_P >= 0)) {
    for (t1=0;t1<=min(min(min(floord(PB_M+PB_P-2,16),floord(PB_M+PB_L+PB_P-1,32)),floord(5*PB_M+3*PB_P-12,48)),floord(8*PB_M+3*PB_L+3*PB_P-21,96));t1++) {
      lbp=max(max(max(max(max(max(max(max(0,ceild(32*t1-PB_M-PB_L+2,32)),ceild(32*t1-PB_M-PB_P+1,32)),ceild(32*t1-PB_M,64)),ceild(64*t1-2*PB_M-PB_L+3,96)),ceild(96*t1-4*PB_M-3*PB_L+9,96)),ceild(128*t1-4*PB_M-PB_P+4,224)),ceild(128*t1-4*PB_M-PB_L+5,256)),ceild(192*t1-6*PB_M-PB_P+6,384));
      ubp=min(min(min(min(min(floord(PB_L+PB_P,32),floord(PB_M+PB_P-2,32)),floord(32*t1+PB_P,64)),floord(5*PB_M+3*PB_P-12,96)),floord(96*t1+4*PB_M+3*PB_P-12,192)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if (t2 <= floord(PB_L,32)) {
          for (t3=max(32*t1-32*t2,32*t2+32);t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
            for (t4=max(1,32*t2);t4<=min(PB_L,32*t2+31);t4++) {
              A[t3][t4-1] = C[t4] + D[t3][0] + D[t3][t4] + 4;;
            }
          }
        }
        if (t2 <= floord(PB_P-4,32)) {
          for (t3=max(2,32*t1-32*t2);t3<=min(min(32*t2,PB_L-3),32*t1-32*t2+31);t3++) {
            for (t4=32*t2;t4<=min(PB_P-4,32*t2+31);t4++) {
              B[t3][t4+1] = D[t4+1][t3] - D[t3][t3] + C[t4] * B[t3][t4+3] * B[t3-2][t4+1] - B[t3+1][t4+1] + B[t3+2][t4+1] * 1;;
            }
          }
        }
        if (t1 == 2*t2) {
          for (t3=max(2,16*t1+1);t3<=min(min(min(PB_L-3,PB_M-1),PB_P-4),16*t1+31);t3++) {
            for (t4=max(1,16*t1);t4<=t3-1;t4++) {
              if (t1%2 == 0) {
                A[t3][t4-1] = C[t4] + D[t3][0] + D[t3][t4] + 4;;
              }
            }
            for (t4=t3;t4<=min(PB_P-4,16*t1+31);t4++) {
              if (t1%2 == 0) {
                B[t3][t4+1] = D[t4+1][t3] - D[t3][t3] + C[t4] * B[t3][t4+3] * B[t3-2][t4+1] - B[t3+1][t4+1] + B[t3+2][t4+1] * 1;;
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 <= floord(PB_L,16))) {
          for (t3=max(max(2,PB_L-2),16*t1+1);t3<=min(min(PB_M-1,PB_P-4),16*t1+31);t3++) {
            for (t4=max(1,16*t1);t4<=min(PB_L,t3-1);t4++) {
              if (t1%2 == 0) {
                A[t3][t4-1] = C[t4] + D[t3][0] + D[t3][t4] + 4;;
              }
            }
          }
        }
        if (t1 == 2*t2) {
          for (t3=max(max(2,PB_M),16*t1+1);t3<=min(min(PB_L-3,PB_P-4),16*t1+31);t3++) {
            for (t4=t3;t4<=min(PB_P-4,16*t1+31);t4++) {
              if (t1%2 == 0) {
                B[t3][t4+1] = D[t4+1][t3] - D[t3][t3] + C[t4] * B[t3][t4+3] * B[t3-2][t4+1] - B[t3+1][t4+1] + B[t3+2][t4+1] * 1;;
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 <= floord(PB_L,16))) {
          for (t3=max(max(2,PB_P-3),16*t1+1);t3<=min(PB_M-1,16*t1+31);t3++) {
            for (t4=max(1,16*t1);t4<=min(PB_L,t3-1);t4++) {
              if (t1%2 == 0) {
                A[t3][t4-1] = C[t4] + D[t3][0] + D[t3][t4] + 4;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_M >= 3) && (PB_P <= -1)) {
    for (t1=0;t1<=min(floord(PB_M-2,16),floord(PB_M+PB_L-1,32));t1++) {
      lbp=max(0,ceild(32*t1-PB_M+1,32));
      ubp=min(floord(t1,2),floord(PB_L,32));
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(2,32*t1-32*t2),32*t2+1);t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
          for (t4=max(1,32*t2);t4<=min(min(PB_L,32*t2+31),t3-1);t4++) {
            A[t3][t4-1] = C[t4] + D[t3][0] + D[t3][t4] + 4;;
          }
        }
      }
    }
  }
  if ((PB_L >= 5) && (PB_M <= -1) && (PB_P >= 6)) {
    for (t1=0;t1<=min(floord(PB_P-4,16),floord(PB_L+PB_P-7,32));t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_L+3,32));
      ubp=min(floord(PB_P-4,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(2,32*t1-32*t2);t3<=min(min(PB_L-3,PB_P-4),32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,t3);t4<=min(PB_P-4,32*t2+31);t4++) {
            B[t3][t4+1] = D[t4+1][t3] - D[t3][t3] + C[t4] * B[t3][t4+3] * B[t3-2][t4+1] - B[t3+1][t4+1] + B[t3+2][t4+1] * 1;;
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
int xc = xC;
int xd = xD;
int yd = yD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2224131221_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
