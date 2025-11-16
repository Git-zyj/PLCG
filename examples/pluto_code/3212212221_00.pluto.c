#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212212221_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
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
        sum_C += C[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212212221_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= max(0,ceild(-4*PB_Q+20,5))) && (PB_Q >= 0)) {
  for (t1=0;t1<=min(floord(PB_L+3*PB_Q-1,32),floord(11*PB_L+12*PB_Q-32,128));t1++) {
    for (t2=max(max(0,ceild(32*t1-PB_L-2*PB_Q-26,32)),ceild(1088*t1-34*PB_L-95*PB_Q+34,224));t2<=min(min(floord(t1,2),floord(PB_Q,32)),floord(3*PB_L+4*PB_Q-12,128));t2++) {
      for (t3=max(max(max(ceild(32*t1-32*t2-PB_L-PB_Q-59,32),ceild(32*t1-PB_L-PB_Q-58,64)),ceild(1056*t1-33*PB_L-92*PB_Q+33,224)),t2);t3<=min(min(min(floord(PB_Q,32),floord(PB_L+2*PB_Q-4,64)),floord(-64*t1+64*t2+2*PB_L+31*PB_Q-2,864)),t1-t2);t3++) {
        if ((PB_Q >= 5) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(3,32*t1);t4<=min(min(min(PB_L-1,PB_Q+58),3*PB_Q-8),32*t1+31);t4++) {
            A[t4-2] = C[t4] * C[t4] * A[t4-3] + 1;;
            lbp=max(max(0,t4-2*PB_Q+5),t4-PB_Q-28);
            ubp=min(min(30,floord(t4-3,2)),PB_Q-3);
#pragma omp parallel for private(lbv,ubv,t6)
            for (t5=lbp;t5<=ubp;t5++) {
              lbv=max(t5+1,t4-t5-PB_Q+3);
              ubv=min(min(31,PB_Q-2),t4-t5-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5][(t4-t5-t6)][t6] = B[t5][(t4-t5-t6)][t6+1] + B[t5][(t4-t5-t6)-2][t6] * B[t6+2][t5][(t4-t5-t6)+2] + 1;;
              }
            }
          }
        }
        if ((PB_Q <= 4) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(3,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
            A[t4-2] = C[t4] * C[t4] * A[t4-3] + 1;;
          }
        }
        if ((PB_Q >= 5) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(32*t1,3*PB_Q-7);t4<=min(min(PB_L-1,PB_Q+58),32*t1+31);t4++) {
            A[t4-2] = C[t4] * C[t4] * A[t4-3] + 1;;
          }
        }
        if ((t2 <= floord(PB_Q-3,32)) && (t3 >= 1) && (t3 <= floord(PB_Q-2,32))) {
          for (t4=max(max(32*t1,64*t2+3),32*t2+32*t3+2);t4<=min(min(min(min(3*PB_Q-8,32*t1+31),32*t2+2*PB_Q+26),64*t3+PB_Q+58),32*t2+32*t3+PB_Q+59);t4++) {
            lbp=max(max(32*t2,t4-2*PB_Q+5),-32*t3+t4-PB_Q-28);
            ubp=min(min(min(min(floord(t4-3,2),PB_Q-3),32*t2+31),32*t3+30),-32*t3+t4-2);
#pragma omp parallel for private(lbv,ubv,t6)
            for (t5=lbp;t5<=ubp;t5++) {
              lbv=max(max(32*t3,t5+1),t4-t5-PB_Q+3);
              ubv=min(min(PB_Q-2,32*t3+31),t4-t5-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5][(t4-t5-t6)][t6] = B[t5][(t4-t5-t6)][t6+1] + B[t5][(t4-t5-t6)-2][t6] * B[t6+2][t5][(t4-t5-t6)+2] + 1;;
              }
            }
          }
        }
        if ((PB_Q >= 5) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(max(3,PB_L),32*t1);t4<=min(min(PB_Q+58,3*PB_Q-8),32*t1+31);t4++) {
            lbp=max(max(0,t4-2*PB_Q+5),t4-PB_Q-28);
            ubp=min(min(30,floord(t4-3,2)),PB_Q-3);
#pragma omp parallel for private(lbv,ubv,t6)
            for (t5=lbp;t5<=ubp;t5++) {
              lbv=max(t5+1,t4-t5-PB_Q+3);
              ubv=min(min(31,PB_Q-2),t4-t5-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5][(t4-t5-t6)][t6] = B[t5][(t4-t5-t6)][t6+1] + B[t5][(t4-t5-t6)-2][t6] * B[t6+2][t5][(t4-t5-t6)+2] + 1;;
              }
            }
          }
        }
        if ((PB_Q >= 5) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(32*t1,PB_Q+59);t4<=min(PB_L-1,32*t1+31);t4++) {
            A[t4-2] = C[t4] * C[t4] * A[t4-3] + 1;;
          }
        }
      }
    }
  }
}
if ((PB_L >= 4) && (PB_Q <= -1)) {
  for (t1=0;t1<=floord(PB_L-1,32);t1++) {
    for (t4=max(3,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
      A[t4-2] = C[t4] * C[t4] * A[t4-3] + 1;;
    }
  }
}
if ((PB_L <= -1) && (PB_Q >= 5)) {
  for (t1=0;t1<=floord(3*PB_Q-8,32);t1++) {
    for (t2=max(0,ceild(16*t1-PB_Q-13,16));t2<=min(floord(t1,2),floord(PB_Q-3,32));t2++) {
      for (t3=max(max(ceild(32*t1-32*t2-PB_Q-59,32),ceild(32*t1-PB_Q-58,64)),t2);t3<=min(floord(PB_Q-2,32),t1-t2);t3++) {
        for (t4=max(max(32*t1,64*t2+3),32*t2+32*t3+2);t4<=min(min(min(min(3*PB_Q-8,32*t1+31),32*t2+2*PB_Q+26),64*t3+PB_Q+58),32*t2+32*t3+PB_Q+59);t4++) {
          lbp=max(max(32*t2,t4-2*PB_Q+5),-32*t3+t4-PB_Q-28);
          ubp=min(min(min(min(floord(t4-3,2),PB_Q-3),32*t2+31),32*t3+30),-32*t3+t4-2);
#pragma omp parallel for private(lbv,ubv,t6)
          for (t5=lbp;t5<=ubp;t5++) {
            lbv=max(max(32*t3,t5+1),t4-t5-PB_Q+3);
            ubv=min(min(PB_Q-2,32*t3+31),t4-t5-2);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t5][(t4-t5-t6)][t6] = B[t5][(t4-t5-t6)][t6+1] + B[t5][(t4-t5-t6)-2][t6] * B[t6+2][t5][(t4-t5-t6)+2] + 1;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212212221_00(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
