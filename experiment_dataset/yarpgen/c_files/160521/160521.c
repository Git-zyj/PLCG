/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        var_20 = (arr_1 [i_0]);
        var_21 = var_5;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = (arr_3 [i_1]);
            var_22 = (((arr_4 [i_2 + 2] [i_2 - 1]) ? (arr_4 [i_2 - 1] [i_2 + 2]) : (arr_4 [i_2 + 1] [i_2 + 2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] [i_3] [i_4] = -15872;
                        var_23 += (arr_6 [i_2 + 2]);
                        arr_14 [5] [i_4] [i_3] [i_3] [i_3] = ((12146365829972889471 ? 3526674718674244244 : (arr_12 [i_1] [i_2 + 2] [i_3] [i_4] [i_3])));
                        var_24 = (max(var_24, var_1));
                    }
                }
            }

            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                var_25 = (arr_15 [i_2 - 1]);
                arr_17 [i_1] [i_2] [i_1] [i_1] = 0;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_26 = (arr_6 [i_1]);
                            arr_22 [i_2 + 2] [0] [3] [i_6] [i_7] [i_6] [i_2 - 1] = (arr_15 [i_1]);
                            var_27 = (arr_20 [i_2 - 1] [i_5 + 2] [i_2 - 1] [i_7]);
                        }
                    }
                }
                arr_23 [i_1] [i_1] = (((arr_16 [4] [i_2] [i_5] [4]) ? -15877 : (~-1827272181)));
                arr_24 [i_1] [i_1] [i_1] = var_19;
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_28 &= (((!((((arr_12 [i_1] [i_1] [i_1] [i_8] [i_1]) ? var_9 : (arr_19 [i_9] [i_8] [i_9] [i_10])))))) ? (arr_15 [i_9 + 2]) : ((-2147483645 & (~29967))));
                                arr_35 [i_1] [i_1] [i_1] [i_9] [i_1] = (~var_3);
                            }
                        }
                    }
                    var_29 -= -71776119061217280;
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 22;i_12 += 1)
    {
        arr_39 [24] [i_12] = (((arr_38 [i_12]) == (arr_36 [i_12])));
        arr_40 [i_12] [i_12] = (arr_38 [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {
                    var_30 |= var_4;
                    arr_48 [i_12] [i_13] [i_12] [i_12] = (arr_36 [i_12]);
                }
            }
        }
        var_31 = (((((-((((arr_37 [i_12] [i_12]) < 12146365829972889476)))))) ? ((~((576460752303419392 ? 1776300801 : (arr_43 [i_12] [i_12] [i_12]))))) : -2585));
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                {
                    var_32 = 16934857300532974642;

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        arr_60 [i_12] [i_12] = var_13;
                        var_33 -= ((-(((((~(arr_54 [i_12] [i_17] [3] [11])))) ? -10108 : (arr_55 [i_15] [i_17] [i_15] [18])))));
                        var_34 = (arr_42 [i_16] [24]);
                    }
                    for (int i_18 = 1; i_18 < 21;i_18 += 1)
                    {
                        arr_63 [i_12] [i_16] [i_18] = ((~(arr_38 [i_12])));
                        arr_64 [i_12] [12] [i_16] [i_18 + 4] [i_15] [i_16] = -15873;
                        var_35 = ((~(arr_38 [i_12])));
                    }
                    arr_65 [i_12] [i_12] [21] [i_16] = ((!2147483647) ? (arr_56 [i_12] [i_15] [i_12] [i_15]) : 15872);
                    var_36 = (((((((arr_46 [i_12] [i_12] [i_15]) ? 15869 : (arr_54 [i_12] [i_12] [i_12] [i_16]))) == (arr_42 [i_15] [i_16]))) ? (arr_61 [i_16] [i_12] [i_16] [i_15] [i_15]) : (((((-(arr_55 [i_12] [i_12] [16] [i_16])))) ? 576460752303419372 : ((29967 ? (arr_37 [i_12] [i_12]) : (arr_51 [i_12])))))));
                }
            }
        }
    }
    var_37 = var_1;
    #pragma endscop
}
