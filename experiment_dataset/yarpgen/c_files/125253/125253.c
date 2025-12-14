/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_6 - (var_15 % var_4)))) ? (var_2 * var_2) : ((var_6 ? var_4 : var_10)));

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_16 += ((((((var_6 / var_6) ? var_2 : ((var_11 ? var_15 : var_7))))) ? (min(var_7, var_4)) : (var_5 >= var_15)));
                arr_11 [i_0] [i_0] = (max(((var_12 ? var_4 : var_9)), (max(var_14, var_15))));
                var_17 = ((var_14 ? ((((max(var_4, 9223371487098961920))) ? var_3 : var_5)) : ((min(65526, (min(var_14, var_1)))))));
                var_18 = var_3;
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_0] [i_0] = (var_1 / var_8);
                var_19 ^= (((((var_15 ? ((var_6 ? var_12 : var_1)) : ((var_0 ? var_8 : var_5))))) ? ((((9223371487098961894 ? 9223371487098961899 : 1)))) : (max((var_14 >> 1), ((29360128 ? 1 : 0))))));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_20 = (max(var_20, (((((var_1 ? var_7 : var_8))) ? ((var_5 ? var_3 : var_9)) : var_15))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_19 [i_0] [i_1 + 3] [1] [i_1] [i_1 + 2] = (((var_15 ? var_10 : var_7)));
                    var_21 = (((((((var_6 ? var_9 : var_4))) ? (var_4 != var_13) : var_0))) ? var_13 : (((max(var_2, var_12)))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_22 += ((((max((var_13 || var_0), var_13))) * ((((var_10 ? var_11 : var_10))))));
                    var_23 = ((var_9 ? (((((var_8 ? var_4 : var_13))) ? var_14 : var_0)) : (((var_4 || var_10) ? ((var_8 ? var_7 : var_5)) : var_9))));
                    var_24 = (((max(var_0, var_10))) ? (((var_5 ? var_4 : var_2))) : var_3);
                }

                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_1] [i_4] [i_0] = (min(((var_3 ? var_15 : var_15)), (var_10 || var_13)));
                    var_25 = (min(var_25, ((((((var_1 ? var_11 : var_14))) ? (var_8 || var_8) : ((var_1 ? var_15 : var_11)))))));
                    var_26 = (max(var_26, (((var_8 && var_12) * var_3))));
                    var_27 -= ((((max(var_6, var_15)))) ? ((-9223371487098961920 ? 9 : 224)) : var_5);

                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        var_28 ^= (((((var_3 ? var_15 : var_7))) ? (var_1 - var_15) : var_4));
                        var_29 = ((min(var_11, ((var_14 << (((var_5 + 88) - 12)))))) + ((var_2 << (-2594065073579347730 - 1024340203))));
                    }
                }
                var_30 = (((((var_7 ? var_6 : var_2))) ? ((var_7 ? (max(var_3, var_15)) : var_5)) : var_1));
            }
            arr_30 [i_0] [i_0] = (((var_4 ? var_0 : var_7)));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_37 [0] [0] [0] [i_0] [i_10] = (var_12 ? ((((var_14 ? var_7 : var_8)))) : var_15);
                        var_31 = (((((((var_8 ? var_6 : var_0)) + var_11))) ? ((var_11 ? var_12 : var_9)) : (var_7 * 0)));
                        var_32 -= min(var_0, (max(-825179099, 1)));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_33 = ((min(var_4, (var_12 / var_0))));

                for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    var_34 = ((((var_5 ? var_9 : var_7))) ? ((var_3 ? var_12 : var_13)) : ((var_11 ? var_13 : var_12)));
                    var_35 -= var_9;
                    var_36 = var_5;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    arr_49 [i_0] = ((var_1 ? var_14 : var_11));
                    var_37 = ((var_13 ? var_4 : var_13));
                    arr_50 [i_0] [i_0] [i_11] [i_11] [i_12] [i_14] = (((var_6 ? var_14 : var_6)));
                }
            }
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                var_38 = ((var_13 ? (var_7 < var_10) : (min(var_9, (max(var_1, var_12))))));
                arr_55 [i_0] [i_0] [8] = (min(((1 ? 51414 : 1)), var_6));
                arr_56 [i_15] [i_0] [i_0] [i_0] = (max((((68585259008 < ((var_14 ? var_11 : var_11))))), (((((var_8 ? var_13 : var_2))) ? ((var_13 ? var_6 : var_6)) : var_14))));
                arr_57 [i_0] [i_11] = var_0;
                arr_58 [i_0] [i_0] [i_15] = (((1 ? 1 : 1)));
            }
            var_39 = (min(var_39, ((var_13 ? (((max(0, 1)))) : var_15))));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_40 -= ((var_14 ? ((var_2 ? var_1 : var_13)) : var_5));
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_41 -= (((var_7 - var_0) ? var_12 : var_9));
                            var_42 = 2147483647;
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                var_43 = ((((max(var_0, var_10))) || (((var_9 ? var_0 : var_12)))));
                arr_69 [i_0] [i_0] [i_0] [1] = var_5;

                for (int i_20 = 4; i_20 < 11;i_20 += 1) /* same iter space */
                {
                    var_44 = (var_9 - ((var_0 ? var_0 : var_15)));
                    var_45 -= (((((((var_15 ? var_8 : var_6)) + ((var_2 ? var_12 : var_12))))) ? ((((var_2 ? var_8 : var_8)) << ((((((var_10 ? var_6 : var_1)) + 1740303169)) - 21)))) : ((1 ? 1 : 1048448))));
                    var_46 = (max(var_46, (min((max(1, 399691786)), ((var_3 ? var_6 : var_1))))));
                }
                for (int i_21 = 4; i_21 < 11;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        arr_77 [i_0] [i_0] [i_0] [i_19] [i_0] [i_0] [i_22] = ((var_12 ? var_10 : ((13 ? 1 : -4625792735949504267))));
                        var_47 = var_11;
                        var_48 *= ((var_2 ? var_2 : ((var_9 ? var_8 : var_5))));
                        var_49 = (var_6 ? ((var_12 ? var_5 : var_3)) : var_1);
                    }
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        arr_80 [i_0] [i_0] [i_0] [i_0] [1] = var_7;
                        var_50 = (min(var_50, 1));
                        arr_81 [i_0] = ((((min((((var_1 + 2147483647) << (var_14 - 63426))), var_1))) ? (((((var_15 ? var_4 : var_8))) ? var_5 : var_4)) : ((var_13 - (var_8 / var_10)))));
                    }
                    var_51 = ((max(var_0, ((var_4 >> (var_1 + 87))))));
                }
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    var_52 = ((((var_0 ? var_14 : var_10)) <= var_15));
                    var_53 = (max(1, 1));

                    for (int i_25 = 0; i_25 < 12;i_25 += 1) /* same iter space */
                    {
                        var_54 = (((1 && 1) ? ((19106 ? 1 : 131)) : 19));
                        var_55 += 125;
                    }
                    for (int i_26 = 0; i_26 < 12;i_26 += 1) /* same iter space */
                    {
                        arr_91 [i_0] [i_0] [i_0] [i_24] [i_26] = ((((((((var_11 ? var_8 : var_0))) ? var_0 : 215))) ? ((var_8 ? var_10 : ((var_12 ? var_0 : var_2)))) : (var_10 <= var_5)));
                        var_56 = (max(var_56, (((min(var_7, var_10))))));
                    }
                }
                for (int i_27 = 1; i_27 < 11;i_27 += 1)
                {
                    var_57 = ((var_4 - (var_12 && var_6)));
                    var_58 = var_10;
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 11;i_28 += 1)
    {
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 11;i_29 += 1)
        {
            for (int i_30 = 1; i_30 < 7;i_30 += 1)
            {
                {
                    var_59 = ((min(var_11, ((var_2 ? var_2 : var_6)))) < var_14);
                    arr_102 [i_30] [i_29] [i_29] = (((min((var_7 & var_13), var_1))) || ((((((var_2 ? var_0 : var_0))) ? var_0 : ((124 ? 8458 : 6291456))))));
                }
            }
        }
        arr_103 [i_28] [i_28] = min((var_9 ^ var_1), var_2);
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 1;i_31 += 1)
    {
        var_60 = var_14;
        var_61 = (var_1 && var_4);
    }
    for (int i_32 = 0; i_32 < 25;i_32 += 1)
    {
        var_62 = (min(var_62, (((((((var_12 ? var_10 : var_9)) << (var_7 - 722943333))) | ((var_7 ? var_7 : var_11)))))));
        var_63 = ((((var_0 && var_9) ? var_2 : var_8)));
        var_64 = (-399691787 ? var_8 : ((var_8 ? var_14 : var_14)));
    }
    var_65 = (min(var_65, (min(var_4, ((var_2 ? var_15 : ((var_7 ? var_14 : var_9))))))));
    var_66 = ((var_11 ? (1 <= 10) : 48));
    #pragma endscop
}
