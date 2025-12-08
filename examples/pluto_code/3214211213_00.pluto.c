#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214211213_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
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
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
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
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214211213_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 1) && (PB_P >= 5) && (PB_Q >= 4)) {
  lbp=0;
  ubp=min(floord(PB_P-3,32),floord(PB_Q-2,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(min(min(floord(PB_Q-1,32),floord(32*t1+PB_M+31,32)),floord(-64*t1+PB_P+PB_Q-2,32)),floord(-32*t1+PB_P+PB_M-1,32)),floord(PB_P+2*PB_M-1,64));t2++) {
      for (t3=max(max(max(0,ceild(32*t1+32*t2-PB_P-30,32)),ceild(64*t2-PB_P-61,64)),-t1+t2-1);t3<=min(min(min(floord(PB_M,32),floord(PB_Q-3,32)),floord(-32*t1+PB_Q-1,32)),t2);t3++) {
        if ((t2 >= 1) && (t2 == t3)) {
          lbv=max(2,32*t1);
          ubv=min(min(PB_P-3,32*t1+31),-32*t2+PB_Q-1);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            A[32*t2-1][1 +t6][32*t2+1] = C[1 -1][32*t2][t6] - D[32*t2-1][1 +1] - 3;;
          }
        }
        if ((t2 == 0) && (t3 == 0)) {
          lbv=max(2,32*t1);
          ubv=min(min(PB_P-3,PB_Q-2),32*t1+31);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            A[1 -1][1 +t6][1 +1] = C[1 -1][1][t6] - D[1 -1][1 +1] - 3;;
          }
        }
        for (t4=max(max(3,32*t2),32*t3+2);t4<=min(min(min(min(min(min(min(min(floord(PB_P+2*PB_M-3,2),floord(64*t3+PB_P+59,2)),PB_Q-2),32*t2+31),32*t1+PB_M+30),32*t1+32*t3+61),-64*t1+PB_P+PB_Q-3),-32*t1+PB_P+PB_M-2),-32*t1+32*t3+PB_P+29);t4++) {
          if (t1 <= min(min(floord(t4-32,32),floord(-32*t3+t4-31,32)),floord(PB_P-63,64))) {
            A[(-32*t1+t4-31)-1][(32*t1+30)+(32*t1+31)+1][(-32*t1+t4-31)+(32*t1+31)] = A[(-32*t1+t4-31)][(32*t1+30)+(32*t1+31)][(-32*t1+t4-31)+(32*t1+30)+1] - A[(-32*t1+t4-31)-1][(32*t1+30)+(32*t1+31)+1][(-32*t1+t4-31)+(32*t1+30)+1] + 2;;
          }
          if (t1 >= max(max(ceild(-t4+PB_P,32),ceild(32*t3-t4+PB_P-1,32)),ceild(PB_P-1,64))) {
            A[(32*t1+t4-PB_P+1)-1][(-32*t1+PB_P-2)+32*t1+1][(32*t1+t4-PB_P+1)+32*t1] = A[(32*t1+t4-PB_P+1)][(-32*t1+PB_P-2)+32*t1][(32*t1+t4-PB_P+1)+(-32*t1+PB_P-2)+1] - A[(32*t1+t4-PB_P+1)-1][(-32*t1+PB_P-2)+32*t1+1][(32*t1+t4-PB_P+1)+(-32*t1+PB_P-2)+1] + 2;;
          }
          t5 = max(max(max(max(1,ceild(2*t4-PB_P+1,2)),32*t3),-32*t1+t4-30),32*t1+t4-PB_P+2);
          if (t5 <= floord(2*t4-PB_P+2,2)) {
            for (t6=t4-t5;t6<=-t4+t5+PB_P-1;t6++) {
              A[t5-1][(t4-t5-1)+t6+1][t5+t6] = A[t5][(t4-t5-1)+t6][t5+(t4-t5-1)+1] - A[t5-1][(t4-t5-1)+t6+1][t5+(t4-t5-1)+1] + 2;;
            }
          }
          for (t5=max(max(max(max(1,ceild(2*t4-PB_P+3,2)),32*t3),-32*t1+t4-30),32*t1+t4-PB_P+2);t5<=min(min(min(PB_M,32*t3+31),t4-2),-32*t1+PB_Q-1);t5++) {
            if (t1 <= floord(t4-t5,32)) {
              A[t5-1][(t4-t5-1)+(t4-t5)+1][t5+(t4-t5)] = A[t5][(t4-t5-1)+(t4-t5)][t5+(t4-t5-1)+1] - A[t5-1][(t4-t5-1)+(t4-t5)+1][t5+(t4-t5-1)+1] + 2;;
            }
            for (t6=max(32*t1,t4-t5+1);t6<=min(min(32*t1+31,-t5+PB_Q-1),-t4+t5+PB_P-2);t6++) {
              A[t5-1][(t4-t5-1)+t6+1][t5+t6] = A[t5][(t4-t5-1)+t6][t5+(t4-t5-1)+1] - A[t5-1][(t4-t5-1)+t6+1][t5+(t4-t5-1)+1] + 2;;
              A[t5-1][(t4-t5)+t6][t5+(t4-t5)] = C[(t4-t5)-1][t5][t6] - D[t5-1][(t4-t5)+1] - 3;;
            }
            if ((t1 >= ceild(-t4+t5+PB_P-32,32)) && (t4 >= 2*t5+PB_P-PB_Q)) {
              A[t5-1][(t4-t5-1)+(-t4+t5+PB_P-1)+1][t5+(-t4+t5+PB_P-1)] = A[t5][(t4-t5-1)+(-t4+t5+PB_P-1)][t5+(t4-t5-1)+1] - A[t5-1][(t4-t5-1)+(-t4+t5+PB_P-1)+1][t5+(t4-t5-1)+1] + 2;;
            }
          }
          if ((t1 <= floord(-t4+PB_Q,32)) && (t3 >= ceild(t4-32,32)) && (t4 <= PB_M+1)) {
            for (t6=max(2,32*t1);t6<=min(min(PB_P-3,32*t1+31),-t4+PB_Q);t6++) {
              A[(t4-1)-1][1 +t6][(t4-1)+1] = C[1 -1][(t4-1)][t6] - D[(t4-1)-1][1 +1] - 3;;
            }
          }
        }
        if ((t1 == t2-t3-1) && (t1 <= floord(PB_P-63,64)) && (t1 >= ceild(32*t2-PB_M-1,32)) && (t2 <= floord(PB_Q-31,32))) {
          A[(-32*t1+32*t2-1)-1][(32*t1+30)+(32*t1+31)+1][(-32*t1+32*t2-1)+(32*t1+31)] = A[(-32*t1+32*t2-1)][(32*t1+30)+(32*t1+31)][(-32*t1+32*t2-1)+(32*t1+30)+1] - A[(-32*t1+32*t2-1)-1][(32*t1+30)+(32*t1+31)+1][(-32*t1+32*t2-1)+(32*t1+30)+1] + 2;;
        }
        if ((t1 <= min(min(floord(32*t2-PB_M,32),floord(PB_Q-PB_M-32,32)),floord(PB_P-63,64))) && (t3 >= ceild(PB_M-30,32))) {
          A[PB_M-1][(32*t1+30)+(32*t1+31)+1][PB_M+(32*t1+31)] = A[PB_M][(32*t1+30)+(32*t1+31)][PB_M+(32*t1+30)+1] - A[PB_M-1][(32*t1+30)+(32*t1+31)+1][PB_M+(32*t1+30)+1] + 2;;
        }
        if ((t1 <= floord(-32*t3+PB_Q-32,32)) && (t1 >= max(max(ceild(-32*t2+32*t3+PB_P-1,32),ceild(32*t3+PB_P-PB_Q+32,32)),ceild(PB_P-1,64))) && (t3 <= floord(PB_M-31,32))) {
          A[(32*t3+31)-1][(-32*t1+PB_P-2)+32*t1+1][(32*t3+31)+32*t1] = A[(32*t3+31)][(-32*t1+PB_P-2)+32*t1][(32*t3+31)+(-32*t1+PB_P-2)+1] - A[(32*t3+31)-1][(-32*t1+PB_P-2)+32*t1+1][(32*t3+31)+(-32*t1+PB_P-2)+1] + 2;;
        }
        if (t1 >= max(max(max(ceild(PB_Q-PB_M,32),ceild(-32*t3+PB_Q-31,32)),ceild(PB_P,64)),ceild(-32*t2+PB_P+PB_Q-33,64))) {
          A[(-32*t1+PB_Q-1)-1][(-32*t1+PB_P-2)+32*t1+1][(-32*t1+PB_Q-1)+32*t1] = A[(-32*t1+PB_Q-1)][(-32*t1+PB_P-2)+32*t1][(-32*t1+PB_Q-1)+(-32*t1+PB_P-2)+1] - A[(-32*t1+PB_Q-1)-1][(-32*t1+PB_P-2)+32*t1+1][(-32*t1+PB_Q-1)+(-32*t1+PB_P-2)+1] + 2;;
        }
        if ((t1 <= floord(PB_Q-PB_M-1,32)) && (t1 >= max(max(ceild(PB_P-PB_Q+PB_M+1,32),ceild(-32*t2+PB_P+PB_M-32,32)),ceild(PB_P-1,64))) && (t3 >= ceild(PB_M-30,32))) {
          A[PB_M-1][(-32*t1+PB_P-2)+32*t1+1][PB_M+32*t1] = A[PB_M][(-32*t1+PB_P-2)+32*t1][PB_M+(-32*t1+PB_P-2)+1] - A[PB_M-1][(-32*t1+PB_P-2)+32*t1+1][PB_M+(-32*t1+PB_P-2)+1] + 2;;
        }
        if ((PB_P >= 2*PB_Q-2*PB_M-1) && (t1 <= floord(PB_P-1,64)) && (t1 >= max(ceild(PB_Q-PB_M-31,32),ceild(-32*t3+PB_Q-62,32))) && (t2 >= ceild(PB_Q-32,32)) && (t3 >= ceild(-PB_P+2*PB_Q-63,64))) {
          for (t5=max(max(max(1,ceild(-PB_P+2*PB_Q-1,2)),32*t3),-32*t1+PB_Q-32);t5<=min(min(min(PB_M,PB_Q-3),32*t3+31),-32*t1+PB_Q-1);t5++) {
            A[t5-1][(-t5+PB_Q-2)+(-t5+PB_Q-1)+1][t5+(-t5+PB_Q-1)] = A[t5][(-t5+PB_Q-2)+(-t5+PB_Q-1)][t5+(-t5+PB_Q-2)+1] - A[t5-1][(-t5+PB_Q-2)+(-t5+PB_Q-1)+1][t5+(-t5+PB_Q-2)+1] + 2;;
          }
        }
        t4 = ceild(PB_P+2*PB_M-2,2);
        if (t4 <= min(min(min(min(min(floord(PB_P+2*PB_M-1,2),floord(64*t3+PB_P+59,2)),PB_Q-2),32*t2+31),32*t1+PB_M+30),-32*t1+PB_P+PB_M-2)) {
          for (t6=t4-PB_M;t6<=-t4+PB_P+PB_M-1;t6++) {
            A[PB_M-1][(t4-PB_M-1)+t6+1][PB_M+t6] = A[PB_M][(t4-PB_M-1)+t6][PB_M+(t4-PB_M-1)+1] - A[PB_M-1][(t4-PB_M-1)+t6+1][PB_M+(t4-PB_M-1)+1] + 2;;
          }
        }
        if (t3 <= floord(PB_M-31,32)) {
          t4 = ceild(64*t3+PB_P+60,2);
          if (t4 <= min(min(min(min(floord(64*t3+PB_P+61,2),PB_Q-2),32*t2+31),32*t1+32*t3+61),-32*t1+32*t3+PB_P+29)) {
            for (t6=-32*t3+t4-31;t6<=32*t3-t4+PB_P+30;t6++) {
              A[(32*t3+31)-1][(-32*t3+t4-32)+t6+1][(32*t3+31)+t6] = A[(32*t3+31)][(-32*t3+t4-32)+t6][(32*t3+31)+(-32*t3+t4-32)+1] - A[(32*t3+31)-1][(-32*t3+t4-32)+t6+1][(32*t3+31)+(-32*t3+t4-32)+1] + 2;;
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
int za = zA;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3214211213_00(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
