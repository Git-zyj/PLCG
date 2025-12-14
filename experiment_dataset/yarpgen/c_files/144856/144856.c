/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~(min(5898277726935279369, 511)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1] = ((~(((arr_3 [i_2 - 1]) ? 65042 : 24310))));
                            var_16 = (max(var_16, (((~(min(((-1 ? 65025 : 511)), var_14)))))));
                            var_17 = (min((((((min((arr_4 [i_0]), (arr_2 [i_1] [i_1])))) || (arr_2 [i_2 + 1] [i_2 + 1])))), ((-7959544664050773574 ? 65024 : 237))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] = (((arr_3 [i_1]) ? ((min(var_12, (arr_3 [i_1])))) : (arr_1 [i_1])));
                    arr_16 [i_1] [i_1] = (~65025);
                    arr_17 [i_0] [i_0] [i_1] [i_4] = (max((max((((arr_0 [i_4] [i_0]) & var_8)), (arr_7 [i_4]))), (min(var_7, var_11))));
                    var_18 ^= (((var_6 ? var_13 : ((~(arr_10 [i_4] [i_1] [i_1] [i_4]))))));
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_20 [i_0] [i_1] [i_5] = (((~(~var_1))));
                    var_19 = (max(var_19, ((((arr_9 [i_1] [i_0] [i_0] [i_0] [i_1]) ? (arr_19 [i_1]) : (((arr_4 [i_0]) ? (((~(arr_2 [i_0] [i_0])))) : (((arr_13 [i_0] [i_0] [i_0] [i_0]) + var_5)))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_20 = 33005;
                                var_21 = (((arr_8 [i_7] [i_7] [i_7]) + (((((var_13 ? var_14 : var_8))) ? ((max(19025, 532))) : ((var_9 ? (arr_7 [i_7]) : 32530))))));
                                arr_25 [i_7] [i_0] [i_7] [i_0] [i_0] = var_12;
                                var_22 = var_9;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_23 = (max(var_23, (((~(((arr_10 [i_1] [i_8] [i_8] [i_8]) ? (var_9 + var_12) : (min((arr_2 [i_1] [i_8]), var_0)))))))));
                    var_24 = 65033;
                    arr_28 [i_1] = ((((min(1525, -76))) ? (~var_14) : (min((arr_13 [i_1] [i_1] [i_8] [i_8]), (arr_13 [i_8] [i_1] [i_0] [i_0])))));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_25 -= (max(((var_2 ? (arr_12 [i_0] [i_1] [i_9]) : (arr_12 [i_9] [i_1] [i_0]))), (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_1] [i_0] [i_1]) : (arr_14 [i_0] [i_0] [i_1] [i_9])))));
                    arr_32 [i_0] [i_0] = (max((((~(arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] [i_9])))), (min((arr_10 [i_1] [i_1] [i_1] [i_9]), (var_12 != 32530)))));
                }
            }
        }
    }
    var_26 = (max(8828, 1525));
    #pragma endscop
}
