/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((var_5 + 2147483647) << (((~720944557) ? (var_9 & var_11) : -893635089))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [7] [7] = (arr_6 [i_0] [i_0] [i_2] [i_2]);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (-(((arr_3 [i_0]) ? 231 : (arr_7 [i_2] [i_2] [i_1] [i_0]))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = (arr_2 [18] [i_1]);

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_19 = (min(var_19, (((-((~(arr_5 [i_0] [i_4]))))))));
                        var_20 = 1;
                        arr_17 [i_3] [i_3] [i_1] [i_3] &= (((!(arr_2 [19] [16]))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_21 = (max(var_21, (((~(((max((arr_19 [i_0] [i_1] [i_1] [i_3] [i_5] [i_5]), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (!24763) : (min(17890004508709346306, var_2)))))))));
                        var_22 ^= (max(var_11, ((~((min(var_17, (arr_16 [14] [14] [i_3] [i_3] [i_3] [14]))))))));
                    }
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    var_23 = (arr_4 [i_0]);
                    arr_23 [i_0] [i_1] [i_0] = arr_1 [i_1] [i_1];
                    arr_24 [i_0] [17] [i_6] [i_6] = (min(((((~9650) - ((24765 / (arr_15 [i_6] [i_1] [i_0] [i_0])))))), -31994));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_30 [i_1] |= (((-(arr_22 [i_0]))));
                            var_24 = (((((arr_6 [i_8] [i_8] [i_8] [18]) * (arr_21 [i_0] [i_8] [i_7] [i_7]))) < (((((arr_16 [i_0] [i_0] [i_1] [i_7] [i_8] [i_8]) ? (arr_21 [i_0] [i_0] [i_7] [i_0]) : (arr_27 [i_0] [5]))) << (((arr_25 [i_0] [i_0] [i_0] [i_0]) - 16))))));

                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                var_25 = (min(var_25, (((((!(arr_14 [i_0] [i_1] [i_7] [i_8]))) ? (((!(arr_22 [i_0])))) : (((((arr_21 [i_0] [i_0] [i_0] [i_0]) + 2147483647)) << (((((arr_21 [i_0] [i_8] [21] [i_8]) + 31)) - 22)))))))));
                                var_26 *= min(5464149487273383679, (arr_16 [i_0] [i_1] [i_7] [i_1] [0] [i_1]));
                                var_27 = var_0;
                                var_28 = (min((((arr_2 [i_1] [i_8]) ? (arr_2 [i_8] [i_1]) : (arr_31 [i_9] [i_7] [i_1]))), var_14));
                            }
                            for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                            {
                                var_29 &= (((!-var_0) ? ((~(arr_19 [i_0] [i_1] [i_7] [i_8] [i_10] [i_1]))) : ((((var_2 <= 1105510713) > ((var_16 * (arr_32 [i_0] [5] [15] [i_8] [i_8]))))))));
                                var_30 = ((!(min((((arr_35 [12] [i_8] [16]) || var_2)), (-24763 || 3474180798)))));
                                var_31 = -24778;
                                var_32 = (min(var_32, (((((arr_28 [i_10] [i_8] [i_7] [i_0]) ? (~var_5) : (var_14 == 1)))))));
                            }
                            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                            {
                                var_33 = (min(var_33, ((((-(!var_8)))))));
                                var_34 = (~((-((var_4 ^ (arr_28 [i_0] [i_1] [i_7] [i_0]))))));
                            }
                            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                            {
                                arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] = (var_6 + (-3717403607092032117 > -24777));
                                var_35 = (min(var_35, ((((arr_43 [i_0] [15] [i_7] [i_8] [i_12] [i_12]) << (((arr_14 [i_0] [i_0] [i_0] [i_0]) - 1233307680472232391)))))));
                            }

                            for (int i_13 = 0; i_13 < 25;i_13 += 1)
                            {
                                var_36 = (max(var_36, ((((min((arr_39 [i_0]), (arr_39 [i_0]))) ? (arr_39 [i_1]) : (((arr_39 [i_7]) ? (arr_39 [i_0]) : (arr_39 [i_8]))))))));
                                var_37 = (1 + 98);
                            }
                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 25;i_14 += 1)
                            {
                                arr_51 [i_0] [i_0] = (28379 ^ var_3);
                                var_38 = (min(var_38, (((-(arr_5 [i_1] [i_7]))))));
                                var_39 = -0;
                            }
                            for (int i_15 = 0; i_15 < 25;i_15 += 1)
                            {
                                var_40 = (min(var_40, (arr_28 [i_0] [2] [i_7] [1])));
                                var_41 = (min(var_41, var_13));
                            }
                            var_42 = (min(var_42, (((((arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((~(arr_43 [i_0] [i_7] [15] [i_0] [i_0] [i_0]))) : ((~(arr_19 [17] [i_7] [i_7] [1] [21] [10])))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        arr_61 [i_17] [i_17] [i_17] [i_17] [i_17] = ((-(arr_35 [i_0] [14] [i_17])));
                        arr_62 [i_17] [i_17] [i_16] [i_17] = (var_10 > var_4);
                        var_43 = (arr_10 [i_1]);
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        arr_65 [i_0] [i_0] [15] [1] [i_0] [i_0] = (((arr_14 [i_0] [i_1] [i_16] [i_18]) ? ((var_2 ? (arr_32 [i_0] [16] [i_16] [i_18] [i_16]) : (arr_34 [i_0] [23] [i_16] [i_0]))) : (260096 == 32767)));
                        arr_66 [3] [i_1] [i_16] [i_18] = var_17;
                        var_44 = (max(var_44, ((((arr_0 [i_16] [i_18]) >= 1886086481)))));
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                var_45 *= var_5;
                                arr_73 [i_0] [i_19] [19] [i_0] [i_0] = ((((arr_48 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) + 9223372036854775807)) >> 1);
                            }
                        }
                    }
                    var_46 = ((-(arr_52 [i_1] [i_1] [1] [i_1] [1] [i_1])));
                    var_47 |= var_11;
                }
                var_48 |= (min((((~var_1) ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (((arr_21 [5] [i_1] [i_1] [i_0]) | var_4)))), (((var_9 && (arr_69 [i_0] [22] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
