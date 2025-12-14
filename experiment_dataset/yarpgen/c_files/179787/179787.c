/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((min(var_4, var_11)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] = min(var_14, (arr_8 [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_0]));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = (max((min((var_13 != 0), ((var_7 ? var_6 : var_13)))), var_4));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] = var_12;
                    var_18 = (max(var_18, ((((0 ? -1 : 0))))));
                    var_19 = var_12;
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_20 = var_13;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_23 [i_0] [i_0] [i_0] [i_0] = (!1);
                var_21 &= var_14;
            }
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_30 [i_0] [i_7] [i_5] [i_0] = var_8;

                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        arr_33 [i_0] [18] [i_5] [i_0] [i_8] [i_8] = (((((((max(var_0, var_9))) ? ((var_13 ? 1 : 0)) : var_11))) ? ((((!((min(1932, var_8))))))) : ((-34 ? -1875372881 : 2442020446))));
                        var_22 *= ((1875372880 ? ((0 ? 4058376656 : 1)) : ((min(((1 ? 63020 : (arr_32 [i_0] [i_5] [i_0] [i_8] [14]))), -105)))));
                    }
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        var_23 -= var_4;
                        arr_36 [i_0] = var_7;
                    }
                    var_24 *= (min((min(16426, 5200041189307618022)), var_5));
                    arr_37 [i_0] = 1;
                    var_25 = 99;
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_26 *= ((((max(1, var_16)) <= (((-(arr_5 [i_0] [21])))))));
                    var_27 &= 7685128146919748521;
                    arr_41 [10] [i_5] [i_0] [10] = ((((max(((((-127 - 1) || -59))), var_10))) ? (((max(1, 0)) ? ((1932 ? var_2 : (arr_40 [i_0] [i_0] [i_7] [i_11]))) : (31732 - var_4))) : ((0 ? 1 : 1))));
                    var_28 = var_4;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_29 = var_6;
                    arr_46 [i_7 + 2] [6] [i_7 + 3] [i_0] = var_16;
                }
                var_30 = ((-(arr_9 [i_0] [i_0] [i_7] [i_5] [i_0] [i_5])));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {

                /* vectorizable */
                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    var_31 = (18590 & 156);
                    var_32 = (min(var_32, ((((var_10 ? 179 : (arr_18 [i_5])))))));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_33 = ((!var_13) < (((max(var_1, var_4)) ? ((194 ? 46946 : var_5)) : var_9)));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        var_34 = ((1 ? 9046 : 1));
                        var_35 = var_16;
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_36 = var_2;
                        var_37 = (arr_56 [i_0]);
                        var_38 = ((-(min((arr_21 [i_0] [i_0] [i_0] [i_0]), (arr_58 [i_0])))));
                        arr_60 [i_0] = ((((~(~var_10)))) || ((((((var_8 ? var_12 : var_16))) ? var_1 : var_9))));
                    }
                    var_39 = (max(4294967295, (((((1 ? var_6 : var_4))) ? 1566 : ((1 ? var_16 : var_2))))));
                }
                arr_61 [i_0] [i_5] [i_0] = ((var_12 ? (((!var_16) ? (((var_8 ? var_0 : var_8))) : 2190869692)) : (((((((var_2 + 2147483647) >> (-2868721981492462693 + 2868721981492462713)))) ? (((arr_27 [i_0] [i_0] [i_13]) ? 62 : 1)) : var_1)))));
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_67 [i_0] [i_5] [i_5] [i_0] [i_0] [i_13] = arr_43 [i_19] [i_18] [i_13] [i_0];
                            var_40 = (max(var_40, (((29536 ? (((((17211818020861541587 - 0) != 7627013332161136564)))) : (((arr_20 [i_0]) ? (((-(arr_57 [i_0] [i_5] [i_13] [i_18])))) : var_16)))))));
                            arr_68 [i_19] [16] [i_13] [i_13] [16] [i_0] |= ((var_4 ? (var_8 & var_10) : 234));
                        }
                    }
                }
                var_41 = var_12;
            }
            var_42 = ((0 ? (arr_14 [i_0] [15] [i_0] [i_5] [i_0]) : (min(var_2, 2868721981492462693))));
            var_43 = (min((47621 & -21743), (arr_2 [i_0])));
            var_44 = ((~(arr_29 [i_5] [i_5] [i_5])));
        }
        for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
        {
            arr_72 [i_0] [i_0] [i_0] = 43123;
            var_45 = (min(((var_12 ? (~67) : 10326706273005023342)), -3360989507388445419));
            var_46 = (((var_15 ? (((-(arr_12 [i_0] [i_0]))) : (min(0, var_7))))));
        }
        arr_73 [i_0] = (max((max(var_15, var_9)), 0));
        arr_74 [i_0] = var_8;
        var_47 = (max(var_47, var_12));
    }
    var_48 = ((((var_13 ? 35999 : (~var_16))) >> (var_12 - 16777)));
    var_49 = (max(var_10, (max((var_14 - var_1), var_11))));
    #pragma endscop
}
