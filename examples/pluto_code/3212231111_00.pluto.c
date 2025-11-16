#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212231111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
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
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212231111_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  if (PB_M >= 2) {
    lbp=0;
    ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=0;t3<=floord(PB_M-2,32);t3++) {
        for (t4=t3;t4<=floord(PB_M-1,32);t4++) {
          for (t5=max(1,32*t2);t5<=(min(PB_L-1,32*t2+31))-7;t5+=8) {
            for (t6=32*t3;t6<=min(min(PB_M-2,32*t3+31),32*t4+30);t6++) {
              for (t7=max(32*t4,t6+1);t7<=min(PB_M-1,32*t4+31);t7++) {
                B[t5-1][t6] = C[t5][t6][t5] * D[t7][t6][t5] * C[t6+1][t7][t6] + 6;;
                B[(t5+1)-1][t6] = C[(t5+1)][t6][(t5+1)] * D[t7][t6][(t5+1)] * C[t6+1][t7][t6] + 6;;
                B[(t5+2)-1][t6] = C[(t5+2)][t6][(t5+2)] * D[t7][t6][(t5+2)] * C[t6+1][t7][t6] + 6;;
                B[(t5+3)-1][t6] = C[(t5+3)][t6][(t5+3)] * D[t7][t6][(t5+3)] * C[t6+1][t7][t6] + 6;;
                B[(t5+4)-1][t6] = C[(t5+4)][t6][(t5+4)] * D[t7][t6][(t5+4)] * C[t6+1][t7][t6] + 6;;
                B[(t5+5)-1][t6] = C[(t5+5)][t6][(t5+5)] * D[t7][t6][(t5+5)] * C[t6+1][t7][t6] + 6;;
                B[(t5+6)-1][t6] = C[(t5+6)][t6][(t5+6)] * D[t7][t6][(t5+6)] * C[t6+1][t7][t6] + 6;;
                B[(t5+7)-1][t6] = C[(t5+7)][t6][(t5+7)] * D[t7][t6][(t5+7)] * C[t6+1][t7][t6] + 6;;
              }
            }
          }
          for (;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(min(PB_M-2,32*t3+31),32*t4+30);t6++) {
              for (t7=max(32*t4,t6+1);t7<=min(PB_M-1,32*t4+31);t7++) {
                B[t5-1][t6] = C[t5][t6][t5] * D[t7][t6][t5] * C[t6+1][t7][t6] + 6;;
              }
            }
          }
        }
      }
    }
  }
  for (t2=2;t2<=PB_L-2;t2++) {
    for (t3=0;t3<=floord(t2+2*PB_L-5,32);t3++) {
      lbp=max(ceild(t3,2),ceild(32*t3-PB_L+2,32));
      ubp=min(min(floord(t2+PB_L-3,32),floord(t2+32*t3+30,64)),t3);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7)
      for (t4=lbp;t4<=ubp;t4++) {
        for (t5=max(max(1,32*t3-32*t4),-t2+32*t4+1);t5<=min(min(PB_L-2,32*t4+30),32*t3-32*t4+31);t5++) {
          for (t6=max(32*t4,t5+1);t6<=min(32*t4+31,t2+t5-1);t6++) {
            B[t5][t2+1] = C[(-t5+t6)][t2][t5] - C[t5][t2+1][(-t5+t6)+1] * C[t5-1][t2-1][(-t5+t6)-1] * B[(-t5+t6)+1][t5+1] - 2;;
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
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212231111_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
