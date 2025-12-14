/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max(var_1, (var_5 <= -25952)));
    var_21 = ((((!(var_3 || var_11))) ? (!var_9) : 511));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((25951 < (arr_5 [i_1 + 4] [i_1 + 3] [i_1 + 1]))))));
                    var_23 = (((112 ? (15125 | -11921) : 25951)));
                    var_24 *= (((((var_6 >> (25951 - 25922)))) ? (0 & -25953) : ((((max(25951, (arr_0 [i_2])))) << (var_12 - 103)))));
                    var_25 = (((((var_16 ? 25948 : (arr_0 [i_1 + 1])))) ? ((var_14 ? (arr_6 [i_1 + 3] [i_1 - 2] [i_1 - 2]) : (arr_0 [i_1 - 2]))) : (max(178, -1125878748))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (var_10 ? (((arr_9 [i_3]) ? ((~(arr_8 [7]))) : (((12725 ? var_6 : -25950))))) : 8522825728);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_17 [i_5] = ((((0 ? -25956 : -1)) != ((((arr_8 [i_5]) <= 49225)))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_26 += (var_16 | var_7);
                        arr_20 [i_3] = ((((((-25952 == var_7) / var_12))) ? (((arr_9 [i_3]) ? (((var_19 ? (arr_15 [4] [16] [4]) : (arr_9 [i_5])))) : (((arr_14 [i_5]) ? -6411354412041151700 : 20763)))) : (((~((min(-20764, var_14))))))));
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_7] [i_5] = ((((((var_0 ^ var_7) ? (((arr_21 [i_7]) ? -253616534 : 120)) : ((var_0 ? 25951 : 1125878761))))) ? ((0 ? -30 : -32)) : 24576));
                        arr_25 [i_3] [i_7] = (min(254, -120));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_3] [i_4] [12] [7] [i_3] [12] &= -32;
                        arr_31 [i_3] [i_3] [i_4] [7] [i_8] [i_4] = 0;
                        arr_32 [i_3] [i_5] [i_8] = (arr_23 [i_3] [i_8]);
                    }
                    arr_33 [i_5] = (((!8425771098998832991) ? (!32768) : (arr_22 [i_3] [1] [i_4] [i_5])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_40 [3] = ((98 | (arr_12 [i_10] [i_10] [i_9])));
            var_27 = (((((14336 ? 18446744073709551615 : var_6))) ? 48 : (arr_36 [i_9] [i_10] [i_10])));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_28 ^= (((arr_22 [i_9] [i_11] [i_9] [i_9]) < (arr_22 [16] [i_11] [i_11] [8])));
            arr_44 [i_9] [i_9] [i_9] = (7 + 46);
        }
        var_29 = -32;
        var_30 ^= (((((var_1 ? var_12 : 14305))) ? 32768 : var_9));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_31 = (min(var_31, (arr_9 [17])));
                                var_32 = ((~(~24576)));
                                var_33 = (min(var_33, (arr_18 [i_15] [i_12] [i_13] [i_14])));
                                var_34 &= (((((arr_51 [i_9] [i_9] [i_14]) + 2147483647)) >> (((arr_22 [i_9] [i_14] [8] [i_9]) - 1646))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_62 [i_9] [i_9] [5] [i_9] [5] = 685848858;
                                arr_63 [i_9] [i_12] [i_13] [i_16] = var_11;
                                var_35 = var_11;
                                var_36 &= 43402;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 14;i_18 += 1)
    {
        var_37 = (((arr_14 [i_18]) ? (arr_14 [i_18]) : var_8));
        var_38 = ((8191 ? (!var_0) : -24751));
        var_39 = 0;
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    {
                        arr_76 [i_21] [i_21] [i_20] [i_21] = (max(((((((arr_29 [i_22] [i_20]) ? 4664 : (arr_16 [i_19] [16] [i_21] [i_21])))) ? (arr_72 [i_20] [i_20] [i_20] [i_20]) : (arr_9 [i_20]))), ((-68 ? (!111451408) : (var_3 == var_13)))));
                        var_40 = (arr_29 [i_19] [i_19]);
                    }
                }
            }
        }

        for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
        {
            var_41 = (max(var_41, (!16)));
            var_42 = ((min((arr_21 [i_23]), (arr_21 [i_23]))));
            arr_79 [14] [i_23] = ((((((arr_8 [i_19]) >= ((max((arr_67 [7] [7]), var_15)))))) * -0));
        }
        for (int i_24 = 0; i_24 < 15;i_24 += 1) /* same iter space */
        {
            var_43 |= ((!((min(152, 65535)))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 15;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 13;i_26 += 1)
                {
                    {
                        var_44 = var_19;
                        arr_89 [i_26] [i_26] [i_26] [i_19] = (-14323 + 30303);
                        var_45 = var_7;
                        var_46 = ((229 ? -7554957666317445817 : 14324));
                    }
                }
            }
        }
        for (int i_27 = 0; i_27 < 15;i_27 += 1) /* same iter space */
        {
            var_47 = ((!((max((arr_88 [i_19] [i_19] [i_27] [i_19]), (arr_88 [i_19] [i_27] [i_19] [i_19]))))));

            /* vectorizable */
            for (int i_28 = 0; i_28 < 15;i_28 += 1)
            {
                var_48 = (min(var_48, var_12));
                var_49 = var_5;
                arr_96 [i_19] [0] [i_27] [i_19] = (!1125878747);
            }
        }

        /* vectorizable */
        for (int i_29 = 2; i_29 < 11;i_29 += 1)
        {
            var_50 = -67;
            var_51 = (max(var_51, -89));
        }
    }
    #pragma endscop
}
