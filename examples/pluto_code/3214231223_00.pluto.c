#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214231223_00.h"
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
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
void kernel_3214231223_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 4) {
  for (t1=-1;t1<=floord(PB_M-2,16);t1++) {
    lbp=max(ceild(t1,2),ceild(32*t1-PB_M+3,32));
    ubp=min(min(floord(PB_M-3,16),floord(16*t1+PB_M+13,32)),floord(32*t1+PB_M+27,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(ceild(2*t1-2*t2-1,2),ceild(-2*t1+8*t2-5,4)),ceild(48*t2-PB_M-13,16)),ceild(-16*t1+96*t2-PB_M-45,32));t3<=min(min(min(min(min(floord(PB_M-3,8),floord(-16*t1+16*t2+PB_M-2,8)),floord(16*t1-16*t2+2*PB_M+9,16)),floord(64*t2+PB_M+58,32)),floord(-16*t1+64*t2+PB_M+44,32)),floord(112*t1-64*t2+17*PB_M+78,160));t3++) {
        if (t2 >= ceild(t3+2,2)) {
          for (t4=max(max(16*t1-1,32*t1-32*t2),48*t2-16*t3-15);t4<=min(min(min(min(PB_M-3,16*t1+30),32*t2+29),32*t3+24),24*t1-24*t2+8*t3+29);t4++) {
            for (t5=max(max(32*t2,t4+2),-32*t1+32*t2+2*t4-29);t5<=min(min(floord(32*t3+2*t4+30,3),32*t2+31),-32*t1+32*t2+2*t4+2);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=32*t3+31;t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
          }
        }
        if (t2 <= floord(t3-2,2)) {
          for (t4=max(max(max(max(max(max(1,ceild(64*t1-64*t2+32*t3-PB_M-1,3)),16*t1-1),32*t1-32*t2),32*t2-PB_M+4),48*t2-16*t3-15),32*t3-3*PB_M+11);t4<=min(min(min(min(16*t1+30,32*t2+29),24*t1-24*t2+8*t3+29),32*t1-32*t2+PB_M+25),64*t2-32*t3+PB_M+59);t4++) {
            for (t5=max(max(max(ceild(32*t3+t4-PB_M+3,2),32*t2),t4+2),-32*t1+32*t2+2*t4-29);t5<=min(min(min(floord(32*t3+2*t4+30,3),32*t2+31),t4+PB_M-4),-32*t1+32*t2+2*t4+2);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=min(32*t3+31,-t4+2*t5+PB_M-3);t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
          }
        }
        if ((t1 <= min(floord(64*t2-32*t3+PB_M-2,16),2*t2-1)) && (t1 >= max(max(1,ceild(32*t2-PB_M+5,16)),3*t2-t3)) && (t2 <= floord(t3+1,2)) && (t2 >= ceild(t3-1,2))) {
          for (t6=max(32*t3,-32*t1+96*t2+3);t6<=min(32*t3+31,-16*t1+64*t2+PB_M-2);t6++) {
            B[(16*t1-64*t2+t6-1)+2][(-16*t1+32*t2+1)-2] = C[(16*t1-64*t2+t6-1)][(16*t1-1)][(-16*t1+32*t2+1)+1] + D[(-16*t1+32*t2+1)][(16*t1-64*t2+t6-1)+1][(16*t1-1)] - D[(16*t1-64*t2+t6-1)-1][(-16*t1+32*t2+1)-1][(16*t1-1)] * 6;;
          }
        }
        if ((t1 == 2*t2) && (t1 <= t3+1) && (t1 >= max(max(2,ceild(32*t3-PB_M-1,16)),t3-1))) {
          for (t6=max(32*t3,16*t1+7);t6<=min(32*t3+31,16*t1+PB_M+1);t6++) {
            if (t1%2 == 0) {
              B[(-16*t1+t6-4)+2][2 -2] = C[(-16*t1+t6-4)][16*t1][2 +1] + D[2][(-16*t1+t6-4)+1][16*t1] - D[(-16*t1+t6-4)-1][2 -1][16*t1] * 6;;
            }
          }
        }
        if ((PB_M <= 5) && (t2 == 0) && (t3 == 0)) {
          for (t4=1;t4<=min(PB_M-3,32*t1+PB_M+28);t4++) {
            for (t5=max(t4+2,-32*t1+2*t4-30);t5<=min(-32*t1+2*t4+1,t4+PB_M-2);t5++) {
              B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
            }
          }
        }
        if ((t2 <= floord(t3+1,2)) && (t2 >= ceild(t3-1,2))) {
          for (t4=max(max(max(max(1,16*t1),16*t1-16*t2+8*t3),32*t2-PB_M+2),16*t3-PB_M+3);t4<=min(min(min(16*t1+30,48*t2-16*t3-16),16*t1-16*t2+8*t3+23),32*t1-32*t2+PB_M+28);t4++) {
            for (t5=max(max(32*t2,16*t3+1),-32*t1+32*t2+2*t4-30);t5<=min(min(min(32*t2+31,16*t3+16),t4+PB_M-2),-32*t1+32*t2+2*t4+1);t5++) {
              B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
            }
          }
        }
        if ((t1 <= floord(32*t2-PB_M+3,16)) && (t2 >= max(ceild(PB_M-18,16),ceild(PB_M-2,32))) && (2*t2 == t3)) {
          B[(32*t2-PB_M+3)][(PB_M-3)] = E[(32*t2-PB_M+3)+1][(PB_M-3)-1] + E[(PB_M-3)][(32*t2-PB_M+3)] - E[(PB_M-3)][(32*t2-PB_M+3)-1] + B[(32*t2-PB_M+3)+2][(PB_M-3)-1] + B[(32*t2-PB_M+3)-1][(PB_M-3)] + 5;;
        }
        if ((16*t1 == PB_M-11) && (16*t2 == PB_M-11) && (8*t3 == PB_M-3)) {
          if ((PB_M+5)%16 == 0) {
            B[(PB_M-3)][(PB_M-3)] = E[(PB_M-3)+1][(PB_M-3)-1] + E[(PB_M-3)][(PB_M-3)] - E[(PB_M-3)][(PB_M-3)-1] + B[(PB_M-3)+2][(PB_M-3)-1] + B[(PB_M-3)-1][(PB_M-3)] + 5;;
          }
        }
        if (2*t2 == t3-1) {
          for (t4=max(max(max(max(max(max(1,ceild(64*t1-PB_M+31,3)),16*t1),16*t2-31),32*t1-32*t2+1),32*t2-PB_M+4),64*t2-3*PB_M+43);t4<=16*t1+7;t4++) {
            for (t5=max(max(ceild(64*t2+t4-PB_M+35,2),32*t2),t4+2);t5<=min(min(floord(64*t2+2*t4+62,3),t4+PB_M-4),-32*t1+32*t2+2*t4+2);t5++) {
              for (t6=max(64*t2+32,-2*t4+3*t5+1);t6<=min(64*t2+63,-t4+2*t5+PB_M-3);t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
          }
        }
        if (2*t2 == t3-1) {
          for (t4=max(max(max(max(1,16*t1+8),16*t2-31),32*t2-PB_M+4),64*t2-3*PB_M+43);t4<=min(min(24*t1-8*t2+37,32*t2-PB_M+18),32*t1-32*t2+PB_M+25);t4++) {
            for (t5=max(max(ceild(64*t2+t4-PB_M+35,2),32*t2),-32*t1+32*t2+2*t4-29);t5<=min(floord(64*t2+2*t4+62,3),t4+PB_M-4);t5++) {
              for (t6=max(64*t2+32,-2*t4+3*t5+1);t6<=min(64*t2+63,-t4+2*t5+PB_M-3);t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
          }
        }
        if ((PB_M >= 6) && (t2 <= floord(t3+1,2)) && (t2 >= ceild(t3-1,2))) {
          for (t4=max(max(max(max(max(max(max(1,16*t1),16*t1-16*t2+8*t3),32*t1-32*t2+1),32*t2-PB_M+4),48*t2-16*t3-15),16*t3-PB_M+3),32*t3-3*PB_M+11);t4<=min(min(min(min(min(min(PB_M-3,16*t1+30),32*t2+29),16*t3+14),16*t1-16*t2+8*t3+23),24*t1-24*t2+8*t3+29),32*t1-32*t2+PB_M+25);t4++) {
            for (t5=max(max(max(ceild(32*t3+t4-PB_M+3,2),32*t2),t4+2),-32*t1+32*t2+2*t4-29);t5<=min(min(floord(32*t3+2*t4+30,3),16*t3),t4+PB_M-4);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=min(32*t3+31,-t4+2*t5+PB_M-3);t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
            if (t1 <= min(min(floord(t4-15,16),floord(16*t2-8*t3+t4-16,16)),floord(32*t2+t4-32,32))) {
              B[t4][(-32*t1+32*t2+t4-31)] = E[t4+1][(-32*t1+32*t2+t4-31)-1] + E[(-32*t1+32*t2+t4-31)][t4] - E[(-32*t1+32*t2+t4-31)][t4-1] + B[t4+2][(-32*t1+32*t2+t4-31)-1] + B[t4-1][(-32*t1+32*t2+t4-31)] + 5;;
            }
            for (t5=max(max(max(32*t2,16*t3+1),t4+2),-32*t1+32*t2+2*t4-29);t5<=min(min(min(min(floord(32*t3+2*t4+30,3),32*t2+31),16*t3+16),t4+PB_M-4),-32*t1+32*t2+2*t4+1);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=2*t5-2;t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
              if (t4 <= floord(t5+1,2)) {
                B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
              }
              if (t4 >= ceild(t5+2,2)) {
                B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
                B[(t4-1)+2][(-t4+t5)-2] = C[(t4-1)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-1)+1][t4] - D[(t4-1)-1][(-t4+t5)-1][t4] * 6;;
              }
              for (t6=max(2*t5,-2*t4+3*t5+1);t6<=min(32*t3+31,-t4+2*t5+PB_M-3);t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
            for (t5=16*t3+17;t5<=min(min(floord(32*t3+2*t4+30,3),32*t2+31),-32*t1+32*t2+2*t4+1);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=32*t3+31;t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
            for (t5=max(ceild(32*t3+2*t4+31,3),16*t3+1);t5<=min(min(min(32*t2+31,16*t3+16),t4+PB_M-4),-32*t1+32*t2+2*t4+1);t5++) {
              B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
            }
            if (t1 >= max(max(ceild(t4-14,16),ceild(24*t2-8*t3+t4-6,24)),ceild(32*t2+t4-PB_M+6,32))) {
              for (t6=max(32*t3,-96*t1+96*t2+4*t4+7);t6<=min(32*t3+31,-64*t1+64*t2+3*t4+PB_M+1);t6++) {
                B[(64*t1-64*t2-3*t4+t6-4)+2][(-32*t1+32*t2+t4+2)-2] = C[(64*t1-64*t2-3*t4+t6-4)][t4][(-32*t1+32*t2+t4+2)+1] + D[(-32*t1+32*t2+t4+2)][(64*t1-64*t2-3*t4+t6-4)+1][t4] - D[(64*t1-64*t2-3*t4+t6-4)-1][(-32*t1+32*t2+t4+2)-1][t4] * 6;;
              }
            }
            for (t5=max(16*t3+1,t4+PB_M-3);t5<=min(min(min(32*t2+31,16*t3+16),t4+PB_M-2),-32*t1+32*t2+2*t4+1);t5++) {
              B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
            }
          }
        }
        if (t2 <= floord(t3+1,2)) {
          for (t4=16*t1-16*t2+8*t3+24;t4<=min(min(min(PB_M-3,16*t1+30),16*t3+14),24*t1-24*t2+8*t3+29);t4++) {
            for (t5=-32*t1+32*t2+2*t4-29;t5<=min(floord(32*t3+2*t4+30,3),32*t2+31);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=32*t3+31;t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
          }
        }
        if ((PB_M >= 6) && (t1 == t2-1) && (t1 >= ceild(t3-3,2))) {
          for (t4=max(max(max(1,PB_M-6),32*t1-PB_M+36),32*t3-3*PB_M+11);t4<=min(PB_M-4,8*t3+5);t4++) {
            for (t5=max(16*t3+1,2*t4+2);t5<=t4+PB_M-2;t5++) {
              B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
            }
          }
        }
        if (t2 <= floord(t3+1,2)) {
          for (t4=max(16*t3+15,32*t1-32*t2+1);t4<=min(min(min(min(PB_M-3,16*t1+30),32*t2+29),32*t3+24),24*t1-24*t2+8*t3+29);t4++) {
            for (t5=max(t4+2,-32*t1+32*t2+2*t4-29);t5<=min(min(floord(32*t3+2*t4+30,3),32*t2+31),-32*t1+32*t2+2*t4+2);t5++) {
              for (t6=max(32*t3,-2*t4+3*t5+1);t6<=32*t3+31;t6++) {
                B[(t4-2*t5+t6)+2][(-t4+t5)-2] = C[(t4-2*t5+t6)][t4][(-t4+t5)+1] + D[(-t4+t5)][(t4-2*t5+t6)+1][t4] - D[(t4-2*t5+t6)-1][(-t4+t5)-1][t4] * 6;;
              }
            }
          }
        }
        if (t2 >= ceild(t3-1,2)) {
          for (t4=max(max(48*t2-16*t3-15,16*t3-PB_M+3),24*t1-24*t2+8*t3+30);t4<=min(min(16*t1+30,16*t1-16*t2+8*t3+23),32*t1-32*t2+PB_M+28);t4++) {
            for (t5=max(16*t3+1,-32*t1+32*t2+2*t4-30);t5<=min(min(32*t2+31,16*t3+16),t4+PB_M-2);t5++) {
              B[t4][(-t4+t5-1)] = E[t4+1][(-t4+t5-1)-1] + E[(-t4+t5-1)][t4] - E[(-t4+t5-1)][t4-1] + B[t4+2][(-t4+t5-1)-1] + B[t4-1][(-t4+t5-1)] + 5;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3214231223_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
