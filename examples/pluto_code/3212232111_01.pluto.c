#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212232111_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2]);
            }
        }
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                sum_E += E[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212232111_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_N >= max(0,ceild(-3*PB_L+6,2)))) {
  for (t1=max(0,ceild(-PB_L+2,2));t1<=min(floord(2*PB_N+3*PB_L-4,2),PB_N+PB_L-1);t1++) {
    for (t2=0;t2<=min(min(min(floord(PB_L,8),floord(2*t1+PB_L-2,8)),floord(-2*t1+2*PB_N+3*PB_L-4,8)),floord(2*PB_N+3*PB_L-6,24));t2++) {
      for (t3=max(max(max(max(ceild(2*t2,3),ceild(32*t2-PB_L,32)),ceild(-2*t1+32*t2-PB_L+2,32)),ceild(2*t1+32*t2-2*PB_N-3*PB_L+4,32)),ceild(96*t2-2*PB_N-3*PB_L+6,96));t3<=min(min(min(min(min(floord(5*t1+3*PB_L-5,32),floord(-5*t1+5*PB_N+8*PB_L-10,32)),floord(5*PB_N+9*PB_L-15,96)),floord(64*t2+PB_L+61,96)),floord(80*t2+47*PB_L,608)),t2);t3++) {
        if ((t1 <= min(PB_L-1,PB_N-2)) && (t1 >= 1) && (t2 == 0) && (t3 == 0)) {
          B[t1][0 +1][0 +2] = E[0][t1][0] + E[0][t1][t1] + E[t1][0][0 +1] + B[0][0 +1][t1+3] + 4;;
          A[t1-1] = C[t1] + C[t1+1] - D[t1-1] + 2;;
          for (t5=1;t5<=min(31,PB_L-1);t5++) {
            B[t1][0 +1][t5+2] = E[0][t1][t5] + E[t5][t1][t1] + E[t1][t5][0 +1] + B[0][t5+1][t1+3] + 4;;
          }
        }
        if ((t1 >= PB_L) && (t1 <= PB_N-2) && (t2 == 0) && (t3 == 0)) {
          A[t1-1] = C[t1] + C[t1+1] - D[t1-1] + 2;;
        }
        if ((t1 <= PB_L-1) && (t2 >= 1) && (t2 == t3) && (t2 <= floord(PB_L-1,32))) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            B[t1][0 +1][t5+2] = E[0][t1][t5] + E[t5][t1][t1] + E[t1][t5][0 +1] + B[0][t5+1][t1+3] + 4;;
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(31,PB_L-1);t5++) {
            B[0][0 +1][t5+2] = E[0][0][t5] + E[t5][0][0] + E[0][t5][0 +1] + B[0][t5+1][0 +3] + 4;;
          }
        }
        if ((t1 <= PB_L-1) && (t1 >= max(1,PB_N-1)) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(31,PB_L-1);t5++) {
            B[t1][0 +1][t5+2] = E[0][t1][t5] + E[t5][t1][t1] + E[t1][t5][0 +1] + B[0][t5+1][t1+3] + 4;;
          }
        }
        if (t1 <= PB_L-1) {
          for (t4=max(max(1,ceild(32*t3-PB_L+1,2)),32*t2-32*t3);t4<=min(min(PB_L-2,16*t3+15),32*t2-32*t3+31);t4++) {
            for (t5=max(32*t3,2*t4);t5<=min(32*t3+31,2*t4+PB_L-1);t5++) {
              B[t1][t4+1][(-2*t4+t5)+2] = E[t4][t1][(-2*t4+t5)] + E[(-2*t4+t5)][t1][t1] + E[t1][(-2*t4+t5)][t4+1] + B[t4][(-2*t4+t5)+1][t1+3] + 4;;
            }
          }
        }
      }
    }
  }
}
if (PB_L <= -1) {
  for (t1=1;t1<=PB_N-2;t1++) {
    A[t1-1] = C[t1] + C[t1+1] - D[t1-1] + 2;;
  }
}
if ((PB_L >= 2) && (PB_N <= -1)) {
  for (t1=0;t1<=PB_L-1;t1++) {
    for (t2=0;t2<=floord(PB_L-2,8);t2++) {
      lbp=max(ceild(2*t2,3),ceild(32*t2-PB_L+2,32));
      ubp=min(min(floord(3*PB_L-5,32),floord(64*t2+PB_L+61,96)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5)
      for (t3=lbp;t3<=ubp;t3++) {
        for (t4=max(ceild(32*t3-PB_L+1,2),32*t2-32*t3);t4<=min(min(PB_L-2,16*t3+15),32*t2-32*t3+31);t4++) {
          for (t5=max(32*t3,2*t4);t5<=min(32*t3+31,2*t4+PB_L-1);t5++) {
            B[t1][t4+1][(-2*t4+t5)+2] = E[t4][t1][(-2*t4+t5)] + E[(-2*t4+t5)][t1][t1] + E[t1][(-2*t4+t5)][t4+1] + B[t4][(-2*t4+t5)+1][t1+3] + 4;;
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
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3212232111_01(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
