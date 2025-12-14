/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((1 | ((var_7 ? var_13 : var_6))))) ? 894577791424661928 : -1)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_1] = ((1 ? 208 : 1));
                        var_20 = (max(var_20, ((((-78 / (var_17 && var_12)))))));
                        var_21 += (max((arr_10 [i_2] [i_2 - 1] [i_1] [i_1 + 4]), var_6));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = ((-40 && (((~(((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_17 : var_5)))))));
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = ((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_23 = (max((((((arr_15 [i_5] [i_1] [i_1] [i_1]) / var_8)) | ((1 ? -6550 : var_10)))), ((((((arr_2 [i_0]) ? var_10 : var_5)) <= ((((arr_1 [i_2]) ? 1 : var_2))))))));
                            var_24 -= ((((var_9 ? (arr_15 [i_5] [i_2] [i_2] [i_1 + 2]) : (arr_5 [i_5] [i_1 + 2] [i_5]))) | (arr_15 [i_4] [i_2] [i_2] [i_1 + 2])));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_25 = (max(var_25, ((min((arr_8 [i_1] [i_2] [i_2 - 2]), ((((arr_15 [i_2] [i_2] [i_6] [i_2]) >= (arr_13 [i_1] [i_2] [i_2 - 2] [i_4] [i_6])))))))));
                            var_26 -= (((((arr_6 [i_1]) > (((min(1, var_18)))))) ? (var_12 * 77) : var_16));
                            var_27 -= (max(((-(arr_2 [i_0]))), (((-(arr_19 [i_6] [i_4] [i_2] [i_1] [i_6]))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_28 *= ((-(arr_20 [i_2] [i_2] [i_2] [i_2])));
                        arr_24 [i_0] [i_7] [i_2] [i_7] &= (((((arr_2 [i_2 + 2]) ? 3181643726 : (arr_2 [i_2 + 1])))) ? ((((max(var_1, 2625232101))) ? ((1669735194 ? (arr_12 [i_0] [i_7] [i_0] [i_0]) : var_4)) : 1)) : ((((min(var_11, var_10))) ? var_10 : var_4)));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_29 = var_8;
                        var_30 = (1113323569 ? var_16 : (arr_16 [i_2 + 2] [i_2] [i_2] [i_2]));

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_31 = (min(var_31, 1669735192));
                            var_32 -= arr_19 [i_0] [i_1] [i_2] [i_8] [i_8];
                            var_33 = (min(var_33, ((1103581124 * (arr_3 [i_1 + 1])))));
                            arr_30 [i_8] [i_1] [i_2] [i_1] [i_9] [i_0] |= 74;
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_34 -= ((var_16 ? (arr_7 [i_2] [i_1 + 3]) : (arr_18 [i_1 + 3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 3])));
                            var_35 ^= ((var_3 ? (arr_16 [i_1] [i_1] [i_1] [i_1 + 2]) : var_16));
                            var_36 = (((arr_20 [i_2 + 3] [i_2 + 3] [i_1] [i_2 + 2]) ? -1113323569 : var_2));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    {
                        var_37 -= ((~(!var_14)));
                        var_38 = ((((((var_1 ? var_17 : var_4))) ? (min((arr_3 [i_12]), 6)) : (((1 ? (arr_17 [i_14] [i_12] [i_13] [i_11] [i_14]) : (arr_1 [i_13])))))));
                    }
                }
            }
        }
        var_39 -= (var_18 | (((arr_0 [i_11] [i_11]) ^ ((1113323569 ? (arr_43 [i_11] [i_11] [i_11]) : (arr_4 [1]))))));
        var_40 -= ((-var_13 ? var_10 : (arr_3 [i_11 + 1])));
    }
    var_41 = var_14;
    #pragma endscop
}
