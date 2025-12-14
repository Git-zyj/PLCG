/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (min((((!(((var_7 ? var_16 : var_12)))))), (((((2989748690 ? -19445 : (arr_1 [i_0])))) ? (min(21, (arr_2 [11] [i_1]))) : (var_11 & 3060392291)))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (min(var_20, ((((((arr_5 [1] [i_0 - 1] [i_2]) || (arr_6 [i_0 + 1] [i_0 - 1]))) && 963354562)))));
                    var_21 = ((-1918367312 > (((1918367311 ? -16 : 1918367311)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_9 [i_1] [14] [i_3] &= (arr_0 [i_0 + 1]);
                        var_22 = (min(var_22, (((!(arr_8 [i_3] [i_1] [i_1] [i_3] [i_1] [8]))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = var_18;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_0] = (min(1514563722704163429, var_15));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((max((arr_1 [i_0]), (arr_1 [i_0]))));
                        var_23 = max((min((((arr_5 [i_4] [i_2] [i_0]) + 28069)), var_16)), var_3);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_24 = ((((arr_17 [i_0] [i_0 + 1] [11] [8]) - (arr_11 [9] [i_1] [i_0 - 1] [i_0 - 1] [i_0]))));
                        var_25 = -1918367312;
                    }
                    var_26 = (min((max((arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [5]), (arr_17 [i_0 + 1] [i_0 - 1] [4] [i_0 - 1]))), (max((min((arr_3 [i_0 + 1] [i_0]), var_13)), (((-8490500265903258519 ? var_11 : var_7)))))));
                    var_27 = (((var_5 ? (1485073538 | -16) : ((var_3 ? (arr_1 [i_0]) : var_11)))));
                }
                var_28 -= (arr_15 [4]);
                var_29 ^= (((max((((3626769733 ? -1918367301 : (arr_7 [0] [i_1] [2] [0])))), (arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]))) & (min((arr_12 [14] [i_0 + 1] [10] [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_1] [8] [i_1] [i_0 - 1] [i_1])))));
                var_30 = (max(var_30, ((max(-8813405464410134453, var_15)))));
            }
        }
    }
    var_31 = (min(var_31, (((!(((var_9 ? var_1 : var_14))))))));
    var_32 &= var_17;
    var_33 = ((3292679662 - (((1918367331 ? var_18 : var_19)))));
    #pragma endscop
}
