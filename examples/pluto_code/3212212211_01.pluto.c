#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212212211_01.h"
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
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
void kernel_3212212211_01(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 3) {
  if ((PB_L >= -PB_N+4) && (PB_M >= 0) && (PB_N >= max(0,-PB_M+1))) {
    for (t1=0;t1<=min(floord(3*PB_L+2*PB_N+2*PB_M-11,32),floord(3*PB_L+4*PB_N+2*PB_M-13,32));t1++) {
      lbp=max(max(max(max(max(ceild(2*t1-3,6),ceild(32*t1-PB_L-PB_N-PB_M+4,32)),ceild(32*t1-PB_L-28,64)),ceild(32*t1-PB_N-32,64)),ceild(64*t1-3*PB_N-20*PB_M-13,96)),ceild(64*t1-3*PB_N-PB_M-32,96));
      ubp=min(min(min(min(min(min(min(floord(2*t1+1,3),floord(2*t1+PB_M,3)),floord(2*PB_L+3*PB_N+PB_M-9,32)),floord(32*t1+PB_L+26,64)),floord(32*t1+PB_L+15*PB_M-3,64)),floord(64*t1+2*PB_L+PB_M+23,128)),floord(64*t1+60*PB_L+29*PB_N+29*PB_M-209,1056)),floord(128*t1+62*PB_L+29*PB_N+31*PB_M-215,1184));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_L == 3) && (t1 == 2*t2)) {
          for (t3=16*t1;t3<=min(PB_N-1,16*t1+31);t3++) {
            if (t1%2 == 0) {
              B[t3][0 +2] = C[t3][0] + B[0][t3+3] - 4;;
            }
          }
        }
        if (PB_M >= 1) {
          for (t3=max(max(32*t2,16*t1-16*t2),32*t1-32*t2-PB_L+3);t3<=min(min(PB_N-1,32*t2+31),32*t1-32*t2-2);t3++) {
            for (t4=32*t1-32*t2;t4<=min(min(2*t3,32*t1-32*t2+31),t3+PB_L-3);t4++) {
              B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
            }
          }
        }
        if ((PB_L >= 4) && (PB_M >= 1)) {
          for (t3=max(32*t2,32*t1-32*t2-1);t3<=min(min(min(PB_N-1,32*t2+31),32*t1-32*t2+31),64*t1-64*t2-PB_M-2);t3++) {
            for (t4=max(t3,32*t1-32*t2);t4<=min(min(2*t3,32*t1-32*t2+31),t3+PB_L-3);t4++) {
              B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
            }
          }
        }
        if ((PB_L >= 4) && (PB_M == 0)) {
          for (t3=max(max(32*t2,16*t1-16*t2),32*t1-32*t2-PB_L+3);t3<=min(min(PB_N-1,32*t2+31),32*t1-32*t2+31);t3++) {
            for (t4=max(t3,32*t1-32*t2);t4<=min(min(2*t3,32*t1-32*t2+31),t3+PB_L-3);t4++) {
              B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
            }
          }
        }
        if ((PB_L >= 4) && (PB_M >= 1)) {
          for (t3=max(max(32*t2,32*t1-32*t2-1),64*t1-64*t2-PB_M-1);t3<=min(min(min(min(PB_N-1,32*t2+31),2*PB_L+PB_M-9),32*t1-32*t2+31),32*t1-32*t2+PB_L+26);t3++) {
            if ((PB_L == 4) && (t1 == 2*t2)) {
              if (t1%2 == 0) {
                B[t3][0 +2] = C[t3][0] + B[0][t3+3] - 4;;
              }
            }
            if ((PB_L >= 5) && (t1 == 0) && (t2 == 0) && (t3 <= 1)) {
              B[t3][0 +2] = C[t3][0] + B[0][t3+3] - 4;;
            }
            if (t1 == 2*t2) {
              for (t4=max(max(ceild(t3+2,2),16*t1),t3-PB_L+5);t4<=min(floord(t3+PB_M+1,2),t3-1);t4++) {
                if (t1%2 == 0) {
                  B[(-t3+2*t4-2)][(t3-t4+1)+2] = B[(-t3+2*t4-2)][(t3-t4+1)+3] + 4;;
                }
              }
            }
            if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
              B[0][0 +2] = B[0][0 +3] + 4;;
            }
            for (t4=max(max(max(ceild(t3+2,2),t3),32*t1-32*t2),t3-PB_L+5);t4<=min(min(min(floord(t3+PB_M+1,2),2*t3),t3+1),32*t1-32*t2+31);t4++) {
              B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
              B[(-t3+2*t4-2)][(t3-t4+1)+2] = B[(-t3+2*t4-2)][(t3-t4+1)+3] + 4;;
            }
            if (t1 == 2*t2) {
              for (t4=max(ceild(t3+PB_M+2,2),t3);t4<=min(16*t1+31,t3+1);t4++) {
                if (t1%2 == 0) {
                  B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
                }
              }
            }
            for (t4=t3+2;t4<=min(min(2*t3,32*t1-32*t2+31),t3+PB_L-3);t4++) {
              B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
            }
          }
        }
        if ((PB_L >= 4) && (PB_M >= 1) && (t1 == 2*t2)) {
          for (t3=max(2*PB_L+PB_M-8,32*t1-PB_M-1);t3<=min(min(PB_N-1,16*t1+31),16*t1+PB_L+26);t3++) {
            for (t4=t3;t4<=min(16*t1+31,t3+PB_L-3);t4++) {
              if (t1%2 == 0) {
                B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
              }
            }
          }
        }
        if ((PB_L >= 4) && (PB_M >= 1)) {
          for (t3=max(max(max(PB_N,32*t2),32*t1-32*t2-1),64*t1-64*t2-PB_M-1);t3<=min(min(min(32*t2+31,2*PB_L+PB_M-9),32*t1-32*t2+31),32*t1-32*t2+PB_L+26);t3++) {
            for (t4=max(max(ceild(t3+2,2),32*t1-32*t2),t3-PB_L+5);t4<=min(min(floord(t3+PB_M+1,2),t3+1),32*t1-32*t2+31);t4++) {
              B[(-t3+2*t4-2)][(t3-t4+1)+2] = B[(-t3+2*t4-2)][(t3-t4+1)+3] + 4;;
            }
          }
        }
        if ((PB_L == 4) && (PB_M >= 1) && (t1 == 2*t2) && (t1 <= min(floord(PB_M+32,16),floord(PB_N-32,16)))) {
          if (t1%2 == 0) {
            B[(16*t1+31)][0 +2] = C[(16*t1+31)][0] + B[0][(16*t1+31)+3] - 4;;
          }
        }
        if (PB_M >= 1) {
          for (t3=max(max(32*t2,32*t1-32*t2+32),64*t1-64*t2-PB_M-1);t3<=min(min(min(32*t2+31,2*PB_L+PB_M-9),64*t1-64*t2+60),32*t1-32*t2+PB_L+26);t3++) {
            for (t4=max(max(ceild(t3+2,2),32*t1-32*t2),t3-PB_L+5);t4<=min(floord(t3+PB_M+1,2),32*t1-32*t2+31);t4++) {
              B[(-t3+2*t4-2)][(t3-t4+1)+2] = B[(-t3+2*t4-2)][(t3-t4+1)+3] + 4;;
            }
          }
        }
      }
    }
  }
  if (PB_M <= -1) {
    for (t1=0;t1<=min(floord(3*PB_N-3,32),floord(PB_L+2*PB_N-5,32));t1++) {
      lbp=max(max(max(ceild(t1-1,3),ceild(16*t1-PB_N+1,16)),ceild(32*t1-PB_L-PB_N+4,32)),ceild(32*t1-PB_L-28,64));
      ubp=min(floord(t1,2),floord(PB_N-1,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(32*t2,16*t1-16*t2),32*t1-32*t2-PB_L+3);t3<=min(PB_N-1,32*t2+31);t3++) {
          for (t4=max(t3,32*t1-32*t2);t4<=min(min(2*t3,32*t1-32*t2+31),t3+PB_L-3);t4++) {
            B[t3][(-t3+t4)+2] = C[t3][(-t3+t4)] + B[(-t3+t4)][t3+3] - 4;;
          }
        }
      }
    }
  }
  if ((PB_L >= 4) && (PB_M >= 1) && (PB_N <= -1)) {
    for (t1=0;t1<=floord(3*PB_L+2*PB_M-13,32);t1++) {
      lbp=max(max(ceild(t1-1,2),ceild(32*t1-PB_L-PB_M+4,32)),ceild(64*t1-PB_M-32,96));
      ubp=min(min(floord(2*t1+1,3),floord(2*PB_L+PB_M-9,32)),floord(32*t1+PB_L+26,64));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(32*t2,32*t1-32*t2-1),64*t1-64*t2-PB_M-1);t3<=min(min(min(32*t2+31,2*PB_L+PB_M-9),64*t1-64*t2+60),32*t1-32*t2+PB_L+26);t3++) {
          for (t4=max(max(ceild(t3+2,2),32*t1-32*t2),t3-PB_L+5);t4<=min(min(floord(t3+PB_M+1,2),t3+1),32*t1-32*t2+31);t4++) {
            B[(-t3+2*t4-2)][(t3-t4+1)+2] = B[(-t3+2*t4-2)][(t3-t4+1)+3] + 4;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212212211_01(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
