/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((max(-67, var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = var_13;
                        var_21 = (max(var_21, ((((((~(arr_0 [i_0])))) ? ((-106 ? var_17 : (arr_1 [i_2]))) : 186)))));
                        var_22 = ((1336838198 || (arr_4 [i_3 + 2] [i_3 + 2] [i_3 - 1])));
                    }
                }
            }
        }
        var_23 = var_14;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_24 -= (((~var_12) | var_13));
                        var_25 = (((arr_16 [i_6] [i_5] [i_4] [i_0]) & (arr_16 [i_0] [i_4] [i_5 - 1] [i_0])));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_26 = (arr_13 [i_4]);
                            var_27 = (arr_20 [i_0] [i_4 + 1] [i_5 - 1] [i_6] [i_7]);
                            var_28 = (arr_10 [15]);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_29 = (((arr_1 [i_0]) || (arr_1 [i_0])));
                            arr_24 [i_0] [i_4 + 2] [6] [i_0] [i_0] [i_0] [i_4 + 2] = (arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]);
                            var_30 = (max(var_30, (((!(~var_16))))));
                            var_31 = ((arr_3 [i_0]) | (arr_3 [i_0]));
                            var_32 = (min(var_32, (((!(~67))))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_33 = (((var_4 ? var_17 : var_10)));
                            arr_27 [i_0] [i_4] [i_4] [i_0] [i_9] [i_9] = 223;
                            var_34 = ((-(arr_25 [i_9] [i_4] [i_5 - 1] [1] [i_9] [i_4 - 1] [i_6])));
                        }
                        var_35 = (~var_3);
                    }

                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_36 = (66 && 164);

                        for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_37 = (arr_10 [i_0]);
                            var_38 = var_11;
                        }
                        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_39 = ((!(arr_10 [i_4 + 2])));
                            var_40 = ((~(arr_9 [i_12] [i_12 + 1] [i_5 + 2] [i_4 + 2])));
                            arr_34 [i_0] [i_4] [2] [10] [i_12] &= (~var_1);
                        }
                        for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_41 = (max(var_41, (arr_36 [i_4 + 1] [0] [i_5 + 2] [0] [16] [i_13 - 1] [i_13 + 1])));
                            var_42 ^= ((((arr_14 [0]) ^ (arr_30 [i_0] [i_4 - 3] [20] [i_10]))));
                            var_43 = (max(var_43, var_16));
                            var_44 = ((arr_20 [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 2]) ? (~1336838198) : ((-(arr_37 [i_0] [i_4] [i_5 + 1] [i_10] [i_13 + 1]))));
                            arr_38 [i_0] [i_4] [i_5] [i_10] [i_0] = var_16;
                        }
                        var_45 = (max(var_45, ((((arr_26 [i_0] [i_4] [i_4 + 2]) ? (arr_32 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [16] [i_10]) : (arr_32 [i_0] [i_4] [i_4] [i_4] [i_5 + 2] [18] [i_10]))))));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_4 - 2] [i_5] = 1129190506;
                        var_46 = ((~(arr_4 [11] [i_4] [i_14])));
                    }
                }
            }
        }
    }
    var_47 = (977651993 || 0);
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 11;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 11;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 9;i_18 += 1)
                    {
                        {
                            arr_53 [i_16] = 38023;

                            /* vectorizable */
                            for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
                            {
                                var_48 -= ((var_9 | (arr_39 [i_16 - 2] [i_18 - 1] [15] [i_15 - 1])));
                                var_49 = (((arr_28 [i_15 - 2] [i_16 - 2]) * var_8));
                                arr_58 [i_15] [i_18] [i_15] [10] [i_15] |= var_13;
                                var_50 -= (arr_31 [i_15] [i_15] [i_15]);
                            }
                            /* vectorizable */
                            for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                            {
                                var_51 = -14890;
                                var_52 = (arr_48 [i_15 - 2] [i_16] [i_16] [i_16 + 1]);
                                arr_62 [i_15] [i_16] [i_15] &= (~10153500154461119968);
                            }
                            /* vectorizable */
                            for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                            {
                                var_53 = var_14;
                                var_54 = (min(var_54, (((var_12 <= (arr_32 [i_15 - 1] [i_16 + 1] [i_16 - 2] [i_21] [i_21] [i_15] [i_21]))))));
                            }
                            var_55 = ((((~(!var_10))) ^ ((-(arr_25 [i_18 + 3] [i_18] [i_18 + 2] [i_18] [i_18 - 1] [i_18 + 3] [i_18])))));
                            var_56 = (min(var_56, -var_11));
                            arr_65 [i_15] [i_16] [i_16] [i_16] = (max(-var_11, (((3865331071403880863 <= (arr_35 [i_15 + 1]))))));
                        }
                    }
                }
                var_57 = (min(var_57, (((+(((arr_43 [i_16 + 1]) ? 223 : (arr_43 [i_16 + 1]))))))));
                arr_66 [i_16] [i_16] = 32;
            }
        }
    }
    var_58 = var_6;
    #pragma endscop
}
