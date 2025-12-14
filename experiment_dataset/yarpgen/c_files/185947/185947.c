/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] = ((-(19 / 38198)));
                                arr_12 [i_0] [i_2] [i_2] [i_2] [i_3] = ((!((((arr_6 [i_0 + 1]) ? (arr_6 [i_0 + 1]) : -2972)))));
                                arr_13 [i_2] [i_0] [1] [i_3 - 1] [1] = (arr_10 [i_0] [i_1 - 2] [i_2 - 1] [i_2] [3] [i_4 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = var_0;
        var_13 = (max(var_13, var_0));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {

                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        arr_24 [i_5] [i_6] [i_7] [11] [i_8] = (((var_5 ^ var_1) - ((max((arr_8 [0] [i_8] [i_6 + 2] [i_8]), 38198)))));
                        var_14 = (min(var_14, (((-(~1095147985269026116))))));
                        var_15 = (!var_6);
                        var_16 = (arr_17 [i_5] [i_6 - 2]);
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_17 ^= (max(-var_1, -var_6));
                        arr_27 [i_7] [i_5] [i_5] [i_5] = ((((max(19, 1))) ? var_8 : (((-((var_3 ? var_6 : (arr_15 [i_9 + 3]))))))));
                        arr_28 [i_7] = var_5;
                    }
                    arr_29 [i_5] [i_6] [i_7] = (min(0, 236));
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_18 = var_11;
        var_19 = (max(((min(var_9, var_2))), (255 & 1)));
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        arr_34 [i_11] [i_11] = var_6;

        /* vectorizable */
        for (int i_12 = 1; i_12 < 24;i_12 += 1)
        {
            var_20 = (arr_37 [i_11 + 3] [i_11]);
            var_21 = var_7;
        }
    }
    var_22 = var_9;
    #pragma endscop
}
