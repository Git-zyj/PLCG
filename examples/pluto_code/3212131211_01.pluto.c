#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212131211_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
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
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
void kernel_3212131211_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 2) {
  if ((PB_L >= 0) && (PB_M >= max(0,-2*PB_L+4)) && (PB_P >= ceild(-PB_L+6,2))) {
    for (t1=0;t1<=min(min(floord(3*PB_P+PB_L-3,32),floord(7*PB_P+PB_L-15,32)),floord(PB_P+PB_M+PB_L-3,32));t1++) {
      lbp=max(max(max(max(max(max(0,ceild(32*t1-PB_M-PB_L+1,32)),ceild(32*t1-PB_P-PB_L+1,32)),ceild(32*t1-PB_L,64)),ceild(64*t1-2*PB_M-3*PB_L+4,64)),ceild(64*t1-PB_M-2*PB_L+2,96)),ceild(128*t1-PB_M-4*PB_L+4,256));
      ubp=min(min(min(min(floord(PB_P-1,16),floord(2*PB_P+PB_M-4,64)),floord(32*t1+PB_P+30,64)),floord(2*PB_P+2*PB_M+3*PB_L-10,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((t2 <= floord(PB_M-2,32)) && (t2 >= ceild(PB_P-1,32))) {
          for (t3=max(max(2,32*t1-32*t2),32*t2-PB_P+1);t3<=min(PB_P-1,32*t1-32*t2+31);t3++) {
            lbv=32*t2;
            ubv=min(min(PB_M-2,32*t2+31),t3+PB_P-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[t3-1][(-t3+t4)+1] = C[t3][(-t3+t4)][0] + D[(-t3+t4)+t3+1] * E[(-t3+t4)][t3] + E[(-t3+t4)+1][t3] * A[t3-2][(-t3+t4)+1] * A[t3][(-t3+t4)] * A[t3][(-t3+t4)+1] * 6;;
            }
          }
        }
        if ((t2 <= floord(PB_P-2,32)) && (t2 >= ceild(PB_M-1,32))) {
          for (t3=max(1,32*t1-32*t2);t3<=min(PB_L-1,32*t1-32*t2+31);t3++) {
            lbv=32*t2;
            ubv=min(PB_P-2,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
            }
          }
        }
        if ((PB_L >= 2) && (t1 == t2) && (t1 <= min(floord(PB_M-2,32),floord(PB_P-2,32)))) {
          lbv=32*t1;
          ubv=min(PB_P-2,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[1][t4+1] = E[t4][1] + E[t4+1][1 -1] + 6;;
          }
        }
        if (t2 <= min(floord(PB_M-2,32),floord(PB_P-2,32))) {
          for (t3=max(2,32*t1-32*t2);t3<=min(min(min(min(PB_L-1,PB_M-2),PB_P-1),32*t2+31),32*t1-32*t2+31);t3++) {
            if (t1 == 2*t2) {
              lbv=16*t1;
              ubv=t3-1;
#pragma ivdep
#pragma vector always
              for (t4=lbv;t4<=ubv;t4++) {
                if (t1%2 == 0) {
                  B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
                }
              }
            }
            lbv=max(32*t2,t3);
            ubv=min(min(PB_M-2,PB_P-2),32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[t3-1][(-t3+t4)+1] = C[t3][(-t3+t4)][0] + D[(-t3+t4)+t3+1] * E[(-t3+t4)][t3] + E[(-t3+t4)+1][t3] * A[t3-2][(-t3+t4)+1] * A[t3][(-t3+t4)] * A[t3][(-t3+t4)+1] * 6;;
              B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
            }
            lbv=PB_P-1;
            ubv=min(min(PB_M-2,32*t2+31),t3+PB_P-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[t3-1][(-t3+t4)+1] = C[t3][(-t3+t4)][0] + D[(-t3+t4)+t3+1] * E[(-t3+t4)][t3] + E[(-t3+t4)+1][t3] * A[t3-2][(-t3+t4)+1] * A[t3][(-t3+t4)] * A[t3][(-t3+t4)+1] * 6;;
            }
            lbv=PB_M-1;
            ubv=min(PB_P-2,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
            }
          }
        }
        if (t2 <= min(floord(PB_M-2,32),floord(PB_P-2,32))) {
          for (t3=max(max(2,PB_L),32*t1-32*t2);t3<=min(min(min(PB_M-2,PB_P-1),32*t2+31),32*t1-32*t2+31);t3++) {
            lbv=max(32*t2,t3);
            ubv=min(min(PB_M-2,32*t2+31),t3+PB_P-1);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              A[t3-1][(-t3+t4)+1] = C[t3][(-t3+t4)][0] + D[(-t3+t4)+t3+1] * E[(-t3+t4)][t3] + E[(-t3+t4)+1][t3] * A[t3-2][(-t3+t4)+1] * A[t3][(-t3+t4)] * A[t3][(-t3+t4)+1] * 6;;
            }
          }
        }
        if (t2 <= min(floord(PB_M-2,32),floord(PB_P-2,32))) {
          for (t3=max(32*t1-32*t2,32*t2+32);t3<=min(PB_L-1,32*t1-32*t2+31);t3++) {
            lbv=32*t2;
            ubv=min(PB_P-2,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
            }
          }
        }
        if ((t1 == 2*t2) && (t1 <= floord(PB_P-2,16))) {
          for (t3=PB_P;t3<=min(min(PB_L-1,PB_M-2),16*t1+31);t3++) {
            lbv=16*t1;
            ubv=PB_P-2;
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              if (t1%2 == 0) {
                B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 <= min(floord(PB_M-2,16),floord(PB_P-2,16)))) {
          for (t3=max(2,PB_M-1);t3<=min(PB_L-1,16*t1+31);t3++) {
            lbv=16*t1;
            ubv=min(PB_P-2,16*t1+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              if (t1%2 == 0) {
                B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_M >= 4) && (PB_P >= 3)) {
    for (t1=0;t1<=min(min(floord(PB_M-2,16),floord(3*PB_P-3,32)),floord(PB_P+PB_M-3,32));t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_P+1,32));
      ubp=min(min(min(floord(PB_P-1,16),floord(PB_M-2,32)),floord(32*t1+PB_P+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(2,32*t1-32*t2),32*t2-PB_P+1);t3<=min(min(PB_M-2,PB_P-1),32*t1-32*t2+31);t3++) {
          lbv=max(32*t2,t3);
          ubv=min(min(PB_M-2,32*t2+31),t3+PB_P-1);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3-1][(-t3+t4)+1] = C[t3][(-t3+t4)][0] + D[(-t3+t4)+t3+1] * E[(-t3+t4)][t3] + E[(-t3+t4)+1][t3] * A[t3-2][(-t3+t4)+1] * A[t3][(-t3+t4)] * A[t3][(-t3+t4)+1] * 6;;
          }
        }
      }
    }
  }
  if ((PB_L >= 2) && (PB_M <= -1)) {
    for (t1=0;t1<=floord(PB_P+PB_L-3,32);t1++) {
      lbp=max(0,ceild(32*t1-PB_L+1,32));
      ubp=min(floord(PB_P-2,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(1,32*t1-32*t2);t3<=min(PB_L-1,32*t1-32*t2+31);t3++) {
          lbv=32*t2;
          ubv=min(PB_P-2,32*t2+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][t4+1] = E[t4][t3] + E[t4+1][t3-1] + 6;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int xe = xE;
int ye = yE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3212131211_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
