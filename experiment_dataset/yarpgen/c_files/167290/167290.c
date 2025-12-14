/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_11 [7] [i_0] [i_0] = ((((((var_7 | var_6) ? ((var_3 ? var_3 : var_8)) : (((var_0 ? var_1 : var_5)))))) ? var_8 : (var_6 && var_3)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [2] [i_4] [0] [8] [6] |= (((~var_4) ? ((15175677078615014399 ? 127 : 52751)) : var_1));
                                arr_18 [i_0] = ((((((var_3 | var_8) & (((var_0 ? var_9 : var_9)))))) ? (((((var_4 ? var_7 : var_9))) ? (~var_5) : var_0)) : ((~((var_2 ? var_5 : var_6))))));
                                var_10 = var_1;
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {
                    arr_21 [i_0] = var_2;

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_11 = (((((var_2 ? var_2 : var_5))) ? (!var_5) : (var_9 || var_6)));
                        arr_25 [i_0] [i_0] = ((!(var_8 ^ var_2)));
                    }
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_12 = (min(var_12, (((~((var_1 ? var_2 : var_1)))))));
                        var_13 ^= ((~(!var_8)));
                        var_14 = (max(var_14, ((((((var_3 ? var_0 : var_0))) ? ((((((var_1 ? var_9 : var_4))) ? ((var_2 ? var_9 : var_9)) : var_9))) : ((var_3 ? (((var_6 ? var_6 : var_1))) : var_7)))))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_15 = (min(var_15, var_0));
                        arr_32 [i_0] = ((var_2 ? (((~var_2) ? ((var_6 ? var_6 : var_3)) : ((var_9 ? var_0 : var_3)))) : (((((var_6 ? var_6 : var_8)) & ((var_8 ? var_1 : var_8)))))));
                    }
                    arr_33 [i_0] [5] = (((((!var_2) ? var_9 : var_1))) ? (!var_5) : var_0);
                    var_16 = (max(var_16, (((((var_0 ? var_4 : var_3)) | var_7)))));
                }
                var_17 = (max(var_17, ((((((var_7 ? var_9 : var_1))) ? (((var_5 >> (var_2 + 5054410905274521411)))) : ((var_2 ? var_7 : var_8)))))));
                arr_34 [i_0] [2] [9] = ((((var_6 ? (((var_3 ? var_6 : var_1))) : var_7)) * ((((var_8 * var_8) / var_1)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_40 [i_10] [i_0] [1] [i_0] [i_0] = ((var_4 ? ((var_6 ? var_2 : var_0)) : var_6));

                            for (int i_11 = 1; i_11 < 14;i_11 += 1)
                            {
                                var_18 = (((((var_9 ? var_4 : var_5))) | (var_2 & var_9)));
                                arr_43 [4] [13] [7] [i_0] [i_11] = (((((var_2 ? var_7 : var_4))) ? ((var_9 ? var_2 : var_1)) : (var_7 & var_0)));
                            }
                            arr_44 [i_0] [i_9] [i_0] = ((~((var_4 ? var_4 : var_6))));
                            arr_45 [1] [i_0] [13] = ((-1 ? 57330 : 3271066995094537217));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((var_2 + 9223372036854775807) >> (var_8 - 3759982785)));
    #pragma endscop
}
