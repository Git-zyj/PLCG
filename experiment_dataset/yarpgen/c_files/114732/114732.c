/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_11 = ((max(1, (arr_10 [i_1] [i_1]))));
                            var_12 = ((((~(((arr_10 [i_1] [i_1]) ? var_4 : 1)))) | ((-(arr_6 [i_0] [8] [i_2] [i_3])))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_1] = min((((-(var_2 && var_7)))), ((+((26 ? (arr_0 [i_2]) : -8779182788806305721)))));
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_0] = ((min(((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? var_2 : var_5))), ((~(arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_1] [13] = 1;
                        var_13 = -var_6;
                        arr_20 [8] [i_1] [i_1] [i_6] = (max(73, (((var_0 << (arr_5 [i_0] [i_1] [i_0]))))));
                        var_14 = (arr_7 [i_0] [i_1]);
                    }
                }
            }
            var_15 *= 0;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_0] = -4688879899775291986;
                            arr_29 [10] [i_1] [i_1] [5] = (((((max((arr_5 [i_0] [i_1] [9]), var_9))) ? (arr_22 [i_7] [i_1] [i_7] [i_1]) : 32767)) ^ (((min((arr_23 [i_8] [i_8] [i_8] [i_8]), var_8)))));
                        }
                    }
                }
            }
            arr_30 [i_1] [2] [i_1] = ((arr_4 [i_0] [i_0]) <= ((105 * (arr_7 [i_0] [i_0]))));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_16 = (max((max((((var_1 ? 51 : -2097152))), 666638257060652461)), ((max((arr_18 [i_0] [i_0] [i_0] [i_10]), (min((arr_22 [i_10] [i_10] [i_0] [i_0]), var_9)))))));
            var_17 = (max(var_17, (arr_7 [i_0] [i_10])));
            var_18 *= ((max((arr_23 [i_0] [i_0] [i_10] [8]), ((~(arr_7 [i_0] [i_10]))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_37 [i_0] = (((((1 ? 1 : 85))) ? 13051992761515597183 : 18));
            var_19 = (max(var_19, ((((arr_0 [i_0]) ? (arr_7 [i_11] [i_11]) : (((arr_24 [0] [i_11] [0] [i_11]) ? (arr_4 [i_0] [i_0]) : (arr_2 [0] [i_11] [i_0]))))))));
            arr_38 [i_0] [i_0] [i_0] = (arr_15 [8] [i_11]);
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((((!(6986921909417114742 <= 18446744073709551615))) ? ((((arr_7 [i_0] [1]) == (arr_46 [6] [6] [i_12] [11] [i_14])))) : ((-(((arr_24 [6] [i_12] [i_12] [i_12]) ? (arr_27 [1] [1] [1] [1] [1]) : var_3))))));
                        arr_48 [i_14] [7] [i_13] [i_12] [i_12] [i_0] = ((((var_2 ? (arr_35 [i_14]) : (arr_17 [i_0] [i_0] [i_0] [0]))) & ((-(arr_41 [i_13])))));
                    }
                }
            }
        }
        var_20 = var_2;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
    {
        arr_51 [i_15] = (arr_24 [i_15] [i_15] [i_15] [8]);
        var_21 = (~96);
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        arr_61 [i_15] [i_15] [i_15] [6] [i_15] [i_15] = ((~((-(arr_0 [i_15])))));
                        arr_62 [i_15] = ((~(((arr_23 [6] [i_16] [i_16] [i_16]) ? var_4 : var_2))));
                        arr_63 [i_15] [i_17] [i_17] [i_17] = (4294967295 <= 18446744073709551598);
                    }
                }
            }
        }
        arr_64 [2] &= ((~(~4896)));
        arr_65 [i_15] = (-(var_5 ^ var_4));
    }
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        arr_70 [i_19] = (~-1);
        arr_71 [i_19] = (min(var_8, (((-127 - 1) ? (((arr_67 [i_19] [i_19]) ? var_9 : (arr_27 [i_19] [i_19] [13] [i_19] [i_19]))) : -898687312))));
        arr_72 [i_19] [i_19] = -var_6;
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
    {
        arr_76 [i_20] = 16384;
        arr_77 [i_20] [i_20] = (((((-(~var_6)))) ? ((-((1844360169 ? 100 : var_6)))) : ((max((arr_23 [13] [i_20] [i_20] [i_20]), (max(var_1, (arr_9 [i_20] [4] [0] [i_20] [i_20]))))))));
        arr_78 [i_20] |= (((~(arr_21 [i_20] [i_20]))));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                {
                    var_22 ^= ((var_3 ? 1 : var_2));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 14;i_24 += 1)
                        {
                            {
                                arr_93 [i_20] [i_20] [i_20] [i_23] [i_23] [i_23] [i_24] = (((((121 ? var_9 : (((max((arr_82 [i_20] [i_21]), (arr_31 [i_20] [i_20] [i_20])))))))) ? ((~((771 ? 10791942860311210936 : 0)))) : (max((~-7591787535890164239), (arr_83 [0] [0] [i_22] [i_23])))));
                                arr_94 [i_23] = arr_92 [i_20] [i_21] [3] [i_22] [3] [i_24];
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_25 = 0; i_25 < 12;i_25 += 1)
    {
        var_23 = var_9;
        arr_98 [i_25] [i_25] = (arr_34 [i_25] [i_25]);
        var_24 -= (arr_23 [i_25] [i_25] [i_25] [13]);
        var_25 = (min(var_25, (((-(arr_66 [i_25] [2]))))));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 16;i_26 += 1)
    {

        for (int i_27 = 0; i_27 < 16;i_27 += 1) /* same iter space */
        {
            arr_105 [i_26] = (~0);
            var_26 = (var_6 % var_5);
        }
        for (int i_28 = 0; i_28 < 16;i_28 += 1) /* same iter space */
        {
            var_27 = ((-(arr_99 [i_26])));
            arr_108 [i_26] [i_26] [i_28] = var_8;
        }
        var_28 = (((-127 - 1) - var_1));
    }
    #pragma endscop
}
