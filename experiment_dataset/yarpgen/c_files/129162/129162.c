/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 / ((var_0 ? var_11 : ((4333857829890440008 ? var_8 : 57))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1 + 1] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] [i_0] [i_4] [i_4] [1] = ((var_2 / (var_7 & 18446744073709551600)));
                                var_18 ^= var_12;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (3529024679118484004 >> 1);
                                arr_27 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = (((((arr_1 [i_1 + 1]) ? -100549413 : (arr_1 [i_1 + 1]))) > (arr_1 [i_1 - 1])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_19 *= ((-84 ? 2147483647 : (((max(var_7, ((((arr_0 [i_0]) > -1)))))))));
            var_20 = ((1 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((var_2 ? -1068861712 : (arr_20 [i_7] [i_7] [i_0] [16]))))));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_15));
                            var_22 += (var_8 - var_2);
                        }
                    }
                }
            }
            var_23 = var_3;
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_41 [i_11] = (((arr_16 [i_11] [i_11] [i_11]) | 18446744073709551615));
        var_24 = ((((1 ? var_1 : var_6)) << ((((var_16 ? 32767 : (arr_20 [13] [13] [i_11] [i_11]))) - 32753))));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        arr_44 [i_12] = ((var_7 / ((~((var_10 ? var_2 : var_15))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_25 = 18446744073709551615;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                arr_55 [3] [3] [i_16] [i_15] [i_16] = ((-((var_11 >> (var_1 - 73)))));
                                var_26 = ((((((max((arr_9 [i_12] [i_15] [i_12]), var_9)) * (arr_0 [i_12])))) && (((arr_23 [i_12] [i_15] [i_12] [0] [i_12]) == var_8))));
                                arr_56 [i_12] [i_12] [7] [6] [i_12] [i_12] [i_12] = (((arr_38 [i_12] [i_13] [21] [i_15] [i_16]) ^ -4333857829890439999));
                            }
                        }
                    }
                    arr_57 [i_12] [i_12] [i_12] = ((~((max(32756, (min(var_0, (-32767 - 1))))))));
                }
            }
        }
        var_27 = var_6;
        arr_58 [i_12] = 1;
    }
    #pragma endscop
}
