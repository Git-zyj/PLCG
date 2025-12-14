/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, ((max(410513404, (!1))))));
        arr_2 [16] |= (-122 + 158);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = ((((-10 != (max((arr_4 [20]), (arr_1 [i_0 - 1])))))) - (arr_0 [i_1] [i_1]));
            var_15 = (min(var_15, ((min((max(((-8117160581394954182 ? (arr_1 [1]) : 1234628853)), 0)), -31)))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_16 = (max(((-(10479801718195067832 - -29777))), ((max(1, (arr_4 [i_0 - 1]))))));
                                var_17 = (min(var_17, (((~((min(0, -5))))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_3] [i_3] &= (max((arr_0 [i_0 + 1] [i_0 + 1]), (((arr_0 [i_0 - 1] [i_2]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : -7230311940279344810))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_20 [i_2] [i_0] [2] [3] [i_2] [i_0] [i_0] = (max(((max(var_10, ((min(47, var_9)))))), (max(((((arr_8 [i_7] [i_6] [i_0]) < var_11))), (((arr_19 [i_0] [i_6] [5] [i_2] [i_0]) - (arr_19 [i_0] [i_0] [i_3] [i_3] [i_3])))))));
                                arr_21 [i_0] [i_3] [i_3] [i_6] [i_7] &= ((-(((!((max(15, 15218749586822780068))))))));
                            }
                        }
                    }
                    var_18 = ((819890358 ? (min((240 ^ 9), (min(var_3, 1829669865)))) : ((var_12 ? (min(1153818791, 55244)) : (arr_15 [i_3] [i_2] [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                }
            }
        }
        arr_22 [i_0] [i_0] = (min((max(1, var_2)), (((max((arr_16 [i_0] [2] [i_0] [i_0] [i_0] [i_0 - 1]), var_1))))));
    }
    for (int i_8 = 4; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_6 [i_8] [i_8] [i_8])));

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_20 &= (((max((min(var_9, (arr_7 [i_9]))), (min((arr_1 [i_8]), var_11)))) >> (var_2 + 2384116418917865449)));
            arr_27 [i_8] = (min(1, 127));
            arr_28 [i_8] |= (((var_0 ? (arr_9 [i_8 - 2] [i_8 - 2]) : 19)));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_21 = (arr_26 [i_10] [i_8 - 1]);
            arr_31 [19] [i_10] [i_10] = (((arr_18 [i_8 - 2] [i_8 - 2] [2] [i_8]) ^ (arr_11 [i_8 + 1] [i_8])));
            arr_32 [i_10] = var_5;
        }
        arr_33 [i_8] = var_4;
    }
    for (int i_11 = 4; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_22 = ((((-(arr_30 [18]))) + ((min(var_11, ((var_3 ? (arr_3 [3]) : (arr_7 [i_11]))))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        var_23 = ((~((var_8 ? 240 : var_8))));
                        var_24 = ((arr_37 [i_11 - 1]) ? 4294967295 : var_4);

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_47 [i_11 - 4] [i_11] [i_12] [i_13] [i_14] [i_15] = (10 & 247);
                            var_25 &= ((((!(arr_26 [i_11] [i_12]))) && (arr_30 [i_11 + 1])));
                        }
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        arr_50 [i_11] [i_12] [i_12] [i_16] [i_13] = (((-(arr_17 [i_13] [i_12] [i_11] [2] [i_11] [i_11] [i_11 + 1]))));
                        var_26 = (min((max(17592185913344, 32540)), (((-(arr_49 [i_11] [i_11] [i_11] [i_11]))))));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_27 *= var_7;
                        arr_54 [i_17] [5] [17] [i_11] = ((max(var_7, var_11)) >> ((((arr_9 [i_12] [i_11]) >= (arr_9 [i_12] [i_17])))));
                    }
                    for (int i_18 = 2; i_18 < 18;i_18 += 1)
                    {
                        arr_57 [i_11] [i_13] [1] [i_11] [i_11] = ((min((524224 <= 1104974789), 524231)));
                        var_28 = (((2661647120255465258 + 2147483647) >> ((((max((arr_0 [i_11 - 4] [i_11 - 4]), (arr_0 [i_11 - 4] [i_11])))) + 29768))));
                    }

                    for (int i_19 = 1; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        arr_61 [i_19] = min((arr_14 [i_19] [i_19] [i_19] [i_19] [i_19 + 1]), (arr_15 [i_19 - 1] [i_19] [i_19] [i_19 - 1] [i_19 - 1]));
                        arr_62 [i_12] [i_12] [i_19] = ((min((var_9 - var_3), (25171 - 5))));
                        var_29 |= (min((((arr_36 [i_11 - 4]) ? (arr_36 [i_11 - 2]) : var_7)), -5));
                    }
                    for (int i_20 = 1; i_20 < 20;i_20 += 1) /* same iter space */
                    {
                        var_30 = ((min((arr_38 [i_11 - 4]), (arr_41 [i_20 + 1] [i_11 - 2] [i_11 - 4] [i_11 - 2]))));
                        var_31 = -524237;
                    }

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        arr_69 [i_11] [i_12] = (16384 > 2661647120255465258);
                        var_32 = ((arr_45 [i_11 + 1] [i_12]) - (arr_45 [i_11 - 3] [16]));
                    }
                    for (int i_22 = 1; i_22 < 17;i_22 += 1)
                    {
                        var_33 = (min(var_33, (((((max(((min(-1028337122, 141))), (112 / var_4)))) ? (((~(arr_1 [i_22 + 4])))) : var_1)))));
                        var_34 = 4294967282;
                        var_35 = (max((((((arr_66 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_46 [i_11] [i_11] [i_13] [i_22] [i_22 + 2]) : var_7)) ^ -106)), (((((((~(arr_41 [i_11] [i_12] [18] [8]))) + 2147483647)) << (34 - 34))))));
                        arr_72 [i_22] [i_13] [1] [i_22] = min((min(var_2, (arr_43 [i_22] [i_11 - 1] [i_11] [i_11]))), ((((arr_43 [i_11] [i_11 - 1] [i_11] [i_11]) + (arr_43 [i_11] [i_11 - 1] [15] [i_11])))));
                    }
                }
            }
        }
    }
    var_36 = var_10;
    #pragma endscop
}
