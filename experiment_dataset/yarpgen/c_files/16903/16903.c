/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = var_10;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_12 = ((-(!var_7)));
                    var_13 = ((-var_1 + (1 + 0)));
                    var_14 = ((var_9 || var_4) ? (max((((var_1 ? var_1 : var_8))), ((var_1 ? var_10 : var_4)))) : ((((((((var_8 + 2147483647) << (var_4 - 15910793689571472561)))) == (7748140133716621904 % 4157900197))))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 = var_4;
                        var_16 = -var_5;
                        arr_15 [i_5] [i_4] [i_4] [i_2] [i_1] [i_0] = (((((((var_9 ? var_0 : var_9))) ? var_0 : ((var_6 ? var_4 : var_7)))) * var_8));
                        var_17 = (((var_3 ^ var_7) ? (!var_7) : (!var_6)));
                        var_18 = (min(var_18, (((1 % 254) ? (1 ^ 1) : ((var_8 ? ((var_10 ? var_3 : var_5)) : (((var_6 ? var_8 : var_5)))))))));
                    }
                    var_19 = (((var_1 | var_3) == ((var_4 ? ((var_10 ? var_7 : var_1)) : (((var_6 ? var_5 : var_5)))))));
                    var_20 = (((max(var_2, var_2))) ? (((var_5 ? var_1 : var_9))) : ((var_3 ? var_0 : var_7)));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_21 &= var_9;
                    arr_19 [i_0] [i_0] [i_1] [i_2] [i_6] = (max((min(-17570985470238957925, var_5)), ((((var_9 & var_5) ? (max(var_8, var_2)) : (~var_5))))));
                    var_22 += (max((var_8 > var_4), (min(var_2, var_3))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_23 = (((((var_6 ? var_2 : var_4))) ? (max(var_7, var_10)) : -var_1));
                            var_24 = ((((var_2 ? var_1 : var_0))) ? (max((((1 ? 1 : 1))), -var_3)) : (((((((var_2 ? var_5 : var_9)) + 2147483647)) << (var_2 - 1215398466)))));
                        }
                    }
                }
                var_25 = ((((((((var_5 ? var_10 : var_7))) ? (((max(var_9, var_8)))) : ((var_1 ? var_4 : var_8))))) ? ((((((var_5 - var_8) + 2147483647)) >> (var_3 - 6857708137655631841)))) : ((-((3457883829 ? 3722461657 : var_6))))));
                var_26 ^= (max(((var_0 >> (var_4 - 15910793689571472547))), ((0 ? 3722461658 : 1))));
            }
            arr_24 [2] = ((min(var_5, var_0)) * (var_10 < var_7));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_27 ^= (~-27033);
                            var_28 *= var_2;
                            arr_33 [i_0] [i_9] = (var_3 - -var_2);
                            var_29 = (min(var_29, (((1895509037 != ((2147483647 ? 3722461657 : 255)))))));
                            var_30 = (max((var_9 || var_1), (var_10 != var_3)));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_31 ^= ((var_0 >> (var_0 - 806568530)));
                var_32 = (var_3 ? var_4 : var_7);
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    var_33 = (var_9 > var_0);

                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_34 = (max(var_34, ((((var_7 + var_6) ? var_8 : var_8)))));
                        arr_45 [i_1] [i_13] [i_14] [i_15] = (818765193 && 125);
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_35 &= (!var_9);
                        arr_48 [i_13] [i_14] [i_13] [i_1] [i_1] [i_0] = (((((var_6 ? var_0 : var_3))) ? (((var_9 ? var_1 : var_2))) : ((var_7 ? var_1 : var_6))));
                    }
                }
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_36 |= ((-(var_6 & var_1)));
                    var_37 = (var_0 + var_3);
                    arr_51 [i_17] = (var_4 != var_4);
                }
                for (int i_18 = 1; i_18 < 21;i_18 += 1)
                {
                    var_38 = (~var_8);

                    for (int i_19 = 1; i_19 < 20;i_19 += 1)
                    {
                        arr_58 [i_0] [i_1] [i_13] [i_13] [i_18] [i_18] [i_19 - 1] = (((!var_5) << (var_4 - 15910793689571472555)));
                        arr_59 [i_13] [i_18] [i_13] [i_0] [i_0] = (var_3 & var_2);
                        arr_60 [i_0] [i_1] [i_1] [i_13] [i_13] [i_18] [i_19] = (var_4 >= var_10);
                    }
                    var_39 = var_3;
                    var_40 = (max(var_40, (!var_10)));
                    var_41 = (var_2 ? var_8 : var_0);
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    arr_64 [i_0] [i_1] [i_1] [i_20] = (!var_8);

                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        var_42 |= (var_0 && var_9);
                        var_43 = ((var_9 >= var_0) | var_7);
                        var_44 = (min(var_44, (((var_6 ? var_10 : var_0)))));
                        var_45 = (!var_1);
                    }
                    var_46 = (max(var_46, ((((var_5 || var_1) ? (var_5 / var_0) : var_7)))));
                    var_47 = (!var_6);
                }

                for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
                {
                    var_48 = ((1 ? 1 : 12));
                    var_49 = var_8;
                }
                for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
                {
                    var_50 = (~var_6);
                    var_51 = (var_8 ? var_7 : var_7);
                }
                var_52 = (var_10 / var_2);
            }
        }
    }

    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {

        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            var_53 = (((~32767) ? ((var_4 << (var_7 - 313529641913440844))) : (~var_4)));
            var_54 += (((var_0 || var_8) > (var_3 && var_8)));
            var_55 = var_2;
        }
        for (int i_26 = 1; i_26 < 12;i_26 += 1)
        {

            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {

                for (int i_28 = 0; i_28 < 13;i_28 += 1)
                {
                    var_56 = ((((var_1 << (1 * 1))) * (!var_4)));

                    for (int i_29 = 2; i_29 < 10;i_29 += 1)
                    {
                        var_57 = (max(var_57, ((max((var_4 <= var_3), (var_6 < var_6))))));
                        var_58 = ((!(!var_2)));
                        var_59 &= (max(1, -19790));
                        arr_92 [i_28] [i_26] = ((-(~var_5)));
                    }
                    for (int i_30 = 0; i_30 < 13;i_30 += 1)
                    {
                        var_60 = (min(var_60, var_10));
                        arr_95 [i_24] [i_26] = (103251940 + 1);
                        var_61 = ((-var_4 != (((min(1, 32751))))));
                        arr_96 [i_24] [i_26] [i_27] [i_28] [i_30] = ((3457883829 ? 15 : 716508429800562138));
                    }
                    var_62 += ((!(((var_0 ? var_6 : var_0)))));
                }

                for (int i_31 = 1; i_31 < 12;i_31 += 1)
                {
                    var_63 = (((((var_6 ? (!var_5) : var_7))) ? (var_0 * var_6) : ((var_6 ? var_2 : var_7))));
                    arr_99 [i_26] = (((var_1 ^ var_2) ? (((var_2 ? var_1 : var_8))) : ((var_0 ? var_3 : var_0))));
                    var_64 = (max(var_64, (((!((max(var_5, var_4))))))));
                }
                arr_100 [i_24] [i_24] [10] &= (((((var_10 ? var_10 : var_8))) * ((var_8 * ((127 ? 1 : 9033593320207265248))))));
                arr_101 [i_24] [i_24] [i_26] = (((((((((var_7 ? var_5 : var_9))) >= (var_4 ^ var_10))))) * ((-((var_6 ? var_6 : var_10))))));

                for (int i_32 = 0; i_32 < 13;i_32 += 1)
                {
                    var_65 = (var_10 % var_2);
                    var_66 = (((-((var_3 ? var_2 : var_3)))));
                }
            }

            /* vectorizable */
            for (int i_33 = 0; i_33 < 13;i_33 += 1)
            {
                arr_109 [8] &= ((var_6 ? var_6 : var_8));
                var_67 |= -var_0;
            }
            for (int i_34 = 0; i_34 < 13;i_34 += 1)
            {
                var_68 = var_1;
                var_69 = ((!(((var_8 | ((var_5 ? var_8 : var_4)))))));
                /* LoopNest 2 */
                for (int i_35 = 4; i_35 < 12;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 13;i_36 += 1)
                    {
                        {
                            var_70 = (max(var_70, ((((((!((min(-126, 1)))))) % -var_1)))));
                            var_71 = (((((var_1 + (var_3 * var_7)))) && (((var_9 ? var_3 : (((var_2 ? var_1 : var_2))))))));
                            var_72 = (((!var_8) ? (!var_3) : (((var_6 + var_9) << (var_2 - 1215398436)))));
                            var_73 &= (min(((var_7 >> (var_2 - 1215398462))), (min(-var_3, (((var_4 ? var_5 : var_5)))))));
                        }
                    }
                }
                var_74 = (((((var_0 ? var_9 : var_2))) ? (min(var_4, var_8)) : (var_10 - var_5)));
                arr_118 [i_24] [i_26] = ((115 ? (((var_1 && (((var_1 ? var_4 : var_8)))))) : (((var_6 >= (((var_7 ? var_2 : var_1))))))));
            }
            for (int i_37 = 0; i_37 < 1;i_37 += 1)
            {
                var_75 = ((((((~(!var_2))) + 2147483647)) << ((((var_3 ? -var_5 : ((var_2 ? var_4 : var_0)))) - 911530785))));
                var_76 = (((max(var_4, var_5)) - (var_1 * var_8)));
                arr_121 [9] [i_26] [i_26] [i_37] = ((((max(((var_0 ? var_8 : var_2)), (1 - 15)))) - (var_4 + var_6)));
                var_77 = (((((var_9 ? var_8 : var_10))) ? (((var_3 != (var_2 % var_8)))) : (~var_1)));
            }

            for (int i_38 = 0; i_38 < 13;i_38 += 1)
            {
                arr_124 [i_24] [i_24] [i_26] = ((-(var_2 % var_5)));
                var_78 = ((var_6 * var_7) ? (~var_8) : ((var_6 ? var_9 : var_4)));
            }
        }
        arr_125 [i_24] = ((4774 ? 228 : -19777));
        var_79 &= (min((var_5 & var_1), ((var_10 ? var_4 : var_5))));
    }
    #pragma endscop
}
