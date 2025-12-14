/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-(max(var_12, var_13))))) ? var_12 : 3437981574273119641));
    var_20 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_1 [i_0]) != ((min((arr_1 [i_0]), (arr_1 [i_0]))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_21 = (min(var_21, (arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 2])));

                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_0] [i_3] [i_0] = (1 ? 2177383932154545388 : 0);
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] [0] [i_0] = (arr_10 [i_2] [i_2]);
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_22 = ((var_17 ? var_0 : 0));
                            var_23 = ((3609835632 ? 1 : 4519021954240437563));
                            var_24 -= (var_0 ? var_16 : (arr_12 [i_0] [i_1] [i_2] [8] [i_5]));
                            arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3 - 3] [i_0] = (((arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]) ? (((((arr_0 [i_1] [i_3]) != (arr_4 [i_0 + 2] [i_1] [i_0 + 2]))))) : var_2));
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_0 - 1] [i_2] [i_1] [i_0 - 1] [i_2] [i_3] [i_6 + 1] |= (arr_6 [i_0 + 2] [7] [i_3 - 1] [i_6 - 1]);
                            var_25 = (min(var_25, ((((arr_12 [i_6 - 1] [i_0 + 2] [i_3 - 1] [i_3 - 3] [i_6 + 1]) ? 2292282042060775661 : -25736)))));
                            arr_22 [i_0] [i_0 + 2] [i_2] [i_2] [i_3] [i_3] [i_0] |= (arr_8 [i_3 + 1] [i_2]);
                        }
                        arr_23 [i_0 + 2] [i_0] [i_0] [i_3] = (((((var_16 ? (arr_7 [i_0 + 1] [11]) : (arr_9 [i_0] [i_0])))) ? var_5 : 1));
                    }
                    var_26 -= 22;

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_27 = (((-9223372036854775807 - 1) ? ((1 ? 1 : 1)) : var_7));
                        var_28 += arr_6 [i_0 + 1] [i_1] [i_2] [i_7];
                        arr_26 [i_0] [i_0 - 1] [i_0] [i_0] = (((arr_24 [i_0] [i_1] [i_2]) ? (arr_24 [i_0 + 1] [i_0 + 1] [i_1]) : (arr_4 [i_0 + 2] [i_1] [i_2])));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_31 [i_8] [i_7] [i_0] [i_0] [i_0 - 1] [i_0] = (arr_27 [9] [7] [i_7] [i_2] [i_2] [i_1] [i_0]);
                            var_29 = var_14;
                            var_30 = var_3;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_31 = (min(var_31, 3013777894));
                            var_32 = (min(var_32, var_2));
                            arr_36 [i_0] [i_0] = (arr_20 [i_0 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_33 = 1;
                            var_34 = (max(var_34, ((((arr_2 [i_7]) ? (-9476 & 3705251562) : ((var_9 ? var_5 : var_3)))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_35 |= (((((1 ? ((max(-18991, var_6))) : 19003))) >= (((arr_37 [i_0 + 1] [i_2] [i_0 + 1] [i_11] [i_0 + 1] [i_11]) % (arr_37 [i_0 - 1] [i_0 - 1] [i_11] [i_11] [i_11] [i_11])))));
                        var_36 = var_9;
                    }
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        arr_46 [i_0] = min(var_6, (((arr_41 [6] [i_1] [i_1] [i_12 + 2] [i_1]) ^ var_7)));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_37 = -3037505916760686281;
                            var_38 += (((-18977 ^ -18977) ? var_0 : var_10));
                        }
                        /* vectorizable */
                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            var_39 = (((arr_35 [i_14] [i_14 - 3] [i_14] [i_12 + 2] [i_0 + 2]) || 2292282042060775644));
                            arr_54 [i_0] [i_0] [i_1] [i_2] [i_2] [i_12] [i_14] = (((arr_51 [i_0 - 1] [i_0 + 2]) ? 92 : (arr_24 [i_0] [i_12 + 2] [i_2])));
                        }
                        arr_55 [i_12] [i_12] [i_2] |= (max(((1 ^ (arr_42 [i_12 - 1] [i_2] [1] [i_0 - 1] [1] [i_0]))), (arr_42 [i_12 - 2] [12] [i_1] [i_0 + 1] [i_0] [i_0])));
                    }
                    var_40 ^= (arr_3 [i_0] [i_1] [i_1]);
                    var_41 = (max(var_41, ((min(1, var_14)))));
                }
            }
        }
    }
    var_42 = (min(40, 19148863120610662));
    #pragma endscop
}
