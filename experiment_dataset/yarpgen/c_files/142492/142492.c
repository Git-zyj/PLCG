/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_10 += var_3;
                                var_11 ^= (max((max(var_0, (arr_4 [10]))), (max(((15 ? (arr_2 [i_0] [i_3] [i_3]) : var_4)), (((arr_1 [i_0]) | var_7))))));
                            }
                        }
                    }
                    var_12 = (min(((max(219, 63))), ((~(((arr_8 [i_1]) ? (arr_5 [i_0] [9] [i_2] [i_2]) : 98))))));
                    arr_11 [i_0] [i_0] = var_7;
                    var_13 |= ((!(arr_8 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((arr_9 [i_0] [i_0] [i_0]) | 111)))));
                                var_15 = (((((arr_8 [i_6 - 2]) << (((arr_9 [i_0 + 3] [i_0 - 1] [i_0 + 2]) - 116)))) % (max((arr_8 [i_2]), (((arr_2 [i_0] [i_1] [i_2]) << (var_8 - 67)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        arr_18 [i_7] = (max((var_3 + var_1), (((-255 && (((arr_8 [i_7]) != var_9)))))));
        var_16 = (max(var_1, 15));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        arr_25 [i_7 - 1] [i_7] [5] [i_9] [i_7 - 1] [i_10] = (min(((var_1 ? 120 : var_6)), 118));

                        for (int i_11 = 4; i_11 < 14;i_11 += 1)
                        {
                            var_17 = ((((89 / (~var_3))) != (arr_14 [10] [i_8] [i_8] [i_9] [10] [i_11])));
                            arr_28 [13] [i_9] = (!var_5);
                            arr_29 [i_9] [i_9] [i_9] [i_9] [i_11] = arr_16 [i_11 + 3];
                            arr_30 [i_9] = ((~(arr_2 [i_7 + 2] [i_11 - 1] [i_11 + 2])));
                        }
                    }
                }
            }
        }
        arr_31 [4] = ((+((12 ? (arr_15 [i_7] [i_7 - 1] [i_7 + 2]) : (arr_21 [i_7 + 3] [i_7 + 3])))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    {
                        var_18 ^= ((var_9 ? (max((0 | 121), ((min(var_5, (arr_36 [i_7] [i_13])))))) : ((max((arr_14 [i_7] [21] [i_7] [i_7] [i_7 + 1] [10]), (!187))))));
                        var_19 += var_4;
                    }
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_20 *= arr_6 [i_15] [i_15] [2] [i_15] [i_15];
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                {
                    var_21 = (max(var_21, 169));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((arr_6 [11] [i_16] [23] [i_18] [i_19]) ? var_2 : ((max((arr_41 [i_16 - 1]), (arr_8 [i_19 - 1])))))))));
                                arr_51 [i_15] [i_15] [3] [i_17] [i_18] [i_19] = (min(((-(arr_0 [i_17]))), (arr_46 [i_16 + 1] [21])));
                                arr_52 [i_15] [i_15] [i_16 + 3] [i_15] [1] [i_18] [i_15] = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 22;i_21 += 1)
                        {
                            {
                                var_23 *= (min((((min(192, 224)))), (arr_6 [i_21] [i_20 + 3] [0] [0] [i_15])));
                                arr_60 [i_15] [i_21] [i_17] [i_20] [i_21] = (min((arr_4 [i_21]), (max(-4, (40 < var_8)))));
                                var_24 *= (max((((arr_15 [i_16 + 3] [i_20 + 3] [i_21 - 1]) < (arr_6 [i_20 + 3] [i_21] [i_21 + 1] [i_21 - 1] [i_21]))), ((22 < (arr_59 [i_16] [i_17] [i_20 + 2] [i_20 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
