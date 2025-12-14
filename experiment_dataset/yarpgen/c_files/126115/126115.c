/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_6 ? ((min((17701 / var_7), var_1))) : (~var_0))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (arr_0 [i_0] [i_1]);
                                arr_12 [i_4] [i_1] [i_1] [i_4] [i_4] = ((+(min((arr_3 [i_2]), var_5))));
                                var_12 += (max((arr_11 [i_0]), (arr_7 [i_4] [i_0] [i_0] [i_0])));
                                var_13 = (min(var_13, 1657518216));
                            }
                        }
                    }
                    var_14 &= (((!((((arr_7 [i_1] [i_1] [i_0] [i_0]) ? (arr_0 [i_0] [6]) : var_4))))));
                }
            }
        }
        var_15 = (min(var_15, ((max((arr_7 [i_0] [i_0] [i_0] [i_0]), ((var_3 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));

        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_16 &= ((((arr_2 [1]) ? (arr_1 [i_5 + 2] [i_5 + 2]) : (13835058055282163712 ^ var_9))));
            arr_16 [i_5] [i_5] = ((((((max((arr_1 [i_5] [i_0]), 1334567059139836016))) ? ((((arr_4 [i_0] [i_0]) * -1))) : ((-11379 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))))) ? ((-(arr_15 [i_5 + 2] [i_5 - 1]))) : (max((arr_7 [i_5 - 1] [i_5 - 2] [i_5] [i_5 - 1]), (arr_5 [i_0] [i_5 + 2] [i_5 - 3]))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_17 &= (((arr_13 [i_0] [i_6 - 1] [4]) - var_8));

            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                var_18 = 255;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_19 = -9270;
                            arr_27 [i_9] [i_6] [i_7] [i_6] [i_0] = (((arr_23 [i_9] [i_9] [i_8] [i_6] [i_6] [i_0]) ? (((arr_15 [i_0] [i_0]) ? -5854153429735691292 : 20)) : 26));
                        }
                    }
                }
                var_20 = (((arr_22 [i_6] [i_6] [i_6]) ? ((var_9 ? 4294967246 : (arr_2 [i_6]))) : (((3498420791715267014 ? (arr_13 [i_6] [i_6] [i_6]) : var_6)))));
                var_21 -= ((var_2 & (arr_11 [i_7 + 1])));
            }
        }
        arr_28 [i_0] = ((+((((((arr_20 [i_0]) ? 3905388341 : var_5)) == (((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            {
                var_22 ^= ((~(((((arr_32 [i_11] [i_11] [i_10]) < (arr_30 [i_10 - 1])))))));
                arr_35 [i_10] [i_11] [i_10 - 1] = ((var_0 ? (arr_30 [i_10]) : (((((((arr_29 [i_10] [i_10]) ? var_0 : -3962513849011958169))) ? ((var_9 ? (arr_29 [i_10] [i_10]) : (arr_29 [i_10] [i_10]))) : (var_1 * var_3))))));
                var_23 *= (+-11883);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_24 -= ((!(1 * 1334567059139836018)));
                            var_25 = (max(var_25, ((min(((((min(var_6, (arr_34 [i_10] [i_10] [i_10])))) ? (1 > var_9) : (arr_31 [i_10] [i_11] [i_11]))), var_2)))));
                            var_26 = (((((arr_38 [i_10 - 1] [i_10 - 1]) ? (arr_38 [i_10 - 1] [i_10 - 1]) : (arr_38 [i_10 - 1] [i_10 - 1]))) >> ((((((arr_41 [i_10] [23] [23] [i_10]) | (arr_29 [i_12] [i_13])))) - 18446744073709537146))));
                        }
                    }
                }
                var_27 += 1657518202;
            }
        }
    }
    #pragma endscop
}
