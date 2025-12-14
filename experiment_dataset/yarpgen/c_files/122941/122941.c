/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-9223372036854775807 - 1);
    var_19 = 45626;
    var_20 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (((arr_13 [i_1 - 1] [i_4 - 1]) && var_6));
                                arr_14 [i_0] [i_4] [i_3] [i_3] [i_2 + 1] [i_1] [i_0] = 4;
                                arr_15 [i_0] [i_0] [13] [i_0] [i_0] = (~7514);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = (((arr_2 [i_0 + 2] [i_1 - 1]) * var_2));
                    var_22 += (((arr_6 [5] [i_1] [13] [i_2]) ? -1593549854 : (((arr_7 [6] [i_1] [i_1]) ? var_15 : (arr_11 [i_0] [10] [i_0] [10])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, var_17));
                                var_24 ^= 11842;
                                var_25 = ((var_5 ? (~var_6) : ((var_6 ? (arr_1 [10]) : (arr_10 [i_0 - 3] [10] [i_0 - 3] [i_8])))));
                            }
                        }
                    }
                    var_26 = var_12;
                    arr_29 [14] [1] [14] |= (arr_3 [19] [19] [5]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_45 [i_13] [i_13] [i_9] [i_13] [i_9] [i_13] = ((var_5 == (arr_3 [i_11 + 1] [i_10 + 1] [i_9 + 1])));
                                arr_46 [i_9] [i_9] [i_11] = var_14;
                                arr_47 [2] [2] [i_9] [i_12] [2] [i_12] [0] = var_9;
                            }
                        }
                    }
                    arr_48 [i_9 - 3] [8] [i_9] = ((((((19884 == (arr_4 [i_9] [i_10 - 1]))))) - (((arr_11 [i_9 + 1] [17] [8] [i_9]) ? var_1 : 0))));
                    arr_49 [i_9] [i_9] [i_11] = (arr_43 [i_10] [i_11 + 1] [i_11] [i_11]);
                    arr_50 [i_10] [i_9] [i_10] = (arr_19 [i_9 - 2] [i_10 + 2]);
                    arr_51 [i_9] [11] [0] = (var_14 + -376225918);
                }
            }
        }
        var_27 = (max(var_27, (((~(var_2 / -5))))));
        var_28 += 1246988311;
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    arr_56 [i_9 - 2] [i_14] [0] &= (((arr_25 [i_9] [i_9 - 2] [i_9]) ? (arr_52 [i_9 - 3]) : 19828));
                    var_29 = (((arr_28 [i_9 - 3] [i_14 + 1] [0] [13] [i_14 + 1] [i_9 - 3]) ? (arr_28 [i_9 - 1] [i_9] [i_9] [i_9] [i_14 - 1] [8]) : 16383));
                }
            }
        }
        var_30 = 1753787670889584875;
    }
    for (int i_16 = 2; i_16 < 18;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 4; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                {
                    var_31 -= (min((max(((464007506 >> (((arr_24 [i_16] [14] [i_18] [14]) - 1716874336104938363)))), (arr_26 [i_16]))), (((((arr_12 [i_16 + 2] [i_17] [i_16 + 2]) | (arr_10 [17] [i_16 + 2] [i_16] [i_16 + 2]))) << (((((~7503) + 7520)) - 13))))));
                    arr_64 [13] [16] [i_17 - 1] [16] = max(((max(149, 63))), var_11);
                }
            }
        }
        var_32 = (((((max(var_13, 2292664593363961838))) ? (arr_61 [i_16 - 1]) : ((max((arr_5 [i_16 + 2]), 63782))))) & ((((((var_14 - (arr_2 [i_16] [i_16])))) || ((min(var_17, 1152620010860102534)))))));
    }
    var_33 = var_14;
    #pragma endscop
}
