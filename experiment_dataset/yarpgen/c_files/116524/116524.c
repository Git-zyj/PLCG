/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1 - 2] [i_1] = ((var_9 | var_3) || var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 |= (max(((max((arr_11 [i_1] [i_1 - 1] [i_1] [i_1]), var_0))), (min((arr_4 [0] [i_0 + 2] [0]), 5751184615011137130))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_11 = -4;
                                var_12 = ((((var_4 > ((-(arr_2 [i_1 - 3])))))) != (!var_6));
                                arr_16 [i_1] [i_2] [i_1] [i_1] = (((((1 != (arr_12 [i_1 + 4] [i_1 + 4] [i_2] [i_0 + 3])))) != (min((~223), ((var_8 ^ (arr_8 [i_4] [i_2] [i_1 - 3] [i_0])))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_5] = (((arr_15 [i_0 + 3] [1] [i_1] [i_0 + 1] [i_0 + 3] [i_2] [i_0 + 1]) - (arr_5 [i_1 + 3] [i_0 + 1])));
                                var_13 ^= (!var_1);
                            }
                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                var_14 = (((arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? ((max(-60, 223))) : 0));
                                var_15 = ((!((max((arr_13 [i_0 + 2]), (arr_13 [i_0 + 3]))))));
                            }
                            arr_23 [i_0] [i_0] [i_1] [i_3] = ((var_9 ? (arr_22 [i_0 + 3] [i_0 + 3] [i_1 + 2] [8] [i_1]) : (((max((arr_22 [i_1] [i_1] [i_1 + 4] [i_2] [i_3]), (arr_22 [i_1] [1] [i_1 - 1] [21] [i_1 - 1])))))));
                        }
                    }
                }
                var_16 *= 1114618070;
            }
        }
    }
    var_17 = (((((~((1 << (var_3 - 7503)))))) ? 13 : 180));
    var_18 = (min(((max(-var_3, 1))), (min(((var_9 ? var_5 : var_3)), ((max(var_8, var_7)))))));
    var_19 |= ((~(max(var_3, ((var_9 ? var_4 : var_5))))));

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_20 = (((arr_18 [i_7] [i_7] [i_7] [i_7]) ? -0 : ((-((-(arr_24 [i_7])))))));
        var_21 = var_5;
        arr_27 [i_7] = (max((1 != var_7), ((((var_0 ? 19288 : 1)) ^ ((121 ? var_7 : -14668))))));
    }
    #pragma endscop
}
