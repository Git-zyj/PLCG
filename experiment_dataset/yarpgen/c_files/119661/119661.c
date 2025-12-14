/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (min((max((arr_4 [i_0]), (arr_4 [i_0]))), ((((arr_5 [10] [i_3]) && ((max((arr_1 [i_0]), (arr_7 [i_0] [i_0] [i_0])))))))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_3 [i_0] [i_3]) ? ((max((arr_3 [i_4] [i_4]), (arr_10 [i_0] [1] [i_0])))) : (((arr_4 [i_3]) ? (arr_10 [i_1] [i_2] [i_3]) : (arr_4 [i_4]))))))));
                            var_20 &= (arr_12 [i_0] [i_0] [i_0]);
                            var_21 = ((min((((arr_0 [i_0]) / var_9)), var_13)));
                            var_22 = (((!9223372036854775807) >= ((max(1, (arr_0 [i_0]))))));
                            var_23 = (((((((((arr_11 [i_1] [i_2] [i_1] [i_0]) | var_9))) ? var_4 : (((arr_6 [i_0] [i_1] [i_3]) & (arr_7 [i_0] [i_0] [6])))))) ? (max((arr_0 [i_0]), ((var_3 ^ (arr_0 [i_0]))))) : 32767));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_16 [i_0] [2] [i_0] [i_2] [i_0] [i_0] = (12011955940211750361 - 1);
                            var_24 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                            arr_17 [i_0] [i_0] [i_2] = (((arr_14 [i_5 - 1] [i_5 - 1]) != (arr_14 [i_5 + 1] [i_5 - 1])));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            arr_20 [i_6] [i_0] [i_2] [8] [i_2] [i_0] [i_0] = (((((var_1 ? var_5 : var_10))) ? var_2 : (arr_1 [i_0])));
                            var_25 = (arr_0 [i_0]);
                            var_26 = (min(var_26, ((((arr_19 [i_6] [i_6 + 1] [i_6 + 4] [i_6] [i_6 + 4]) << ((var_12 ? (arr_2 [i_3]) : var_4)))))));
                        }
                        var_27 = (min(var_27, (((var_13 ? (((arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]) ? (arr_19 [i_0] [i_0] [i_2] [i_2] [i_0]) : var_5)) : (arr_19 [i_1] [3] [i_2] [i_0] [i_0]))))));
                        var_28 = ((12777024102591125436 ? 12687574951935744987 : 9223372036854775806));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_29 += (arr_6 [i_7] [i_0] [i_2]);
                        var_30 = (min(var_30, (((-(((arr_24 [i_0] [i_0] [i_2] [i_7]) ? (max(var_5, var_1)) : ((((arr_1 [i_7]) << (arr_9 [8] [8] [i_1] [i_1] [8] [i_7])))))))))));
                        var_31 *= var_12;
                        arr_25 [i_7] [i_1] [i_1] [i_2] [i_7] &= ((((~(~var_1))) - var_15));
                    }
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_32 &= ((~((var_9 | (arr_19 [i_0] [i_0] [i_0] [12] [i_0])))));
                            var_33 += (((((arr_26 [i_0] [6] [i_0]) - (arr_9 [i_0] [i_0] [2] [i_8] [i_0] [6])))) & (var_13 - var_13));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            arr_32 [i_0] [i_2] [i_1] [i_0] = var_13;
                            var_34 = ((((((arr_0 [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_0] [i_8] [1]) : var_8))) && (arr_8 [i_8 - 2] [i_8] [i_10 + 1] [i_0] [i_8])));
                            var_35 = (((arr_18 [i_1] [i_2] [i_8 - 1] [i_10 + 1]) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : var_14));
                            var_36 = var_16;
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [10] = (arr_1 [i_0]);
                        }
                        var_37 = ((~(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_34 [i_0] [i_1] [i_0] = (~20042);
                        var_38 = ((max((arr_6 [i_0] [i_2] [1]), (min((arr_12 [i_1] [i_1] [i_8]), var_0)))) / ((((((var_15 >= (arr_2 [i_1]))) && ((max(-9223372036854775807, 1))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_39 = var_11;
                        arr_37 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = var_4;
                        var_40 += (((((51 ? 1222750250 : 2147483647))) && (((var_11 ? var_11 : var_8)))));
                        arr_38 [i_1] [i_2] [i_0] = (arr_1 [i_0]);
                        var_41 -= (((arr_11 [i_0] [i_1] [i_2] [1]) - (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [8])));
                    }
                    var_42 = (((arr_36 [i_0]) * (max((((arr_36 [i_0]) + var_13)), (arr_26 [i_0] [i_0] [i_0])))));
                    var_43 = (arr_7 [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_44 = (max(var_7, ((min((arr_19 [i_0] [i_1] [i_1] [i_12] [i_0]), var_14)))));
                                var_45 = arr_13 [i_0] [i_0] [i_0] [i_0] [1] [i_0];
                                var_46 = (~9223372036854775807);
                            }
                        }
                    }
                }
            }
        }
    }
    var_47 = (~var_0);
    var_48 = (var_8 != var_16);
    #pragma endscop
}
