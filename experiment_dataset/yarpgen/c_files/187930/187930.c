/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((arr_0 [i_0] [i_0 + 2]) != var_8));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_16 = ((arr_5 [i_0 + 2] [i_0 + 2]) ? ((((min((arr_8 [i_0 + 1] [i_0 + 1]), (arr_5 [i_0] [i_1 - 1])))))) : (arr_8 [i_0] [i_2]));
                        var_17 = ((((!((((arr_9 [i_1 + 1] [i_1 + 1] [i_0 + 2]) | var_7))))) ? var_10 : (!var_5)));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_2] [i_1 + 1] [i_2] [14] [i_4] [i_4] = (arr_5 [i_0] [i_2]);
                        var_18 = ((min((arr_11 [i_1 - 1] [i_1]), var_8)) & (((((((~(arr_5 [i_0] [4])))) || -26546)))));
                        arr_16 [i_2] = (min((((arr_8 [i_4] [i_2]) - (!var_4))), var_1));
                        var_19 = ((!(arr_6 [i_4])));
                    }
                    var_20 = (min((min((arr_9 [i_0 + 2] [i_0 + 1] [i_0]), (arr_8 [i_1 - 1] [i_2]))), var_5));
                    var_21 ^= (arr_14 [i_0 - 1] [i_1]);
                    arr_17 [i_0] [i_2] [i_1] = ((!(arr_3 [i_0 + 2] [i_1 - 1])));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_22 = (((arr_8 [i_0 + 2] [1]) ? (max((arr_8 [i_0 + 1] [3]), (arr_8 [i_0 + 2] [i_0 + 1]))) : (min(var_5, (arr_8 [i_0 - 1] [i_0 + 1])))));
                    var_23 -= (arr_7 [i_0] [i_1]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_1 - 1] [i_0 + 1] [i_0 + 1] = (-(arr_3 [i_0 + 1] [i_1 - 1]));
                    var_24 = (min((arr_13 [9] [i_0 - 1] [i_0] [i_0 + 2] [i_0]), (arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0])));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        arr_28 [i_0] [i_1 - 1] [i_0] [i_7] [i_0] [i_7 - 1] = (~var_9);
                        arr_29 [i_0] [i_0 - 1] [i_6] [i_7] = (arr_25 [i_0 + 2] [i_0 - 1] [i_6] [i_6]);
                        var_25 = (arr_24 [i_1 - 1] [i_1 - 1] [i_7 + 2] [15]);
                        var_26 = (((arr_26 [i_0 + 1] [i_0 + 2] [i_1] [i_1 + 1]) + (((arr_7 [5] [13]) & (arr_6 [i_0])))));
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_8] [i_0 + 2] = var_4;
                        var_27 = arr_33 [i_8] [i_1 - 2] [13] [i_8];
                        var_28 = ((var_6 ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) : (min((arr_32 [i_8] [i_6] [i_1 - 2] [i_0 + 1]), (arr_32 [i_0 - 1] [i_1 - 2] [i_6] [i_8])))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_29 -= var_12;
                            var_30 = (min(var_30, (((~(arr_32 [i_0 - 1] [i_0] [i_1] [i_1 - 1]))))));
                        }
                        arr_40 [4] [i_1] [i_6] [i_1 - 2] [i_6] [i_9] = (arr_27 [0] [0] [i_1 - 2] [i_0]);
                        var_31 = (var_6 ? var_9 : var_1);
                    }
                }
                var_32 ^= ((var_10 && (((((((var_3 + 2147483647) << (((((arr_2 [i_0]) + 2020932986)) - 31))))) ? (arr_27 [i_0] [i_0] [i_0] [i_1 - 1]) : (min((arr_26 [6] [i_1 - 1] [i_0] [i_0 + 2]), (arr_9 [i_0] [i_0 + 1] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        {

                            for (int i_13 = 0; i_13 < 16;i_13 += 1)
                            {
                                var_33 = ((!(arr_8 [i_0] [1])));
                                var_34 = (arr_47 [i_12 - 1] [i_1 - 2] [i_0 + 2] [9]);
                                var_35 = ((~(max(-21503, -313489209763784114))));
                            }
                            for (int i_14 = 0; i_14 < 16;i_14 += 1)
                            {
                                arr_51 [9] [i_1] [i_12] = (((!var_11) == (arr_43 [i_0 + 1] [i_0] [i_1 - 1])));
                                arr_52 [i_0] [i_12] [i_12] = (arr_4 [i_1 - 2] [i_12]);
                                arr_53 [i_0] [i_0] [i_12] [4] [i_0] [i_14] = var_8;
                                arr_54 [i_12] = var_9;
                            }
                            var_36 = (min((var_7 > var_9), (arr_32 [i_12 + 1] [i_12] [4] [i_12])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
