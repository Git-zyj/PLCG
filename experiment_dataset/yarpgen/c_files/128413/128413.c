/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_2, ((((min(var_4, -1))) - var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] = ((2617767429 ? var_9 : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_1])));
                                var_18 = (((arr_13 [i_0] [i_0] [i_0] [i_4 + 3] [i_4 - 1]) ? var_5 : (arr_10 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 = ((-(arr_6 [5] [i_1] [i_1])));
                                var_20 -= (arr_4 [4] [4] [4]);
                                var_21 = var_8;
                            }
                        }
                    }
                    arr_20 [i_2] [i_0] [i_0] = (((arr_7 [i_2] [i_1] [i_2] [i_2]) ? var_5 : (var_0 != 18446744073709551601)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_1] = (((arr_24 [i_0] [i_7 + 1] [i_2] [22] [i_7 + 1]) % (arr_24 [i_0] [i_7 - 1] [i_2] [i_7] [i_7 - 1])));
                                var_22 = ((var_14 ? var_6 : var_2));
                            }
                        }
                    }
                }
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_23 = var_4;
                                arr_36 [i_0] [i_0] [i_0] [i_11] = ((~(~var_2)));
                            }
                        }
                    }
                    var_24 |= ((-14 ? (!44) : ((((arr_6 [i_0] [i_1] [i_0]) != (arr_27 [i_9 + 3] [i_9 - 2] [i_9 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 23;i_13 += 1)
                        {
                            {
                                arr_42 [i_0] [i_12] [18] [i_0] [i_0] = (arr_38 [i_0] [i_0] [i_0] [i_0]);
                                var_25 = (min(((((arr_17 [i_13 + 1] [i_9 - 2]) == var_13))), ((~(arr_4 [20] [i_9] [i_9 + 2])))));
                                arr_43 [i_0] [i_12] [i_9] [i_0] = (+(((2617767442 && 238) - ((47630 << (((((arr_3 [i_0] [i_1]) + 36)) - 9)))))));
                            }
                        }
                    }
                    var_26 = ((((max((arr_34 [i_0] [i_1]), var_15))) ? (((((((min((arr_0 [i_0] [i_0]), 123)))) < (arr_17 [i_9 + 1] [i_9 + 1]))))) : (max(-248, (min((arr_1 [i_0]), 4117375975896426633))))));
                    arr_44 [i_0] = -62;
                }
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    arr_48 [i_0] [i_1] = ((2617767429 ? 1677199880 : -2378609197543301137));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                var_27 = ((var_7 == ((-var_9 ? var_14 : var_6))));
                                var_28 = ((((((1677199867 > 2104053167) ? ((((arr_33 [i_0] [i_0] [i_1] [i_0] [i_16]) <= (arr_5 [i_0] [i_0] [i_0] [i_16])))) : ((var_9 ? (-2147483647 - 1) : 112))))) ? -var_7 : (min(var_12, (((var_3 ? var_8 : (arr_40 [i_0] [i_14] [i_14] [i_15 + 1] [i_15]))))))));
                            }
                        }
                    }
                }
                arr_56 [i_0] = (min(var_10, (((arr_41 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]) ? 2147483647 : (arr_41 [i_0] [8] [8] [i_0] [20] [i_0])))));
            }
        }
    }
    #pragma endscop
}
