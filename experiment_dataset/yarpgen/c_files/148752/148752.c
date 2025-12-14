/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 ? var_12 : var_7));
    var_15 = (((min(var_7, 210))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (max((((arr_1 [i_1] [i_1]) ? var_7 : var_11)), (max(18446744073709551615, -1))));
            var_16 = 1;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_0] = ((((arr_2 [i_2] [i_0] [i_0]) ? (arr_5 [i_2] [i_0]) : (arr_0 [i_0]))));
            var_17 = (max((((max(1, -6737)))), -var_2));
            var_18 = (max(var_18, (((2 ? 1 : (min(-122, 9680408737719583799)))))));
            arr_8 [i_2] [i_2] [7] = 1;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_19 = (((arr_3 [i_0]) > (arr_10 [i_3])));
            var_20 = ((arr_9 [i_0]) + (arr_9 [i_0]));
            var_21 = (max(var_21, var_3));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_22 ^= -var_11;
                            var_23 = (arr_11 [i_4 + 1] [i_5 - 1]);
                        }
                    }
                }
            }
        }
        var_24 = (max(-13878, ((((arr_9 [i_0]) ^ 44044)))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        var_25 = ((((arr_14 [i_8] [i_7] [i_7 + 1] [i_7 + 1] [i_0] [i_0]) ? -1148511693 : 236)));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_26 = (((arr_24 [i_0] [i_7] [i_8] [i_9] [i_9] [i_7]) != (arr_23 [3] [i_7] [3])));
                            var_27 = (arr_21 [i_9] [i_7] [i_7]);
                            var_28 = (arr_1 [i_0] [i_0]);
                            arr_28 [i_10] [i_9] [i_0] [i_0] [i_7 - 1] [i_0] [i_0] &= ((!(arr_14 [i_10] [i_7] [i_7 + 1] [i_10] [i_10] [i_9])));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = 48;
                            arr_32 [i_9] [i_9] = ((((min((arr_13 [i_0] [i_7 + 1] [i_7 - 1] [i_7 + 1]), (arr_15 [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1])))) ? (arr_5 [i_0] [i_7 - 1]) : (~29832)));
                            var_29 = (((arr_29 [i_7] [i_7 + 1] [i_9] [1] [i_7 - 1]) ? (min((arr_17 [i_7] [i_7 + 1]), (arr_17 [i_7] [i_7 + 1]))) : var_2));
                            var_30 = (max((arr_27 [i_7 - 1] [1] [i_8] [1]), ((((arr_14 [1] [4] [4] [i_9] [i_11] [4]) || (arr_21 [i_7] [i_7] [i_0]))))));
                            arr_33 [i_9] = ((((((arr_2 [i_8] [7] [i_8]) - (((arr_11 [i_7] [i_7]) ? (arr_0 [i_9]) : 2936393409))))) > (((arr_13 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) - var_7))));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            arr_37 [2] [i_9] [i_9] [i_9] [i_12] = var_1;
                            arr_38 [i_0] [i_7] [i_8] [i_9] [i_9] = (min((arr_27 [i_7 + 1] [i_7 + 1] [i_7 + 1] [3]), (((~(arr_25 [1] [i_7 + 1] [i_7] [i_7 - 1] [i_7]))))));
                            var_31 = (arr_20 [i_0] [i_7 - 1] [i_12]);
                        }
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            arr_41 [i_0] [i_7] [i_8] [i_9] [i_9] = ((~(((arr_24 [i_0] [i_0] [i_7 + 1] [i_0] [i_9] [i_0]) ? (arr_24 [i_0] [4] [i_7 + 1] [i_9] [i_9] [i_13]) : (arr_24 [i_0] [i_8] [i_7 - 1] [1] [i_9] [i_0])))));
                            var_32 = ((~(((!(((-(-127 - 1)))))))));
                            var_33 = (max((arr_16 [10] [i_0] [i_7 + 1] [i_7] [i_13 + 3]), (((((min(11561040528814386259, (arr_23 [i_9] [i_8] [i_8])))) ? (arr_39 [i_0] [i_7 - 1] [i_8] [i_9]) : (arr_40 [i_13] [i_13] [i_13] [i_13 + 4] [i_13] [i_13 + 4]))))));
                            arr_42 [i_9] [i_9] [i_9] [i_7] [i_0] = ((54 ? (((max(1, 0)))) : ((min(1, 93)))));
                        }
                        var_34 = 2945881416002871507;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_46 [i_14] [i_14] = (((arr_45 [1]) ? 255 : 1));
        var_35 *= (~var_12);
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    arr_51 [i_16] |= (arr_49 [i_14] [i_15] [i_16] [i_16]);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            {
                                arr_57 [i_14] [i_14] [5] [i_16] [5] [i_17] [5] = (arr_49 [i_14] [1] [i_16] [i_17]);
                                var_36 = (arr_45 [i_14]);
                            }
                        }
                    }
                    arr_58 [i_14] [i_14] = 1;
                    var_37 = (arr_49 [i_14] [i_15] [i_14] [i_15]);
                }
            }
        }
    }
    #pragma endscop
}
