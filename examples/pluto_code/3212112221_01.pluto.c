#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212112221_01.h"
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
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
void kernel_3212112221_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 3) {
  if (PB_Q >= 0) {
    for (t1=0;t1<=floord(2*PB_L+PB_Q-6,32);t1++) {
      lbp=max(0,ceild(32*t1-PB_L-PB_Q+2,32));
      ubp=min(min(min(floord(PB_L-2,32),floord(-32*t1+3*PB_L+PB_Q-9,32)),floord(3*PB_L+PB_Q-9,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(max(0,ceild(32*t1-32*t2-PB_L+2,16)),ceild(32*t1+96*t2-5*PB_L+14,16)),-2*t1+4*t2);t3<=min(min(min(min(min(min(min(min(min(floord(64*t1+PB_L+121,32),floord(64*t1-64*t2+3*PB_L+55,32)),floord(64*t1-64*t2+65*PB_L-193,32)),floord(64*t2+PB_L+2*PB_Q+57,32)),floord(-64*t1-64*t2+7*PB_L+4*PB_Q-19,32)),floord(-64*t1+64*t2+3*PB_L+4*PB_Q-5,32)),floord(192*t2+3*PB_L+64*PB_Q-3,96)),floord(16*t2+22*PB_L+15*PB_Q-51,240)),floord(-928*t1+1024*t2+45*PB_L+61*PB_Q-74,512)),floord(32*t1-32*t2+48*PB_L+31*PB_Q-112,512));t3++) {
          if ((PB_L >= 4) && (t3 >= ceild(PB_L,32))) {
            for (t4=max(max(max(2,ceild(32*t3-3*PB_L+7,2)),ceild(-64*t2+32*t3-PB_L-59,2)),32*t1-32*t2);t4<=min(min(min(PB_Q-1,16*t3+14),32*t1-32*t2+31),-32*t2+16*t3+15);t4++) {
              for (t5=max(max(1,ceild(32*t3-2*t4-PB_L+3,2)),32*t2);t5<=min(min(PB_L-2,32*t2+31),16*t3-t4+15);t5++) {
                for (t6=max(32*t3,2*t4+2*t5+1);t6<=min(32*t3+31,2*t4+2*t5+PB_L-3);t6++) {
                  A[(-2*t4-2*t5+t6)][t4-2][t5-1] = C[t4+2][t5][t4] * A[(-2*t4-2*t5+t6)+2][t4-2][t5-1] * A[t4][(-2*t4-2*t5+t6)-1][t5-1] * A[t5+1][t4-2][(-2*t4-2*t5+t6)-1] - 1;;
                }
              }
            }
          }
          if (t3 <= floord(PB_L-1,32)) {
            for (t4=max(2,32*t1-32*t2);t4<=min(min(min(32*t2,PB_Q-1),32*t1-32*t2+31),-32*t2+16*t3+15);t4++) {
              for (t5=32*t2;t5<=min(32*t2+31,16*t3-t4+15);t5++) {
                for (t6=max(32*t3,2*t4+2*t5+1);t6<=32*t3+31;t6++) {
                  A[(-2*t4-2*t5+t6)][t4-2][t5-1] = C[t4+2][t5][t4] * A[(-2*t4-2*t5+t6)+2][t4-2][t5-1] * A[t4][(-2*t4-2*t5+t6)-1][t5-1] * A[t5+1][t4-2][(-2*t4-2*t5+t6)-1] - 1;;
                }
              }
            }
          }
          if ((t1 == 0) && (t2 == 0) && (t3 <= floord(PB_L-1,32))) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              B[1][0 +1][t6] = 6;;
            }
          }
          if (t3 <= floord(PB_L-1,32)) {
            for (t4=max(max(2,32*t1-32*t2),32*t2+1);t4<=min(min(min(min(PB_L-2,PB_Q-1),16*t3+14),32*t1-32*t2+31),-32*t2+16*t3+15);t4++) {
              if (t2 == 0) {
                for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                  B[t4][0 +1][t6] = 6;;
                }
              }
              for (t5=max(1,32*t2);t5<=min(min(32*t2+31,t4-1),16*t3-t4+15);t5++) {
                for (t6=32*t3;t6<=min(PB_L-1,2*t4+2*t5);t6++) {
                  B[t4][t5+1][t6] = 6;;
                }
                for (t6=max(32*t3,2*t4+2*t5+1);t6<=min(PB_L-1,32*t3+31);t6++) {
                  A[(-2*t4-2*t5+t6)][t4-2][t5-1] = C[t4+2][t5][t4] * A[(-2*t4-2*t5+t6)+2][t4-2][t5-1] * A[t4][(-2*t4-2*t5+t6)-1][t5-1] * A[t5+1][t4-2][(-2*t4-2*t5+t6)-1] - 1;;
                  B[t4][t5+1][t6] = 6;;
                }
                for (t6=max(PB_L,2*t4+2*t5+1);t6<=min(32*t3+31,2*t4+2*t5+PB_L-3);t6++) {
                  A[(-2*t4-2*t5+t6)][t4-2][t5-1] = C[t4+2][t5][t4] * A[(-2*t4-2*t5+t6)+2][t4-2][t5-1] * A[t4][(-2*t4-2*t5+t6)-1][t5-1] * A[t5+1][t4-2][(-2*t4-2*t5+t6)-1] - 1;;
                }
              }
              if (t1 == 2*t2) {
                for (t5=t4;t5<=min(min(PB_L-2,16*t1+31),16*t3-t4+15);t5++) {
                  for (t6=max(32*t3,2*t4+2*t5+1);t6<=min(32*t3+31,2*t4+2*t5+PB_L-3);t6++) {
                    if (t1%2 == 0) {
                      A[(-2*t4-2*t5+t6)][t4-2][t5-1] = C[t4+2][t5][t4] * A[(-2*t4-2*t5+t6)+2][t4-2][t5-1] * A[t4][(-2*t4-2*t5+t6)-1][t5-1] * A[t5+1][t4-2][(-2*t4-2*t5+t6)-1] - 1;;
                    }
                  }
                }
              }
              for (t5=16*t3-t4+16;t5<=min(32*t2+31,t4-1);t5++) {
                for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                  B[t4][t5+1][t6] = 6;;
                }
              }
            }
          }
          if ((PB_L >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=PB_L-1;t4<=min(14,PB_Q-1);t4++) {
              for (t5=1;t5<=min(PB_L-2,-t4+15);t5++) {
                for (t6=2*t4+2*t5+1;t6<=min(31,2*t4+2*t5+PB_L-3);t6++) {
                  A[(-2*t4-2*t5+t6)][t4-2][t5-1] = C[t4+2][t5][t4] * A[(-2*t4-2*t5+t6)+2][t4-2][t5-1] * A[t4][(-2*t4-2*t5+t6)-1][t5-1] * A[t5+1][t4-2][(-2*t4-2*t5+t6)-1] - 1;;
                }
              }
            }
          }
          if (t3 <= floord(PB_L-1,32)) {
            for (t4=max(max(max(2,PB_Q),32*t1-32*t2),32*t2+1);t4<=min(min(min(PB_L-2,16*t3+14),32*t1-32*t2+31),-32*t2+16*t3+15);t4++) {
              for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                  B[t4][t5+1][t6] = 6;;
                }
              }
            }
          }
          if ((t1 <= floord(t3,2)) && (t1 >= ceild(t3-1,2)) && (t2 == 0) && (t3 <= min(floord(PB_L-17,16),floord(PB_L-1,32)))) {
            for (t5=0;t5<=min(31,16*t3+14);t5++) {
              for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                B[(16*t3+15)][t5+1][t6] = 6;;
              }
            }
          }
          if (t3 <= floord(PB_L-1,32)) {
            for (t4=max(max(32*t1-32*t2,32*t2+1),-32*t2+16*t3+16);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
              for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                  B[t4][t5+1][t6] = 6;;
                }
              }
            }
          }
        }
      }
    }
  }
  if (PB_Q <= -1) {
    for (t1=0;t1<=floord(PB_L-3,16);t1++) {
      lbp=max(0,ceild(32*t1-PB_L+2,32));
      ubp=floord(t1,2);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=0;t3<=floord(PB_L-1,32);t3++) {
          for (t4=max(32*t1-32*t2,32*t2+1);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
              for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                B[t4][t5+1][t6] = 6;;
              }
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
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212112221_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
