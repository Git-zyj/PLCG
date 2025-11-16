#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212211223_00.h"
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
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
void kernel_3212211223_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 3) && (PB_M >= 1)) {
  if (PB_Q >= 0) {
    lbp=0;
    ubp=floord(PB_M+PB_Q-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=min(floord(PB_M+PB_L-2,32),floord(-32*t1+PB_M+PB_L+PB_Q-2,32));t2++) {
        for (t3=max(max(max(max(ceild(64*t2-16*PB_L+47,16),ceild(128*t2-PB_L-30,32)),ceild(992*t1+1120*t2-31*PB_M-32*PB_L-31*PB_Q+63,32)),ceild(256*t2-2*PB_L-31*PB_Q+2,64)),3*t2);t3<=min(min(min(min(min(min(min(min(floord(16*t2+11*PB_L-32,4),floord(PB_M+PB_L-2,8)),floord(-32*t1+PB_M+PB_L+PB_Q-2,8)),floord(64*t2+2*PB_L+21*PB_Q-2,16)),floord(128*t2+PB_L+92,32)),floord(96*t2+PB_M+PB_L+91,32)),floord(-32*t1+96*t2+PB_M+PB_L+PB_Q+91,32)),floord(-384*t1+32*t2+12*PB_M+13*PB_L+12*PB_Q-25,104)),floord(32*t2+28*PB_M+29*PB_L-57,232));t3++) {
          if ((PB_Q <= 1) && (t1 <= floord(PB_M-1,32))) {
            for (t4=max(max(2,ceild(32*t3-PB_L+1,3)),32*t2);t4<=min(min(floord(32*t3+31,3),PB_L-1),32*t2+31);t4++) {
              for (t5=max(32*t3,3*t4);t5<=min(32*t3+31,3*t4+PB_L-1);t5++) {
                lbv=32*t1;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= floord(PB_M-1,32)) && (t1 >= ceild(PB_Q,32))) {
            for (t4=max(max(2,ceild(32*t3-PB_L+1,3)),32*t2);t4<=min(min(floord(32*t3+31,3),PB_L-1),32*t2+31);t4++) {
              for (t5=max(32*t3,3*t4);t5<=min(32*t3+31,3*t4+PB_L-1);t5++) {
                lbv=32*t1;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(floord(PB_M-1,32),floord(PB_Q-1,32)))) {
            for (t4=max(max(2,ceild(32*t3-PB_L+1,3)),32*t2);t4<=min(8*t3,32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(32*t3+31,3*t4+PB_L-1);t5++) {
                lbv=32*t1;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(floord(PB_M-1,32),floord(PB_Q-1,32))) && (t2 == 0) && (t3 == 0)) {
            for (t5=6;t5<=min(31,PB_L+5);t5++) {
              lbv=32*t1;
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t6][2][(t5-6)] = A[t6][(t5-6)][2 -2] + A[t6][(t5-6)][2 -1] - 6;;
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(floord(PB_M-1,32),floord(PB_Q-1,32)))) {
            for (t4=max(32*t2,8*t3+1);t4<=min(min(floord(32*t3-PB_M,3),PB_L-1),32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(32*t3+31,3*t4+PB_L-1);t5++) {
                lbv=32*t1;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
              }
            }
          }
          if ((PB_L >= 4) && (t1 <= floord(PB_Q-1,32)) && (t1 >= ceild(PB_M,32))) {
            for (t4=max(max(max(3,ceild(32*t3-PB_M+1,3)),32*t2),8*t3+1);t4<=min(min(min(floord(32*t3+31,3),floord(32*t3+PB_L+30,4)),32*t2+31),PB_M+PB_L-2);t4++) {
              for (t5=max(max(32*t3,3*t4),4*t4-PB_L+1);t5<=min(min(32*t3+31,4*t4-3),3*t4+PB_M-1);t5++) {
                lbv=32*t1;
                ubv=min(PB_Q-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(t6-1)+1][(4*t4-t5-2)+2][(-3*t4+t5)] = C[(4*t4-t5-2)][(4*t4-t5-2)][(t6-1)+1] * C[(-3*t4+t5)][(4*t4-t5-2)-1][(t6-1)] - 2;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(floord(PB_M-1,32),floord(PB_Q-1,32)))) {
            for (t4=max(max(max(3,ceild(32*t3-PB_M+1,3)),32*t2),8*t3+1);t4<=min(min(floord(32*t3+31,3),PB_L-1),32*t2+31);t4++) {
              for (t5=max(32*t3,3*t4);t5<=min(min(32*t3+31,4*t4-3),3*t4+PB_M-1);t5++) {
                if (t1 == 0) {
                  A[0][t4][(-3*t4+t5)] = A[0][(-3*t4+t5)][t4-2] + A[0][(-3*t4+t5)][t4-1] - 6;;
                }
                lbv=max(1,32*t1);
                ubv=min(min(PB_M-1,PB_Q-1),32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                  A[(t6-1)+1][(4*t4-t5-2)+2][(-3*t4+t5)] = C[(4*t4-t5-2)][(4*t4-t5-2)][(t6-1)+1] * C[(-3*t4+t5)][(4*t4-t5-2)-1][(t6-1)] - 2;;
                }
                lbv=PB_Q;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
                lbv=PB_M;
                ubv=min(PB_Q-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(t6-1)+1][(4*t4-t5-2)+2][(-3*t4+t5)] = C[(4*t4-t5-2)][(4*t4-t5-2)][(t6-1)+1] * C[(-3*t4+t5)][(4*t4-t5-2)-1][(t6-1)] - 2;;
                }
              }
              for (t5=3*t4+PB_M;t5<=min(32*t3+31,4*t4-3);t5++) {
                lbv=32*t1;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
              }
              for (t5=4*t4-2;t5<=min(32*t3+31,3*t4+PB_L-1);t5++) {
                lbv=32*t1;
                ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
                }
              }
            }
          }
          if ((PB_L >= 4) && (PB_Q >= 2) && (t1 <= min(floord(PB_M-1,32),floord(PB_Q-1,32)))) {
            for (t4=max(max(max(ceild(32*t3-PB_M+1,3),PB_L),32*t2),8*t3+1);t4<=min(min(floord(32*t3+PB_L+30,4),32*t2+31),PB_M+PB_L-2);t4++) {
              for (t5=max(32*t3,4*t4-PB_L+1);t5<=min(min(32*t3+31,4*t4-3),3*t4+PB_M-1);t5++) {
                lbv=max(1,32*t1);
                ubv=min(PB_Q-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(t6-1)+1][(4*t4-t5-2)+2][(-3*t4+t5)] = C[(4*t4-t5-2)][(4*t4-t5-2)][(t6-1)+1] * C[(-3*t4+t5)][(4*t4-t5-2)-1][(t6-1)] - 2;;
                }
              }
            }
          }
        }
      }
    }
  }
  if (PB_Q <= -1) {
    lbp=0;
    ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=floord(PB_L-1,32);t2++) {
        for (t3=3*t2;t3<=min(floord(PB_L-1,8),floord(96*t2+PB_L+92,32));t3++) {
          for (t4=max(max(2,ceild(32*t3-PB_L+1,3)),32*t2);t4<=min(min(floord(32*t3+31,3),PB_L-1),32*t2+31);t4++) {
            for (t5=max(32*t3,3*t4);t5<=min(32*t3+31,3*t4+PB_L-1);t5++) {
              lbv=32*t1;
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t6][t4][(-3*t4+t5)] = A[t6][(-3*t4+t5)][t4-2] + A[t6][(-3*t4+t5)][t4-1] - 6;;
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
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212211223_00(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
