/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 ^= 0;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_15 = 252;
                        var_16 = (min(var_16, ((((var_6 - var_2) - (arr_7 [i_3] [i_1] [i_1] [i_0]))))));
                        var_17 = (arr_6 [i_3 - 1] [i_2 - 1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_18 ^= (arr_4 [i_4] [16]);
                        arr_13 [i_0] [i_2] [i_2] [9] = 1;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_16 [i_0] [i_5] [i_2] [i_2] = ((0 | ((var_6 ? var_3 : 1))));
                        var_19 = (arr_4 [i_0 - 1] [i_1]);
                        var_20 = (min(var_20, (arr_1 [i_0] [3])));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_21 = (((var_4 ? var_12 : 1259838854182871755)));
                        arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] = ((((((arr_18 [i_6] [i_2] [i_1] [i_0] [i_0]) ? (arr_12 [i_2] [i_1] [i_2]) : var_1))) && ((((arr_11 [6] [i_1] [i_2] [i_6]) ? (arr_8 [i_2] [i_2] [i_1] [i_2]) : var_1)))));
                    }
                }
            }
        }
    }
    var_22 = var_13;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_23 [1] [3] = 1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_23 = 1631376384;
                    var_24 = (arr_22 [i_9]);
                    var_25 = (arr_10 [11] [3]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 15;i_12 += 1)
                {
                    {
                        arr_36 [i_7] [i_11] = ((~(arr_12 [i_10] [i_10] [i_10])));
                        var_26 = (max(var_26, (1 < 12401039308494517352)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {

            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                arr_46 [i_15 + 1] [i_13] = (arr_15 [i_14] [i_14] [i_15] [i_14]);
                var_27 -= (((arr_30 [i_13] [i_14]) ? var_10 : 1259838854182871755));
                arr_47 [i_14] [i_13] [i_15] [i_14] = (arr_14 [i_14] [i_13] [i_15] [i_13] [i_15]);
            }
            var_28 &= ((-1 ? 1914 : 1));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 15;i_18 += 1)
                    {
                        {
                            arr_57 [1] [1] [1] [i_16] [i_17] [i_17] [i_16] = (arr_55 [i_16] [i_16] [i_14] [i_14] [i_16]);
                            var_29 = ((arr_48 [i_18 - 1] [i_18] [i_16]) ? var_10 : (arr_40 [i_17]));
                            arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_16] [i_13] = 4032542208;
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            var_30 = (((((4032542208 ? (arr_12 [i_13] [i_13] [i_19]) : (arr_24 [i_19])))) ? 8 : var_7));
            var_31 *= var_8;
            arr_63 [i_19] [i_19] = (((arr_41 [i_19]) ? (arr_39 [i_19]) : (13969 / var_11)));
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_32 = var_5;
            var_33 = ((-121 ? (((!(arr_1 [i_20] [i_13])))) : 30));
            arr_67 [i_13] = ((-9826 > (((arr_52 [i_13] [i_13] [i_20] [i_20]) ? 3605511590 : var_4))));
        }
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 16;i_23 += 1)
                {
                    {
                        var_34 = 4021119000662729925;
                        var_35 = -4021119000662729925;
                        var_36 ^= (arr_5 [i_13] [i_13] [i_22]);
                    }
                }
            }
        }
    }
    var_37 = (max(((min(192, 1346106498561360971))), (max(var_9, (min(var_2, -118))))));
    #pragma endscop
}
