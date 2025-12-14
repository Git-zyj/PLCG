/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [0] [12] [i_2] = -var_12;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (min((var_2 + 57), (4164605106763662626 - 5208155677826588944)));
                        var_20 = (min(var_20, -262144));
                        var_21 = (max(((((((arr_1 [1]) ? var_17 : (arr_7 [6] [3] [i_2])))) ? (max((arr_12 [6] [i_3] [i_2] [i_2] [i_1] [12]), var_7)) : var_12)), (((arr_0 [i_0] [i_1]) + (arr_0 [i_1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 = var_0;
                        var_23 = (!var_2);
                        arr_15 [i_2] = ((var_15 ? (max(((-(arr_5 [i_0] [8] [i_2]))), ((var_15 ? var_6 : (arr_11 [i_2] [i_2]))))) : -var_0));
                        var_24 = (((!0) && (((var_3 ? (arr_2 [i_4]) : 36263)))));
                        var_25 ^= (arr_5 [i_1] [i_1] [i_4]);
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [8] [i_1] [i_0] [i_2] = var_15;
                        var_26 ^= (-9223372036854775800 != var_0);
                        var_27 = ((max((arr_9 [i_0] [i_0] [i_2] [i_5]), -5618)));
                        var_28 = max((((max(4021673913, var_3)))), (((arr_4 [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? ((min(141, (arr_16 [i_2] [i_1] [i_2])))) : ((29286 ? 1478332269 : var_12)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_2] [i_2] [1] = (!var_7);
                                arr_24 [i_0] [i_2] [i_2] [i_2] [i_0] = var_6;
                                var_29 ^= (((var_13 ? 114 : var_4)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
