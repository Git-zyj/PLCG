/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [7] |= var_13;

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            arr_9 [i_0] [i_1 - 3] = (((-8715 >> ((min(0, (arr_1 [i_1])))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_18 [5] [i_2] [5] [i_3] [i_4] [i_2] = var_17;
                            arr_19 [i_0] [i_2] = (max(0, var_1));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_18 = var_2;
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (-8715 <= var_15);
                        var_19 = ((((((arr_12 [i_0] [i_0] [i_0]) != -810)))));
                        var_20 = ((255 ? var_14 : ((~(arr_1 [i_1 - 2])))));
                    }
                }
            }
        }
        var_21 = var_2;
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_22 = (((((max(var_15, 0))) ? (((var_4 ? (arr_2 [i_7] [i_7 - 1]) : var_10))) : (((arr_14 [i_7] [i_8] [i_7 - 1] [i_10] [i_9 + 3] [i_10]) ? 0 : var_6)))));
                            arr_35 [i_7] [i_8] [i_9] [i_9] [i_8] = ((max(-100, -15284)));

                            for (int i_11 = 0; i_11 < 21;i_11 += 1)
                            {
                                var_23 = (max(var_23, ((((min(var_4, (arr_5 [i_7 - 1]))) + (((arr_10 [i_9 + 3] [i_9 + 3] [i_9] [i_9]) + (var_4 + var_8))))))));
                                var_24 -= ((!(((-var_7 >> (((arr_1 [i_7]) + 129)))))));
                                arr_38 [i_8] [i_8] [i_9] [i_10] [i_11] [i_8] = (min(var_11, var_7));
                            }
                            arr_39 [i_7 - 1] [i_7] = (((arr_29 [i_7 - 1]) ? var_8 : (arr_29 [i_7 - 1])));
                        }
                    }
                }
                arr_40 [i_8] [i_8] [i_8] = 810;
            }
        }
    }
    #pragma endscop
}
