#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224231123_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
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
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            sum_C += C[i_0][i_1];
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
void kernel_3224231123_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 1) {
  for (t1=0;t1<=floord(3*PB_M-3,32);t1++) {
    lbp=max(ceild(t1,2),ceild(32*t1-PB_M+1,32));
    ubp=min(min(floord(PB_M-1,16),floord(32*t1+PB_M+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((t2 <= floord(PB_M-1,32)) && (t2 >= ceild(PB_N,32))) {
        for (t3=max(32*t1-32*t2,32*t2-PB_M+2);t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,t3);t4<=min(min(PB_M-1,32*t2+31),t3+PB_M-2);t4++) {
            A[(-t3+t4)] = C[(-t3+t4)+t3][0] * C[(-t3+t4)][t3+1] + A[(-t3+t4)+1] - 5;;
          }
        }
      }
      if ((t2 <= floord(PB_N-1,32)) && (t2 >= ceild(PB_M,32))) {
        for (t3=max(32*t1-32*t2,32*t2-PB_M+1);t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
          for (t4=32*t2;t4<=min(min(PB_N-1,32*t2+31),t3+PB_M-1);t4++) {
            A[(-t3+t4)] = D[t3][0] + E[t3+1] + C[(-t3+t4)][t3] * D[(-t3+t4)+t3][0] + 3;;
          }
        }
      }
      if ((PB_M <= PB_N) && (32*t1 == PB_M-1) && (32*t2 == PB_M-1)) {
        if ((PB_M+31)%32 == 0) {
          A[(PB_M-1)] = D[0][0] + E[0 +1] + C[(PB_M-1)][0] * D[(PB_M-1)+0][0] + 3;;
        }
      }
      if (t2 <= min(floord(PB_M-1,32),floord(PB_N-1,32))) {
        for (t3=max(32*t1-32*t2,32*t2-PB_M+2);t3<=min(min(PB_M-1,PB_N-1),32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,t3);t4<=min(min(min(PB_M-1,PB_N-1),32*t2+31),t3+PB_M-2);t4++) {
            A[(-t3+t4)] = C[(-t3+t4)+t3][0] * C[(-t3+t4)][t3+1] + A[(-t3+t4)+1] - 5;;
            A[(-t3+t4)] = D[t3][0] + E[t3+1] + C[(-t3+t4)][t3] * D[(-t3+t4)+t3][0] + 3;;
          }
          for (t4=PB_N;t4<=min(min(PB_M-1,32*t2+31),t3+PB_M-2);t4++) {
            A[(-t3+t4)] = C[(-t3+t4)+t3][0] * C[(-t3+t4)][t3+1] + A[(-t3+t4)+1] - 5;;
          }
          for (t4=PB_M;t4<=min(min(PB_N-1,32*t2+31),t3+PB_M-1);t4++) {
            A[(-t3+t4)] = D[t3][0] + E[t3+1] + C[(-t3+t4)][t3] * D[(-t3+t4)+t3][0] + 3;;
          }
          if ((PB_M <= PB_N) && (t1 == t2) && (t1 >= ceild(PB_M-32,32)) && (t3 == 0)) {
            A[(PB_M-1)] = D[0][0] + E[0 +1] + C[(PB_M-1)][0] * D[(PB_M-1)+0][0] + 3;;
          }
        }
      }
      if ((t1 == 2*t2) && (t1 <= floord(PB_N-1,16))) {
        for (t3=PB_N;t3<=min(PB_M-1,16*t1+31);t3++) {
          for (t4=t3;t4<=min(PB_M-1,16*t1+31);t4++) {
            if (t1%2 == 0) {
              A[(-t3+t4)] = C[(-t3+t4)+t3][0] * C[(-t3+t4)][t3+1] + A[(-t3+t4)+1] - 5;;
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
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int xe = xE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xa,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3224231123_01(xa,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
