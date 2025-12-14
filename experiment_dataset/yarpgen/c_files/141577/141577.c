/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((3 - 65535) != (((((14235743121648600320 ? var_6 : 0)) >= 0)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, (((((max((max(var_1, var_11)), ((max(0, 0)))))) ? (((((max(4211000952060951296, 110))) ? ((~(arr_0 [i_0]))) : -var_8))) : (max(var_9, ((((arr_1 [i_0]) ? 96 : var_4))))))))));
        var_14 = ((-1 ? 141147006846127406 : (((max(1, var_0))))));
        arr_2 [i_0] [i_0] = (max((max(((var_9 ? 3691730295408126973 : var_9)), (var_0 / var_0))), ((((var_2 == 1) ^ var_0)))));
        var_15 |= var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_3 [i_1]) ? (arr_3 [i_1]) : ((var_0 ? 5651132390545376904 : 141147006846127436))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_16 = (~1);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_17 = (min(var_17, (~-var_1)));
                                var_18 = (((((23143 | (arr_12 [i_3] [i_3])))) ? 819884156 : (~99)));
                                arr_16 [i_5] [i_5] [i_3] [i_3] [i_3] [i_1] [i_1] = ((((((!(arr_14 [i_3]))))) * (arr_3 [9])));
                                var_19 = (min(var_19, (arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_4])));
                                var_20 += (((arr_12 [6] [i_2]) ? (~2426080107113279697) : (((var_1 ? var_6 : var_11)))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, ((((arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3]) ? (-127 - 1) : var_11)))));
                        var_22 *= ((10 ? var_7 : (var_11 && var_8)));
                        var_23 = (min(var_23, ((((!var_9) & (!-507129730))))));
                        var_24 &= var_0;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            var_25 = (min(var_25, (((arr_17 [20] [6] [i_1] [i_7] [i_8 + 1] [i_1]) ? var_3 : (arr_17 [2] [0] [i_3] [i_7] [i_8 + 1] [1])))));
                            var_26 *= (var_1 && var_4);
                            var_27 = (max(var_27, (((var_8 ? (arr_18 [20] [i_8] [i_3 + 2] [i_8 - 1]) : var_4)))));
                            var_28 = (((1711432685 || var_11) ? (((-(arr_19 [i_1])))) : ((var_4 ? 22221 : 3388540306))));
                        }
                        var_29 = ((arr_9 [i_3 + 2] [i_7] [19] [10]) ? (arr_20 [i_1] [i_2] [i_3] [i_7] [i_1] [i_7]) : -1069417290);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        arr_25 [i_9 + 1] [i_9] = var_5;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_34 [i_9] [i_11] [i_10] [i_9] [i_9] = (((4294967295 <= 39) ? 10 : ((65516 ? -141147006846127435 : 1422583854))));
                        arr_35 [i_9 + 1] [10] [i_11] [i_9] [i_9 + 1] = ((1 >> (((4275936190 | 4111392758) - 4292861939))));
                    }
                }
            }
        }
    }
    var_30 = (((max((((var_0 >> (var_11 - 114117843)))), var_6)) - var_4));
    #pragma endscop
}
