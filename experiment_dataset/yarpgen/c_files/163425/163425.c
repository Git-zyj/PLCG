/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_5 ? var_6 : ((max(var_7, var_5))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_11 = ((1 ? (var_1 ^ var_8) : -12));
                        arr_9 [i_0] [i_0] = ((0 ? var_2 : var_8));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_4] [19] [i_4] [i_1] [i_4] [i_1] [i_0] = (((-7 ? 0 : 62833)));
                            arr_13 [7] [7] [i_4] [i_3] [1] = ((-(arr_11 [i_0] [i_0] [i_2] [i_2 + 2] [i_4] [i_4] [i_2 - 2])));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_12 = (((-14 && 1549850682543332282) ? var_1 : -4763));
                            var_13 = ((-var_3 ? var_3 : (arr_3 [10] [10] [19])));
                            var_14 ^= (!var_2);
                            var_15 = -38;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_21 [i_1] = ((-((var_8 ? var_4 : var_4))));
                            var_16 = ((!(((~(arr_6 [i_1] [i_2 - 1] [i_3] [i_3]))))));
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_6] = (arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_17 = ((-(arr_24 [i_2 + 1] [i_2 + 2] [23] [i_2 - 1] [i_2 + 1])));
                            var_18 = ((var_5 ? (arr_14 [i_1] [i_1] [i_2] [i_2 + 1]) : var_5));
                        }
                        var_19 = ((-(~-1)));
                    }
                }
            }
        }
        var_20 = 35152;
    }
    for (int i_8 = 3; i_8 < 10;i_8 += 1)
    {
        var_21 = var_7;
        var_22 += var_9;
    }
    var_23 = ((-14 ? 9223372036854775807 : -9223372036854775807));
    #pragma endscop
}
