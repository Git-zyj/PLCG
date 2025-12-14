/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_10 += ((((-((1774329118707875084 ? var_3 : var_9)))) + var_5));
        arr_2 [i_0] [2] = var_3;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_11 = (((arr_4 [i_1]) || (((var_1 ? var_7 : var_6)))));
        var_12 = (1774329118707875078 >= 1774329118707875088);
        arr_7 [6] [i_1] |= 1;

        for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_11 [1] = var_6;
            var_13 -= 1;
            arr_12 [i_1] [i_2 - 3] = -1;
            var_14 = ((1774329118707875094 ? 16982 : (var_2 + var_7)));
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_17 [i_3] = (var_3 / -var_1);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_21 [i_3] = var_7;
                arr_22 [9] [i_3] = ((((!(arr_5 [i_1] [i_1])))));
                var_15 = var_4;

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_29 [i_1] [i_3] [i_1] [i_5] [i_3] = ((+((((arr_5 [i_1 + 2] [i_5]) && var_2)))));
                        var_16 = ((!(arr_26 [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 - 2])));
                    }
                    arr_30 [4] [i_3] [i_3] [i_1 - 2] = (arr_19 [i_1 - 2] [i_1 - 2] [i_3]);
                    var_17 = var_4;
                    arr_31 [i_1] [i_1] [i_3 + 1] [i_4] [i_3] = arr_3 [4] [i_5];
                }
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_18 = -var_8;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((((var_2 ? var_4 : var_8))) / ((109 ? -16960 : var_0)))))));
                            var_20 = (arr_20 [i_3] [i_3] [i_3]);
                            var_21 = 4809692965541251577;
                            arr_40 [i_1 - 1] [i_3 - 3] [i_7] [i_8] [i_3] = ((~(~-16)));
                        }
                    }
                }
                arr_41 [i_1] [i_3] [i_3] [1] = (arr_35 [i_7] [i_3 + 1] [i_1 + 1] [i_1]);

                for (int i_10 = 2; i_10 < 8;i_10 += 1)
                {
                    arr_44 [i_1] [i_3] [i_7] [i_10 + 2] = (arr_26 [i_1] [i_3] [i_7] [i_10 - 2]);
                    var_22 = var_5;
                    var_23 = var_4;
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_24 = (((arr_38 [i_12] [i_11] [i_3] [i_3 - 1] [i_1]) ? (arr_23 [i_3 - 2] [i_3 + 1]) : (!var_6)));
                        var_25 = (max(var_25, (arr_35 [i_1 - 1] [i_11] [i_3] [i_11])));
                        var_26 = (~var_8);
                        var_27 = ((535822336 / ((var_7 ? var_0 : -1))));
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_54 [i_1 - 1] [i_1] [i_1] [i_1 + 2] &= -126;
                        arr_55 [i_3] [1] [i_3] [1] [i_13] = (((!var_7) ? ((var_4 ? (arr_46 [i_13] [i_3] [2]) : -67)) : 0));
                        var_28 &= (-1 != -1182200356);
                        var_29 = (arr_51 [i_1 + 3] [i_3 - 3] [i_11] [i_13]);
                    }
                    var_30 = (min(var_30, ((((arr_14 [0] [i_7]) ? var_1 : (arr_47 [i_3] [2]))))));
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                {
                    arr_58 [i_14] [i_3] [i_1 + 2] = (1 % 5550422352670499161);
                    var_31 *= (arr_5 [i_3] [i_3]);
                }
                arr_59 [4] [i_3] [i_7] [i_7] = var_7;
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
            {
                var_32 = ((-(arr_23 [i_1] [i_3 - 3])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_68 [i_3] = 138;
                            var_33 &= var_7;
                        }
                    }
                }
                var_34 = 65535;
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
            {
                arr_71 [i_3] [i_3] = (arr_70 [i_3] [i_3]);

                for (int i_19 = 3; i_19 < 8;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        var_35 = 32767;
                        arr_78 [i_1] [i_1] [3] [i_1] [i_3] = arr_62 [i_19 + 2] [i_19] [i_19] [i_19];
                        var_36 = (((arr_45 [i_3 - 2] [i_19 + 2] [i_18] [i_18]) ? (arr_45 [i_3 + 1] [i_19 - 1] [i_3 + 1] [2]) : (arr_45 [i_3 - 3] [i_19 - 2] [i_3] [i_3 - 3])));
                    }
                    arr_79 [i_1 - 1] [i_3] [i_18] [i_19] = (arr_1 [i_1 + 2]);

                    for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                    {
                        var_37 = ((var_7 >> ((((var_4 ? (arr_1 [6]) : 262143)) + 22419))));
                        var_38 = var_1;
                        var_39 -= var_4;
                    }
                    for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
                    {
                        var_40 = (var_6 ^ var_9);
                        arr_87 [0] [i_3 - 1] [i_18] [i_3] [i_22] = var_5;
                        var_41 ^= var_2;
                        var_42 = (max(var_42, ((((~682930699) ? var_6 : (~16672414955001676538))))));
                    }
                    for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
                    {
                        arr_90 [i_3] [i_3] = (arr_36 [i_19] [1] [i_19] [i_19]);
                        var_43 = (min(var_43, ((((arr_64 [i_1] [i_1] [i_19] [i_19]) == var_5)))));
                        var_44 = (min(var_44, (((15556 ? 29185 : (arr_60 [i_1 - 1] [i_3 + 1]))))));
                        var_45 = (max(var_45, (~-1)));
                    }
                    for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
                    {
                        var_46 = (max(var_46, var_5));
                        var_47 = (arr_43 [i_1] [i_3] [i_18] [i_19 - 2] [1] [i_24]);
                    }
                    arr_94 [i_3] [i_3 - 2] = (arr_34 [i_3]);

                    for (int i_25 = 0; i_25 < 0;i_25 += 1)
                    {
                        var_48 = (i_3 % 2 == 0) ? (((var_6 << (((((arr_34 [i_3]) - (arr_86 [i_1] [i_19]))) - 9747389157557886725))))) : (((var_6 << (((((((arr_34 [i_3]) - (arr_86 [i_1] [i_19]))) - 9747389157557886725)) - 18160048160132154885)))));
                        var_49 = var_1;
                        arr_99 [i_1 + 2] [i_3] [i_18] [i_19] [i_25] = -1;
                    }
                }
                var_50 = (max(var_50, (var_9 * var_6)));
                arr_100 [i_3] = (((arr_56 [i_1 - 1] [i_18] [i_1 + 2] [i_3]) ? 1089959464 : (((arr_24 [4] [i_3] [i_3] [i_1 - 2] [i_18]) ? 6445071518956159697 : -16))));
            }
            var_51 -= (((arr_53 [i_1] [i_1 + 3] [i_3 - 3] [i_1 + 3] [i_3 - 2] [i_3 - 2]) ? var_7 : var_5));
            arr_101 [i_3] = ((1 ? 7415345421924431286 : -1));
        }
        for (int i_26 = 3; i_26 < 9;i_26 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 10;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    {
                        var_52 = (min(var_52, ((((arr_52 [i_1] [3] [i_1 + 2] [i_1] [5]) > (((arr_74 [i_26] [i_26] [7] [i_26]) ? var_3 : var_7)))))));
                        var_53 |= (8 <= 3513057013);
                        arr_109 [i_27] [i_28] [i_28] [i_28] [i_26] [i_1] = (arr_56 [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1]);
                    }
                }
            }
            var_54 = (var_5 * var_4);
            var_55 = var_6;
        }
        for (int i_29 = 2; i_29 < 9;i_29 += 1)
        {
            var_56 = (~var_7);
            arr_112 [0] [i_29] = (!var_7);
            var_57 = (min(var_57, var_5));
            arr_113 [i_1] = var_4;
            var_58 = (max(var_58, ((((arr_86 [i_1] [i_29 + 1]) ? (arr_57 [i_1] [i_1] [i_1] [i_29]) : (((arr_26 [i_1 - 1] [i_1] [i_1] [i_1]) ? (arr_36 [i_1 - 2] [i_29] [i_1 - 2] [0]) : var_4)))))));
        }
        var_59 = (max(var_59, var_6));
    }

    /* vectorizable */
    for (int i_30 = 2; i_30 < 9;i_30 += 1) /* same iter space */
    {
        var_60 = (max(var_60, (-9 && 41185)));
        arr_116 [6] [2] |= ((+(((-9223372036854775807 - 1) ? (arr_115 [8]) : (arr_115 [10])))));
        var_61 = (((((-2 ? var_3 : var_1))) ? var_6 : (arr_115 [i_30])));
    }
    for (int i_31 = 2; i_31 < 9;i_31 += 1) /* same iter space */
    {
        var_62 = (((((((((arr_117 [i_31]) ^ (arr_115 [i_31])))) ? (((max(112, -35)))) : (arr_118 [i_31])))) ? ((((!((var_2 < (arr_114 [i_31] [i_31]))))))) : (min(-var_1, (max(var_9, (arr_118 [i_31])))))));
        var_63 |= (arr_115 [2]);

        for (int i_32 = 0; i_32 < 11;i_32 += 1)
        {
            var_64 = (min(((((arr_117 [i_31]) * (max((arr_115 [i_31]), 3217))))), 15790728773890519725));
            var_65 = ((~(((var_0 || (((1774329118707875112 ? var_0 : -29169))))))));
            var_66 = ((((((104 << (1143914305352105984 - 1143914305352105962))) * 1)) | (arr_119 [i_31] [i_32])));
            var_67 = 0;
        }
        /* vectorizable */
        for (int i_33 = 1; i_33 < 9;i_33 += 1)
        {
            /* LoopNest 2 */
            for (int i_34 = 1; i_34 < 8;i_34 += 1)
            {
                for (int i_35 = 3; i_35 < 10;i_35 += 1)
                {
                    {
                        var_68 = (max(var_68, ((+((var_0 ? (arr_123 [0]) : (arr_130 [i_31] [i_33 + 1] [i_34] [i_35] [6])))))));
                        var_69 = (max(var_69, var_3));
                    }
                }
            }
            arr_131 [i_31] [i_31] [i_33] = (arr_120 [i_31 + 2] [i_33 + 1] [i_33 + 2]);
            var_70 = 18014398509481983;
        }
    }
    for (int i_36 = 2; i_36 < 9;i_36 += 1) /* same iter space */
    {
        var_71 = (max(var_71, (((!((((arr_132 [i_36 + 2]) + 7819393507565716354))))))));
        var_72 = -17330081988173442481;
    }
    #pragma endscop
}
