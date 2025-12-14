/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 &= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((var_0 ^ (-7687818828099486817 > -72)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_18 = (max(var_18, ((((var_12 > var_2) ? var_3 : var_0)))));
                        var_19 = var_1;
                        var_20 = var_15;
                        arr_11 [i_0] [i_1] [i_1] [i_3] = (~-72);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_18 [i_5] [i_4] [i_2] [i_1] [i_1] [i_0] = (~var_8);
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5] = ((var_5 ? var_0 : var_3));
                        }
                        arr_20 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = (var_4 - var_4);
                    }
                    arr_21 [i_0] [i_1] = var_7;
                    arr_22 [i_2] [i_1] [i_0] = (var_0 + var_10);
                }
            }
        }
        var_21 = (var_0 > var_14);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] = ((629934002 ? 6938606243761606869 : 1));
        var_22 ^= ((var_8 ? var_2 : var_1));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_9] [i_8] [i_7] [i_6] = -var_12;
                        arr_35 [i_6] [i_7] [i_8] [i_9] [i_9] = ((var_6 ? var_12 : var_1));

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_38 [i_6] [i_7] [i_8] [i_9] [i_10] = var_1;
                            var_23 = (min(var_23, (7033 < 72)));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_24 = (min(var_24, (var_3 > var_1)));
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((var_2 ? var_3 : var_15));
                        }
                        arr_42 [i_6] [i_7] [i_8] [i_9] = ((var_9 ? var_11 : var_14));
                    }
                }
            }
        }
    }
    var_25 &= (((((84 <= 6499898077037483289) ^ ((var_1 ? var_10 : var_3)))) >> (var_0 - 45)));
    #pragma endscop
}
