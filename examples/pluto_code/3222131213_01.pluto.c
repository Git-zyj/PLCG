#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222131213_01.h"
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
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 1
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
void kernel_3222131213_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 2) && (PB_N >= 2)) {
  if (PB_Q >= 0) {
    for (t1=0;t1<=PB_N+PB_Q-1;t1++) {
      for (t2=0;t2<=min(min(floord(PB_N-1,8),floord(3*PB_L-3,32)),floord(2*PB_N+PB_L-2,32));t2++) {
        lbp=max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(0,ceild(32*t2-PB_L+1,32)),ceild(32*t2-PB_N+1,32)),ceild(32*t2-PB_L+2,48)),ceild(32*t2-PB_N+2,48)),ceild(t1+32*t2-PB_N-PB_Q-28,64)),ceild(2*t1+64*t2-2*PB_N-31*PB_Q+2,128)),ceild(2*t1+96*t2-2*PB_N-PB_L-15*PB_Q+3,128)),ceild(2*t1+96*t2-2*PB_N-PB_L-2*PB_Q-23,128)),ceild(28*t1+96*t2-28*PB_N-PB_L-28*PB_Q+29,128)),ceild(3*t1+128*t2-3*PB_N-PB_L-31*PB_Q+5,192)),ceild(59*t1+128*t2-59*PB_N-PB_L-59*PB_Q+61,192)),ceild(2*t1+928*t2-28*PB_N-PB_L-2*PB_Q+29,960)),ceild(t1+992*t2-31*PB_N-PB_Q+32,1024)),ceild(32*t1+1952*t2-32*PB_N-29*PB_L-32*PB_Q+61,2464)),ceild(31*t1+1920*t2-31*PB_N-29*PB_L-31*PB_Q+89,2880));
        ubp=min(min(min(min(min(floord(PB_L-1,16),floord(3*PB_N-3,32)),floord(PB_N+PB_L-1,32)),floord(32*t2+PB_L+31,64)),floord(64*t2+PB_N+61,96)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5)
        for (t3=lbp;t3<=ubp;t3++) {
          if ((PB_Q <= 1) && (t1 <= PB_N-1)) {
            for (t4=max(max(max(1,ceild(32*t3-PB_N+1,2)),32*t2-32*t3),32*t3-PB_L);t4<=min(min(min(PB_L-1,PB_N-1),16*t3+15),32*t2-32*t3+31);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=min(min(32*t3+31,t4+PB_L),2*t4+PB_N-1);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= PB_N-1) && (t1 >= 32*t3+PB_Q+31)) {
            for (t4=max(max(1,32*t2-32*t3),32*t3-PB_L);t4<=min(min(PB_L-1,16*t3+15),32*t2-32*t3+31);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,t4+PB_L);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(32*t3,PB_N-1))) {
            for (t4=max(max(max(1,ceild(32*t3-PB_N+1,2)),32*t2-32*t3),32*t3-PB_L);t4<=min(min(min(PB_L-1,PB_N-1),16*t3+15),32*t2-32*t3+31);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=min(min(32*t3+31,t4+PB_L),2*t4+PB_N-1);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
            }
          }
          if ((t1 <= min(PB_N+PB_Q-2,32*t3+PB_Q+30)) && (t1 >= PB_N) && (t3 <= floord(PB_N-1,32))) {
            for (t4=32*t2-32*t3;t4<=min(min(min(PB_N-2,32*t2-32*t3+31),-32*t3+PB_L-2),-t1+PB_L+PB_Q-3);t4++) {
              for (t5=max(32*t3,t1-PB_Q+1);t5<=min(min(PB_N-1,32*t3+31),-t4+PB_L-2);t5++) {
                A[t4+1][t5][(t1-t5)-1] = C[t5+t4+1][(t1-t5)][0] * C[t4][(t1-t5)][0] * 5;;
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(min(PB_N-1,PB_L+PB_Q-3),32*t2+PB_Q+30)) && (t1 >= 32*t2+1) && (t2 == t3) && (t2 <= floord(PB_L-2,32))) {
            for (t5=max(32*t2,t1-PB_Q+1);t5<=min(min(PB_L-2,t1-1),32*t2+31);t5++) {
              A[0 +1][t5][(t1-t5)-1] = C[t5+0 +1][(t1-t5)][0] * C[0][(t1-t5)][0] * 5;;
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(PB_N-1,32*t3+PB_Q+30)) && (t1 >= 32*t3+1)) {
            for (t4=max(1,32*t2-32*t3);t4<=min(min(min(min(PB_N-2,16*t3+15),32*t2-32*t3+31),-32*t3+PB_L-2),-t1+PB_L+PB_Q-3);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=t1-PB_Q;t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
              for (t5=max(32*t3,t1-PB_Q+1);t5<=min(min(2*t4,t1-1),-t4+PB_L-2);t5++) {
                A[t4+1][t5][(t1-t5)-1] = C[t5+t4+1][(t1-t5)][0] * C[t4][(t1-t5)][0] * 5;;
              }
              for (t5=max(max(32*t3,2*t4+1),t1-PB_Q+1);t5<=min(min(t1-1,32*t3+31),-t4+PB_L-2);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
                A[t4+1][t5][(t1-t5)-1] = C[t5+t4+1][(t1-t5)][0] * C[t4][(t1-t5)][0] * 5;;
              }
              for (t5=max(2*t4+1,-t4+PB_L-1);t5<=min(min(t1-1,32*t3+31),t4+PB_L);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
              for (t5=max(t1,2*t4+1);t5<=min(min(32*t3+31,t4+PB_L),2*t4+PB_N-1);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(PB_N-1,32*t3+PB_Q+30))) {
            for (t4=max(max(1,32*t2-32*t3),-t1+PB_L+PB_Q-2);t4<=min(min(min(PB_N-1,16*t3+15),32*t2-32*t3+31),-32*t3+PB_L-2);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,t4+PB_L);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(PB_N-1,32*t3+PB_Q+30)) && (t1 >= 32*t3+1)) {
            for (t4=max(max(max(1,32*t2-32*t3),32*t3-PB_L),-32*t3+PB_L-1);t4<=min(min(min(PB_L-1,PB_N-1),16*t3+15),32*t2-32*t3+31);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,t4+PB_L);t5++) {
                A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
              }
            }
          }
          if ((PB_N <= min(16,PB_L-1)) && (PB_Q >= 2) && (t1 <= min(PB_N-1,-PB_N+PB_L+PB_Q-2)) && (t1 >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t5=2*PB_N-1;t5<=min(min(31,3*PB_N-3),PB_N+PB_L-1);t5++) {
              A[(PB_N-1)][(t5-2*PB_N+2)][t1] = C[(PB_N-1)+1][t1][(t5-2*PB_N+2)] - C[(PB_N-1)][(t5-2*PB_N+2)+1][t1] + C[(t5-2*PB_N+2)+(PB_N-1)-1][t1][t1] + A[(t5-2*PB_N+2)-1][t1][(PB_N-1)] * A[(PB_N-1)][(t5-2*PB_N+2)][t1+1] - 1;;
            }
          }
          if ((PB_Q >= 2) && (t1 <= min(PB_N-1,32*t3+PB_Q+30)) && (t1 >= 32*t3+1)) {
            for (t4=max(32*t2-32*t3,16*t3+16);t4<=min(min(min(PB_N-2,32*t2-32*t3+31),-32*t3+PB_L-2),-t1+PB_L+PB_Q-3);t4++) {
              for (t5=max(32*t3,t1-PB_Q+1);t5<=min(min(t1-1,32*t3+31),-t4+PB_L-2);t5++) {
                A[t4+1][t5][(t1-t5)-1] = C[t5+t4+1][(t1-t5)][0] * C[t4][(t1-t5)][0] * 5;;
              }
            }
          }
        }
      }
    }
  }
  if (PB_Q <= -1) {
    for (t1=0;t1<=PB_N-1;t1++) {
      for (t2=0;t2<=min(min(floord(PB_N-1,8),floord(3*PB_L-3,32)),floord(2*PB_N+PB_L-2,32));t2++) {
        lbp=max(ceild(2*t2,3),ceild(32*t2-PB_N+1,32));
        ubp=min(min(min(min(min(floord(PB_L-1,16),floord(3*PB_N-3,32)),floord(PB_N+PB_L-1,32)),floord(32*t2+PB_L+31,64)),floord(64*t2+PB_N+61,96)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5)
        for (t3=lbp;t3<=ubp;t3++) {
          for (t4=max(max(max(1,ceild(32*t3-PB_N+1,2)),32*t2-32*t3),32*t3-PB_L);t4<=min(min(min(PB_L-1,PB_N-1),16*t3+15),32*t2-32*t3+31);t4++) {
            for (t5=max(32*t3,2*t4+1);t5<=min(min(32*t3+31,t4+PB_L),2*t4+PB_N-1);t5++) {
              A[t4][(-2*t4+t5)][t1] = C[t4+1][t1][(-2*t4+t5)] - C[t4][(-2*t4+t5)+1][t1] + C[(-2*t4+t5)+t4-1][t1][t1] + A[(-2*t4+t5)-1][t1][t4] * A[t4][(-2*t4+t5)][t1+1] - 1;;
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
kernel_3222131213_01(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
