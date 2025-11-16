#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222131113_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
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
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        sum_E += E[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222131113_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  lbp=0;
  ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=floord(PB_M,32);t3++) {
      for (t4=0;t4<=floord(PB_M-1,32);t4++) {
        for (t5=32*t2;t5<=(min(PB_L-2,32*t2+31))-7;t5+=8) {
          for (t6=max(1,32*t4);t6<=(min(PB_M-1,32*t4+31))-7;t6+=8) {
            lbv=max(1,32*t3);
            ubv=min(PB_M,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t7=lbv;t7<=ubv;t7++) {
              B[t7-1][t5] = C[t6][t5+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+1)] = C[t6][(t5+1)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+2)] = C[t6][(t5+2)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+3)] = C[t6][(t5+3)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+4)] = C[t6][(t5+4)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+5)] = C[t6][(t5+5)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+6)] = C[t6][(t5+6)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+7)] = C[t6][(t5+7)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][t5] = C[(t6+1)][t5+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+1)][(t5+1)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+1)][(t5+2)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+1)][(t5+3)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+1)][(t5+4)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+1)][(t5+5)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+1)][(t5+6)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+1)][(t5+7)+1][t7+1] * D[(t6+1)-1][0] - 5;;
              B[t7-1][t5] = C[(t6+2)][t5+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+2)][(t5+1)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+2)][(t5+2)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+2)][(t5+3)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+2)][(t5+4)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+2)][(t5+5)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+2)][(t5+6)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+2)][(t5+7)+1][t7+1] * D[(t6+2)-1][0] - 5;;
              B[t7-1][t5] = C[(t6+3)][t5+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+3)][(t5+1)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+3)][(t5+2)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+3)][(t5+3)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+3)][(t5+4)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+3)][(t5+5)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+3)][(t5+6)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+3)][(t5+7)+1][t7+1] * D[(t6+3)-1][0] - 5;;
              B[t7-1][t5] = C[(t6+4)][t5+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+4)][(t5+1)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+4)][(t5+2)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+4)][(t5+3)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+4)][(t5+4)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+4)][(t5+5)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+4)][(t5+6)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+4)][(t5+7)+1][t7+1] * D[(t6+4)-1][0] - 5;;
              B[t7-1][t5] = C[(t6+5)][t5+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+5)][(t5+1)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+5)][(t5+2)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+5)][(t5+3)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+5)][(t5+4)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+5)][(t5+5)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+5)][(t5+6)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+5)][(t5+7)+1][t7+1] * D[(t6+5)-1][0] - 5;;
              B[t7-1][t5] = C[(t6+6)][t5+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+6)][(t5+1)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+6)][(t5+2)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+6)][(t5+3)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+6)][(t5+4)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+6)][(t5+5)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+6)][(t5+6)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+6)][(t5+7)+1][t7+1] * D[(t6+6)-1][0] - 5;;
              B[t7-1][t5] = C[(t6+7)][t5+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+1)] = C[(t6+7)][(t5+1)+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+2)] = C[(t6+7)][(t5+2)+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+3)] = C[(t6+7)][(t5+3)+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+4)] = C[(t6+7)][(t5+4)+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+5)] = C[(t6+7)][(t5+5)+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+6)] = C[(t6+7)][(t5+6)+1][t7+1] * D[(t6+7)-1][0] - 5;;
              B[t7-1][(t5+7)] = C[(t6+7)][(t5+7)+1][t7+1] * D[(t6+7)-1][0] - 5;;
            }
          }
          for (;t6<=min(PB_M-1,32*t4+31);t6++) {
            lbv=max(1,32*t3);
            ubv=min(PB_M,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t7=lbv;t7<=ubv;t7++) {
              B[t7-1][t5] = C[t6][t5+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+1)] = C[t6][(t5+1)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+2)] = C[t6][(t5+2)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+3)] = C[t6][(t5+3)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+4)] = C[t6][(t5+4)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+5)] = C[t6][(t5+5)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+6)] = C[t6][(t5+6)+1][t7+1] * D[t6-1][0] - 5;;
              B[t7-1][(t5+7)] = C[t6][(t5+7)+1][t7+1] * D[t6-1][0] - 5;;
            }
          }
        }
        for (;t5<=min(PB_L-2,32*t2+31);t5++) {
          for (t6=max(1,32*t4);t6<=min(PB_M-1,32*t4+31);t6++) {
            lbv=max(1,32*t3);
            ubv=min(PB_M,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t7=lbv;t7<=ubv;t7++) {
              B[t7-1][t5] = C[t6][t5+1][t7+1] * D[t6-1][0] - 5;;
            }
          }
        }
      }
    }
  }
  lbp=0;
  ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=floord(PB_M-1,32);t3++) {
      for (t4=32*t2;t4<=min(PB_M-2,32*t2+31);t4++) {
        for (t5=max(1,32*t3);t5<=min(PB_M-1,32*t3+31);t5++) {
          B[t5][t4] = C[t4][t4+1][t5] + D[t4+1][t5] * D[t4][t5] * E[t4] + B[t5-1][t4] * 2;;
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
int xd = xD;
int yd = yD;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3222131113_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
