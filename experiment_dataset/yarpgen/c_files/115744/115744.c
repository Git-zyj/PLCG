/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_14 = ((~(((var_9 / -123) ? (((var_8 ? -123 : var_13))) : (arr_4 [i_0])))));
            var_15 = (min(var_15, 122));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_16 = ((max((arr_12 [i_3 - 3] [1] [i_3 - 2] [i_3] [i_3] [i_3]), (arr_12 [i_3 - 3] [i_3 - 3] [i_3 - 3] [9] [i_3] [i_3 - 3]))));
                                var_17 = (((((arr_0 [0]) + 111))) ? var_11 : (arr_5 [i_0] [i_2]));
                            }
                        }
                    }
                    var_18 = ((max(((max(1023, var_2))), ((123 ? (arr_6 [i_0] [i_0]) : 56202)))));
                    var_19 = (var_12 - -51);
                    arr_15 [i_0] [i_2] [i_2] = (min(var_12, -var_4));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_20 = (arr_17 [i_6]);
        var_21 = (((((var_1 ? 1 : ((var_2 ? var_8 : var_3))))) ? (arr_17 [i_6]) : (min(((var_0 ? (arr_17 [5]) : 9334)), (arr_18 [i_6] [i_6])))));
        var_22 = (!var_10);

        /* vectorizable */
        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_29 [i_8] [11] [i_7] [i_7] [i_8] = (((arr_18 [i_7 - 1] [i_7 - 1]) ? 3 : -var_6));
                            arr_30 [i_7] [i_7] [i_8] [i_8] = var_9;
                            var_23 = var_5;
                            var_24 = -232;
                        }
                        for (int i_11 = 3; i_11 < 11;i_11 += 1)
                        {
                            var_25 = (((arr_17 [i_9 - 1]) ? (arr_17 [i_9 - 2]) : (arr_17 [i_9 - 3])));
                            var_26 -= ((((144220915 ? var_5 : (arr_19 [i_9]))) / var_8));
                            arr_34 [i_8] [i_11] [i_11] &= (((arr_21 [i_6] [i_11 - 1] [i_8]) ? var_10 : (arr_21 [i_6] [i_11 - 1] [i_8])));
                            var_27 = var_11;
                        }
                        arr_35 [i_6] [i_7] [i_7] [i_8] [i_7] [i_7] = (((arr_17 [i_8]) ? var_9 : (((var_0 ? (arr_21 [i_6] [i_8] [i_7]) : var_4)))));
                        var_28 = var_11;
                        var_29 = (((arr_21 [i_7] [i_7] [i_7]) <= var_8));
                    }
                }
            }

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_45 [i_6] [i_7] [i_12] [i_7] [i_7] = (arr_27 [i_7 + 1] [i_7] [i_7 + 1] [i_14] [8]);
                            var_30 = (min(var_30, (((46204 ? (arr_39 [i_7] [i_7 + 2]) : (arr_31 [i_7] [i_7 + 1]))))));
                            var_31 -= (1 * -1);
                        }
                    }
                }
                var_32 = arr_19 [i_6];
                var_33 = (arr_36 [i_6] [i_7] [i_6]);

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_34 = ((var_8 ? (!1223512023228174701) : var_5));
                    var_35 = ((-127 ? (arr_27 [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_7 - 2]) : (((arr_26 [i_6] [i_7 - 1] [0]) / var_2))));
                    var_36 = 24;
                    var_37 = var_1;
                }
            }
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {

                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {
                    var_38 = (((arr_53 [i_16] [i_16 - 1] [i_16 + 2] [i_16 + 2]) ? -1304091300 : var_0));
                    var_39 = var_3;
                    var_40 = ((!(arr_19 [i_17 - 2])));
                }
                var_41 -= (arr_51 [i_16 - 1] [i_16 + 1] [i_16 - 1]);
            }
        }
        for (int i_18 = 2; i_18 < 10;i_18 += 1) /* same iter space */
        {
            var_42 = (var_2 ? (arr_33 [i_6] [i_18 - 1] [i_18 - 1]) : (((-(arr_54 [i_18 + 1] [6] [i_18])))));
            var_43 = 3;
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_44 ^= ((!((((var_13 + (arr_49 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])))))));

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_45 = (min(var_45, ((((((~(max((arr_54 [i_6] [2] [i_19]), var_9))))) || 55165)))));
                            var_46 = (((((min((arr_32 [i_18 + 2] [i_18 + 2] [i_18 - 2] [i_18]), (arr_22 [i_18 - 2] [i_18] [i_18]))))) >= ((var_10 - (arr_32 [i_18 + 1] [i_18] [i_18] [i_18])))));
                            var_47 = (min(var_47, 347267852));
                        }
                    }
                }
            }
        }
        for (int i_22 = 2; i_22 < 10;i_22 += 1) /* same iter space */
        {
            var_48 = (min(var_48, (((~(((((var_1 ? var_13 : 1304091308))) ? ((8128 ? (arr_31 [i_6] [i_6]) : var_6)) : var_2)))))));
            var_49 = ((!((min(693226771, (arr_53 [i_6] [i_22 - 2] [i_22 - 1] [i_22]))))));
            arr_67 [i_22] [i_22 + 2] = ((((max(var_6, (arr_42 [i_22] [i_22] [i_22 + 2] [i_22] [i_22] [i_22 - 1])))) ? (min(var_9, (arr_42 [i_22 - 1] [i_22] [i_22] [i_22 - 1] [2] [i_22 - 2]))) : ((((arr_42 [i_22] [i_22] [i_22] [i_22 + 2] [i_22] [i_22 - 1]) ? var_12 : var_13)))));
        }
        for (int i_23 = 0; i_23 < 12;i_23 += 1)
        {
            var_50 = (max(((((arr_24 [i_23] [i_23] [i_23]) ? var_12 : var_13))), (min(var_10, (arr_22 [i_23] [i_6] [i_6])))));
            var_51 = 112;
            var_52 = (((arr_27 [i_6] [i_23] [i_23] [i_23] [i_6]) ? ((((min((arr_24 [i_6] [i_23] [i_23]), (arr_42 [i_6] [i_23] [i_6] [i_6] [i_6] [i_23])))) ? var_4 : (arr_58 [i_23] [i_23] [i_23] [i_23]))) : ((((arr_17 [i_23]) ? var_11 : (var_8 / 1304091308))))));
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 12;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 12;i_25 += 1)
                {
                    {
                        var_53 = ((3 ? (arr_63 [i_24]) : (((arr_71 [i_6] [i_23] [i_24] [i_25]) ^ (arr_71 [i_6] [i_6] [i_6] [i_6])))));
                        var_54 ^= (~var_0);
                    }
                }
            }
        }
        var_55 = (min(11900388823509273913, (arr_21 [i_6] [i_6] [0])));
    }
    var_56 = var_1;
    var_57 = (max((min(var_6, var_13)), ((((var_10 ? var_10 : 76)) & (((var_3 ? -98 : 0)))))));
    #pragma endscop
}
