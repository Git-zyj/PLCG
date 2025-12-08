#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2222132113_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
void kernel_2222132113_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 3) {
  if ((PB_L >= max(0,ceild(-2*PB_N+6,3))) && (PB_N >= 0)) {
    lbp=0;
    ubp=min(floord(PB_P+PB_L+PB_N-2,32),floord(PB_P+2*PB_L+PB_N-4,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(max(max(max(max(max(0,ceild(32*t1-PB_L-30,32)),ceild(64*t1-PB_P-2*PB_L-30,32)),ceild(96*t1-2*PB_P-3*PB_L-PB_N-26,32)),ceild(1120*t1-35*PB_P-35*PB_L-31*PB_N+70,64)),ceild(992*t1-15*PB_P-31*PB_L-450,512)),ceild(1056*t1-33*PB_P-33*PB_L+66,1024));t2<=min(min(min(min(floord(PB_P+2*PB_N-1,32),floord(32*t1+PB_N+14,32)),floord(PB_P+3*PB_L+2*PB_N-7,32)),floord(96*t1+7*PB_P+17*PB_N-7,320)),2*t1+1);t2++) {
        if ((PB_L >= 2) && (t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(2,32*t1);t3<=min(min(2*PB_N-4,PB_P-1),32*t1+30);t3++) {
            lbv=max(ceild(t3+2,2),32*t1);
            ubv=min(t3,PB_N-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(t3-t4)][(-t3+2*t4)-1] = D[(-t3+2*t4)] + C[(t3-t4)+(-t3+2*t4)][0] - C[(t3-t4)+2][0] + 6;;
            }
            lbv=t3+1;
            ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(-t3+t4-1)][t3] = C[t3-2][(-t3+t4-1)] * C[t3-2][0] - A[(-t3+t4-1)+1][t3-1] + 6;;
            }
          }
        }
        if ((PB_L >= 2) && (t1 >= ceild(PB_N,32))) {
          for (t3=max(max(2,32*t2),32*t1-PB_L+1);t3<=min(min(PB_P-1,32*t1+30),32*t2+31);t3++) {
            lbv=max(32*t1,t3+1);
            ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(-t3+t4-1)][t3] = C[t3-2][(-t3+t4-1)] * C[t3-2][0] - A[(-t3+t4-1)+1][t3-1] + 6;;
            }
          }
        }
        if (t1 <= floord(PB_N-1,32)) {
          for (t3=max(max(2,32*t2),32*t1-PB_L+1);t3<=min(min(PB_P-1,32*t1-1),32*t2+31);t3++) {
            lbv=32*t1;
            ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(-t3+t4-1)][t3] = C[t3-2][(-t3+t4-1)] * C[t3-2][0] - A[(-t3+t4-1)+1][t3-1] + 6;;
            }
          }
        }
        if ((PB_L >= 2) && (PB_N >= 1) && (t1 == 0) && (t2 == 0)) {
          for (t3=max(2,2*PB_N-3);t3<=min(30,PB_P-1);t3++) {
            lbv=t3+1;
            ubv=min(31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(-t3+t4-1)][t3] = C[t3-2][(-t3+t4-1)] * C[t3-2][0] - A[(-t3+t4-1)+1][t3-1] + 6;;
            }
          }
        }
        if ((PB_L <= 1) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(max(2,32*t2),64*t1-PB_P+1);t3<=min(min(2*PB_N-4,64*t1+60),32*t2+31);t3++) {
            lbv=max(ceild(t3+2,2),32*t1);
            ubv=min(min(min(floord(t3+PB_P-1,2),t3),PB_N-1),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(t3-t4)][(-t3+2*t4)-1] = D[(-t3+2*t4)] + C[(t3-t4)+(-t3+2*t4)][0] - C[(t3-t4)+2][0] + 6;;
            }
          }
        }
        if ((PB_L >= 2) && (t1 == t2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(PB_P,64*t1-PB_P+1);t3<=min(2*PB_N-4,32*t1+30);t3++) {
            lbv=max(ceild(t3+2,2),32*t1);
            ubv=min(floord(t3+PB_P-1,2),PB_N-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(t3-t4)][(-t3+2*t4)-1] = D[(-t3+2*t4)] + C[(t3-t4)+(-t3+2*t4)][0] - C[(t3-t4)+2][0] + 6;;
            }
          }
        }
        if ((PB_L >= 2) && (t1 <= floord(PB_N-1,32))) {
          for (t3=max(max(32*t2,32*t1+31),64*t1-PB_P+1);t3<=min(min(2*PB_N-4,64*t1+60),32*t2+31);t3++) {
            lbv=max(ceild(t3+2,2),32*t1);
            ubv=min(min(floord(t3+PB_P-1,2),PB_N-1),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[(t3-t4)][(-t3+2*t4)-1] = D[(-t3+2*t4)] + C[(t3-t4)+(-t3+2*t4)][0] - C[(t3-t4)+2][0] + 6;;
            }
          }
        }
      }
    }
  }
  if ((PB_L >= 2) && (PB_N <= -1)) {
    lbp=0;
    ubp=floord(PB_P+PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(0,ceild(32*t1-PB_L-30,32));t2<=min(floord(PB_P-1,32),t1);t2++) {
        for (t3=max(max(2,32*t2),32*t1-PB_L+1);t3<=min(min(PB_P-1,32*t1+30),32*t2+31);t3++) {
          lbv=max(32*t1,t3+1);
          ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[(-t3+t4-1)][t3] = C[t3-2][(-t3+t4-1)] * C[t3-2][0] - A[(-t3+t4-1)+1][t3-1] + 6;;
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_N >= 3)) {
    lbp=0;
    ubp=floord(PB_N-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(ceild(64*t1-PB_P-30,32),t1);t2<=min(floord(PB_N-2,16),2*t1+1);t2++) {
        for (t3=max(max(2,32*t2),64*t1-PB_P+1);t3<=min(min(2*PB_N-4,64*t1+60),32*t2+31);t3++) {
          lbv=max(ceild(t3+2,2),32*t1);
          ubv=min(min(min(floord(t3+PB_P-1,2),t3),PB_N-1),32*t1+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[(t3-t4)][(-t3+2*t4)-1] = D[(-t3+2*t4)] + C[(t3-t4)+(-t3+2*t4)][0] - C[(t3-t4)+2][0] + 6;;
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
int xc = xC;
int yc = yC;
int xd = xD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2222132113_01(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
