/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 ^= ((arr_1 [i_0]) ? var_1 : var_0);
        arr_2 [i_0] = var_1;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_16 *= ((var_9 ? (184036328345469643 == 18262707745364081975) : ((-18282 ? 108 : 16590))));

        for (int i_2 = 4; i_2 < 6;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_17 ^= ((!(arr_12 [i_1 + 1] [i_2 - 3] [i_4 - 1] [i_4])));
                        var_18 = (-(((arr_12 [i_1] [i_2] [i_2] [i_4]) ? var_4 : 59420)));
                        arr_13 [1] [1] [i_3] [i_4] &= ((-(arr_9 [i_2] [i_2 + 3] [i_4 - 1] [6])));
                    }
                }
            }
            var_19 ^= ((~(arr_4 [i_1 - 1])));
        }
        var_20 = arr_10 [i_1];
        var_21 ^= 54;
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_16 [8] = ((28 - (min(1, 6455088467560157543))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_22 = (min((-1575276226 & -439227710), (arr_1 [i_5])));
                            arr_27 [i_9] [i_8] [i_7] [15] [i_6] [i_6] [i_5] = (arr_21 [i_7] [i_7] [14] [i_6] [i_9]);
                            arr_28 [4] [i_5] = ((var_6 ? ((1703536276 ? -var_7 : -439227710)) : (arr_15 [i_5])));
                        }
                        arr_29 [i_5] [i_7] [i_6] = ((((((arr_22 [i_6 + 3] [i_6 + 1] [i_6 + 2]) / (arr_22 [i_6 - 1] [i_6 + 2] [i_6 + 1])))) ? var_3 : (min((arr_14 [1] [i_8]), (arr_23 [i_5] [i_5] [i_6 + 2] [i_7] [i_7] [i_5] [i_8])))));
                        var_23 += ((-(var_2 == var_4)));
                        var_24 -= (arr_21 [i_5] [13] [i_6 + 3] [i_8] [i_5]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 24;i_12 += 1)
            {
                {
                    var_25 = (((((-(arr_31 [i_12])))) ? var_2 : (arr_37 [18])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_26 = (arr_41 [i_12 - 1] [i_11 - 1] [i_14 - 1]);
                                var_27 = (max(var_27, (arr_35 [i_11] [i_14])));
                                var_28 *= (((var_7 <= var_3) == (arr_39 [i_10 - 2] [i_11 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_14 + 1])));
                            }
                        }
                    }
                    var_29 = ((var_9 % (arr_33 [i_10])));
                }
            }
        }
        arr_42 [i_10] [i_10] = (arr_35 [20] [i_10]);
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                {
                    arr_49 [14] &= ((arr_36 [i_10 - 2] [i_10 + 1] [i_15 + 1]) ? (arr_36 [i_10 - 2] [i_10 + 1] [i_15 + 1]) : var_7);
                    var_30 = ((0 && 184036328345469627) ? (arr_38 [i_15] [i_15 - 2] [i_15 + 1] [i_15 + 1] [i_15]) : (arr_40 [i_15 - 2] [i_15] [i_10] [i_15] [i_15 + 1]));
                }
            }
        }
        var_31 ^= var_8;
    }
    var_32 = (max((((var_13 / (65535 * 22)))), var_6));
    var_33 &= var_13;
    var_34 = var_9;
    /* LoopNest 3 */
    for (int i_17 = 4; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 21;i_19 += 1)
            {
                {
                    var_35 = (arr_55 [i_17 - 4]);
                    var_36 = (((((arr_50 [i_18 + 2] [i_19 + 1]) ? (arr_46 [i_18 + 1]) : (arr_46 [i_18 + 3])))) ? ((-(arr_46 [i_17]))) : (arr_50 [i_17 + 4] [i_17]));
                    arr_57 [i_19] [i_17] [i_17] [i_17] = (min(184036328345469652, 465466115));
                }
            }
        }
    }
    #pragma endscop
}
