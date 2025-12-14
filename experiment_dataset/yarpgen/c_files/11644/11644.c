/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_4] = ((var_2 >> (((min(1372724153, (min(var_8, (arr_2 [i_3] [i_3]))))) - 1372724131))));
                                arr_17 [i_0] [i_4] = (min(var_4, (min(var_9, (min(var_15, var_11))))));
                                arr_18 [i_4] = ((-(((arr_14 [i_0 - 4] [i_0 - 4] [i_1 - 1] [i_0 - 4] [i_0 - 4]) / 1))));
                                var_16 &= (min((((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4 + 2] [i_4 + 2]) ? var_0 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 - 1] [i_0]))), (((((-(arr_4 [i_0]))) < (((var_2 << (var_3 - 2031359525)))))))));
                                var_17 = (((((arr_12 [i_1 - 1]) || (arr_12 [i_1 + 1]))) ? ((-(arr_12 [i_1 - 1]))) : ((~(arr_12 [i_1 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((~(arr_14 [i_0] [i_6 - 1] [i_6 - 1] [i_0] [i_5 + 1])));
                                arr_24 [i_5] [i_5] [i_5] [i_5] = (min((arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5 + 2]), 1));
                                arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 35;
                                arr_26 [i_0] [i_5] [i_5] [i_5] [i_0] [i_0] [i_0] = (((((((var_12 ? 5139494936969317537 : (arr_3 [i_0] [i_0])))) ? ((var_13 / (arr_4 [i_0]))) : -var_6)) - ((((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5]) * var_15)))));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_0] [i_0] = -28305;
                    var_18 = ((min((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_2 : var_6)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        }
        arr_28 [i_0] = (((~-93) ^ (4294967295 & 131071)));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_31 [i_7] [i_7] = -36966;
        arr_32 [i_7] = (((arr_0 [i_7]) < var_4));
        arr_33 [i_7] = (arr_6 [i_7] [i_7]);
    }
    #pragma endscop
}
