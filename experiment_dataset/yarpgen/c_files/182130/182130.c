/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] [i_0] = (min((max(((var_7 ? var_10 : var_4)), var_4)), var_8));
                                arr_13 [i_0 - 2] [i_0 - 2] [i_4] [i_0 + 1] [i_0] = ((((min(12290770016620318906, 1872))) ? var_1 : ((max(var_8, var_4)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_12 += ((var_8 & (!var_8)));
                        var_13 = (min(var_13, (var_8 && var_3)));
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6] = (max(((var_0 ? var_0 : var_11)), ((max(var_2, (((-17808 ? 17816 : (-32767 - 1)))))))));
                        arr_20 [i_0 + 4] [i_0 + 4] [i_0 + 4] [3] = (max((max((min(var_6, var_2)), (!var_2))), ((max(-var_6, (-17789 || 17807))))));
                        arr_21 [i_0] [i_0 + 1] [2] |= ((((min((!var_5), var_0))) ^ ((-(min(var_6, var_9))))));
                    }
                    for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_14 = max((((var_1 << (((max(var_11, var_0)) - 22798))))), (max(var_2, ((max(var_6, var_9))))));
                        var_15 += (((max(var_11, var_9))) ? var_7 : var_10);
                        var_16 = ((!(~-var_1)));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_28 [15] [i_8] [i_1] [i_2] [18] = var_4;
                        var_17 = var_9;
                    }

                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_1] [i_9] &= ((-((var_3 ? (!var_11) : (var_10 - var_9)))));
                        var_18 ^= ((!((((var_0 ? var_7 : var_2))))));
                        arr_33 [20] [i_1] [i_2 + 1] [i_9] = (max((((!((min(var_4, var_2)))))), (var_2 ^ var_6)));
                        var_19 *= ((17883270849027499944 >> (-17823 + 17881)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            {
                arr_39 [i_10] [6] [6] = ((((min(var_4, ((max(var_10, var_11)))))) ? var_11 : var_1));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_46 [i_10] = (max(1064893288779398552, 17789));
                            arr_47 [i_10] [8] [i_12] [i_13] [i_12] = ((max((!67553994410557440), 17804)));
                            arr_48 [i_10] [i_10] [9] [i_12] [4] = (((((max(var_5, var_8)))) ? ((max((!var_4), -1050494970))) : ((min(var_0, var_11)))));
                        }
                    }
                }
                arr_49 [0] &= (max((~var_7), (max(var_2, (var_8 | var_5)))));
                arr_50 [i_10] = (55585 | 1547208954506072989);
            }
        }
    }
    var_20 = (min(var_20, var_6));
    var_21 = (max((max(var_0, ((var_6 ? var_7 : var_0)))), ((max((var_3 == var_6), var_5)))));
    var_22 = var_0;
    #pragma endscop
}
