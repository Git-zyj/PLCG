/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_13, var_5));
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = (((var_0 | var_5) || 58));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_21 = (max((arr_6 [i_0] [i_1]), (max((arr_1 [i_0]), ((min((arr_2 [i_0]), (arr_5 [i_0] [1]))))))));
            var_22 = (min(var_22, ((((!2988866928) != 1306100368)))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_23 = var_5;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_24 = (max((((2988866935 ? (var_1 <= var_17) : -1306100381))), ((+(min((arr_9 [i_2] [i_3]), var_15))))));
                var_25 = ((var_17 > ((((!(1 & 32512)))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_26 *= var_16;
                arr_17 [i_0] [i_2] [i_2] [i_2] = (((arr_15 [10] [i_2] [i_2] [i_0]) + var_5));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_27 &= ((((1306100386 < (arr_6 [i_5] [i_4]))) ? ((2988866910 ? 2988866927 : 2988866935)) : 99));
                    var_28 = (((~var_7) - ((1 ? 7438172346916686685 : var_5))));
                    var_29 = var_12;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_30 = ((-2147483633 ? -870262648 : var_5));

                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_31 = ((((((-2147483647 - 1) & var_2))) ? var_3 : (arr_3 [i_7] [i_6])));
                        var_32 = (min(var_32, (((((32752 ? (arr_9 [i_7] [10]) : (arr_21 [i_6] [10] [8]))) - ((((803854877 == (arr_15 [i_0] [i_2] [i_0] [i_7]))))))))));
                        var_33 = (arr_23 [i_2] [i_6] [i_0] [i_0] [i_2]);
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_34 = (1306100361 % 2988866910);
                        var_35 = (min(var_35, (((((((arr_0 [2] [12]) * var_17))) ? ((2988866935 ? 8943758742897686820 : var_14)) : (var_6 * 1306100367))))));
                        var_36 = 231;
                        var_37 = ((~(arr_19 [i_0] [i_2] [i_2] [1])));
                        var_38 = (max(var_38, var_6));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_9] [i_2] [i_4] [i_2] [i_0] = (56 * -2988866913);
                        var_39 = ((var_3 ? ((((arr_6 [i_0] [5]) > var_15))) : (arr_4 [i_2] [i_4] [i_9])));
                        var_40 = ((2988866922 ? 5411065292263825883 : 2147483647));
                    }

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_41 ^= var_17;
                        var_42 = 181;
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_43 = (-var_12 < 14617);
                        var_44 = (!1);
                    }
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        var_45 = (arr_27 [i_2] [6] [i_12 - 1] [i_12 - 1] [i_12 - 1] [9]);
                        var_46 = (arr_22 [i_2]);
                    }
                    var_47 = (((arr_23 [i_0] [i_0] [i_0] [1] [i_2]) ? (arr_23 [i_0] [i_0] [i_0] [i_0] [i_2]) : var_10));
                    var_48 += ((var_2 ? (64 / var_0) : (var_12 ^ var_17)));
                }
                for (int i_13 = 3; i_13 < 12;i_13 += 1)
                {
                    var_49 = 2988866905;
                    var_50 = 1;
                    var_51 = 32767;
                }
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_52 = ((var_0 < ((10811023902339256352 ? (-127 - 1) : -32767))));
                        var_53 = ((3812957039 ? 2988866928 : var_3));
                        arr_42 [i_0] [i_2] [i_2] [i_4] [i_2] [i_0] = -54820;
                        var_54 = (((arr_1 [i_0]) > (arr_22 [i_2])));
                        var_55 = (max(var_55, (((0 ? 1306100391 : 1228230100)))));
                    }
                    var_56 = (min(var_56, (((!(arr_9 [i_0] [i_14]))))));
                }
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_57 = arr_22 [i_2];
                            var_58 &= 231;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        {
                            arr_55 [i_2] [i_2] [1] [i_19] [1] [i_19] = ((((max(1, 1))) ? 1 : (!-50)));
                            var_59 += (arr_10 [i_20] [i_20]);
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 13;i_23 += 1)
                {
                    {
                        var_60 += (arr_24 [10] [i_21] [i_22] [i_23] [i_0] [i_0]);
                        arr_62 [i_0] [10] [i_0] [i_22] = (min(((20567 ? var_1 : 1)), (((arr_52 [i_0] [i_21] [i_22]) ? var_14 : -125))));
                        var_61 = (min(((((arr_25 [i_23] [i_22] [i_21] [i_22] [i_0]) * 183))), (((arr_49 [i_22] [i_21] [i_0] [i_23] [i_0]) ^ (0 | var_6)))));
                        var_62 = (-9223372036854775807 - 1);
                        var_63 ^= ((1 ? ((((~(arr_52 [i_0] [i_21] [i_22]))) & (arr_13 [7] [i_21] [i_22]))) : ((var_5 ^ (arr_49 [i_0] [i_22] [i_22] [i_0] [i_0])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 13;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 13;i_26 += 1)
                {
                    {
                        var_64 = (min((((var_17 + var_7) > (arr_38 [i_24] [i_26]))), (arr_46 [i_26] [i_24] [i_24] [i_0])));
                        var_65 = (((arr_19 [i_0] [i_24] [i_25] [8]) ? ((max(((((arr_27 [i_24] [i_24] [11] [i_0] [i_0] [i_26]) >= (arr_63 [i_26] [i_24] [i_0])))), 6570430346161470308))) : ((((min(var_1, -17))) ? ((135 ? var_12 : var_15)) : var_0))));
                        arr_70 [i_24] [i_24] [i_25] [i_26] [i_24] = var_14;
                        var_66 = var_1;
                        var_67 = 1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
    {

        for (int i_28 = 0; i_28 < 13;i_28 += 1) /* same iter space */
        {
            var_68 = var_16;
            var_69 = (arr_3 [i_27] [i_28]);
        }
        for (int i_29 = 0; i_29 < 13;i_29 += 1) /* same iter space */
        {
            arr_79 [9] = (arr_68 [i_29] [i_29] [i_29] [i_29] [i_27]);
            arr_80 [i_27] = 32739;
        }
        for (int i_30 = 0; i_30 < 13;i_30 += 1) /* same iter space */
        {
            var_70 = (((arr_20 [2] [3] [10] [10] [i_30] [i_30]) ? 2795518997 : 56));
            var_71 = 0;
            var_72 = ((~(arr_20 [i_30] [i_30] [i_30] [11] [i_27] [i_27])));
        }
        var_73 = (max(var_73, (arr_13 [i_27] [i_27] [i_27])));
    }
    var_74 = ((var_17 + ((((var_8 > (18446744073709551615 != 41119923)))))));
    #pragma endscop
}
