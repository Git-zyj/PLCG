/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((124 ? 10338 : 132));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_14 ^= (((arr_3 [i_0] [i_1]) > 127));
            var_15 = ((~((~(arr_2 [i_1 - 1])))));
            var_16 = (-101 - 255);
            arr_6 [i_0] &= (arr_3 [i_0] [i_1 + 1]);
        }
        var_17 = (min(var_17, (((((var_8 ? var_10 : (arr_2 [i_0]))) * ((var_2 ? 507437023 : var_7)))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                {
                    var_18 *= -var_9;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((arr_18 [i_0] [i_2 - 1] [i_3 - 3] [i_4] [i_5 - 1]) ? var_3 : 31794)))));
                                arr_19 [i_0] [i_2] [i_3] [i_4] [i_5] = (((arr_8 [i_4]) % (((arr_18 [i_0] [1] [i_3] [12] [i_3]) + var_10))));
                            }
                        }
                    }
                    arr_20 [i_0] = -var_9;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    arr_26 [i_0] [i_6 + 3] [i_7] |= (((arr_16 [i_7 + 1] [i_6 + 1] [i_6 - 1] [i_0] [1]) ? (arr_9 [i_6]) : ((((arr_1 [i_6]) ? var_6 : var_11)))));
                    arr_27 [1] [i_0] [i_7] [i_7] = (arr_25 [i_7] [i_6 - 1] [i_7]);

                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        arr_32 [i_7] = (((arr_2 [i_6 + 1]) ^ (arr_2 [i_6 + 2])));
                        var_20 = (max(var_20, (((~(arr_12 [i_8 - 1] [i_7 + 1] [i_6 + 1] [i_6 + 3]))))));
                        var_21 = ((arr_3 [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0]) : (!var_5));
                    }
                    arr_33 [i_7] [i_0] [i_0] [i_7] = 24;
                    var_22 *= (((arr_10 [i_7 + 2] [i_7 + 1]) ? (~var_3) : var_3));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = (max((~var_8), (arr_29 [i_9] [i_9] [i_9] [i_9])));
        var_23 = (((((-(((arr_3 [i_9] [i_9 - 1]) * var_4))))) && (((-(arr_15 [i_9] [i_9] [i_9] [i_9 + 1]))))));
    }
    var_24 -= (((((min(var_11, var_4)))) && var_3));
    var_25 = var_6;
    var_26 *= var_8;
    #pragma endscop
}
