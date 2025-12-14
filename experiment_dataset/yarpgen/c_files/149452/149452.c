/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((127 - 1) - ((var_4 ? var_0 : 2147483647)))) / (((((var_6 ? var_2 : var_4)) < var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((var_14 ? var_8 : -3)));
        var_19 = ((var_13 ? (arr_0 [i_0] [0]) : (((((arr_0 [i_0] [i_0]) || (arr_0 [3] [3])))))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((~(arr_3 [i_1 + 1]))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_6 [0] [i_2] [i_2] = (((arr_5 [i_1 - 3]) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 3])));
            var_21 = (!var_12);
            var_22 = ((var_11 << (var_3 + 46)));
            var_23 += var_1;
            arr_7 [i_2] = 0;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_24 = ((65535 ? 18241 : 18250));
            arr_12 [i_3] [3] = (max((max((arr_3 [i_1 - 3]), var_1)), (((!((((arr_4 [i_1]) - var_0))))))));
            var_25 = ((~((var_16 ? var_16 : (arr_4 [i_1 - 3])))));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [i_4] [i_4] = (((max(0, ((max(var_0, 65519))))) >> ((((((((arr_14 [i_1] [i_4] [i_1]) ? var_1 : (arr_11 [i_4])))) ? (var_14 | 65535) : var_12)) - 65529))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_26 = ((var_6 + ((((arr_4 [i_1]) >= 18248)))));
                    var_27 = (((((~25560) + 2147483647)) << (((2147483636 || var_2) - 1))));
                    var_28 = ((var_5 ? ((var_6 ? var_15 : var_11)) : (arr_14 [i_1] [i_4] [i_1 - 2])));
                }
                var_29 = (max(127, 18241));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_30 = var_16;

                /* vectorizable */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_31 = (max(var_31, (((var_8 ? (0 > 1) : 10)))));
                    var_32 = (~var_1);
                    arr_24 [i_1 + 1] [i_1 + 1] [i_6] [i_6] = var_13;
                    arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (((((~(arr_11 [i_3])))) ? var_0 : (arr_20 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_7 - 1])));
                    var_33 = var_12;
                }
                arr_26 [i_6] [i_1] [i_1] [i_6] = (max((arr_21 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_3]), (arr_21 [i_1 + 1] [i_1 - 3] [0] [i_1 - 3])));
            }
            arr_27 [i_1] [i_3] [i_3] &= ((18224 ? (((~var_5) ? ((var_7 ? var_4 : var_16)) : ((var_10 ? 47304 : var_15)))) : (var_7 != var_11)));
        }

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_38 [i_1] [i_11] = ((!(((arr_20 [i_11] [i_11] [i_11] [i_10]) < var_7))));
                            arr_39 [i_11] [i_11] = (~-121);
                        }
                    }
                }
                arr_40 [14] = (var_7 / -2147483647);
                arr_41 [i_9] [i_9] [i_9] [i_9] = (((var_8 / 58128146) == 0));
            }
            arr_42 [i_1] = (max(0, 1));
            arr_43 [i_8] [i_1] = (((arr_10 [i_1 - 3]) || (((1 ? -2147483636 : 10)))));
            arr_44 [i_8] = (var_10 >= 0);
            arr_45 [i_1 - 1] &= var_11;
        }
        for (int i_12 = 3; i_12 < 22;i_12 += 1)
        {
            arr_49 [5] [i_12 - 2] [i_12] = (max(((((max(18243, var_4))) ? ((var_13 ? var_10 : 65514)) : var_12)), var_11));
            arr_50 [i_12 + 1] [i_12] [i_1 - 3] = (max(((var_3 ? (((arr_22 [i_1] [i_1] [i_12] [i_12]) ? 0 : 127)) : 1)), (((~var_9) >> (var_10 - 63654)))));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            var_34 = (min(var_34, var_3));
            arr_54 [i_13 + 2] [i_1] [i_1] = (~0);
        }
    }
    for (int i_14 = 3; i_14 < 22;i_14 += 1) /* same iter space */
    {
        arr_57 [1] [i_14 - 3] = (((arr_20 [i_14] [i_14] [i_14] [i_14 + 1]) ? var_0 : ((((arr_28 [16] [i_14 - 1]) && ((max((arr_52 [i_14 + 1] [i_14 + 1]), 0))))))));
        arr_58 [i_14] &= var_6;
    }
    var_35 = var_4;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 14;i_16 += 1)
        {
            {
                arr_63 [i_16] = -104;

                /* vectorizable */
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    var_36 = (max(var_36, ((((arr_1 [i_15]) ? (arr_21 [i_15] [1] [i_15] [i_15]) : (!1))))));
                    arr_68 [i_15] [i_15] [i_17] = ((~-8461) ? var_9 : (!255));
                    var_37 = ((arr_31 [i_16] [i_16 - 1] [i_16 - 1] [i_15]) ? (arr_62 [i_16 + 2] [i_16 + 2]) : (((var_13 > (arr_22 [i_15] [i_16] [i_17] [i_17])))));
                }
            }
        }
    }
    #pragma endscop
}
