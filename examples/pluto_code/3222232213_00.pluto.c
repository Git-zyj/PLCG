#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222232213_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
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
        sum_B += B[i_0];
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
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
void kernel_3222232213_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 3) {
  if (PB_L >= max(0,ceild(-4*PB_M+24,3))) {
    for (t1=max(-1,-PB_L+3);t1<=min(floord(2*PB_L+33*PB_M-99,32),floord(6*PB_L+101*PB_M-309,96));t1++) {
      lbp=max(max(max(ceild(t1,2),ceild(128*t1-93*PB_L+372,256)),ceild(1024*t1-31*PB_L,1056)),ceild(3136*t1-93*PB_L+186,3296));
      ubp=min(min(min(floord(PB_L+32*PB_M-96,32),floord(32*t1+31*PB_M-61,64)),floord(992*t1+33*PB_M+862,1056)),floord(1440*t1+47*PB_M+1170,1504));
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((t1 <= floord(33*t2,32)) && (t1 >= ceild(33*t2-31,32)) && (t2 >= 3) && (t2 <= PB_M-3)) {
          B[t2-2] = D[t2] + C[t2][t2] - D[t2+2] - E[t2] - B[t2-3] * 2;;
        }
        for (t3=max(max(max(3,16*t1),32*t1-32*t2+1),32*t2-PB_M+2);t3<=min(min(min(PB_L-1,16*t1+31),32*t2+30),32*t1-32*t2+PB_M+29);t3++) {
          lbv=max(max(32*t2,t3+1),-32*t1+32*t2+2*t3-31);
          ubv=min(min(32*t2+31,-32*t1+32*t2+2*t3),t3+PB_M-2);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[(-t3+t4)][t3-2] = C[(-t3+t4)][t3] * C[(-t3+t4)][t3] + A[(-t3+t4)+1][t3-3] + A[(-t3+t4)][t3-3] * A[(-t3+t4)-1][t3-3] * 6;;
          }
        }
      }
    }
  }
  if (PB_L <= -1) {
    for (t1=3;t1<=floord(33*PB_M-99,32);t1++) {
      if ((32*t1+31)%33 <= 31) {
        t2 = floord(32*t1+31,33);
        B[t2-2] = D[t2] + C[t2][t2] - D[t2+2] - E[t2] - B[t2-3] * 2;;
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
int xc = xC;
int yc = yC;
int xd = xD;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3222232213_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
