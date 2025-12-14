/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 54861;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (~0)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_15 = (((((~((~(arr_1 [i_2])))))) && (~54861)));
                            arr_13 [1] [i_1] [11] [i_1] [i_1] [i_1] = min((((arr_10 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0]) + (135 - 54861))), (((max(-125, -7411)))));
                            var_16 = (((var_7 + 2147483647) >> (((arr_7 [i_0] [i_0] [i_0] [i_3] [0]) + 4123))));
                        }
                    }
                }
                arr_14 [i_0] [i_0 - 1] [13] [18] = ((((arr_3 [i_1] [i_1] [i_1]) != 12678460)));
            }
            var_17 = (max(var_17, var_10));
            var_18 = ((66 > (min(266014943, -4732507076965681380))));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_23 [i_5] [i_1] [i_5] [i_5 + 1] [i_6] [i_7] = -var_12;
                            arr_24 [i_0] [i_1] [18] [i_6] [i_5] [i_7] = (((arr_4 [i_5 + 1] [i_0 - 2] [i_0 - 1] [i_0]) <= 1));
                        }
                    }
                }
                arr_25 [i_0] [i_5] [i_5] = 12678460;
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                var_19 = (min(95, -2134624740));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_20 = (max(10920, (((var_0 && (-7387 || -3059411170383135948))))));
                            arr_34 [i_0] [i_1] [i_8] [i_9] [i_9] [i_10] = 247;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_21 = ((max((var_8 & 28708), (~-7387))));
                            arr_41 [i_0] [i_12] [i_8] [i_11] [i_11] [i_12] = (!3926126305361620463);
                            arr_42 [i_0 - 1] [i_12] [i_12] [i_11] [i_12] = (min(((~(~-7387))), (max(-66808770, 266014943))));
                            var_22 |= var_1;
                        }
                    }
                }
                arr_43 [i_0] [i_1] [4] &= ((~(max(-66808770, 76))));
            }
        }
    }
    var_23 = 1;
    var_24 = var_2;
    #pragma endscop
}
