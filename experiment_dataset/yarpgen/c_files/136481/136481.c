/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((((((arr_0 [i_0] [i_1]) ? ((((arr_2 [i_0]) == (arr_0 [i_0] [i_0])))) : (arr_3 [i_0])))) && (((-var_1 / (arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = ((132120576 ? ((((min(var_8, 1))) ? (arr_5 [i_0] [7]) : ((~(arr_0 [i_0] [i_1]))))) : (((~var_8) & ((var_7 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_1])))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = (arr_2 [i_3 - 2]);
                        var_14 = -1;
                        var_15 = ((!(arr_5 [i_0] [i_3 + 2])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 ^= (((arr_9 [i_0 - 1] [i_0 + 1] [16] [i_0]) && (var_6 && var_11)));
                        arr_16 [i_0] = ((!(((arr_15 [i_0] [i_1] [i_1] [i_0] [i_4]) || var_6))));
                        arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_4] = (~(arr_0 [i_0] [i_0]));
                    }
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        arr_20 [i_0 - 1] [i_0] = (((arr_9 [i_5] [19] [i_5 + 3] [i_5 + 3]) - var_0));
                        var_17 = (((((~(arr_15 [i_0 - 1] [1] [i_2] [i_0] [i_0 - 1])))) && (((var_9 ? var_1 : -1929544740)))));
                    }
                    arr_21 [i_0] [i_1] [i_2] = (((arr_10 [i_0] [i_1 + 1] [i_0] [i_1 - 1] [i_2]) ? (arr_10 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_1 + 1] [16])));
                    var_18 = ((1 ? (arr_9 [i_0 - 1] [i_1] [3] [i_2]) : (arr_9 [i_2] [i_0 - 1] [i_0] [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    arr_26 [i_0] = (var_1 / (arr_5 [i_0] [i_0]));
                    var_19 = (arr_22 [13]);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_33 [4] [i_0 + 1] [4] [i_0] [i_7] [2] = var_8;
                                arr_34 [4] [i_0] [i_1] [10] [i_7] [i_8] [i_8] = ((!(((var_9 - (arr_31 [i_1 + 1] [i_7 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 1]))))));
                                arr_35 [i_0] [i_1 - 1] [i_6] [i_0] [i_8] = 215;
                            }
                        }
                    }
                }
                var_20 = ((+(max(1, (min((arr_5 [i_0] [i_0]), (arr_2 [i_0])))))));
                arr_36 [i_0] = (arr_8 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_21 += ((-2523580945629181257 ? (((var_10 << (49394 - 49385)))) : ((var_1 / ((var_11 ? var_1 : var_8))))));
    #pragma endscop
}
