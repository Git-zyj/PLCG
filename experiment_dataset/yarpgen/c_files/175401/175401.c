/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max((max((arr_3 [i_1 + 1] [i_1] [i_1 + 1]), var_5)), (((arr_2 [i_1 + 1] [i_1] [i_1]) ? (arr_3 [i_1 + 2] [i_1] [i_1]) : var_12))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = var_9;
                    arr_7 [i_1 + 2] = (((~4294967292) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                    var_18 -= (max((~21808), (-9223372036854775807 - 1)));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_19 = (((arr_2 [i_1 - 2] [i_1 + 1] [i_3]) ? ((var_5 ? 9223372036854775802 : (arr_5 [i_1] [i_1 + 2] [i_1]))) : (arr_2 [i_0] [i_0] [i_0])));
                    var_20 |= (((18446744073709551611 ? 1016 : (arr_8 [i_1 + 2] [i_1]))));
                    var_21 = ((~(((!(arr_1 [i_3]))))));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_22 = var_9;
                        var_23 = var_1;
                        var_24 = ((((~(arr_2 [i_3] [0] [i_3]))) | var_1));
                    }
                    var_25 = (max(var_25, ((((-(arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1])))))));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_5] = (max(((0 ? (arr_13 [i_5 - 1] [i_5] [i_5] [i_5]) : 0)), (arr_13 [i_5 - 1] [i_5 + 1] [13] [1])));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_6] = var_6;

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_26 = var_7;
                            var_27 = ((((arr_11 [i_1 + 2] [i_6]) ? (arr_11 [i_1 - 2] [i_5 + 1]) : var_8)) / (arr_5 [i_0] [i_0] [i_0]));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_28 = (min(var_28, ((((0 << 0) ? var_5 : (((arr_5 [i_1] [i_6 + 1] [i_8]) ? (~18446744073709551594) : (arr_10 [i_1 - 2] [i_8]))))))));
                            var_29 = (max(9223372036854775807, var_5));
                            var_30 = var_1;
                            var_31 = (~var_7);
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_27 [i_5] [i_1 - 1] [6] [i_6] [i_9] = ((17 ? -8 : -18));
                            var_32 = (min(var_32, var_16));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_33 = ((arr_28 [i_6] [i_10] [i_6] [i_5] [i_1] [i_0]) == (0 && var_15));
                            var_34 = ((1325471007 ? 0 : (((arr_19 [i_0] [i_1] [3] [i_6 + 3] [5]) * (arr_2 [i_1 + 2] [i_5 + 1] [i_6])))));
                            var_35 = 22;
                        }
                        arr_31 [i_6] [i_5] [i_5] [i_0] = ((((arr_9 [i_6 + 1] [i_6 + 1] [i_6] [i_5 + 2]) / (arr_9 [i_6 - 1] [i_6 + 3] [i_5] [i_5 + 1]))));
                        arr_32 [i_5] = ((-(arr_29 [i_5 + 2])));
                        var_36 = var_8;
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_5] [i_1] = (max(9223372036854775802, ((((0 ? var_7 : (arr_28 [i_11 + 2] [i_11 + 2] [i_1] [i_11] [i_11] [10])))))));
                        var_37 -= (max((max((arr_25 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5]), var_0)), (((((max(var_8, (arr_11 [i_1] [i_5 + 2])))) ? (((var_0 ? (arr_12 [i_0] [i_1 - 2] [i_5] [i_11 + 2] [i_0] [i_1 - 2]) : var_2))) : (arr_10 [i_0] [i_11 + 3]))))));
                        arr_36 [i_5 + 2] [i_1] [i_5] [i_0] |= var_1;
                        var_38 = (arr_15 [i_5] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        var_39 = (((arr_2 [i_0] [i_1] [i_5 + 2]) ? (arr_28 [i_0] [i_5] [i_0] [i_5 + 1] [i_5 + 2] [i_12]) : (arr_28 [i_1 - 1] [8] [i_1] [i_5] [i_5 + 2] [i_5])));
                        var_40 = (max(var_40, (arr_17 [i_12 + 1] [15] [i_1] [i_0])));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_42 [i_0] [i_5] [i_1] [i_0] [i_13] = (arr_11 [i_0] [i_0]);
                        arr_43 [10] [i_1 + 1] [i_5] [i_13] = (max((max((arr_8 [i_5 - 1] [i_5]), 9223372036854775807)), ((((((-9223372036854775785 ? 4294967295 : 0))) ? 235 : (-92 && -9223372036854775803))))));
                        var_41 = -var_5;
                        arr_44 [14] [i_5] = ((~(arr_4 [i_0] [0] [i_5] [i_13])));
                    }
                    var_42 = arr_28 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1];
                    var_43 = var_8;
                    arr_45 [i_5] = (arr_21 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5]);
                }
                var_44 = (min(var_44, ((max(((0 - (-32767 - 1))), ((var_11 * ((max((arr_19 [0] [i_1 + 2] [i_1] [8] [i_0]), var_1))))))))));
            }
        }
    }
    var_45 = (max((~var_12), (max(var_4, var_1))));
    #pragma endscop
}
