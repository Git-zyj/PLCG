#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212212223_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
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
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
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
        sum_B += B[i_0];
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212212223_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= max(0,ceild(-3*PB_N+6,2))) && (PB_N >= 0)) {
  for (t1=0;t1<=min(floord(PB_L+PB_N-1,32),floord(PB_L+2*PB_N-3,32));t1++) {
    if ((PB_N >= 2) && (PB_Q <= -1) && (t1 <= floord(PB_N-1,32))) {
      for (t4=max(1,32*t1);t4<=min(PB_N-1,32*t1+31);t4++) {
        B[t4] = C[t4] * D[t4] - B[t4+1] * B[t4-1] - B[t4+2] * 3;;
      }
    }
    for (t2=0;t2<=min(floord(PB_Q,32),floord(2*PB_Q+PB_N-2,64));t2++) {
      for (t3=2*t2;t3<=min(min(min(floord(64*t2+PB_Q+61,32),floord(-1952*t1+128*t2+61*PB_L+2*PB_Q+61*PB_N-61,64)),floord(192*t2+61*PB_L+3*PB_Q,96)),floord(96*t2+93*PB_Q,1024));t3++) {
        if ((t2 <= floord(PB_Q-1,32)) && (t3 >= 1)) {
          for (t4=32*t1;t4<=min(PB_L-3,32*t1+31);t4++) {
            for (t5=max(ceild(32*t3-PB_Q+1,2),32*t2);t5<=min(min(PB_Q-1,32*t2+31),16*t3+15);t5++) {
              for (t6=max(32*t3,2*t5);t6<=min(32*t3+31,2*t5+PB_Q-1);t6++) {
                A[t4+2][(-2*t5+t6)+1][1] = A[t4+2][(-2*t5+t6)+3][1] - 5;;
              }
            }
          }
        }
        if ((PB_L >= 3) && (PB_Q >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(15,PB_Q-1);t5++) {
            for (t6=2*t5;t6<=min(31,2*t5+PB_Q-1);t6++) {
              A[0 +2][(-2*t5+t6)+1][1] = A[0 +2][(-2*t5+t6)+3][1] - 5;;
            }
          }
        }
        if ((PB_Q == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(1,32*t1);t4<=min(PB_N-1,32*t1+31);t4++) {
            B[t4] = C[t4] * D[t4] - B[t4+1] * B[t4-1] - B[t4+2] * 3;;
          }
        }
        if ((PB_Q >= 1) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(1,32*t1);t4<=min(min(PB_L-3,PB_N-1),32*t1+31);t4++) {
            A[t4+2][0 +1][1] = A[t4+2][0 +3][1] - 5;;
            B[t4] = C[t4] * D[t4] - B[t4+1] * B[t4-1] - B[t4+2] * 3;;
            for (t6=1;t6<=min(31,PB_Q-1);t6++) {
              A[t4+2][t6+1][1] = A[t4+2][t6+3][1] - 5;;
            }
            for (t5=1;t5<=min(15,PB_Q-1);t5++) {
              for (t6=2*t5;t6<=min(31,2*t5+PB_Q-1);t6++) {
                A[t4+2][(-2*t5+t6)+1][1] = A[t4+2][(-2*t5+t6)+3][1] - 5;;
              }
            }
          }
        }
        if ((PB_Q >= 1) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(max(1,PB_N),32*t1);t4<=min(PB_L-3,32*t1+31);t4++) {
            for (t5=0;t5<=min(15,PB_Q-1);t5++) {
              for (t6=2*t5;t6<=min(31,2*t5+PB_Q-1);t6++) {
                A[t4+2][(-2*t5+t6)+1][1] = A[t4+2][(-2*t5+t6)+3][1] - 5;;
              }
            }
          }
        }
        if ((PB_Q >= 1) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(max(1,32*t1),PB_L-2);t4<=min(PB_N-1,32*t1+31);t4++) {
            B[t4] = C[t4] * D[t4] - B[t4+1] * B[t4-1] - B[t4+2] * 3;;
          }
        }
      }
    }
  }
}
if ((PB_N <= -1) && (PB_Q >= 1)) {
  for (t1=0;t1<=floord(PB_L-3,32);t1++) {
    for (t2=0;t2<=floord(PB_Q-1,32);t2++) {
      for (t3=2*t2;t3<=min(floord(3*PB_Q-3,32),floord(64*t2+PB_Q+61,32));t3++) {
        for (t4=32*t1;t4<=min(PB_L-3,32*t1+31);t4++) {
          for (t5=max(ceild(32*t3-PB_Q+1,2),32*t2);t5<=min(min(PB_Q-1,32*t2+31),16*t3+15);t5++) {
            for (t6=max(32*t3,2*t5);t6<=min(32*t3+31,2*t5+PB_Q-1);t6++) {
              A[t4+2][(-2*t5+t6)+1][1] = A[t4+2][(-2*t5+t6)+3][1] - 5;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_N >= 2)) {
  for (t1=0;t1<=floord(PB_N-1,32);t1++) {
    for (t4=max(1,32*t1);t4<=min(PB_N-1,32*t1+31);t4++) {
      B[t4] = C[t4] * D[t4] - B[t4+1] * B[t4-1] - B[t4+2] * 3;;
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
int xc = xC;
int xd = xD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212212223_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
