/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (((~(arr_6 [i_0] [i_0] [8] [i_0]))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [7] [i_1] [7] |= (((((136 ? 1 : 825906027))) ? var_7 : ((2147483633 - (((arr_2 [i_0]) ? 2636 : (arr_11 [1])))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = (arr_3 [7]);
                        var_19 = (arr_6 [i_0] [i_1] [i_1] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_20 = (min(var_20, var_5));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_0] [8] [i_2] [0] [i_5] &= (((~(arr_15 [i_2] [i_4] [i_5]))));
                            var_21 |= (arr_6 [i_5] [i_4] [i_1] [i_0]);
                            var_22 = (arr_5 [i_0] [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_23 = (min(var_23, (((((max((((arr_1 [i_2]) ? 1 : (arr_1 [i_0]))), (~100)))) ? (max((((arr_5 [i_0] [i_0]) ? -987673077 : (arr_4 [i_0] [7]))), (((arr_3 [i_1]) ? (arr_7 [i_4] [i_1]) : (arr_21 [i_0] [4] [6]))))) : (arr_1 [i_0]))))));
                            var_24 = (min(var_24, ((max((((arr_20 [i_2] [i_6 + 2] [i_6 + 3] [i_6] [i_6]) | (arr_20 [i_6] [i_6 - 1] [i_6 - 1] [1] [i_6]))), (95 <= 332080444))))));
                            var_25 = var_2;
                            arr_22 [i_0] [i_0] [8] [8] = arr_2 [i_0];
                        }
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            arr_27 [i_7] [i_4] [i_2] [10] [10] = max(((((max((arr_21 [i_2] [0] [7]), var_2))) ? var_15 : ((112 - (arr_2 [i_7]))))), (~var_3));
                            var_26 = (((arr_9 [i_0] [i_0] [i_7 - 1]) != (max((arr_11 [i_7 - 1]), (arr_7 [i_7 + 2] [i_7 - 1])))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_27 = (arr_26 [i_0] [i_0] [i_1] [i_1] [i_2] [7] [i_8]);
                        var_28 = (max(var_28, var_0));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_29 &= (min((((((arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_40 [i_9] [i_10] [i_11] [i_11] [i_13]) : (arr_37 [i_10] [i_10] [i_12] [i_13]))) & ((5020 ? (arr_36 [13] [i_10] [9]) : (arr_33 [i_11]))))), (((arr_36 [i_9] [i_9] [i_11]) ? (arr_36 [i_9] [i_13] [i_11]) : -987673077))));
                                var_30 = (((((12781 ? (arr_40 [i_9] [i_10] [i_11] [18] [i_13]) : 186))) ? -1521105204 : (arr_41 [i_9] [i_13] [i_11] [0] [i_13])));
                                var_31 = (var_7 <= 235);
                                var_32 = ((((((((192842134 ? (arr_37 [i_9] [i_11] [i_12] [i_13]) : 128))) ? 16229 : (arr_31 [i_9] [i_10])))) && (arr_39 [i_13] [i_9] [i_11] [5] [i_9])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_33 = (((((62899 ? 2147483627 : 224))) ? 190 : (arr_45 [19] [19] [i_11] [i_14] [i_14] [i_14])));
                                var_34 ^= arr_35 [i_9] [i_10];
                            }
                        }
                    }
                    var_35 = ((max((((arr_32 [i_9] [i_9]) ? (arr_34 [i_9]) : (arr_32 [i_10] [i_9]))), (min((arr_31 [7] [i_11]), var_1)))));
                    var_36 = (arr_37 [i_11] [i_9] [i_11] [i_9]);
                }
            }
        }
    }
    var_37 &= ((~(5 ^ var_7)));
    var_38 |= (((((((var_10 ? var_3 : var_8))) ? (var_15 ^ var_9) : 32))) ? ((var_15 ? var_7 : var_3)) : var_5);
    #pragma endscop
}
