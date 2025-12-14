/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [5] [i_0] = ((-152 + 2147483647) << (((255 % 103) - 49)));
                        arr_15 [i_3] [i_2 - 2] [16] [i_0] [i_0] &= (~(arr_11 [i_1 + 3] [i_2 - 2]));
                    }
                }
            }
        }
        var_17 = (((((-(arr_4 [i_0])))) ? ((-152 - (112 * var_13))) : 94));
        arr_16 [i_0] [i_0] = 103;
    }
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] [i_6] [i_6] [i_4] = ((~(((var_10 < 13) ? (arr_24 [i_5 - 2] [i_5] [i_5 - 2] [i_6] [i_6 + 1]) : (arr_9 [i_4] [i_6 - 3] [i_6 - 3])))));
                            var_19 = (max(var_19, ((((arr_7 [i_4]) || ((!(65523 / 3406361410066652346))))))));
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_20 = ((~(arr_28 [i_8])));
                    arr_32 [i_4] [i_4] [5] = (arr_8 [15] [i_5] [i_8]);
                    arr_33 [i_8] [i_5 - 1] [i_4] = (arr_20 [i_8] [i_5] [8]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_21 = (arr_6 [i_5] [i_5 - 1]);
                    arr_38 [i_4] [i_4] [i_5] [i_4] |= ((arr_13 [i_5 - 1] [i_5 + 1] [i_5 - 2] [14]) ? 4 : 4);
                    arr_39 [i_5] [i_5] = (((arr_25 [i_4]) + -241));
                }
                arr_40 [i_4] = (((65531 && var_1) ? ((((((max(87, (arr_21 [i_4] [i_5] [8])))) || (((arr_35 [i_4] [i_4] [i_4] [i_4]) && 11)))))) : (max((arr_13 [15] [i_5] [i_5] [i_5]), 14))));
                var_22 = (max(var_22, (arr_34 [i_5] [i_5] [i_5 + 1])));
            }
        }
    }
    var_23 = (min(var_23, 36028797018961920));
    var_24 ^= ((!(((~((65523 ? -2129862854 : var_14)))))));
    #pragma endscop
}
