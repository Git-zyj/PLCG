#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2212212123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i_0, i_1;
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
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
void kernel_2212212123_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_M >= max(0,ceild(-2*PB_L+6,3)))) {
  for (t1=0;t1<=min(floord(2*PB_M+7*PB_L-4,32),floord(7*PB_M+14*PB_L-14,64));t1++) {
    lbp=max(max(max(max(max(0,ceild(32*t1-PB_M-3*PB_L+2,32)),ceild(32*t1-PB_M,64)),ceild(96*t1-3*PB_M-PB_L-61,160)),ceild(96*t1-3*PB_M-2*PB_L+6,192)),ceild(1120*t1-35*PB_M-101*PB_L+70,1152));
    ubp=min(min(min(floord(3*t1+2,5),floord(9*t1+PB_L,18)),floord(32*t1+PB_L+30,64)),floord(32*t1+15*PB_M+61*PB_L-30,544));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_L <= 2) && (t2 <= floord(PB_P-2,32))) {
        for (t3=32*t1-32*t2;t3<=min(PB_M-2,32*t1-32*t2+31);t3++) {
          for (t4=32*t2;t4<=min(min(t3,PB_P-2),32*t2+31);t4++) {
            B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
          }
        }
      }
      if ((PB_L >= 3) && (t2 <= floord(PB_P-2,32))) {
        for (t3=max(32*t1-32*t2,32*t2+32);t3<=min(PB_M-2,32*t1-32*t2+31);t3++) {
          for (t4=32*t2;t4<=min(PB_P-2,32*t2+31);t4++) {
            B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
          }
        }
      }
      if ((PB_L >= 3) && (PB_P >= 2) && (t1 == 0) && (t2 == 0)) {
        for (t3=0;t3<=min(1,PB_M-2);t3++) {
          for (t4=0;t4<=min(t3,PB_P-2);t4++) {
            B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
          }
        }
      }
      if ((PB_L >= 3) && (t2 >= ceild(PB_P-1,32))) {
        for (t3=max(max(max(2,ceild(64*t2+2,3)),32*t1-32*t2),32*t2-PB_L+1);t3<=min(min(min(floord(64*t2+PB_L+61,3),3*PB_L-3),32*t2+31),32*t1-32*t2+31);t3++) {
          for (t4=max(max(ceild(3*t3-PB_L+1,2),32*t2),t3);t4<=min(min(floord(3*t3-2,2),32*t2+31),t3+PB_L-1);t4++) {
            B[(3*t3-2*t4-2)][2] = B[(3*t3-2*t4-2)+2][2] + 2;;
          }
        }
      }
      if (t2 <= floord(PB_P-2,32)) {
        for (t3=max(max(ceild(64*t2+2,3),32*t1-32*t2),32*t2-PB_L+1);t3<=min(min(min(floord(64*t2+PB_L+61,3),3*PB_L-3),32*t2-1),32*t1-32*t2+31);t3++) {
          for (t4=max(ceild(3*t3-PB_L+1,2),32*t2);t4<=min(min(floord(3*t3-2,2),32*t2+31),t3+PB_L-1);t4++) {
            B[(3*t3-2*t4-2)][2] = B[(3*t3-2*t4-2)+2][2] + 2;;
          }
        }
      }
      if ((PB_L >= 3) && (t1 == 2*t2) && (t1 <= floord(PB_P-2,16))) {
        for (t3=max(2,16*t1);t3<=min(min(min(floord(32*t1+PB_L+61,3),3*PB_L-3),PB_M-2),16*t1+31);t3++) {
          for (t4=16*t1;t4<=min(t3,PB_P-2);t4++) {
            if (t1%2 == 0) {
              B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
            }
          }
          for (t4=max(ceild(3*t3-PB_L+1,2),t3);t4<=min(min(floord(3*t3-2,2),16*t1+31),t3+PB_L-1);t4++) {
            if (t1%2 == 0) {
              B[(3*t3-2*t4-2)][2] = B[(3*t3-2*t4-2)+2][2] + 2;;
            }
          }
        }
      }
      if ((t1 == 2*t2) && (t1 <= floord(PB_P-2,16))) {
        for (t3=max(ceild(32*t1+PB_L+62,3),16*t1);t3<=min(min(3*PB_L-3,PB_M-2),16*t1+31);t3++) {
          for (t4=16*t1;t4<=min(t3,PB_P-2);t4++) {
            if (t1%2 == 0) {
              B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 == 2*t2) && (t1 <= floord(PB_P-2,16))) {
        for (t3=max(max(2,16*t1),PB_M-1);t3<=min(min(floord(32*t1+PB_L+61,3),3*PB_L-3),16*t1+31);t3++) {
          for (t4=max(ceild(3*t3-PB_L+1,2),t3);t4<=min(min(floord(3*t3-2,2),16*t1+31),t3+PB_L-1);t4++) {
            if (t1%2 == 0) {
              B[(3*t3-2*t4-2)][2] = B[(3*t3-2*t4-2)+2][2] + 2;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 == 2*t2) && (t1 <= floord(PB_P-2,16))) {
        for (t3=max(16*t1,3*PB_L-2);t3<=min(PB_M-2,16*t1+31);t3++) {
          for (t4=16*t1;t4<=min(t3,PB_P-2);t4++) {
            if (t1%2 == 0) {
              B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_P >= 2)) {
  for (t1=0;t1<=min(floord(PB_M-2,16),floord(PB_P+PB_M-4,32));t1++) {
    lbp=max(0,ceild(32*t1-PB_M+2,32));
    ubp=min(floord(t1,2),floord(PB_P-2,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=32*t1-32*t2;t3<=min(PB_M-2,32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(min(t3,PB_P-2),32*t2+31);t4++) {
          B[t3][2] = C[t3+1][t4+1] * C[t3][t4] - 3;;
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_M <= -1)) {
  for (t1=0;t1<=floord(7*PB_L-7,32);t1++) {
    lbp=max(max(ceild(t1,2),ceild(32*t1-3*PB_L+3,32)),ceild(96*t1-PB_L-61,160));
    ubp=min(min(floord(3*t1+2,5),floord(PB_L-1,8)),floord(32*t1+PB_L+30,64));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(2,ceild(64*t2+2,3)),32*t1-32*t2),32*t2-PB_L+1);t3<=min(min(floord(64*t2+PB_L+61,3),3*PB_L-3),32*t1-32*t2+31);t3++) {
        for (t4=max(max(ceild(3*t3-PB_L+1,2),32*t2),t3);t4<=min(min(floord(3*t3-2,2),32*t2+31),t3+PB_L-1);t4++) {
          B[(3*t3-2*t4-2)][2] = B[(3*t3-2*t4-2)+2][2] + 2;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_2212212123_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
