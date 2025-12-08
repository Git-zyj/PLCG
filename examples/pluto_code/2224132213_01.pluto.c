#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224132213_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
void kernel_2224132213_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 3) && (PB_M >= -PB_N+6) && (PB_N >= 2)) {
  for (t1=0;t1<=min(floord(PB_N+1,32),floord(2*PB_M+PB_N-7,32));t1++) {
    lbp=max(max(max(max(0,ceild(32*t1-PB_N,32)),ceild(32*t1-PB_M+1,32)),ceild(64*t1-PB_M-PB_N+1,32)),ceild(64*t1-PB_M-PB_N+2,64));
    ubp=min(min(floord(PB_N-1,32),floord(32*t1+2*PB_M+PB_N-9,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(2,32*t1-32*t2);t3<=min(min(min(32*t2,PB_M-2),32*t1-32*t2+31),-32*t2+PB_N+1);t3++) {
        for (t4=32*t2;t4<=min(32*t2+31,-t3+PB_N+1);t4++) {
          A[(t3-1)][(t4-1)] = C[(t3-1)][(t3-1)-1] + C[2][(t3-1)-1] + C[(t4-1)][(t3-1)] + C[(t4-1)+(t3-1)][(t3-1)+2] * 3;;
        }
      }
      for (t3=max(max(2,32*t1-32*t2),32*t2+1);t3<=min(min(min(PB_M-2,PB_N-1),-32*t2+PB_N),32*t1-32*t2+31);t3++) {
        for (t4=max(1,32*t2);t4<=min(min(32*t2+31,-t3+PB_N),t3-1);t4++) {
          A[t3][t4] = C[t4][t3] - C[t4+t3-1][t3-2] + A[t3][t4-1] - A[t3-1][t4-1] - 6;;
          A[(t3-1)][(t4-1)] = C[(t3-1)][(t3-1)-1] + C[2][(t3-1)-1] + C[(t4-1)][(t3-1)] + C[(t4-1)+(t3-1)][(t3-1)+2] * 3;;
        }
        if (t1 == 2*t2) {
          for (t4=t3;t4<=min(16*t1+31,-t3+PB_N+1);t4++) {
            if (t1%2 == 0) {
              A[(t3-1)][(t4-1)] = C[(t3-1)][(t3-1)-1] + C[2][(t3-1)-1] + C[(t4-1)][(t3-1)] + C[(t4-1)+(t3-1)][(t3-1)+2] * 3;;
            }
          }
        }
        if ((t2 >= ceild(-t3+PB_N-30,32)) && (t3 >= ceild(PB_N+2,2))) {
          A[(t3-1)][(-t3+PB_N)] = C[(t3-1)][(t3-1)-1] + C[2][(t3-1)-1] + C[(-t3+PB_N)][(t3-1)] + C[(-t3+PB_N)+(t3-1)][(t3-1)+2] * 3;;
        }
      }
      if ((PB_M <= PB_N) && (t1 >= ceild(32*t2+PB_M-32,32)) && (t2 <= min(floord(PB_M-2,32),floord(-PB_M+PB_N+1,32)))) {
        for (t4=max(1,32*t2);t4<=min(min(PB_M-2,32*t2+31),-PB_M+PB_N+1);t4++) {
          A[(PB_M-1)][t4] = C[t4][(PB_M-1)] - C[t4+(PB_M-1)-1][(PB_M-1)-2] + A[(PB_M-1)][t4-1] - A[(PB_M-1)-1][t4-1] - 6;;
        }
      }
      if ((t1 >= ceild(PB_N-30,32)) && (t2 <= floord(PB_N,64)) && (t2 >= max(1,ceild(-PB_M+PB_N+3,32)))) {
        A[(-32*t2+PB_N)][(32*t2-1)] = C[(-32*t2+PB_N)][(-32*t2+PB_N)-1] + C[2][(-32*t2+PB_N)-1] + C[(32*t2-1)][(-32*t2+PB_N)] + C[(32*t2-1)+(-32*t2+PB_N)][(-32*t2+PB_N)+2] * 3;;
      }
      if ((PB_M >= PB_N+2) && (t1 >= ceild(PB_N-31,32)) && (t2 == 0)) {
        A[(PB_N-1)][0] = C[(PB_N-1)][(PB_N-1)-1] + C[2][(PB_N-1)-1] + C[0][(PB_N-1)] + C[0 +(PB_N-1)][(PB_N-1)+2] * 3;;
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
int xc = xC;
int yc = yC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_2224132213_01(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
