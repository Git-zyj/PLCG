#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224112123_00.h"
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
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224112123_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 1) && (PB_M >= 1)) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=floord(PB_M-1,32);t2++) {
      for (t3=max(0,ceild(32*t1+32*t2-PB_L+1,8));t3<=min(min(min(min(min(min(min(min(floord(8*t1+PB_M+6,8),floord(32*t2+31*PB_L-31,8)),floord(128*t2+PB_M+122,32)),floord(-32*t1+4*PB_M+PB_L-5,32)),floord(-32*t1+128*t2+PB_L+123,32)),floord(256*t2+PB_L+246,64)),floord(16*t2+77*PB_M-77,496)),floord(32*t2+247*PB_M+31*PB_L-278,1984)),t1+4*t2+4);t3++) {
        if ((t2 >= 1) && (t3 == 0)) {
          for (t4=32*t1;t4<=min(min(PB_M-1,32*t1+31),-32*t2+PB_L-1);t4++) {
            for (t5=32*t2;t5<=min(min(PB_M-1,32*t2+31),-t4+PB_L-1);t5++) {
              A[t5][t4] = C[t5+t4][0] - 6;;
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(min(31,PB_L-1),PB_M-1);t5++) {
            A[t5][0] = C[t5+0][0] - 6;;
          }
        }
        if ((t2 <= floord(t3,4)) && (t3 >= 1) && (t3 <= floord(5*PB_M-6,32))) {
          for (t4=max(max(max(1,32*t1),-128*t2+32*t3-123),32*t3-4*PB_M+5);t4<=min(min(min(min(PB_L-1,PB_Q-1),32*t1+31),128*t2-32*t3+PB_L+123),-32*t3+4*PB_M+PB_L-5);t4++) {
            for (t5=max(max(max(ceild(32*t3-PB_M+2,4),ceild(32*t3-t4+1,4)),ceild(32*t3+t4-PB_L+1,4)),32*t2);t5<=min(min(PB_M-1,32*t2+31),8*t3+7);t5++) {
              for (t6=max(32*t3,4*t5);t6<=min(min(min(32*t3+31,t4+4*t5-1),4*t5+PB_M-2),-t4+4*t5+PB_L-1);t6++) {
                B[t5][(-4*t5+t6)+1][t4] = D[(-4*t5+t6)+t4][0][t4] + B[(-4*t5+t6)+1][t5+3][t4] * 5;;
              }
            }
          }
        }
        if ((t2 == 0) && (t3 == 0)) {
          for (t4=max(1,32*t1);t4<=min(min(min(PB_L-1,PB_M-1),PB_Q-1),32*t1+31);t4++) {
            for (t5=0;t5<=min(min(7,PB_M-1),-t4+PB_L-1);t5++) {
              if (t5 == 0) {
                B[0][0 +1][t4] = D[0 +t4][0][t4] + B[0 +1][0 +3][t4] * 5;;
                A[0][t4] = C[0 +t4][0] - 6;;
              }
              if (t5 >= 1) {
                A[t5][t4] = C[t5+t4][0] - 6;;
              }
              for (t6=max(1,4*t5);t6<=min(min(31,t4+4*t5-1),-t4+4*t5+PB_L-1);t6++) {
                B[t5][(-4*t5+t6)+1][t4] = D[(-4*t5+t6)+t4][0][t4] + B[(-4*t5+t6)+1][t5+3][t4] * 5;;
              }
            }
            for (t5=8;t5<=min(min(31,PB_M-1),-t4+PB_L-1);t5++) {
              A[t5][t4] = C[t5+t4][0] - 6;;
            }
            for (t5=-t4+PB_L;t5<=min(7,PB_M-1);t5++) {
              for (t6=4*t5;t6<=min(min(31,t4+4*t5-1),-t4+4*t5+PB_L-1);t6++) {
                B[t5][(-4*t5+t6)+1][t4] = D[(-4*t5+t6)+t4][0][t4] + B[(-4*t5+t6)+1][t5+3][t4] * 5;;
              }
            }
          }
        }
        if ((t2 == 0) && (t3 == 0)) {
          for (t4=max(max(1,PB_Q),32*t1);t4<=min(min(PB_L-1,PB_M-1),32*t1+31);t4++) {
            for (t5=0;t5<=min(min(31,PB_M-1),-t4+PB_L-1);t5++) {
              A[t5][t4] = C[t5+t4][0] - 6;;
            }
          }
        }
        if ((PB_M >= 2) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(PB_M,32*t1);t4<=min(min(PB_L-1,PB_Q-1),32*t1+31);t4++) {
            for (t5=0;t5<=min(7,PB_M-1);t5++) {
              for (t6=4*t5;t6<=min(min(31,4*t5+PB_M-2),-t4+4*t5+PB_L-1);t6++) {
                B[t5][(-4*t5+t6)+1][t4] = D[(-4*t5+t6)+t4][0][t4] + B[(-4*t5+t6)+1][t5+3][t4] * 5;;
              }
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
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3224112123_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
