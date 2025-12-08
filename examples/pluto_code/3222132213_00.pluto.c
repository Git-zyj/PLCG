#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222132213_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
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
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2][i_3]);
                }
            }
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    sum_A += A[i_0][i_1][i_2][i_3];
                }
            }
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
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            sum_E += E[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222132213_00(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 5) {
  if (PB_N >= 0) {
    lbp=0;
    ubp=floord(PB_M+2*PB_N-3,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=floord(PB_M-2,32);t2++) {
        if ((PB_N >= 3) && (t1 == 0) && (t2 <= min(floord(PB_M-3,32),floord(PB_N-1,32)))) {
          for (t3=0;t3<=1;t3++) {
            for (t4=max(2,32*t2);t4<=min(min(PB_M-3,PB_N-1),32*t2+31);t4++) {
              lbv=0;
              ubv=min(t3,-t4+PB_N-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5+t4][t4][(t3-t5)][t5] = C[t4][t5][t5] + C[t5][t4][(t3-t5)] + A[(t3-t5)+t4-1][t4-1][t5][(t3-t5)] - 6;;
              }
            }
          }
        }
        if (32*t2 == PB_M-2) {
          for (t3=max(2,32*t1);t3<=(min(PB_M-3,32*t1+31))-7;t3+=8) {
            if ((PB_M+30)%32 == 0) {
              B[t3+2][(PB_M-2)] = D[(PB_M-2)+1] - E[t3-2][t3] - D[(PB_M-2)] + E[(PB_M-2)][t3] - B[t3+2][(PB_M-2)-1] + B[t3+2][(PB_M-2)+1] - 3;;
              B[(t3+1)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+1)-2][(t3+1)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+1)] - B[(t3+1)+2][(PB_M-2)-1] + B[(t3+1)+2][(PB_M-2)+1] - 3;;
              B[(t3+2)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+2)-2][(t3+2)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+2)] - B[(t3+2)+2][(PB_M-2)-1] + B[(t3+2)+2][(PB_M-2)+1] - 3;;
              B[(t3+3)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+3)-2][(t3+3)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+3)] - B[(t3+3)+2][(PB_M-2)-1] + B[(t3+3)+2][(PB_M-2)+1] - 3;;
              B[(t3+4)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+4)-2][(t3+4)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+4)] - B[(t3+4)+2][(PB_M-2)-1] + B[(t3+4)+2][(PB_M-2)+1] - 3;;
              B[(t3+5)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+5)-2][(t3+5)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+5)] - B[(t3+5)+2][(PB_M-2)-1] + B[(t3+5)+2][(PB_M-2)+1] - 3;;
              B[(t3+6)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+6)-2][(t3+6)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+6)] - B[(t3+6)+2][(PB_M-2)-1] + B[(t3+6)+2][(PB_M-2)+1] - 3;;
              B[(t3+7)+2][(PB_M-2)] = D[(PB_M-2)+1] - E[(t3+7)-2][(t3+7)] - D[(PB_M-2)] + E[(PB_M-2)][(t3+7)] - B[(t3+7)+2][(PB_M-2)-1] + B[(t3+7)+2][(PB_M-2)+1] - 3;;
            }
          }
          for (;t3<=min(PB_M-3,32*t1+31);t3++) {
            if ((PB_M+30)%32 == 0) {
              B[t3+2][(PB_M-2)] = D[(PB_M-2)+1] - E[t3-2][t3] - D[(PB_M-2)] + E[(PB_M-2)][t3] - B[t3+2][(PB_M-2)-1] + B[t3+2][(PB_M-2)+1] - 3;;
            }
          }
        }
        if (t2 <= floord(PB_M-3,32)) {
          for (t3=max(2,32*t1);t3<=min(min(min(PB_M-3,2*PB_N-5),32*t1+31),-64*t2+2*PB_N-1);t3++) {
            if (t2 == 0) {
              B[t3+2][1] = D[1 +1] - E[t3-2][t3] - D[1] + E[1][t3] - B[t3+2][1 -1] + B[t3+2][1 +1] - 3;;
            }
            for (t4=max(2,32*t2);t4<=min(min(floord(-t3+2*PB_N-1,2),PB_M-3),32*t2+31);t4++) {
              if (t3 <= -t4+PB_N) {
                A[0 +t4][t4][t3][0] = C[t4][0][0] + C[0][t4][t3] + A[t3+t4-1][t4-1][0][t3] - 6;;
                B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
              }
              if (t3 >= -t4+PB_N+1) {
                B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
              }
              lbv=max(1,t3+t4-PB_N);
              ubv=min(t3,-t4+PB_N-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5+t4][t4][(t3-t5)][t5] = C[t4][t5][t5] + C[t5][t4][(t3-t5)] + A[(t3-t5)+t4-1][t4-1][t5][(t3-t5)] - 6;;
              }
            }
            for (t4=ceild(-t3+2*PB_N,2);t4<=min(PB_M-3,32*t2+31);t4++) {
              B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
            }
            if (t2 >= ceild(PB_M-33,32)) {
              B[t3+2][(PB_M-2)] = D[(PB_M-2)+1] - E[t3-2][t3] - D[(PB_M-2)] + E[(PB_M-2)][t3] - B[t3+2][(PB_M-2)-1] + B[t3+2][(PB_M-2)+1] - 3;;
            }
          }
        }
        if (t2 <= floord(PB_M-3,32)) {
          for (t3=max(32*t1,PB_M-2);t3<=min(min(2*PB_N-5,32*t1+31),-64*t2+2*PB_N-1);t3++) {
            for (t4=max(2,32*t2);t4<=min(min(floord(-t3+2*PB_N-1,2),PB_M-3),32*t2+31);t4++) {
              lbv=max(0,t3+t4-PB_N);
              ubv=min(t3,-t4+PB_N-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5+t4][t4][(t3-t5)][t5] = C[t4][t5][t5] + C[t5][t4][(t3-t5)] + A[(t3-t5)+t4-1][t4-1][t5][(t3-t5)] - 6;;
              }
            }
          }
        }
        if (t2 == 0) {
          for (t3=max(max(2,32*t1),2*PB_N-4);t3<=(min(min(PB_M-3,2*PB_N-1),32*t1+31))-7;t3+=8) {
            for (t4=1;t4<=min(31,PB_M-2);t4++) {
              B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
              B[(t3+1)+2][t4] = D[t4+1] - E[(t3+1)-2][(t3+1)] - D[t4] + E[t4][(t3+1)] - B[(t3+1)+2][t4-1] + B[(t3+1)+2][t4+1] - 3;;
              B[(t3+2)+2][t4] = D[t4+1] - E[(t3+2)-2][(t3+2)] - D[t4] + E[t4][(t3+2)] - B[(t3+2)+2][t4-1] + B[(t3+2)+2][t4+1] - 3;;
              B[(t3+3)+2][t4] = D[t4+1] - E[(t3+3)-2][(t3+3)] - D[t4] + E[t4][(t3+3)] - B[(t3+3)+2][t4-1] + B[(t3+3)+2][t4+1] - 3;;
              B[(t3+4)+2][t4] = D[t4+1] - E[(t3+4)-2][(t3+4)] - D[t4] + E[t4][(t3+4)] - B[(t3+4)+2][t4-1] + B[(t3+4)+2][t4+1] - 3;;
              B[(t3+5)+2][t4] = D[t4+1] - E[(t3+5)-2][(t3+5)] - D[t4] + E[t4][(t3+5)] - B[(t3+5)+2][t4-1] + B[(t3+5)+2][t4+1] - 3;;
              B[(t3+6)+2][t4] = D[t4+1] - E[(t3+6)-2][(t3+6)] - D[t4] + E[t4][(t3+6)] - B[(t3+6)+2][t4-1] + B[(t3+6)+2][t4+1] - 3;;
              B[(t3+7)+2][t4] = D[t4+1] - E[(t3+7)-2][(t3+7)] - D[t4] + E[t4][(t3+7)] - B[(t3+7)+2][t4-1] + B[(t3+7)+2][t4+1] - 3;;
            }
          }
          for (;t3<=min(min(PB_M-3,2*PB_N-1),32*t1+31);t3++) {
            for (t4=1;t4<=min(31,PB_M-2);t4++) {
              B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
            }
          }
        }
        if (t2 <= floord(PB_M-3,32)) {
          for (t3=max(max(2,32*t1),-64*t2+2*PB_N);t3<=(min(PB_M-3,32*t1+31))-7;t3+=8) {
            for (t4=max(1,32*t2);t4<=min(PB_M-2,32*t2+31);t4++) {
              B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
              B[(t3+1)+2][t4] = D[t4+1] - E[(t3+1)-2][(t3+1)] - D[t4] + E[t4][(t3+1)] - B[(t3+1)+2][t4-1] + B[(t3+1)+2][t4+1] - 3;;
              B[(t3+2)+2][t4] = D[t4+1] - E[(t3+2)-2][(t3+2)] - D[t4] + E[t4][(t3+2)] - B[(t3+2)+2][t4-1] + B[(t3+2)+2][t4+1] - 3;;
              B[(t3+3)+2][t4] = D[t4+1] - E[(t3+3)-2][(t3+3)] - D[t4] + E[t4][(t3+3)] - B[(t3+3)+2][t4-1] + B[(t3+3)+2][t4+1] - 3;;
              B[(t3+4)+2][t4] = D[t4+1] - E[(t3+4)-2][(t3+4)] - D[t4] + E[t4][(t3+4)] - B[(t3+4)+2][t4-1] + B[(t3+4)+2][t4+1] - 3;;
              B[(t3+5)+2][t4] = D[t4+1] - E[(t3+5)-2][(t3+5)] - D[t4] + E[t4][(t3+5)] - B[(t3+5)+2][t4-1] + B[(t3+5)+2][t4+1] - 3;;
              B[(t3+6)+2][t4] = D[t4+1] - E[(t3+6)-2][(t3+6)] - D[t4] + E[t4][(t3+6)] - B[(t3+6)+2][t4-1] + B[(t3+6)+2][t4+1] - 3;;
              B[(t3+7)+2][t4] = D[t4+1] - E[(t3+7)-2][(t3+7)] - D[t4] + E[t4][(t3+7)] - B[(t3+7)+2][t4-1] + B[(t3+7)+2][t4+1] - 3;;
            }
          }
          for (;t3<=min(PB_M-3,32*t1+31);t3++) {
            for (t4=max(1,32*t2);t4<=min(PB_M-2,32*t2+31);t4++) {
              B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
            }
          }
        }
      }
    }
  }
  if (PB_N <= -1) {
    lbp=0;
    ubp=floord(PB_M-3,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=floord(PB_M-2,32);t2++) {
        for (t3=max(2,32*t1);t3<=(min(PB_M-3,32*t1+31))-7;t3+=8) {
          for (t4=max(1,32*t2);t4<=min(PB_M-2,32*t2+31);t4++) {
            B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
            B[(t3+1)+2][t4] = D[t4+1] - E[(t3+1)-2][(t3+1)] - D[t4] + E[t4][(t3+1)] - B[(t3+1)+2][t4-1] + B[(t3+1)+2][t4+1] - 3;;
            B[(t3+2)+2][t4] = D[t4+1] - E[(t3+2)-2][(t3+2)] - D[t4] + E[t4][(t3+2)] - B[(t3+2)+2][t4-1] + B[(t3+2)+2][t4+1] - 3;;
            B[(t3+3)+2][t4] = D[t4+1] - E[(t3+3)-2][(t3+3)] - D[t4] + E[t4][(t3+3)] - B[(t3+3)+2][t4-1] + B[(t3+3)+2][t4+1] - 3;;
            B[(t3+4)+2][t4] = D[t4+1] - E[(t3+4)-2][(t3+4)] - D[t4] + E[t4][(t3+4)] - B[(t3+4)+2][t4-1] + B[(t3+4)+2][t4+1] - 3;;
            B[(t3+5)+2][t4] = D[t4+1] - E[(t3+5)-2][(t3+5)] - D[t4] + E[t4][(t3+5)] - B[(t3+5)+2][t4-1] + B[(t3+5)+2][t4+1] - 3;;
            B[(t3+6)+2][t4] = D[t4+1] - E[(t3+6)-2][(t3+6)] - D[t4] + E[t4][(t3+6)] - B[(t3+6)+2][t4-1] + B[(t3+6)+2][t4+1] - 3;;
            B[(t3+7)+2][t4] = D[t4+1] - E[(t3+7)-2][(t3+7)] - D[t4] + E[t4][(t3+7)] - B[(t3+7)+2][t4-1] + B[(t3+7)+2][t4+1] - 3;;
          }
        }
        for (;t3<=min(PB_M-3,32*t1+31);t3++) {
          for (t4=max(1,32*t2);t4<=min(PB_M-2,32*t2+31);t4++) {
            B[t3+2][t4] = D[t4+1] - E[t3-2][t3] - D[t4] + E[t4][t3] - B[t3+2][t4-1] + B[t3+2][t4+1] - 3;;
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
int va = vA;
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int xe = xE;
int ye = yE;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3222132213_00(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
