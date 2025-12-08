#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214112221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
{
int i_0, i_1, i_2;
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
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
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
void kernel_3214112221_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 1) {
  for (t1=0;t1<=floord(3*PB_P-3,32);t1++) {
    lbp=max(0,ceild(32*t1-PB_P,32));
    ubp=min(floord(32*t1+PB_P+14,64),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(0,-4*t1+6*t2-2);t3<=min(min(min(min(min(min(floord(-48*t2+3*PB_P-3,16),floord(16*t1-16*t2+PB_P+14,16)),floord(3*PB_P-3,32)),floord(64*t2+PB_P+61,32)),floord(32*t1-128*t2+5*PB_P+25,32)),floord(544*t1-1568*t2+47*PB_P+178,240)),t1+t2+2);t3++) {
        if (t2 <= min(floord(t3,2),floord(PB_P-1,32))) {
          for (t4=max(max(max(max(1,32*t1-32*t2),-31*t3+32),-64*t2+32*t3-61),32*t3-2*PB_P+3);t4<=min(PB_P,32*t1-32*t2+31);t4++) {
            for (t5=max(ceild(32*t3-t4+1,2),32*t2);t5<=min(min(PB_P-1,32*t2+31),16*t3+15);t5++) {
              for (t6=max(32*t3,2*t5);t6<=min(32*t3+31,t4+2*t5-1);t6++) {
                A[(-2*t5+t6)+2][t4-1] = A[(-2*t5+t6)][t4-1] - 3;;
              }
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(15,PB_P-1);t5++) {
            A[0 +2][1 -1] = A[0][1 -1] - 3;;
          }
        }
        if ((t2 >= 1) && (t3 == 0)) {
          for (t4=max(32*t1-32*t2,16*t2+1);t4<=min(min(PB_P-1,32*t2+31),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,t4);t5<=min(32*t2+31,2*t4-1);t5++) {
              B[(-t4+t5)+1][t4][(-t4+t5)+1] = C[(-t4+t5)+1][t4] * B[(-t4+t5)][t4][(-t4+t5)] * B[(-t4+t5)+3][t4-2][(-t4+t5)+3] - B[(-t4+t5)+1][t4+2][(-t4+t5)+1] + 2;;
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=2;t4<=min(31,PB_P-1);t4++) {
            for (t5=0;t5<=min(15,t4-1);t5++) {
              for (t6=2*t5;t6<=min(31,t4+2*t5-1);t6++) {
                A[(-2*t5+t6)+2][t4-1] = A[(-2*t5+t6)][t4-1] - 3;;
              }
            }
            for (t5=t4;t5<=min(min(15,PB_P-1),2*t4-1);t5++) {
              B[(-t4+t5)+1][t4][(-t4+t5)+1] = C[(-t4+t5)+1][t4] * B[(-t4+t5)][t4][(-t4+t5)] * B[(-t4+t5)+3][t4-2][(-t4+t5)+3] - B[(-t4+t5)+1][t4+2][(-t4+t5)+1] + 2;;
              for (t6=2*t5;t6<=min(31,t4+2*t5-1);t6++) {
                A[(-2*t5+t6)+2][t4-1] = A[(-2*t5+t6)][t4-1] - 3;;
              }
            }
            for (t5=2*t4;t5<=min(15,PB_P-1);t5++) {
              for (t6=2*t5;t6<=min(31,t4+2*t5-1);t6++) {
                A[(-2*t5+t6)+2][t4-1] = A[(-2*t5+t6)][t4-1] - 3;;
              }
            }
            for (t5=PB_P;t5<=min(15,2*t4-1);t5++) {
              B[(-t4+t5)+1][t4][(-t4+t5)+1] = C[(-t4+t5)+1][t4] * B[(-t4+t5)][t4][(-t4+t5)] * B[(-t4+t5)+3][t4-2][(-t4+t5)+3] - B[(-t4+t5)+1][t4+2][(-t4+t5)+1] + 2;;
            }
            for (t5=max(16,t4);t5<=min(31,2*t4-1);t5++) {
              B[(-t4+t5)+1][t4][(-t4+t5)+1] = C[(-t4+t5)+1][t4] * B[(-t4+t5)][t4][(-t4+t5)] * B[(-t4+t5)+3][t4-2][(-t4+t5)+3] - B[(-t4+t5)+1][t4+2][(-t4+t5)+1] + 2;;
            }
          }
        }
        if ((PB_P >= 2) && (PB_P <= 31) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(15,PB_P-1);t5++) {
            for (t6=2*t5;t6<=min(31,2*t5+PB_P-1);t6++) {
              A[(-2*t5+t6)+2][PB_P-1] = A[(-2*t5+t6)][PB_P-1] - 3;;
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
int ya = yA;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3214112221_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
