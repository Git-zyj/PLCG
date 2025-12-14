/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_0, var_10));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 -= (min((arr_1 [20]), (max(((-1517104204 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (2199023255551 <= var_14)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_3] &= ((((((((arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_3] [i_3]) ? -1 : (arr_4 [i_3])))) || var_10)) && (!var_3)));
                        arr_12 [i_3] [i_0] [i_0] [15] = var_14;
                        arr_13 [i_0] = (arr_5 [i_0]);
                    }
                }
            }
        }
    }
    var_18 = ((var_13 ? -2199023255567 : ((((!(-32767 - 1)))))));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    var_19 ^= (((var_1 / ((var_8 ? var_12 : var_1)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [i_5] [i_5] [i_8] = (!-var_12);
                                arr_27 [i_5] [i_5] [i_8] [i_5] [i_5] = ((((var_5 ^ (arr_16 [i_6] [i_6 - 1] [i_6 - 1]))) >= ((-(min((arr_2 [15] [i_5]), 1517104204))))));
                                var_20 = arr_22 [i_4] [0] [0];
                                arr_28 [i_8] = var_10;
                            }
                        }
                    }
                    arr_29 [i_4] [i_5] [i_5] [1] = ((((((arr_5 [i_4]) - (arr_5 [i_4])))) ? (max((arr_0 [i_4]), (((arr_19 [i_5]) & 1)))) : ((+(((arr_5 [i_5]) ? var_0 : var_8))))));
                    arr_30 [i_5] = (max(2199023255580, ((max((arr_5 [i_5]), (max(var_13, (arr_19 [i_4]))))))));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_33 [i_9] = (((arr_9 [i_9] [i_9] [16] [i_9] [18] [i_9]) || (arr_16 [i_9] [i_9] [i_9])));
        var_21 = (min(var_21, (arr_8 [i_9] [i_9] [i_9] [i_9])));
        arr_34 [1] [i_9] = (~1656);
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {
        arr_38 [i_10 - 3] = ((1517104216 ? (((arr_1 [0]) + var_0)) : (arr_37 [i_10 - 1])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_22 = var_8;
                    var_23 |= (arr_8 [i_12] [i_10] [i_12] [i_10]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_24 = (-1 ? (arr_53 [i_10] [6] [i_10 - 2] [i_10 - 3] [i_15] [i_15 + 3] [i_15 - 3]) : 38964);
                                var_25 = arr_52 [i_10 + 1] [i_15 + 2];
                            }
                        }
                    }
                    var_26 = ((((!(-32767 - 1))) && (!var_3)));
                }
            }
        }
    }
    for (int i_17 = 2; i_17 < 16;i_17 += 1)
    {
        var_27 = ((max((max(var_14, (arr_7 [i_17] [i_17] [i_17]))), (arr_10 [i_17] [i_17 - 1] [i_17] [2] [i_17]))));
        arr_56 [0] [0] = var_13;
    }
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        arr_59 [i_18] = ((!(arr_9 [i_18] [2] [2] [i_18] [i_18] [i_18])));
        arr_60 [i_18] = (((((~7849498424060076824) & (1138859415 & var_0))) / ((((arr_57 [i_18] [i_18]) * (arr_57 [i_18] [i_18]))))));
        var_28 = ((~(~var_0)));
        arr_61 [i_18] [i_18] = (~var_0);
    }
    #pragma endscop
}
