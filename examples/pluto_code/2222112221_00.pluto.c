#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2222112221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
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
void kernel_2222112221_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 3) && (PB_M >= 2)) {
  for (t1=-1;t1<=min(floord(PB_M-2,16),floord(2*PB_M+PB_L-37,32));t1++) {
    lbp=t1+1;
    ubp=min(floord(2*PB_M+PB_L-5,32),floord(32*t1+PB_L+30,32));
#pragma omp parallel for private(lbv,ubv,t3,t4)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_L >= 5) && (t1 >= ceild(32*t2-PB_L-29,32))) {
        for (t3=max(max(0,ceild(32*t2-PB_L+1,2)),16*t1);t3<=min(min(PB_M-2,16*t1+30),16*t2+13);t3++) {
          if (t1 == t2-1) {
            lbv=max(32*t1+32,2*t3+2);
            ubv=2*t3+3;
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[t3][(-2*t3+t4)-2] = C[(-2*t3+t4)][t3] + 3;;
            }
          }
          if (t1 <= min(floord(t3-16,16),t2-2)) {
            A[t3][(-32*t1+32*t2-31)-2] = C[(-32*t1+32*t2-31)][t3] + 3;;
          }
          lbv=max(max(32*t2,2*t3+4),-32*t1+32*t2+2*t3-30);
          ubv=min(min(32*t2+31,-32*t1+32*t2+2*t3),2*t3+PB_L-1);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3][(-2*t3+t4)-2] = C[(-2*t3+t4)][t3] + 3;;
            B[t3+1][(-2*t3+t4)-1] = C[(-2*t3+t4)][t3] + A[t3][(-2*t3+t4)-2] + A[t3+1][(-2*t3+t4)-4] + B[t3+2][(-2*t3+t4)-1] * 2;;
          }
          if (t1 >= max(ceild(t3-15,16),ceild(32*t2-PB_L+2,32))) {
            B[t3+1][(-32*t1+32*t2+1)-1] = C[(-32*t1+32*t2+1)][t3] + A[t3][(-32*t1+32*t2+1)-2] + A[t3+1][(-32*t1+32*t2+1)-4] + B[t3+2][(-32*t1+32*t2+1)-1] * 2;;
          }
        }
      }
      if ((PB_L <= 4) && (t1 == t2-1)) {
        for (t3=max(0,ceild(32*t1-PB_L+33,2));t3<=min(PB_M-2,16*t1+30);t3++) {
          lbv=2*t3+2;
          ubv=2*t3+PB_L-1;
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3][(-2*t3+t4)-2] = C[(-2*t3+t4)][t3] + 3;;
          }
        }
      }
      if (32*t1 == 32*t2-PB_L-30) {
        for (t3=16*t1+16;t3<=min(PB_M-2,16*t1+31);t3++) {
          if ((PB_L+30)%32 == 0) {
            A[t3][(PB_L-1)-2] = C[(PB_L-1)][t3] + 3;;
          }
        }
      }
      if ((PB_L >= 5) && (t1 == t2-1) && (t1 <= floord(PB_M-32,16))) {
        lbv=32*t1+62;
        ubv=32*t1+63;
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          A[(16*t1+30)][(-32*t1+t4-60)-2] = C[(-32*t1+t4-60)][(16*t1+30)] + 3;;
        }
      }
      if ((t1 <= min(floord(PB_M-33,16),t2-2)) && (t1 >= ceild(32*t2-PB_L-29,32))) {
        A[(16*t1+31)][(-32*t1+32*t2-31)-2] = C[(-32*t1+32*t2-31)][(16*t1+31)] + 3;;
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
kernel_2222112221_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
