/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_0 <= var_12);
    var_17 = var_1;
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 ^= (arr_4 [i_0] [i_0] [i_0]);
                    var_20 = (((arr_3 [i_0]) * ((-489155837 / (arr_3 [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_21 = (min(var_21, ((((~(140737488355327 | -21643)))))));
                var_22 += (((arr_2 [i_4]) % 140737488355317));
                var_23 = (((((var_6 ? var_13 : (arr_2 [i_3])))) ? 32767 : (arr_2 [i_3])));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_24 = var_6;
                    arr_18 [i_3] [i_4] [i_3] [i_3] = (((((arr_5 [i_5] [i_4] [i_3]) ? (((arr_9 [i_3] [i_5]) ? 2387926468193492221 : var_5)) : (arr_0 [i_3] [i_4]))) * 1));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_26 [i_3] [i_8] = 2147483647;
                                var_25 ^= var_12;
                                var_26 = (arr_10 [i_3]);
                                var_27 = (((((((var_1 > (arr_4 [i_6] [i_4] [i_6])))) > ((1 ? var_0 : (arr_2 [i_8]))))) && (((var_3 ? var_14 : var_14)))));
                            }
                        }
                    }
                    var_28 = ((((((arr_15 [i_4] [i_3] [i_4] [i_4]) / -var_12))) ? ((var_1 ? var_13 : -var_11)) : var_12));
                }

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_29 ^= (arr_27 [i_9] [i_4] [i_9] [i_4]);

                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] = ((-(((((arr_12 [i_3] [i_10]) | var_8)) % ((var_14 ? var_14 : 161))))));
                        arr_34 [i_3] [i_3] = ((((var_0 <= (arr_31 [i_10] [i_9] [i_4] [6])))) > (arr_29 [i_9]));
                        var_30 = ((((((arr_23 [6] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_32 [i_10] [i_9] [i_3] [i_3]) : var_1))) ? (arr_0 [i_3] [i_10]) : var_12));
                        var_31 = (max(var_31, (!2147483647)));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] [i_3] [i_3] = var_3;
                        arr_39 [i_3] = ((var_0 ? (arr_32 [i_3] [i_3] [i_3] [i_3]) : ((((arr_7 [i_9] [1] [i_9] [i_9]) && var_13)))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_32 = -2553606237848722268;
                            var_33 = -var_7;
                            var_34 = ((-1828874914729108323 ? ((((255 != (arr_35 [i_12] [i_12] [i_12] [i_12]))))) : 140737488355316));
                            arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = -var_3;
                            var_35 = 72877299;
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_36 = (arr_32 [9] [i_9] [i_14] [i_12]);
                            var_37 = var_1;
                            var_38 = (arr_1 [i_12] [i_12]);
                        }
                        arr_50 [i_3] [i_12] [i_4] [i_4] [i_3] = var_4;
                        var_39 = ((-(var_11 | 6571726579394079689)));
                        arr_51 [i_3] [i_3] [i_3] [i_3] = (-((((arr_10 [i_3]) && var_11))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                arr_58 [i_3] [i_3] [i_9] [i_4] [i_4] [i_3] [i_3] = var_8;
                                arr_59 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((-(((var_0 || (arr_15 [i_3] [i_3] [i_9] [i_15 + 2]))))));
                                arr_60 [i_3] [i_15 + 1] [i_9] [i_4] [i_3] = (((((arr_54 [i_3] [i_15 - 3] [i_15 - 3] [i_3]) ? (arr_54 [i_3] [i_15 - 3] [i_15 - 3] [i_3]) : (arr_54 [i_3] [i_15 - 3] [i_15 - 3] [i_3]))) & (arr_17 [i_3] [i_15 - 3] [i_15 - 3] [i_3])));
                                var_40 &= var_6;
                            }
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    arr_63 [i_3] [i_3] [i_17] [i_3] = ((arr_41 [i_3] [i_4] [i_3]) ? (((arr_11 [i_3] [i_4] [i_3]) + (arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_15 [i_3] [i_3] [i_3] [i_4]));
                    arr_64 [i_3] [i_4] [i_3] = 31;
                }
            }
        }
    }
    #pragma endscop
}
