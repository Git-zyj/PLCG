/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-6330172556864637480 ? var_15 : (((max(var_3, 1))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (!1);
        arr_2 [i_0] = (((arr_1 [i_0] [0]) ? (((arr_0 [i_0]) % (((arr_0 [i_0]) | (arr_1 [i_0] [i_0]))))) : (((((var_11 ? 1 : 5071583073164562699))) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = (((arr_5 [i_1]) != (((-var_6 ? ((min((arr_10 [i_4] [i_1] [i_1]), (arr_13 [i_1] [i_2])))) : ((max(224, 22529))))))));
                        var_22 = ((!((!(arr_12 [i_3 + 1] [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 3])))));
                    }
                }
            }
        }
        var_23 += var_0;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_24 ^= 174;
                            var_25 = ((((((((18446744073709551615 ? -6330172556864637487 : -5726451014351412763))) ? (max(9223372036854775807, 1760821316)) : (arr_9 [i_5] [i_8])))) ? (min((max(var_14, var_9)), ((max(var_2, var_2))))) : (arr_8 [i_6] [i_6])));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_26 = ((var_17 ? (-2075331635 ^ 8725724278030336) : (~var_3)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_36 [i_5] [6] [i_5] [i_11] [i_11] [i_12] = (arr_12 [i_5] [18] [i_10] [i_11] [i_12]);
                            var_27 = var_13;
                        }
                    }
                }
                var_28 ^= (~0);
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_29 = -991365397348059808;
                arr_41 [i_5] [i_5] = var_4;
            }
            for (int i_14 = 2; i_14 < 8;i_14 += 1)
            {
                var_30 = (max(var_30, -3868596114439148521));
                arr_46 [i_5] [i_6] = (max((min((arr_23 [2] [i_14 + 1] [i_14 - 2] [2]), 9223372036854775801)), ((((((arr_23 [1] [0] [i_14 + 2] [1]) + 2147483647)) << (((((arr_23 [0] [i_14] [i_14 + 2] [0]) + 14007)) - 3)))))));
                var_31 = (min(var_31, ((min(((max((arr_7 [i_14 + 2] [16] [i_14 - 2]), (arr_7 [i_14 + 2] [4] [i_14 - 2])))), var_0)))));
            }
            var_32 = -2075331635;
            var_33 = arr_14 [i_6] [i_5];
            var_34 = var_3;
        }
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 9;i_16 += 1)
            {
                {
                    var_35 = (!9223372036854775807);
                    arr_55 [i_5] [i_5] [i_5] [i_5] = (min((((arr_14 [i_15 + 1] [i_16 - 3]) ? (arr_14 [i_15 + 3] [i_16 - 3]) : (arr_14 [i_15 + 2] [i_16 - 3]))), (arr_54 [i_16 + 2])));
                    arr_56 [i_5] = (min(var_7, (max(12595, (arr_45 [i_5] [4] [i_5] [i_16])))));
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_36 ^= ((~((var_18 ? var_8 : (arr_19 [i_18 - 1] [i_15 + 1] [i_5])))));
                                arr_61 [i_18 - 1] [i_17] [i_17 + 1] [i_16] [0] [i_15 + 1] [i_5] = min((min(var_4, 895251329438266583)), (((arr_35 [i_18] [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_18] [i_18 - 1]) ? var_3 : (arr_35 [i_18] [0] [i_18] [i_18 - 1] [i_18] [10] [i_18 - 1]))));
                            }
                        }
                    }
                }
            }
        }
        var_37 = (arr_37 [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_19 = 1; i_19 < 12;i_19 += 1)
    {
        var_38 = (arr_12 [i_19] [i_19 + 2] [i_19 + 1] [i_19 + 1] [i_19]);
        var_39 = (max(var_39, (((arr_9 [18] [18]) ? (arr_8 [i_19 - 1] [i_19 + 1]) : var_8))));
        var_40 = ((~(arr_62 [i_19 - 1] [i_19 - 1])));
        var_41 ^= ((arr_8 [i_19 - 1] [i_19]) == (arr_8 [i_19 + 1] [i_19 + 2]));
    }
    #pragma endscop
}
