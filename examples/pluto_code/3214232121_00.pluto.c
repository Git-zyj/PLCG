#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214232121_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            for (i_3 = 0; i_3 < vb; i_3++) {
                B[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
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
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        for (i_2 = 0; i_2 < zf; i_2++) {
            F[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xg; i_0++) {
    for (i_1 = 0; i_1 < yg; i_1++) {
        for (i_2 = 0; i_2 < zg; i_2++) {
            G[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg))
{
int i_0, i_1, i_2, i_3;
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2][i_3]);
                }
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
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("G");
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    sum_B += B[i_0][i_1][i_2][i_3];
                }
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
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                sum_F += F[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                sum_G += G[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214232121_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 5) {
  if (PB_L >= 0) {
    lbp=0;
    ubp=floord(PB_M+PB_L-4,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(max(0,ceild(32*t1-PB_M-27,32)),ceild(1024*t1-32*PB_M-31*PB_L+128,32));t2<=min(min(min(min(min(min(floord(3*t1+2,2),floord(32*t1+PB_L+19,32)),floord(-64*t1+2*PB_M+3*PB_L-7,32)),floord(-32*t1+PB_M+3*PB_L-3,32)),floord(64*t1+PB_M+55,64)),floord(64*t1+61*PB_M+60*PB_L-305,1984)),floord(672*t1+59*PB_M+257*PB_L-236,4448));t2++) {
        for (t3=max(max(max(max(max(max(max(0,ceild(-7*t1+71*t2-PB_M-4*PB_L+4,7)),ceild(32*t1+32*t2-PB_M-2*PB_L-25,32)),ceild(480*t1+256*t2-15*PB_M-23*PB_L+52,32)),ceild(64*t2-PB_M-2*PB_L-55,64)),ceild(1952*t2-60*PB_M-61*PB_L+299,64)),ceild(1056*t1+1056*t2-33*PB_M-94*PB_L+99,160)),-t1+t2-1);t3<=min(min(min(min(floord(2*t2+1,6),floord(PB_L,32)),floord(PB_M-5,64)),floord(-32*t1+32*t2+PB_M+27,96)),floord(-1024*t1+32*t2+32*PB_M+31*PB_L-128,1088));t3++) {
          if ((PB_L <= 4) && (t3 == 0)) {
            for (t4=max(32*t1,32*t2+1);t4<=min(min(PB_M-4,32*t1+31),-32*t2+PB_M-3);t4++) {
              for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((PB_L >= 5) && (t2 <= floord(2*PB_Q+PB_L-3,32)) && (t2 >= ceild(PB_L+62,32)) && (t3 == 0)) {
            for (t4=max(32*t1,32*t2+1);t4<=min(32*t1+31,-32*t2+PB_M-3);t4++) {
              for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((PB_L >= 5) && (t2 >= ceild(2*PB_Q+PB_L-2,32)) && (t3 == 0)) {
            for (t4=max(32*t1,32*t2+1);t4<=min(min(PB_M-4,32*t1+31),-32*t2+PB_M-3);t4++) {
              for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((PB_L >= 5) && (PB_Q <= 0) && (t2 <= floord(2*PB_Q+PB_L-3,32)) && (t3 == 0)) {
            for (t4=max(32*t1,32*t2+1);t4<=min(min(PB_M-4,32*t1+31),-32*t2+PB_M-3);t4++) {
              for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((PB_L >= 5) && (PB_Q >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=1;t4<=min(4,PB_M-4);t4++) {
              for (t5=0;t5<=min(t4-1,-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((t2 <= min(floord(2*PB_Q+PB_L-3,32),floord(64*t3+PB_L+61,32))) && (t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
            for (t4=max(max(max(max(ceild(64*t2-PB_M+7,2),ceild(64*t2+4,3)),32*t1),32*t2-PB_Q+2),32*t2-32*t3-30);t4<=min(min(min(min(min(floord(-32*t2+2*PB_M+3*PB_L-11,2),2*PB_L-2),32*t1+31),64*t2-128*t3+62),32*t2-96*t3+PB_M+27),-32*t3+PB_M+PB_L-5);t4++) {
              for (t5=max(max(ceild(128*t3+t4,2),32*t2),96*t3+t4-PB_M+4);t5<=min(min(min(min(min(min(min(floord(3*t4-4,2),floord(2*t4+PB_M-7,2)),32*t2+31),2*PB_Q+PB_L-3),32*t3+t4+30),64*t3+PB_L+61),t4+PB_Q-2),-2*t4+2*PB_M+3*PB_L-11);t5++) {
                for (t6=max(max(ceild(t5-PB_L+1,2),32*t3),-t4+t5+1);t6<=min(min(min(floord(-t4+t5+PB_M-4,3),floord(-t4+2*t5,4)),PB_Q-1),32*t3+31);t6++) {
                  B[t6+(t4-t5+2*t6)][(t5-2*t6)-2][t6][(t4-t5+2*t6)] = E[(t5-2*t6)][t6] - F[t6][(t4-t5+2*t6)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(t4-t5+2*t6)+3][(t5-2*t6)-4][t6+1][(t4-t5+2*t6)+2] * 5;;
                }
              }
            }
          }
          if ((t2 <= min(floord(PB_L+61,32),floord(2*PB_Q+PB_L-3,32))) && (t3 == 0)) {
            for (t4=max(max(max(max(ceild(64*t2-PB_M+7,2),ceild(64*t2+4,3)),32*t1),32*t2-30),32*t2-PB_Q+2);t4<=min(min(min(floord(-32*t2+2*PB_M+3*PB_L-11,2),32*t2),2*PB_L-2),32*t1+31);t4++) {
              for (t5=32*t2;t5<=min(min(min(min(min(min(floord(3*t4-4,2),floord(2*t4+PB_M-7,2)),PB_L+61),t4+30),2*PB_Q+PB_L-3),t4+PB_Q-2),-2*t4+2*PB_M+3*PB_L-11);t5++) {
                for (t6=max(ceild(t5-PB_L+1,2),-t4+t5+1);t6<=min(min(min(31,floord(-t4+t5+PB_M-4,3)),floord(-t4+2*t5,4)),PB_Q-1);t6++) {
                  B[t6+(t4-t5+2*t6)][(t5-2*t6)-2][t6][(t4-t5+2*t6)] = E[(t5-2*t6)][t6] - F[t6][(t4-t5+2*t6)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(t4-t5+2*t6)+3][(t5-2*t6)-4][t6+1][(t4-t5+2*t6)+2] * 5;;
                }
              }
            }
          }
          if ((PB_L >= 5) && (PB_Q >= 1) && (t2 <= min(floord(PB_L+61,32),floord(2*PB_Q+PB_L-3,32))) && (t3 == 0)) {
            for (t4=max(max(5,32*t1),32*t2+1);t4<=min(min(min(min(2*PB_L-2,PB_M-4),32*t1+31),64*t2+62),-32*t2+PB_M-3);t4++) {
              if (t2 == 0) {
                for (t5=0;t5<=min(3,-t4+PB_M-3);t5++) {
                  A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
                }
              }
              for (t5=max(4,32*t2);t5<=min(floord(t4-1,2),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
              for (t5=max(max(4,ceild(t4,2)),32*t2);t5<=min(min(min(min(PB_L+61,32*t2+31),t4-1),2*PB_Q+PB_L-3),-t4+PB_M-3);t5++) {
                if (t5 <= PB_L-1) {
                  B[0 +(t4-t5)][t5-2][0][(t4-t5)] = E[t5][0] - F[0][(t4-t5)][t5-1] * G[0][t5][0] + B[0 +(t4-t5)+3][t5-4][0 +1][(t4-t5)+2] * 5;;
                  A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
                }
                if (t5 >= PB_L) {
                  A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
                }
                for (t6=max(1,ceild(t5-PB_L+1,2));t6<=min(min(min(31,floord(t5-4,2)),floord(-t4+2*t5,4)),PB_Q-1);t6++) {
                  B[t6+(t4-t5+2*t6)][(t5-2*t6)-2][t6][(t4-t5+2*t6)] = E[(t5-2*t6)][t6] - F[t6][(t4-t5+2*t6)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(t4-t5+2*t6)+3][(t5-2*t6)-4][t6+1][(t4-t5+2*t6)+2] * 5;;
                }
              }
              for (t5=2*PB_Q+PB_L-2;t5<=min(min(min(PB_L+61,32*t2+31),t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
              for (t5=max(max(4,ceild(t4,2)),-t4+PB_M-2);t5<=min(min(min(PB_L+61,32*t2+31),t4-1),2*PB_Q+PB_L-3);t5++) {
                for (t6=max(0,ceild(t5-PB_L+1,2));t6<=min(min(min(31,floord(t5-4,2)),floord(-t4+2*t5,4)),PB_Q-1);t6++) {
                  B[t6+(t4-t5+2*t6)][(t5-2*t6)-2][t6][(t4-t5+2*t6)] = E[(t5-2*t6)][t6] - F[t6][(t4-t5+2*t6)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(t4-t5+2*t6)+3][(t5-2*t6)-4][t6+1][(t4-t5+2*t6)+2] * 5;;
                }
              }
              for (t5=PB_L+62;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
              if (t1 == t2) {
                for (t5=t4;t5<=min(min(min(min(min(floord(3*t4-4,2),PB_L+61),32*t1+31),2*t4-6),2*PB_Q+PB_L-3),t4+PB_Q-2);t5++) {
                  for (t6=max(ceild(t5-PB_L+1,2),-t4+t5+1);t6<=min(min(31,floord(-t4+2*t5,4)),PB_Q-1);t6++) {
                    B[t6+(t4-t5+2*t6)][(t5-2*t6)-2][t6][(t4-t5+2*t6)] = E[(t5-2*t6)][t6] - F[t6][(t4-t5+2*t6)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(t4-t5+2*t6)+3][(t5-2*t6)-4][t6+1][(t4-t5+2*t6)+2] * 5;;
                  }
                }
              }
            }
          }
          if ((PB_L >= 5) && (PB_Q >= 1) && (t2 <= min(floord(PB_L+61,32),floord(2*PB_Q+PB_L-3,32))) && (t3 == 0)) {
            for (t4=max(max(32*t1,2*PB_L-1),32*t2+1);t4<=min(min(min(PB_M-4,32*t1+31),64*t2+62),-32*t2+PB_M-3);t4++) {
              for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((PB_L >= 5) && (PB_M <= min(65,2*PB_L+1)) && (PB_M >= 8) && (PB_Q >= 1) && (t1 <= floord(PB_M-3,32)) && (t1 >= ceild(PB_M-34,32)) && (t2 == 0) && (t3 == 0)) {
            for (t5=max(4,ceild(PB_M-3,2));t5<=min(min(min(min(31,floord(3*PB_M-13,2)),2*PB_M-12),PB_M+PB_Q-5),2*PB_Q+PB_L-3);t5++) {
              for (t6=max(max(0,ceild(t5-PB_L+1,2)),t5-PB_M+4);t6<=min(min(floord(t5-4,2),floord(2*t5-PB_M+3,4)),PB_Q-1);t6++) {
                B[t6+(-t5+2*t6+PB_M-3)][(t5-2*t6)-2][t6][(-t5+2*t6+PB_M-3)] = E[(t5-2*t6)][t6] - F[t6][(-t5+2*t6+PB_M-3)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(-t5+2*t6+PB_M-3)+3][(t5-2*t6)-4][t6+1][(-t5+2*t6+PB_M-3)+2] * 5;;
              }
            }
          }
          if ((PB_L >= 5) && (PB_Q >= 1) && (t2 <= min(floord(PB_L+61,32),floord(2*PB_Q+PB_L-3,32))) && (t3 == 0)) {
            for (t4=max(32*t1,64*t2+63);t4<=min(min(PB_M-4,32*t1+31),-32*t2+PB_M-3);t4++) {
              for (t5=32*t2;t5<=min(32*t2+31,-t4+PB_M-3);t5++) {
                A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
              }
            }
          }
          if ((PB_L >= 5) && (PB_Q >= 1) && (t2 <= min(floord(PB_L+61,32),floord(2*PB_Q+PB_L-3,32))) && (t3 == 0)) {
            for (t4=max(max(max(5,32*t1),32*t2+1),-32*t2+PB_M-2);t4<=min(min(min(min(min(floord(-32*t2+2*PB_M+3*PB_L-11,2),2*PB_L-2),32*t1+31),64*t2+62),PB_M+PB_L-5),32*t2+PB_M+27);t4++) {
              for (t5=max(max(max(4,ceild(t4,2)),32*t2),t4-PB_M+4);t5<=min(min(min(min(min(min(min(floord(3*t4-4,2),floord(2*t4+PB_M-7,2)),PB_L+61),32*t2+31),2*t4-6),2*PB_Q+PB_L-3),t4+PB_Q-2),-2*t4+2*PB_M+3*PB_L-11);t5++) {
                for (t6=max(max(0,ceild(t5-PB_L+1,2)),-t4+t5+1);t6<=min(min(min(min(31,floord(t5-4,2)),floord(-t4+t5+PB_M-4,3)),floord(-t4+2*t5,4)),PB_Q-1);t6++) {
                  B[t6+(t4-t5+2*t6)][(t5-2*t6)-2][t6][(t4-t5+2*t6)] = E[(t5-2*t6)][t6] - F[t6][(t4-t5+2*t6)][(t5-2*t6)-1] * G[t6][(t5-2*t6)][t6] + B[t6+(t4-t5+2*t6)+3][(t5-2*t6)-4][t6+1][(t4-t5+2*t6)+2] * 5;;
                }
              }
            }
          }
        }
      }
    }
  }
  if (PB_L <= -1) {
    lbp=0;
    ubp=floord(PB_M-4,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=min(min(floord(-32*t1+PB_M-3,32),floord(PB_M-4,64)),t1);t2++) {
        for (t4=max(32*t1,32*t2+1);t4<=min(min(PB_M-4,32*t1+31),-32*t2+PB_M-3);t4++) {
          for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),-t4+PB_M-3);t5++) {
            A[t5+t4+2][t5] = C[t4][t5] + D[t5] + D[t5] - 4;;
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
int vb = vB;
int xc = xC;
int yc = yC;
int xd = xD;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int yg = yG;
int zg = zG;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), INIT_SEED);
kernel_3214232121_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
