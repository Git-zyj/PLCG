/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((((-(arr_0 [i_0] [i_0]))) + 9223372036854775807)) << (((arr_0 [i_0] [i_0]) - 3264204288119649222))));
        var_11 = (arr_0 [i_0] [i_0]);
        var_12 *= (((((arr_0 [i_0] [i_0]) & var_0)) >= ((0 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = var_4;
        var_14 += 11;
        arr_5 [i_1] = ((((((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (arr_1 [i_1] [i_1]) : (((!(arr_0 [i_1] [i_1]))))));
        var_15 = -var_8;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (arr_9 [11]);
        arr_11 [7] = (min((((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))), (((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))));
        arr_12 [i_2] = (((max((max(52706, 6857690378969043245)), ((((arr_9 [i_2]) ? 1 : (arr_9 [i_2]))))))) ? ((var_6 ? 6857690378969043245 : ((((18446744073709551601 && (arr_6 [i_2] [i_2]))))))) : (((arr_9 [i_2]) | (arr_8 [i_2]))));
    }
    var_16 = var_3;
    var_17 = var_1;
    var_18 = ((var_4 | (((52706 | var_8) | var_2))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_19 -= 4294967281;
                        var_20 = var_1;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_29 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7] = ((arr_27 [i_4]) ? (arr_27 [i_3]) : (arr_27 [i_3]));
                        arr_30 [i_3] [i_3] [i_3] [i_7] [i_3] = (((arr_28 [i_3] [i_4] [i_5] [i_5] [i_7]) * var_6));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_33 [i_3] [i_3] [i_4] [14] [i_5] [i_8] = (((arr_24 [i_3] [i_4] [i_5] [i_3] [i_5] [i_8]) ? (arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : 0));
                        var_21 = max((arr_19 [i_8]), ((~((var_1 ? (arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]) : var_3)))));
                    }
                    arr_34 [i_4] [i_4] [i_5] [i_3] = (-6857690378969043246 && ((!((!(arr_15 [i_5]))))));
                    var_22 = (min((min((arr_14 [i_5] [i_4]), (arr_25 [i_3] [3] [i_3] [i_3]))), (arr_27 [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
