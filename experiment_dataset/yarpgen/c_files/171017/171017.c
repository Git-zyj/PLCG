/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (~var_5);
    var_16 += ((!((max((~var_10), var_4)))));
    var_17 = (min(var_6, (((((var_1 ? var_12 : var_7))) ? -var_10 : var_11))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_1 [i_0 + 1] [i_0 + 2]);
        arr_3 [i_0] = var_10;
        var_18 += ((~(((var_14 == (arr_1 [i_0] [i_0]))))));
        arr_4 [10] = (!18);
        arr_5 [i_0 + 2] [i_0] = ((((-(arr_1 [6] [i_0]))) < (arr_0 [i_0])));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_19 ^= (min((((arr_6 [i_2] [i_2]) ? (arr_8 [i_1]) : ((((arr_14 [i_2] [i_1]) ? var_0 : (arr_14 [i_3] [i_2])))))), ((var_3 + (arr_8 [i_1])))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_20 [i_4] [i_3] [6] [i_1] [i_1] = (arr_17 [i_1] [i_2] [i_3] [i_4]);
                        arr_21 [i_1] [i_2] [i_3] |= ((+((var_1 >> (((((arr_12 [i_1]) ? (arr_15 [i_1] [i_2] [i_3] [i_2]) : (-127 - 1))) - 27986))))));
                        arr_22 [i_1] [9] [i_3] [11] [i_2] [i_3] = (var_4 ? (arr_15 [10] [i_2] [10] [i_2]) : (max((var_8 * 1), ((min((arr_16 [3]), (arr_18 [i_3] [i_2] [i_1])))))));
                        var_20 *= -var_1;
                    }

                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = var_13;
                            arr_28 [i_1] [i_2] [i_5] [i_5] [i_6] [i_5] [i_3] = ((((arr_17 [i_1] [i_2] [i_3] [i_6]) ? (arr_17 [i_1] [i_2] [i_3] [6]) : (arr_17 [i_1] [i_2] [i_3] [i_5 - 2]))) & (((((arr_27 [i_1] [i_1] [i_3] [i_3] [2]) * var_10)) << (var_3 != var_4))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_31 [i_1] [i_2] [i_3] [i_5] [1] [i_2] [i_5] = ((arr_24 [i_1] [12] [12] [1] [i_1]) ? (arr_24 [i_7 + 1] [i_5 + 1] [i_3] [i_1] [i_1]) : (arr_24 [i_7 - 1] [i_5 + 1] [i_1] [3] [i_1]));
                            var_22 *= ((var_1 - (arr_24 [i_1] [i_2] [i_3] [i_1] [i_5 - 2])));
                        }
                        var_23 *= min((arr_13 [i_1]), 30);
                        var_24 = (~var_14);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_36 [1] [i_2] [i_2] &= (arr_19 [i_1] [i_2] [i_3] [i_8]);
                        var_25 -= ((var_3 & ((+(((arr_23 [i_3] [9]) ? 30 : (arr_33 [i_1] [i_2] [i_2] [i_2])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_26 *= var_1;
                                var_27 += (min(65535, ((var_11 * (var_1 || var_11)))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = ((((min(var_6, (arr_34 [i_1] [i_1])))) ? (max(var_9, (arr_34 [i_1] [i_1]))) : (((var_12 << (((arr_34 [i_1] [i_1]) - 844523833)))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_29 *= (((((min((arr_25 [i_1] [i_1] [i_11] [i_13] [12] [i_14] [i_13]), var_8))) >> ((((16527 << (var_13 - 29))) - 4230908)))));
                                var_30 ^= ((((((arr_9 [i_14 - 1]) ? (arr_30 [i_1] [i_11] [i_12] [6] [0]) : (arr_9 [i_1])))) && ((max((arr_35 [i_1] [i_11] [i_12]), (arr_35 [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }
                    arr_50 [i_1] [i_12] [i_12] = ((-(((arr_26 [i_1] [i_12]) & (max(var_5, var_0))))));
                    var_31 ^= ((~(var_4 && 55108)));
                    var_32 |= ((((var_14 == (arr_46 [i_1] [i_1] [i_12] [i_12] [i_1] [i_11]))) ? ((var_8 ? (((arr_15 [i_1] [i_1] [i_11] [i_12]) % var_12)) : ((-(arr_49 [i_1] [i_1] [8] [i_12] [i_12] [i_12]))))) : (min(1469199276, (((arr_32 [i_1] [i_11] [i_12] [i_1]) ? var_11 : (arr_15 [i_1] [i_1] [i_1] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
