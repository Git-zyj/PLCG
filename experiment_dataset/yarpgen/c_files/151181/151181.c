/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((((var_5 ? var_9 : 18446744073709551615))) ? ((max(178672918729430005, -26694))) : -178672918729430005)))));
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((-(((arr_2 [i_1]) ? ((var_0 ? 70367670435840 : var_4)) : ((var_10 ? (arr_0 [i_0]) : var_11))))));
                            var_17 ^= ((var_9 || (arr_4 [i_0] [i_0] [i_1])));
                        }
                    }
                }
                var_18 = ((((min((((-178672918729430006 ? var_4 : -770400440))), (min(11764084171548919224, 6682659902160632395))))) ? (var_12 / 1) : ((-1938561491 ? -178672918729430016 : (arr_3 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_6] [i_4] [i_5] [i_6] &= (arr_11 [i_1] [i_4] [i_5]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] = ((((((var_0 ? 770400432 : (arr_11 [1] [i_1] [i_1])))) + ((0 ? var_12 : (arr_1 [7] [7]))))));
                                arr_21 [i_0] [i_0] [i_0] [i_6] [i_0] |= (((!var_11) > ((min(var_5, var_5)))));
                                arr_22 [i_1] [i_1] = (((((((((arr_7 [i_1] [i_1]) * var_8))) ? var_3 : (arr_15 [i_0] [14] [i_5] [i_5 + 2] [i_6] [i_5] [i_1])))) <= 178672918729430005));
                                arr_23 [1] [i_1] [i_4] [i_4] [i_1] [i_1] [11] = (arr_14 [i_0] [i_1] [i_4] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                var_19 = -3086611342834637614;
                                arr_39 [1] [i_8] [i_9] [i_9] [6] [i_11] [i_9] &= var_6;
                            }
                        }
                    }
                }
                var_20 = (min(var_20, var_13));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_46 [i_8] = (arr_42 [i_8]);
                            var_21 += (max(var_1, (!-26694)));
                            arr_47 [i_7] [i_8 - 1] [i_8] [i_7] [1] = ((~(arr_2 [i_8])));
                            var_22 += (!(((~(arr_44 [6] [i_13])))));
                            arr_48 [i_8] = (((!var_12) + (min((((1942750210 ? 123812057 : 2147483647))), ((-(arr_40 [i_8] [i_13] [0] [i_13])))))));
                        }
                    }
                }
                arr_49 [i_8] = (min((min((((arr_13 [i_7]) * var_9)), -19395)), (arr_34 [11] [i_8 + 1] [i_8 + 1] [i_7] [i_8 + 1] [8])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            {
                arr_56 [i_14] [i_15] [i_15] = ((var_3 / ((~(~var_7)))));
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 10;i_18 += 1)
                        {
                            {
                                arr_65 [i_14] [i_15] [i_15] [i_16] [i_17] [i_18] = ((min((min(4192254722330800155, -178672918729429991)), (((18446744073709551615 ? var_6 : 1))))));
                                arr_66 [i_15] [i_14] = 973519207;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
