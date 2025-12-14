/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (((max((min(-8, -1765225331)), var_10))) ? ((38 ? (~1765225331) : var_0)) : 51);

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (min(((var_1 ? (max(var_2, var_3)) : var_1)), var_3));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_3] [0] = var_4;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_15 = (((((max(22, var_2)))) ? 206 : 44));
                            var_16 = (max(var_16, var_0));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((((var_8 ? var_11 : var_7)) | ((1159516640 ? var_10 : (var_4 || var_11)))));
                            arr_19 [2] [i_0] [i_3] [i_3] [i_3] [i_1] = var_9;
                        }

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_18 = (((((((-1765225331 ? var_3 : 10457598440214297214))) ? (var_3 + var_11) : (var_5 != var_8))) / ((var_1 ? ((249938143 ? var_13 : var_3)) : ((-853706077 ? var_11 : var_3))))));
                            var_19 = (max(var_19, var_11));
                            var_20 -= ((-(min(var_3, ((var_2 ? var_11 : var_9))))));
                            var_21 = ((var_3 ? ((max(-1159516641, var_9))) : (max(((-1159516640 ? var_8 : var_3)), var_10))));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_22 = (min(var_22, var_4));
                            var_23 &= (min(var_9, ((min(var_11, var_3)))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((((~(-109 & 22)))) ? (max(var_8, (~var_10))) : (((~var_4) ^ var_8)));
                            var_24 = (max(var_24, var_9));
                        }
                        var_25 = var_6;
                    }
                }
            }
            arr_27 [i_0] [i_0] = 12444;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {

            for (int i_9 = 4; i_9 < 17;i_9 += 1)
            {
                arr_33 [i_0] [i_8] [i_0] = (((-105 ^ -2019245708) ? (~var_12) : ((var_3 ? var_8 : var_0))));
                var_26 = (min(var_26, var_2));
                var_27 = ((var_10 ? var_5 : 16383));
                var_28 = var_1;
                var_29 ^= ((((max(15, 10457598440214297214))) ? (((-2063508029 + var_4) - (var_6 + var_7))) : (((min(60, var_9))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_36 [i_0] [i_8] = var_1;
                var_30 = var_10;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_31 = ((-65535 ? var_13 : (var_1 / var_11)));
                            var_32 *= var_13;
                            var_33 = var_10;
                            var_34 = ((var_13 ? -1900982658 : var_9));
                            var_35 = (var_12 + -9536);
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                var_36 -= 22;
                arr_45 [i_0] [12] [i_13 - 1] [12] |= (max(206, ((var_3 ? 12 : 19121))));
                arr_46 [i_0] = ((var_7 ? (max(((var_0 ? 44 : var_11)), ((335203776 ? 4032 : var_7)))) : ((var_11 ? ((var_2 ? var_9 : 57459)) : var_2))));
                var_37 = ((((((max(var_6, var_8))) / 1765225324)) != -1159516641));
            }
            var_38 = ((-(((((2019245707 ? var_8 : 1159516640))) ? var_8 : var_2))));
            var_39 -= -7010;
            var_40 = 13276198717982414159;
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        var_41 = var_9;
                        var_42 = -var_10;
                    }
                }
            }

            for (int i_17 = 2; i_17 < 16;i_17 += 1)
            {
                arr_58 [i_0] [i_0] [i_0] = (max(var_10, (!var_8)));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        {
                            arr_64 [i_0] = -28798;
                            var_43 = ((((-((var_2 ? var_9 : -1)))) - ((var_12 ? -125 : -45))));
                        }
                    }
                }
                var_44 *= (~var_10);
                var_45 = (min(((0 ? 0 : 4)), var_12));
            }
            var_46 *= (max(10457598440214297211, var_7));
            var_47 = (((17519081101134745010 ? 63 : 7)));
        }
        var_48 += (max(var_3, (max(((var_6 ? var_13 : var_1)), ((max(-23773, 38)))))));
    }
    for (int i_20 = 2; i_20 < 8;i_20 += 1)
    {
        var_49 = (((!(((var_1 ? var_7 : var_5))))) ? var_12 : var_6);
        arr_67 [i_20] = ((var_0 ? ((min(-32737, 46158))) : 1159516640));
        var_50 = (max((max(var_7, var_12)), ((max(var_11, var_11)))));
    }
    var_51 ^= (min((((((215 ? var_8 : 35083))) ? -var_1 : (min(-99, var_5)))), -1507171925));
    var_52 = max(var_2, ((var_6 ? (var_7 != 32736) : var_12)));
    var_53 *= (max((min(var_4, (max(var_12, var_12)))), var_10));
    /* LoopNest 2 */
    for (int i_21 = 4; i_21 < 21;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 24;i_22 += 1)
        {
            {

                for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
                {
                    var_54 = ((((max(var_11, 96))) ? (!98) : ((min((2225 != 77), var_7)))));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 24;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 24;i_25 += 1)
                        {
                            {
                                arr_79 [i_23] [2] [i_23] [i_22] [i_23] = ((((((-1765225331 ? 64984 : var_5)))) != ((var_0 ? var_5 : var_9))));
                                arr_80 [i_21 - 2] [i_22] [i_22] [i_21 - 2] [i_23] = ((max(var_1, (min(var_5, var_4)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 24;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 24;i_27 += 1)
                        {
                            {
                                var_55 = -var_6;
                                var_56 = ((33554430 ? 1765225315 : 18446744073709551614));
                                var_57 = (max((((((var_7 ? -98 : var_7))) ? var_7 : var_4)), (((var_12 ? var_13 : var_10)))));
                            }
                        }
                    }
                }
                for (int i_28 = 0; i_28 < 24;i_28 += 1) /* same iter space */
                {
                    var_58 = (((var_10 ? var_12 : var_4)));

                    for (int i_29 = 0; i_29 < 24;i_29 += 1) /* same iter space */
                    {
                        var_59 += ((var_13 ? (max((max(var_4, var_0)), var_12)) : var_10));
                        var_60 -= (((var_1 <= 1073741823) ? var_8 : var_1));
                    }
                    for (int i_30 = 0; i_30 < 24;i_30 += 1) /* same iter space */
                    {
                        var_61 = (min(var_61, ((min(((max(16712, var_13))), (((((var_9 ? var_5 : var_9))) ? -1 : ((var_8 ? var_0 : var_5)))))))));
                        var_62 ^= (min(var_2, (~var_10)));
                        arr_96 [i_21 - 3] [i_22] [i_28] = var_2;
                        var_63 = ((!((min(175, ((var_9 ? var_10 : 29339)))))));
                    }
                    for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                    {

                        for (int i_32 = 4; i_32 < 22;i_32 += 1) /* same iter space */
                        {
                            var_64 = var_2;
                            var_65 -= (max((max(7, ((var_4 ? var_1 : 29339)))), (max(((var_0 ? var_1 : var_10)), 255))));
                            var_66 = (min(0, (max(4118, 255))));
                        }
                        for (int i_33 = 4; i_33 < 22;i_33 += 1) /* same iter space */
                        {
                            var_67 = (max((min(1264, 38)), 157));
                            arr_103 [i_21 - 1] [i_22] [i_22] [i_22] [i_28] [i_21] = ((((var_2 | ((2048 ? 10644947582013224092 : var_11)))) >> ((((var_11 ? var_1 : var_0)) - 39984))));
                            var_68 &= (var_8 && var_10);
                            var_69 = (max(var_69, (!var_13)));
                        }
                        var_70 |= 1765225330;
                    }
                    for (int i_34 = 0; i_34 < 24;i_34 += 1) /* same iter space */
                    {

                        for (int i_35 = 3; i_35 < 21;i_35 += 1)
                        {
                            var_71 = ((((~(202 ^ var_4)))) ? ((var_12 ? var_3 : var_2)) : var_13);
                            arr_109 [i_21 - 4] [i_22] [i_28] [21] [i_28] [i_34] [i_35] = (max(var_11, ((-26788 ? ((var_7 ? var_5 : var_1)) : var_8))));
                            var_72 = (((((var_8 ? (var_8 ^ var_8) : (var_6 ^ 0)))) ? (((((((-677722509 + 2147483647) << (((var_12 + 153895501) - 10))))) ? var_10 : ((var_10 ? var_13 : 2048))))) : (min(var_5, var_11))));
                            var_73 -= var_9;
                            var_74 = var_7;
                        }
                        for (int i_36 = 0; i_36 < 24;i_36 += 1)
                        {
                            arr_112 [i_28] [10] [i_28] [i_34] [i_36] = ((((var_4 ? var_4 : -1765225331)) << ((((max(var_8, var_10))) - 65498))));
                            var_75 ^= ((var_2 ? (((~(~var_9)))) : (((((var_1 ? var_4 : var_12))) ? var_11 : var_2))));
                            var_76 *= ((var_12 ? 16 : ((23 ? 927662972574806605 : 18446744073709551614))));
                            var_77 = (((var_2 ? -1 : var_11)));
                        }
                        arr_113 [i_21] [i_28] [i_28] [i_34] = ((~((var_11 ? 2147483647 : var_13))));
                        arr_114 [i_21] [i_28] [i_21] [i_34] = (max(((((max(var_13, var_12))) ? var_4 : 18446744073709551614)), (((var_0 ? ((var_8 ? var_6 : var_0)) : (max(var_1, var_4)))))));
                        var_78 = (min(var_78, ((min((((((var_4 ? var_8 : var_1))) ? (247 - var_11) : ((var_4 ? var_5 : var_2)))), ((min(var_10, var_12))))))));
                        var_79 -= var_3;
                    }
                    var_80 = (max(var_80, ((max((min(var_7, ((min(236, 65519))))), (-2147483647 - 1))))));
                }
                for (int i_37 = 0; i_37 < 24;i_37 += 1) /* same iter space */
                {
                    var_81 = (var_11 / -var_10);
                    /* LoopNest 2 */
                    for (int i_38 = 0; i_38 < 24;i_38 += 1)
                    {
                        for (int i_39 = 0; i_39 < 24;i_39 += 1)
                        {
                            {
                                arr_123 [12] [i_38] [4] [i_38] &= (8 ? ((var_1 ? var_13 : 13347646276444040746)) : 52733);
                                var_82 = (max(var_82, ((max((min((~var_1), (max(var_0, var_5)))), ((((var_2 ? -1 : 80)))))))));
                                var_83 = (max((~-1679197520), ((var_1 >> (var_3 - 65517)))));
                                arr_124 [i_21 - 4] [i_37] [i_37] [i_21] [i_22] = var_12;
                            }
                        }
                    }
                }
                arr_125 [i_21] [i_22] = var_10;
                /* LoopNest 2 */
                for (int i_40 = 1; i_40 < 23;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 24;i_41 += 1)
                    {
                        {
                            var_84 = (min(var_84, ((var_1 ? ((82 >> ((((var_3 ? var_7 : var_1)) - 65)))) : (max((min(var_12, var_2)), (var_9 ^ var_1)))))));

                            for (int i_42 = 0; i_42 < 24;i_42 += 1)
                            {
                                var_85 *= var_6;
                                var_86 = ((((var_1 ? var_10 : var_2))) ? ((((min(-1, -800391558))) ? ((var_8 ? var_8 : var_3)) : var_12)) : 65519);
                                var_87 = ((((-var_9 ? ((var_13 ? var_5 : 52258)) : var_6))) ? 7 : ((max(393216, 14))));
                            }
                            for (int i_43 = 0; i_43 < 24;i_43 += 1)
                            {
                                arr_138 [i_21] [5] [i_40] = ((((var_13 ? var_4 : var_4)) != var_1));
                                var_88 = (min(((var_9 ? var_8 : (var_3 / var_4))), var_8));
                                var_89 ^= -7;
                            }
                            for (int i_44 = 2; i_44 < 23;i_44 += 1)
                            {
                                var_90 = (min(var_90, var_9));
                                var_91 = (((((65535 ? (~var_11) : (~var_10)))) ? (((var_8 & var_6) & (~var_12))) : (~var_2)));
                            }
                            var_92 *= var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
