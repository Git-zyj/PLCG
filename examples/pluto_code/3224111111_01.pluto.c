#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224111111_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i_0, i_1, i_2;
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224111111_01(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 1) && (PB_M >= 1)) {
  lbp=0;
  ubp=floord(PB_M+2*PB_L-3,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(floord(PB_M-1,32),floord(-32*t1+PB_M+2*PB_L-3,32));t2++) {
      if ((PB_L >= 3) && (t1 <= min(floord(PB_L-2,16),floord(PB_M+PB_L-2,32)))) {
        for (t3=32*t2;t3<=min(min(min(PB_L-1,PB_M-1),32*t1+31),32*t2+31);t3++) {
          for (t4=max(t3,32*t1-PB_M+1);t4<=min(32*t1,PB_L-1);t4++) {
            lbv=32*t1;
            ubv=min(32*t1+31,t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(-t4+t5)][t4] = 6;;
            }
          }
          if ((t1 == 0) && (t2 == 0)) {
            for (t4=max(1,t3);t4<=2;t4++) {
              lbv=t4;
              ubv=min(31,t4+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(-t4+t5)][t4] = 6;;
              }
            }
          }
          if (t1 == t2) {
            for (t4=max(3,32*t1+1);t4<=t3-1;t4++) {
              lbv=max(ceild(t4+1,2),32*t1);
              ubv=t4-1;
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              }
            }
          }
          for (t4=max(max(3,t3),32*t1+1);t4<=min(PB_L-1,32*t1+31);t4++) {
            lbv=max(ceild(t4+1,2),32*t1);
            ubv=t4-1;
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
            lbv=t4;
            ubv=min(32*t1+31,t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(-t4+t5)][t4] = 6;;
            }
          }
          for (t4=max(PB_L,64*t1-PB_L+2);t4<=min(3*PB_L-6,32*t1+31);t4++) {
            lbv=max(max(ceild(t4+1,2),32*t1),t4-PB_L+2);
            ubv=floord(t4+PB_L-2,2);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
          for (t4=max(32*t1+32,64*t1-PB_L+2);t4<=min(min(3*PB_L-6,64*t1+61),32*t1+PB_L+29);t4++) {
            lbv=max(max(ceild(t4+1,2),32*t1),t4-PB_L+2);
            ubv=min(floord(t4+PB_L-2,2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
        }
      }
      if ((PB_L <= 2) && (t1 <= floord(PB_M+PB_L-2,32)) && (t2 == 0)) {
        for (t3=0;t3<=min(PB_L-1,PB_M-1);t3++) {
          for (t4=max(t3,32*t1-PB_M+1);t4<=PB_L-1;t4++) {
            lbv=max(32*t1,t4);
            ubv=min(32*t1+31,t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(-t4+t5)][t4] = 6;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 <= floord(PB_M+PB_L-2,32)) && (t1 >= ceild(PB_L-1,16))) {
        for (t3=32*t2;t3<=min(PB_L-1,32*t2+31);t3++) {
          for (t4=max(t3,32*t1-PB_M+1);t4<=PB_L-1;t4++) {
            lbv=32*t1;
            ubv=min(32*t1+31,t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(-t4+t5)][t4] = 6;;
            }
          }
        }
      }
      if ((t1 <= floord(PB_L-2,16)) && (t1 >= ceild(PB_M+PB_L-1,32))) {
        for (t3=32*t2;t3<=(min(PB_M-1,32*t2+31))-7;t3+=8) {
          for (t4=64*t1-PB_L+2;t4<=min(3*PB_L-6,32*t1+PB_L+29);t4++) {
            lbv=max(32*t1,t4-PB_L+2);
            ubv=min(floord(t4+PB_L-2,2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+1)] - C[(t3+1)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+2)] - C[(t3+2)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+3)] - C[(t3+3)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+4)] - C[(t3+4)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+5)] - C[(t3+5)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+6)] - C[(t3+6)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+7)] - C[(t3+7)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
        }
        for (;t3<=min(PB_M-1,32*t2+31);t3++) {
          for (t4=64*t1-PB_L+2;t4<=min(3*PB_L-6,32*t1+PB_L+29);t4++) {
            lbv=max(32*t1,t4-PB_L+2);
            ubv=min(floord(t4+PB_L-2,2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 <= floord(PB_L-2,16))) {
        for (t3=max(PB_L,32*t2);t3<=(min(min(PB_M-1,32*t1+31),32*t2+31))-7;t3+=8) {
          for (t4=max(max(3,32*t1+1),64*t1-PB_L+2);t4<=min(3*PB_L-6,32*t1+PB_L+29);t4++) {
            lbv=max(max(ceild(t4+1,2),32*t1),t4-PB_L+2);
            ubv=min(min(floord(t4+PB_L-2,2),32*t1+31),t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+1)] - C[(t3+1)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+2)] - C[(t3+2)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+3)] - C[(t3+3)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+4)] - C[(t3+4)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+5)] - C[(t3+5)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+6)] - C[(t3+6)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+7)] - C[(t3+7)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
        }
        for (;t3<=min(min(PB_M-1,32*t1+31),32*t2+31);t3++) {
          for (t4=max(max(3,32*t1+1),64*t1-PB_L+2);t4<=min(3*PB_L-6,32*t1+PB_L+29);t4++) {
            lbv=max(max(ceild(t4+1,2),32*t1),t4-PB_L+2);
            ubv=min(min(floord(t4+PB_L-2,2),32*t1+31),t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 <= floord(PB_L-2,16))) {
        for (t3=max(32*t2,32*t1+32);t3<=(min(PB_M-1,32*t2+31))-7;t3+=8) {
          for (t4=max(max(3,32*t1+1),64*t1-PB_L+2);t4<=min(min(3*PB_L-6,64*t1+61),32*t1+PB_L+29);t4++) {
            lbv=max(max(ceild(t4+1,2),32*t1),t4-PB_L+2);
            ubv=min(min(floord(t4+PB_L-2,2),32*t1+31),t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+1)] - C[(t3+1)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+2)] - C[(t3+2)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+3)] - C[(t3+3)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+4)] - C[(t3+4)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+5)] - C[(t3+5)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+6)] - C[(t3+6)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][(t3+7)] - C[(t3+7)][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
            }
          }
        }
        for (;t3<=min(PB_M-1,32*t2+31);t3++) {
          for (t4=max(max(3,32*t1+1),64*t1-PB_L+2);t4<=min(min(3*PB_L-6,64*t1+61),32*t1+PB_L+29);t4++) {
            lbv=max(max(ceild(t4+1,2),32*t1),t4-PB_L+2);
            ubv=min(min(floord(t4+PB_L-2,2),32*t1+31),t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)][(-t4+2*t5)] = C[(t4-t5)-1][(-t4+2*t5)+1][t3] - C[t3][(-t4+2*t5)][(t4-t5)] - B[(-t4+2*t5)-1][(t4-t5)+1] + 1;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3224111111_01(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
