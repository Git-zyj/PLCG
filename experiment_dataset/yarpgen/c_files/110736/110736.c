/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = (((!var_3) ? (var_7 + 581987933) : ((((max(1, var_15))) ? (~3712979339) : (min(var_6, 9223372036854775796))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] [i_3] [i_2] [i_2] = ((-(arr_8 [2] [i_1] [14] [8] [i_0] [i_3])));
                    var_20 = ((-var_1 ? (3712979337 - 48) : (!42)));
                    var_21 &= ((var_3 && (arr_3 [i_0] [i_0])));

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_22 |= var_15;
                        arr_15 [i_0] [i_3] [i_2] [i_2] [7] [i_4] = (((arr_14 [i_0] [8] [i_3] [i_3] [i_3] [i_4 + 3] [i_4]) % -1));
                        arr_16 [i_1] |= (((((1 ? var_0 : var_3))) + (arr_3 [i_4] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_23 ^= (((arr_18 [i_0] [i_1] [i_5]) ? var_17 : (arr_18 [i_2] [i_3] [i_5])));
                        arr_20 [i_3] [i_2] = (((((9223372036854775796 ? (arr_18 [i_2] [i_2] [i_2]) : var_2))) || 54));
                    }
                }
                var_24 = (arr_18 [i_1] [i_1] [i_1]);

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_25 = (((((var_5 ? var_10 : (arr_12 [i_0] [i_0] [9] [4] [i_6] [i_6])))) ? var_9 : (var_11 * var_11)));
                    var_26 &= ((!(var_2 || var_12)));
                    var_27 = ((((var_2 | (arr_18 [i_0] [i_1] [i_6]))) & var_3));
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_28 = var_4;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_31 [i_0] [i_0] [0] [i_8] [1] [0] [i_7] &= ((~(arr_29 [i_1])));
                            arr_32 [i_0] [1] = ((var_16 && (arr_0 [i_7] [i_8])));
                        }
                    }
                }
                arr_33 [i_7] [i_1] [i_0] [i_0] = ((((!(arr_17 [i_0] [i_0] [i_0]))) ? -43 : ((3712979363 ? var_8 : (arr_26 [i_0] [i_1])))));
                arr_34 [i_0] [i_0] [i_0] = (~var_2);
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_39 [i_10] = 65535;
                arr_40 [i_0] [0] [1] [i_10] = ((-(arr_25 [i_10])));
            }
            var_29 = (arr_25 [i_1]);
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_30 = (((arr_4 [1] [6] [i_11]) + (arr_27 [i_0] [i_11] [i_11] [i_11])));
            arr_43 [5] [5] [5] = (arr_18 [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_31 = (((3712979360 != 68) ? var_5 : ((var_8 ? (arr_26 [i_14] [i_0]) : 86))));
                            var_32 = (max(var_32, (arr_42 [i_13] [8])));
                            var_33 = var_1;
                            var_34 = (var_5 * var_8);
                        }
                    }
                }
            }
            var_35 = ((~(arr_17 [i_11] [i_11] [i_0])));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_36 = (max(var_36, (arr_22 [i_15])));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_37 ^= ((+(((arr_54 [i_0] [i_15] [i_16]) * (arr_10 [i_0] [i_0] [i_0] [i_16])))));
                var_38 = ((65530 ? var_12 : (arr_7 [i_0])));
            }
            var_39 = -var_4;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    {
                        arr_61 [i_17] = var_16;
                        var_40 = ((var_10 ? (arr_56 [i_17]) : ((-(arr_10 [i_0] [7] [7] [i_18])))));
                    }
                }
            }
            var_41 = (max(var_41, ((((var_16 <= var_5) != (arr_4 [i_0] [i_0] [i_15]))))));
        }
        for (int i_19 = 2; i_19 < 14;i_19 += 1)
        {
            var_42 = -1;
            var_43 = -28;
        }
        var_44 = ((var_13 ? (!var_1) : -6));
        var_45 = ((var_17 ? 34916 : var_2));

        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            arr_67 [i_0] [i_20] = ((~((581987957 ? (arr_19 [i_20] [i_20] [i_20] [i_0]) : var_7))));
            var_46 = (((arr_57 [i_0] [i_0] [i_0] [i_0]) ? var_14 : (arr_38 [i_0] [i_0])));
        }
        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {
            arr_70 [i_21] [i_21] = (~var_16);
            var_47 = (max(var_47, var_10));
            var_48 = (((arr_53 [i_21]) / ((~(arr_59 [i_0] [i_0] [9] [i_21])))));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    {
                        arr_76 [i_21] [i_22] [i_23] = (arr_50 [i_0]);
                        arr_77 [i_23] [i_23] [i_0] |= (((~-1) ? 44 : var_11));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 15;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 15;i_25 += 1)
            {
                {
                    var_49 = -1;
                    var_50 = arr_62 [14] [i_24] [i_25];
                }
            }
        }
    }
    var_51 = ((((((min(var_12, 7)))) - 65528)));
    #pragma endscop
}
