/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = (min(var_11, (((-(arr_2 [i_0] [i_0]))))));
        var_12 = (min(var_12, (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [1] = (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_13 = (var_3 ^ 1);
            var_14 = ((((arr_3 [i_1]) ^ var_6)));
            var_15 = (min(var_15, (arr_7 [i_2] [i_1])));
            var_16 += (((arr_4 [i_1]) ? (arr_3 [i_1]) : (arr_7 [i_1] [i_1])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_17 *= (((((1 ^ (arr_8 [i_1] [i_3])))) ? (!3) : 50792));

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_18 ^= var_10;
                var_19 += (((arr_8 [i_1] [i_3]) % (arr_12 [i_4] [i_1])));
                var_20 ^= (arr_9 [i_1]);
                var_21 += ((!(14743 % 50792)));
                var_22 -= (arr_8 [i_1] [i_4]);
            }

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_23 = (min(var_23, ((((arr_9 [i_1]) ^ var_9)))));
                var_24 ^= (((((arr_11 [i_1]) + 2147483647)) >> (((arr_11 [i_5]) + 25597))));
                var_25 = (min(var_25, (((3678415136 ? 1 : 14)))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_22 [i_7] [i_3] [i_5] [i_6] [i_7] [i_6] [i_6] = (((arr_20 [i_7] [i_7 + 1] [i_7 + 3] [i_6] [i_6 - 1] [i_7]) ? ((var_2 ? var_8 : (arr_11 [i_7]))) : ((20 ? 2 : 9536))));
                            var_26 = var_8;
                        }
                    }
                }
                var_27 = (((((arr_16 [i_1] [23] [i_5] [i_5]) ? (arr_16 [i_1] [21] [i_1] [i_5]) : (arr_15 [i_1] [i_3] [i_5])))) ? (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_19 [i_1] [i_3]));
            }
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_28 *= (((25 ? (arr_19 [i_8] [i_1]) : var_4)));
            arr_26 [i_8] [i_8] = (arr_4 [i_8]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_29 += (((arr_13 [i_1]) >= (arr_15 [i_1] [i_8] [i_1])));
                        var_30 = (max(var_30, 65535));
                        var_31 = (((arr_15 [i_1] [i_8] [i_8]) ? (arr_15 [i_1] [i_1] [i_1]) : (arr_15 [i_1] [i_1] [i_1])));
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        var_32 ^= (((((max((arr_7 [i_11] [i_11]), (arr_8 [i_11] [i_11]))) != (arr_3 [i_11]))) ? (((arr_28 [i_11] [i_11] [i_11]) ? var_2 : -4175904075228316208)) : ((((((arr_15 [i_11 - 1] [i_11] [i_11]) ? 16405 : (arr_3 [i_11 + 1]))) % (arr_9 [i_11]))))));
        arr_35 [i_11] = ((((-(arr_4 [i_11 - 1]))) * ((((((-647151544452724421 ? var_1 : var_0))) ? ((50813 ? var_8 : var_8)) : var_6)))));
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_38 [i_12] = (max((max((arr_13 [i_12]), (arr_24 [i_12] [i_12]))), (arr_2 [i_12] [i_12])));
        arr_39 [i_12] [i_12] = (((35332771 & ((11975099558904094244 | (arr_32 [i_12] [i_12]))))));
        arr_40 [i_12] = (arr_8 [i_12] [i_12]);
    }

    /* vectorizable */
    for (int i_13 = 4; i_13 < 18;i_13 += 1)
    {
        var_33 ^= ((((arr_18 [i_13] [i_13 + 1] [i_13] [i_13] [24] [i_13 - 1]) ? (arr_0 [i_13] [i_13]) : (arr_12 [i_13 - 2] [i_13]))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_34 = (arr_48 [i_13] [i_13]);
                    var_35 = (max(var_35, (((!(arr_0 [i_13 - 4] [i_13 - 4]))))));
                }
            }
        }
    }
    var_36 -= var_4;
    var_37 = (max(var_37, (((!(!var_10))))));
    var_38 = ((((max(-var_6, (233 != var_10)))) ? ((-var_6 / ((var_2 ? var_2 : 11975099558904094244)))) : ((((18446744073709551615 || 14738) ? ((var_1 ? 65522 : -5922137528003825825)) : var_6)))));
    #pragma endscop
}
