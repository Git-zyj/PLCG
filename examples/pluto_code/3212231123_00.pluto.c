#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212231123_00.h"
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
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
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
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
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
                sum_A += A[i_0][i_1][i_2];
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
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
void kernel_3212231123_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 3) {
  if ((PB_M >= 0) && (PB_P >= -PB_M+4)) {
    for (t1=0;t1<=min(floord(PB_P+PB_M-1,32),floord(3*PB_P+PB_M-9,32));t1++) {
      lbp=max(max(0,ceild(32*t1-3*PB_P-PB_M+10,32)),ceild(32*t1-PB_P-PB_M+2,32));
      ubp=min(min(min(floord(PB_P-2,32),floord(-32*t1+3*PB_P+PB_M-7,64)),floord(32*t1+PB_P+2*PB_M-4,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=32*t1-32*t2;t3<=min(min(32*t2,PB_M-1),32*t1-32*t2+31);t3++) {
          for (t4=max(1,32*t2);t4<=min(PB_P-2,32*t2+31);t4++) {
            for (t5=0;t5<=PB_P-2;t5++) {
              B[t3][t4][t5+1] = E[t3+1][t4] * C[t4-1][t3][0] - B[t3][t5+1][t4+1] + 3;;
            }
          }
        }
        if ((PB_M >= 2) && (t1 == 0) && (t2 == 0)) {
          for (t4=1;t4<=min(31,PB_P-2);t4++) {
            for (t5=0;t5<=PB_P-2;t5++) {
              B[1][t4][t5+1] = E[1 +1][t4] * C[t4-1][1][0] - B[1][t5+1][t4+1] + 3;;
            }
          }
        }
        for (t3=max(max(2,32*t1-32*t2),32*t2+1);t3<=min(min(min(PB_M-1,PB_P-2),32*t1-32*t2+31),-32*t2+PB_P-1);t3++) {
          for (t4=max(1,32*t2);t4<=min(min(32*t2+31,t3-1),-t3+PB_P-1);t4++) {
            for (t5=-t4+1;t5<=-1;t5++) {
              A[t4][t3][t4+1] = C[t5+t4-1][t3][t4] * D[t4][t3+1][t3+1] + D[t4-1][t5][t4+t3] - A[t4+1][t3+1][t4+2] * 2;;
            }
            for (t5=0;t5<=PB_P-2;t5++) {
              A[t4][t3][t4+1] = C[t5+t4-1][t3][t4] * D[t4][t3+1][t3+1] + D[t4-1][t5][t4+t3] - A[t4+1][t3+1][t4+2] * 2;;
              B[t3][t4][t5+1] = E[t3+1][t4] * C[t4-1][t3][0] - B[t3][t5+1][t4+1] + 3;;
            }
            A[t4][t3][t4+1] = C[(PB_P-1)+t4-1][t3][t4] * D[t4][t3+1][t3+1] + D[t4-1][(PB_P-1)][t4+t3] - A[t4+1][t3+1][t4+2] * 2;;
          }
          for (t4=-t3+PB_P;t4<=min(32*t2+31,t3-1);t4++) {
            for (t5=0;t5<=PB_P-2;t5++) {
              B[t3][t4][t5+1] = E[t3+1][t4] * C[t4-1][t3][0] - B[t3][t5+1][t4+1] + 3;;
            }
          }
          if (t1 == 2*t2) {
            for (t4=t3;t4<=min(PB_P-2,16*t1+31);t4++) {
              for (t5=0;t5<=PB_P-2;t5++) {
                if (t1%2 == 0) {
                  B[t3][t4][t5+1] = E[t3+1][t4] * C[t4-1][t3][0] - B[t3][t5+1][t4+1] + 3;;
                }
              }
            }
          }
        }
        for (t3=max(max(max(2,PB_M),32*t1-32*t2),32*t2+1);t3<=min(min(PB_P-2,32*t1-32*t2+31),-32*t2+PB_P-1);t3++) {
          for (t4=max(1,32*t2);t4<=min(min(32*t2+31,t3-1),-t3+PB_P-1);t4++) {
            for (t5=-t4+1;t5<=PB_P-1;t5++) {
              A[t4][t3][t4+1] = C[t5+t4-1][t3][t4] * D[t4][t3+1][t3+1] + D[t4-1][t5][t4+t3] - A[t4+1][t3+1][t4+2] * 2;;
            }
          }
        }
        if ((PB_P <= PB_M) && (t1 <= floord(PB_P-1,32)) && (t1 >= ceild(PB_P-32,32)) && (t2 == 0)) {
          for (t4=1;t4<=min(31,PB_P-2);t4++) {
            for (t5=0;t5<=PB_P-2;t5++) {
              B[(PB_P-1)][t4][t5+1] = E[(PB_P-1)+1][t4] * C[t4-1][(PB_P-1)][0] - B[(PB_P-1)][t5+1][t4+1] + 3;;
            }
          }
        }
        for (t3=max(max(32*t1-32*t2,-32*t2+PB_P),32*t2+1);t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
          for (t4=max(1,32*t2);t4<=min(PB_P-2,32*t2+31);t4++) {
            for (t5=0;t5<=PB_P-2;t5++) {
              B[t3][t4][t5+1] = E[t3+1][t4] * C[t4-1][t3][0] - B[t3][t5+1][t4+1] + 3;;
            }
          }
        }
      }
    }
  }
  if ((PB_M <= -1) && (PB_P >= 4)) {
    for (t1=0;t1<=floord(PB_P-1,32);t1++) {
      lbp=max(0,ceild(32*t1-PB_P+2,32));
      ubp=min(floord(t1,2),floord(PB_P-2,64));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(2,32*t1-32*t2),32*t2+1);t3<=min(min(PB_P-2,32*t1-32*t2+31),-32*t2+PB_P-1);t3++) {
          for (t4=max(1,32*t2);t4<=min(min(32*t2+31,t3-1),-t3+PB_P-1);t4++) {
            for (t5=-t4+1;t5<=PB_P-1;t5++) {
              A[t4][t3][t4+1] = C[t5+t4-1][t3][t4] * D[t4][t3+1][t3+1] + D[t4-1][t5][t4+t3] - A[t4+1][t3+1][t4+2] * 2;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3212231123_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
