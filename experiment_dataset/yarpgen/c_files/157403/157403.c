/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((min(var_9, var_1)), (((1 << (var_8 - 17494)))))) == var_4));
    var_11 = var_8;
    var_12 = var_7;
    var_13 = (max((min((~var_9), var_0)), ((((max(var_7, var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = (max((arr_0 [i_1]), ((min(var_3, 1)))));
                                var_14 = (max(var_14, ((((-(var_1 * 1)))))));
                            }
                        }
                    }
                    var_15 = (min(((((max(var_7, (arr_4 [i_1] [i_0] [i_0])))) ? (var_1 & var_7) : ((((arr_11 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]) ? 1 : 14155))))), -14155));
                    var_16 = (((arr_3 [i_0] [i_1]) ? (min(var_2, ((1 - (arr_9 [i_0]))))) : 1));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_16 [i_5] [i_1] = arr_3 [i_5] [i_5];
                        var_17 = (-4564021288966154604 ^ 14173);
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        var_18 = 65141;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_1] [i_1] = ((~(~var_7)));
                            arr_24 [i_0] [2] = var_5;
                            arr_25 [i_0] [i_1] [i_2] [i_6] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                            arr_26 [i_1] [i_1] [i_2] [1] [i_7] = var_3;
                            arr_27 [i_0] [i_1] [i_0] [i_6 - 1] [i_7] = ((3627302327 ? 29 : 18));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_8] [i_1] [4] = (arr_3 [i_1] [i_6 + 2]);
                            arr_31 [9] [9] [i_8] [i_6] [0] [i_8] = 0;
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_19 = (arr_9 [i_0]);
                            var_20 *= (arr_21 [i_0]);
                            var_21 = (min(9999, (arr_4 [i_9] [i_2] [i_1])));
                            var_22 = 9973;
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_38 [8] [8] [i_0] [i_0] = (arr_14 [i_2] [i_6] [i_2] [i_1] [i_0]);
                            arr_39 [i_0] [0] [i_0] [i_6] [i_6] = var_5;
                            var_23 |= (((max((arr_36 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_10] [i_10]), var_1)) * (arr_36 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_10] [i_10])));
                            var_24 = ((-(((((((!(arr_5 [i_0]))))) < (arr_11 [i_0] [i_1] [i_2] [i_0] [i_10] [i_10]))))));
                        }
                        var_25 = (-8575645003668493407 - 28334);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_26 = (arr_19 [i_11] [i_2] [i_1]);
                        arr_43 [i_11] = ((!(arr_11 [i_0] [i_0] [i_2] [i_11] [8] [i_0])));
                        var_27 = (arr_41 [i_0] [6] [i_2] [i_11] [1] [i_11]);
                        var_28 = (((var_9 ? 4564021288966154605 : (arr_12 [i_1] [i_2] [i_1] [i_11] [i_11]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
