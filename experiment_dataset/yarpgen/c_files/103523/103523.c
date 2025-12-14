/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = 47;
            arr_5 [i_1] [i_0] = ((var_5 || ((((~var_12) | (var_10 ^ 52))))));
        }
        arr_6 [i_0 - 1] [i_0] = var_14;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_20 = (-var_13 & 108086391056891904);
        arr_9 [i_2] = -354;
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_21 &= -5130982889218150592;
        var_22 -= (((9223372036854775807 / var_6) <= (((~(max(var_2, var_3)))))));
        var_23 ^= var_8;
        arr_14 [i_3 + 1] = ((((((29 ? var_1 : var_17)) / (((max(194, 47)))))) + var_10));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((-101 / ((max(var_14, var_11))))))));
                            var_25 ^= ((~(max((arr_2 [i_4 - 1]), ((((arr_19 [i_4] [i_5] [i_6]) ? 47 : var_9)))))));

                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 16;i_8 += 1)
                            {
                                arr_26 [i_4 - 1] [i_5] [i_6] [i_7] [i_8 + 1] = (((((arr_17 [i_4 + 1] [i_5 + 1] [i_7]) + 51558796)) - (arr_20 [i_4 - 1] [i_7] [i_7])));
                                var_26 |= (arr_18 [i_4 - 2] [i_5]);
                                var_27 = var_0;
                                var_28 = (((var_17 || 107) || (arr_23 [i_8 - 3] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8])));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 17;i_9 += 1)
                            {
                                arr_29 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4 + 1] = ((~(arr_16 [i_7])));
                                var_29 = (max(var_29, (((!(((108086391056891887 ? (arr_21 [i_7]) : var_14))))))));
                                var_30 *= var_3;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_39 [i_4] [i_5] [i_10] = ((((((arr_32 [i_12] [i_10] [i_5 + 2] [i_4]) ? var_8 : (arr_32 [i_4 - 1] [i_11] [i_10] [i_11])))) > (min(15620863226762263689, var_7))));
                                var_31 = (((min((-113 && -84), 1073741823)) > 3972999314));
                                var_32 = (76 * (max((min(-76, var_8)), ((min(var_10, 16))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
