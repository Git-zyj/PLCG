#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224131123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
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
static void init_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
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
static void print_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
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
            for (i_2 = 0; i_2 < zb; i_2++) {
                sum_B += B[i_0][i_1][i_2];
            }
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
void kernel_3224131123_00(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_N >= 1) {
  if ((PB_L >= max(0,-PB_M+3)) && (PB_M >= 0) && (PB_N >= ceild(-PB_L+6,3))) {
    lbp=0;
    ubp=min(min(floord(PB_L+PB_M,32),floord(PB_N+PB_L-1,32)),floord(4*PB_L+3*PB_M-3,96));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(0,ceild(32*t1-PB_L,32));t2<=min(min(min(min(min(min(min(min(floord(PB_N+PB_M,32),floord(32*t1+PB_M,32)),floord(PB_L+PB_M-1,32)),floord(-32*t1+PB_N+PB_L+PB_M,32)),floord(32*t1+PB_L+2*PB_M-2,64)),floord(3*PB_L+4*PB_M-6,96)),floord(96*t1+PB_L+3*PB_M-3,96)),floord(-32*t1+PB_N+3*PB_L+3*PB_M-4,96)),floord(PB_N+3*PB_L+4*PB_M-6,128));t2++) {
        if ((t1 <= min(floord(PB_L,32),floord(PB_P,32))) && (t1 >= ceild(PB_N,32))) {
          for (t3=max(1,32*t2);t3<=min(min(min(PB_N,PB_L-2),PB_P-2),32*t2+31);t3++) {
            for (t4=max(t3,32*t1-2);t4<=PB_L-2;t4++) {
              lbv=max(32*t1,t3+2);
              ubv=min(min(PB_P,32*t1+31),t4+2);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(t3-1)+1][(t3-1)+2][(t5-2)+1] = C[(t3-1)][t4][(t5-2)-1] + C[(t3-1)][(t5-2)][t4+1] + C[(t3-1)][t4+1][(t3-1)] + 6;;
              }
            }
          }
        }
        if (t1 <= min(min(floord(PB_L,32),floord(PB_P,32)),floord(PB_N-1,32))) {
          for (t3=max(1,32*t2);t3<=min(min(min(PB_L-2,PB_P-2),32*t1-1),32*t2+31);t3++) {
            for (t4=max(t3,32*t1-2);t4<=PB_L-2;t4++) {
              lbv=max(32*t1,t3+2);
              ubv=min(min(PB_P,32*t1+31),t4+2);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(t3-1)+1][(t3-1)+2][(t5-2)+1] = C[(t3-1)][t4][(t5-2)-1] + C[(t3-1)][(t5-2)][t4+1] + C[(t3-1)][t4+1][(t3-1)] + 6;;
              }
            }
          }
        }
        if ((PB_L >= 3) && (PB_P >= 3) && (t1 == 0) && (t2 == 0)) {
          for (t4=1;t4<=PB_L-2;t4++) {
            lbv=3;
            ubv=min(min(31,PB_P),t4+2);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[0 +1][0 +2][(t5-2)+1] = C[0][t4][(t5-2)-1] + C[0][(t5-2)][t4+1] + C[0][t4+1][0] + 6;;
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(2,32*t1);t3<=min(min(min(min(PB_N,PB_L-2),PB_M-1),PB_P-2),32*t1+29);t3++) {
            for (t4=0;t4<=t3-1;t4++) {
              lbv=max(1,32*t1);
              ubv=min(t3,PB_N-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
            }
            for (t4=t3;t4<=min(PB_L-2,PB_N-1);t4++) {
              lbv=max(1,32*t1);
              ubv=t3;
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
              lbv=t3+2;
              ubv=min(min(PB_P,32*t1+31),t4+2);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(t3-1)+1][(t3-1)+2][(t5-2)+1] = C[(t3-1)][t4][(t5-2)-1] + C[(t3-1)][(t5-2)][t4+1] + C[(t3-1)][t4+1][(t3-1)] + 6;;
              }
            }
            for (t4=PB_N;t4<=PB_L-2;t4++) {
              lbv=t3+2;
              ubv=min(min(PB_P,32*t1+31),t4+2);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(t3-1)+1][(t3-1)+2][(t5-2)+1] = C[(t3-1)][t4][(t5-2)-1] + C[(t3-1)][(t5-2)][t4+1] + C[(t3-1)][t4+1][(t3-1)] + 6;;
              }
            }
            for (t4=PB_L-1;t4<=PB_N-1;t4++) {
              lbv=max(1,32*t1);
              ubv=t3;
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(max(2,PB_M),32*t1);t3<=min(min(min(PB_N,PB_L-2),PB_P-2),32*t1+29);t3++) {
            for (t4=t3;t4<=PB_L-2;t4++) {
              lbv=t3+2;
              ubv=min(min(PB_P,32*t1+31),t4+2);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[(t3-1)+1][(t3-1)+2][(t5-2)+1] = C[(t3-1)][t4][(t5-2)-1] + C[(t3-1)][(t5-2)][t4+1] + C[(t3-1)][t4+1][(t3-1)] + 6;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(max(2,32*t1),PB_P-1);t3<=min(min(min(PB_N,PB_L-2),PB_M-1),32*t1+29);t3++) {
            for (t4=0;t4<=PB_N-1;t4++) {
              lbv=max(1,32*t1);
              ubv=min(t3,PB_N-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
            }
          }
        }
        if ((PB_N >= 2) && (t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=PB_N+1;t3<=min(min(PB_L-2,PB_M-1),32*t1+29);t3++) {
            for (t4=0;t4<=PB_N-1;t4++) {
              lbv=max(1,32*t1);
              ubv=PB_N-1;
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
            }
          }
        }
        if ((PB_N >= 2) && (t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(max(2,32*t1),PB_L-1);t3<=min(PB_M-1,32*t1+29);t3++) {
            for (t4=0;t4<=PB_N-1;t4++) {
              lbv=max(1,32*t1);
              ubv=min(t3,PB_N-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
            }
          }
        }
        if ((PB_N >= 2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(32*t2,32*t1+30);t3<=min(PB_M-1,32*t2+31);t3++) {
            for (t4=0;t4<=PB_N-1;t4++) {
              lbv=max(1,32*t1);
              ubv=min(min(t3,PB_N-1),32*t1+31);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L >= 3) && (PB_M <= -1) && (PB_P >= 3)) {
    lbp=0;
    ubp=min(floord(PB_L,32),floord(PB_P,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=min(min(min(floord(PB_N,32),floord(PB_L-2,32)),floord(PB_P-2,32)),t1);t2++) {
        for (t3=max(1,32*t2);t3<=min(min(min(min(PB_N,PB_L-2),PB_P-2),32*t1+29),32*t2+31);t3++) {
          for (t4=max(t3,32*t1-2);t4<=PB_L-2;t4++) {
            lbv=max(32*t1,t3+2);
            ubv=min(min(PB_P,32*t1+31),t4+2);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t3-1)+1][(t3-1)+2][(t5-2)+1] = C[(t3-1)][t4][(t5-2)-1] + C[(t3-1)][(t5-2)][t4+1] + C[(t3-1)][t4+1][(t3-1)] + 6;;
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_M >= 3) && (PB_N >= 2)) {
    lbp=0;
    ubp=min(floord(PB_M-1,32),floord(PB_N-1,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=t1;t2<=floord(PB_M-1,32);t2++) {
        for (t3=max(2,32*t2);t3<=min(PB_M-1,32*t2+31);t3++) {
          for (t4=0;t4<=PB_N-1;t4++) {
            lbv=max(1,32*t1);
            ubv=min(min(t3,PB_N-1),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t3][t3+1][t5-1] = C[t4][t3][1] * C[t5][t4][t3] + B[t3-2][t3-1][t5-1] * 1;;
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
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3224131123_00(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
