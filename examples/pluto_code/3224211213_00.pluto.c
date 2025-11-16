#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224211213_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
void kernel_3224211213_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_M >= max(0,ceild(-3*PB_L+6,2)))) {
  for (t1=0;t1<=floord(PB_M+PB_L-1,32);t1++) {
    if ((PB_L >= 2) && (t1 <= floord(PB_L-1,32))) {
      for (t6=max(1,32*t1);t6<=min(PB_L-1,32*t1+31);t6++) {
        B[t6] = C[t6-1] - D[t6] - B[t6-1] + B[t6+1] + 3;;
      }
    }
    if ((PB_M >= 3) && (PB_P >= 3) && (t1 <= min(floord(PB_M-1,32),floord(PB_Q-2,32)))) {
      lbp=t1;
      ubp=floord(PB_M+PB_P-3,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(ceild(32*t2-PB_P-29,32),t1);t3<=min(floord(PB_M-1,32),t2);t3++) {
          for (t4=max(max(3,32*t2),32*t3+1);t4<=min(min(32*t2+31,PB_M+PB_P-3),32*t3+PB_P+29);t4++) {
            for (t5=max(max(2,32*t3),t4-PB_P+2);t5<=min(min(PB_M-1,32*t3+31),t4-1);t5++) {
              for (t6=32*t1;t6<=min(min(t5,PB_Q-2),32*t1+31);t6++) {
                A[t5-1][(t4-t5)][t6+1] = A[t5-2][(t4-t5)+1][t6+1] + A[t5][(t4-t5)-1][t6+1] - 3;;
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_M >= 3) && (PB_P >= 3)) {
  for (t1=0;t1<=min(floord(PB_M-1,32),floord(PB_Q-2,32));t1++) {
    lbp=t1;
    ubp=floord(PB_M+PB_P-3,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(ceild(32*t2-PB_P-29,32),t1);t3<=min(floord(PB_M-1,32),t2);t3++) {
        for (t4=max(max(3,32*t2),32*t3+1);t4<=min(min(32*t2+31,PB_M+PB_P-3),32*t3+PB_P+29);t4++) {
          for (t5=max(max(2,32*t3),t4-PB_P+2);t5<=min(min(PB_M-1,32*t3+31),t4-1);t5++) {
            for (t6=32*t1;t6<=min(min(t5,PB_Q-2),32*t1+31);t6++) {
              A[t5-1][(t4-t5)][t6+1] = A[t5-2][(t4-t5)+1][t6+1] + A[t5][(t4-t5)-1][t6+1] - 3;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 2) && (PB_M <= -1)) {
  for (t1=0;t1<=floord(PB_L-1,32);t1++) {
    for (t6=max(1,32*t1);t6<=min(PB_L-1,32*t1+31);t6++) {
      B[t6] = C[t6-1] - D[t6] - B[t6-1] + B[t6+1] + 3;;
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
kernel_3224211213_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
