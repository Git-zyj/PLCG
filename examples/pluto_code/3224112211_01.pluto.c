#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224112211_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("A");
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("C");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
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
            sum_C += C[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224112211_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 4) {
  for (t1=-1;t1<=min(floord(PB_M-19,16),floord(PB_M-3,32));t1++) {
    lbp=max(2*t1,t1+1);
    ubp=min(floord(PB_M-3,16),floord(32*t1+PB_M+29,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if (32*t1 == 32*t2-PB_M-29) {
        for (t3=max(0,32*t1+31);t3<=min(min(PB_M-3,32*t1+62),-PB_M+PB_L+1);t3++) {
          if ((PB_M+29)%32 == 0) {
            A[(PB_M-2)-2][t3+(PB_M-2)] = A[(PB_M-2)-2][t3+(PB_M-2)-1] * B[t3][(PB_M-2)+1] - 2;;
          }
        }
      }
      if ((t1 >= ceild(32*t2-PB_M-28,32)) && (t2 <= floord(PB_L-1,32))) {
        for (t3=max(max(0,32*t1),32*t2-PB_M+2);t3<=min(min(1,PB_L-3),32*t1-32*t2+PB_L+30);t3++) {
          lbv=max(max(32*t2,t3+2),-32*t1+32*t2+t3-31);
          ubv=min(min(min(PB_L-1,32*t2+31),-32*t1+32*t2+t3),t3+PB_M-2);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[(-t3+t4)-2][t3+(-t3+t4)] = A[(-t3+t4)-2][t3+(-t3+t4)-1] * B[t3][(-t3+t4)+1] - 2;;
          }
        }
      }
      if ((t1 <= floord(32*t2-PB_M+2,32)) && (t1 >= ceild(32*t2-PB_M-28,32)) && (t2 <= floord(PB_L-1,32)) && (t2 >= ceild(PB_M,32))) {
        A[(PB_M-2)-2][(32*t2-PB_M+2)+(PB_M-2)] = A[(PB_M-2)-2][(32*t2-PB_M+2)+(PB_M-2)-1] * B[(32*t2-PB_M+2)][(PB_M-2)+1] - 2;;
      }
      if ((t1 >= ceild(32*t2-PB_M-28,32)) && (t2 >= ceild(PB_L,32))) {
        for (t3=max(max(2,32*t1),32*t2-PB_M+3);t3<=min(min(min(PB_M-3,-32*t1+32*t2),32*t1+62),16*t2+15);t3++) {
          lbv=max(max(32*t2,2*t3),-32*t1+32*t2+t3-31);
          ubv=min(min(32*t2+31,-32*t1+32*t2+t3),t3+PB_M-3);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][(-t3+t4)+1] = C[t3][(-t3+t4)] - B[t3-1][(-t3+t4)+2] * B[(-t3+t4)][t3] + 2;;
          }
        }
      }
      if ((t1 <= floord(PB_L-1,64)) && (2*t1 == t2)) {
        B[32*t1][32*t1+1] = C[32*t1][32*t1] - B[32*t1-1][32*t1+2] * B[32*t1][32*t1] + 2;;
      }
      if ((t1 >= ceild(32*t2-PB_M-28,32)) && (t2 <= floord(PB_L-1,32))) {
        for (t3=max(max(2,32*t1),32*t2-PB_M+3);t3<=min(min(min(min(min(floord(PB_L-2,2),PB_M-3),32*t1+62),16*t2+15),-32*t1+32*t2-1),32*t1-32*t2+PB_L+30);t3++) {
          if ((t1 >= ceild(32*t2-t3-31,32)) && (t2 <= floord(t3,16))) {
            B[t3][t3+1] = C[t3][t3] - B[t3-1][t3+2] * B[t3][t3] + 2;;
          }
          lbv=max(max(32*t2,2*t3+1),-32*t1+32*t2+t3-31);
          ubv=min(min(min(PB_L-1,32*t2+31),-32*t1+32*t2+t3),t3+PB_M-3);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][(-t3+t4)+1] = C[t3][(-t3+t4)] - B[t3-1][(-t3+t4)+2] * B[(-t3+t4)][t3] + 2;;
            A[(-t3+t4)-2][t3+(-t3+t4)] = A[(-t3+t4)-2][t3+(-t3+t4)-1] * B[t3][(-t3+t4)+1] - 2;;
          }
          if ((t1 <= floord(32*t2-PB_M+2,32)) && (t2 >= ceild(t3+PB_M-33,32)) && (t3 <= -PB_M+PB_L+1)) {
            A[(PB_M-2)-2][t3+(PB_M-2)] = A[(PB_M-2)-2][t3+(PB_M-2)-1] * B[t3][(PB_M-2)+1] - 2;;
          }
          lbv=PB_L;
          ubv=min(min(32*t2+31,-32*t1+32*t2+t3),t3+PB_M-3);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][(-t3+t4)+1] = C[t3][(-t3+t4)] - B[t3-1][(-t3+t4)+2] * B[(-t3+t4)][t3] + 2;;
          }
        }
      }
      if (t2 <= floord(PB_L-1,32)) {
        for (t3=max(2,ceild(PB_L-1,2));t3<=min(min(min(PB_M-3,16*t2+15),-32*t1+32*t2-1),32*t1-32*t2+PB_L+30);t3++) {
          lbv=2*t3;
          ubv=min(min(32*t2+31,-32*t1+32*t2+t3),t3+PB_M-3);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][(-t3+t4)+1] = C[t3][(-t3+t4)] - B[t3-1][(-t3+t4)+2] * B[(-t3+t4)][t3] + 2;;
          }
        }
      }
      if ((t1 >= ceild(32*t2-PB_M-28,32)) && (t2 <= floord(PB_L-1,32))) {
        for (t3=max(2,32*t1-32*t2+PB_L+31);t3<=min(min(PB_M-3,32*t1+62),16*t2+15);t3++) {
          lbv=max(2*t3,-32*t1+32*t2+t3-31);
          ubv=min(32*t2+31,t3+PB_M-3);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][(-t3+t4)+1] = C[t3][(-t3+t4)] - B[t3-1][(-t3+t4)+2] * B[(-t3+t4)][t3] + 2;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3224112211_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
