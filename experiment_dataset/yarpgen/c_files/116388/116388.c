/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = ((((((!(var_7 | var_9))))) + (((var_9 + var_0) ? (((max(var_2, var_9)))) : (var_8 ^ var_1)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [9] [i_0] [i_0] [i_1] [i_1] [i_3] = ((((((var_6 & var_3) ? ((var_5 ? var_8 : var_4)) : var_3))) ? ((((max(var_9, var_2))) ? (max(0, 18446744073709551611)) : (var_0 & var_2))) : ((((var_1 << (var_9 - 165)))))));
                        arr_12 [i_0] [i_1] [i_2] [i_1] = (((((var_3 - var_4) ? ((max(var_9, var_9))) : (var_6 - var_5))) - (min(var_6, (var_3 - var_3)))));
                        var_10 ^= (max((((-var_6 >= (!var_5)))), ((((max(595162737, -529273908))) ^ var_8))));
                        var_11 = (max(var_11, (((((max(((var_2 ? var_0 : var_2)), ((max(var_7, var_5)))))) ? ((((var_7 || var_1) && ((max(var_6, var_6)))))) : ((~((-1 ? 342919246 : 529273882)))))))));
                    }
                }
            }
            arr_13 [i_1] [i_1] = (27538 & 19612);
            var_12 = var_4;

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_13 = (max(var_13, var_0));
                    arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = (((var_9 & var_5) % var_6));
                    arr_19 [i_1] [i_1] [i_1] [i_4] [0] = (((var_0 <= var_0) ^ (var_7 ^ var_6)));
                    arr_20 [i_1] [i_4] [i_1] [i_1] = (((((18446744073709551615 ? 127 : -77))) ? ((var_3 ? var_2 : var_3)) : ((var_9 ? var_7 : var_1))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_14 -= (((1722101574 & 3910711738) | (var_9 ^ var_1)));
                    arr_23 [i_4] [i_4] [i_1] = ((!var_6) && var_2);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_1] [i_1] [i_1] = ((((var_3 ? var_2 : var_4)) + (var_2 - var_3)));
                    var_15 -= ((-var_4 ? (var_5 & var_6) : (var_5 + var_0)));
                    var_16 -= (((var_6 > var_3) / (var_7 + var_4)));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!var_4) && (((var_7 ? var_0 : var_3))));
                            var_17 = (-((var_8 << (var_0 - 14723))));
                            var_18 = ((((var_8 ? 554533696 : (-9223372036854775807 - 1)))) ? -253866858 : (2147483647 && 0));
                            var_19 = (max(var_19, var_2));
                        }
                    }
                }
                var_20 = (max(var_20, (((-(1 + 1230895661694634564))))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_21 -= ((((((min(var_0, var_0))) ? ((min(var_6, var_4))) : (var_5 * var_2))) & ((((max(var_1, var_2))) ^ (var_0 - var_6)))));
                var_22 = (max(var_22, ((max(((min((var_6 > var_0), (max(var_4, var_4))))), ((var_6 ? (min(var_8, var_0)) : (((max(var_4, var_1)))))))))));
            }
        }
        var_23 -= (((((var_9 < var_8) + (var_5 + var_3))) % (min(-var_2, (var_6 | var_3)))));
    }
    var_24 = (((((((var_3 | var_9) ? (var_7 | var_3) : (max(214398203, 68)))) + 2147483647)) >> (((!((max(var_6, var_8))))))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_25 = ((var_5 != (min((((var_3 + 2147483647) << (var_4 - 127))), ((var_9 ? var_2 : var_4))))));
                                var_26 = (((((((min(var_8, var_5))) ? ((4294967295 ? 127 : 214398192)) : var_1))) ? ((((max(var_6, var_1))) ? ((max(var_5, var_1))) : (var_0 ^ var_5))) : (((((min(var_0, var_0))) <= ((min(var_4, var_6))))))));
                            }
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 23;i_17 += 1)
                    {
                        arr_52 [i_12] [i_12] [i_16] [i_17] = ((((var_9 ? var_7 : var_7)) | (var_0 & var_0)));
                        var_27 = (min(var_27, (((((var_7 ? var_7 : var_9)) * ((var_2 ? var_5 : var_4)))))));

                        for (int i_18 = 1; i_18 < 23;i_18 += 1)
                        {
                            var_28 ^= (((var_0 | var_1) > ((var_5 >> (var_8 - 7888388171200449578)))));
                            var_29 = ((((4294967295 ? 65 : var_7)) > var_3));
                            var_30 = (((var_5 != var_3) % ((var_2 ? var_7 : var_6))));
                        }
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_60 [i_12] = (~4294967295);
                        var_31 = (min(var_31, (((((max(((max(var_1, var_2))), (min(var_0, var_3))))) ? ((((var_8 - var_0) > (((max(var_1, var_6))))))) : ((((var_0 ? var_6 : var_5)) / (var_4 <= var_4))))))));
                        var_32 = (((((!var_5) || (((var_3 ? var_4 : var_7))))) && (((((min(var_8, var_5))) ? (max(var_3, var_6)) : ((max(var_4, var_0))))))));
                        var_33 &= (((((min(-529273908, -1)) + 9223372036854775807)) << (var_0 - 14725)));
                        var_34 = ((((min((-68 != 10781), (min(var_2, var_8))))) ? (((((min(var_5, var_5))) ? (var_4 + var_6) : ((var_1 << (var_0 - 14720)))))) : (min(-6233515599268051372, -89585493))));
                    }
                    var_35 *= (max((((((var_3 ? var_3 : var_5))) ? (((var_3 ? var_9 : var_2))) : (min(var_1, var_8)))), ((min(((var_9 ? var_3 : var_0)), ((max(var_6, var_6))))))));
                }
                for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                {
                    arr_63 [i_12] [i_11] [i_11] [i_20] = (((((var_5 / var_6) / var_0)) / (var_0 / var_1)));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 24;i_22 += 1)
                        {
                            {
                                var_36 = (min(var_36, ((max((max((min(12461969327020313137, -102)), (0 + -1))), (((18446744073709551608 + 20) & 3817613430)))))));
                                var_37 |= (max((min(var_9, ((var_8 ? var_3 : var_7)))), (min(((var_7 ? var_1 : var_2)), (var_2 / var_3)))));
                                var_38 += (((1 >= 7) & ((max((var_7 > var_4), (max(15142, 10)))))));
                                var_39 = ((((max((var_1 || var_6), (max(var_2, var_2))))) && ((max(-1, ((30 ? 240 : 6295836883055613756)))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
                    {
                        var_40 = (max(var_40, ((4290699715062032495 >> (134217727 - 134217719)))));

                        for (int i_24 = 0; i_24 < 24;i_24 += 1)
                        {
                            var_41 = (min(var_41, ((((var_9 + var_6) <= (var_1 <= var_6))))));
                            arr_77 [i_11] [4] [i_20] [i_23] [i_12] = var_9;
                            var_42 = var_1;
                        }
                        for (int i_25 = 1; i_25 < 21;i_25 += 1) /* same iter space */
                        {
                            var_43 = (((var_5 >= var_9) + (var_4 + var_6)));
                            var_44 ^= (((var_0 & var_1) ? (var_6 % var_8) : (var_9 * var_7)));
                            arr_81 [i_11] [19] [i_12] [i_11] [i_11] [i_11] [i_11] = (((var_3 % var_4) > ((var_0 ? var_6 : var_0))));
                            var_45 = (max(var_45, (((125 ? 0 : -19130)))));
                        }
                        for (int i_26 = 1; i_26 < 21;i_26 += 1) /* same iter space */
                        {
                            var_46 = ((var_1 > ((var_4 ? var_4 : var_7))));
                            var_47 -= -65535;
                            var_48 = (((var_3 % var_7) | ((var_5 ? var_0 : var_3))));
                            var_49 = (((((var_1 ? var_5 : var_2))) ? (var_0 | var_7) : ((var_2 ? var_0 : var_3))));
                        }
                        for (int i_27 = 1; i_27 < 21;i_27 += 1) /* same iter space */
                        {
                            arr_86 [12] [i_12] [22] [22] [i_27] [i_11] [i_11] &= ((var_0 >= ((var_4 ? var_2 : var_0))));
                            var_50 = ((-var_5 & ((var_7 << (((var_3 + 1161511758) - 19))))));
                        }
                    }
                    for (int i_28 = 0; i_28 < 24;i_28 += 1) /* same iter space */
                    {
                        var_51 = (max(var_4, (min((!var_4), ((var_3 ? var_0 : var_2))))));
                        var_52 ^= (!148896253);
                        var_53 = (((min(((var_6 ? var_7 : var_3)), ((max(var_0, var_4))))) & (((((var_6 ? var_5 : var_8)) == (((var_0 ? var_6 : var_3))))))));
                    }
                    for (int i_29 = 0; i_29 < 24;i_29 += 1) /* same iter space */
                    {
                        var_54 = (max(var_54, ((min((((((min(var_2, var_5))) > var_6))), ((((25415 ? var_1 : 71776119061217280)) + (var_6 <= var_0))))))));
                        var_55 = ((((-var_9 ? (((max(var_4, var_2)))) : (var_0 + var_8))) ^ (((max((var_6 <= var_5), (min(var_2, var_6))))))));

                        for (int i_30 = 0; i_30 < 24;i_30 += 1) /* same iter space */
                        {
                            var_56 = (max(var_56, ((((-var_7 + (var_8 > var_1)))))));
                            var_57 = (max(var_57, (((max(((var_7 ? var_1 : var_6)), ((max(var_1, var_4))))) == ((((min(var_0, var_4))) ? ((max(var_7, var_1))) : (~var_9)))))));
                            arr_96 [1] [i_12] [i_20] [i_29] [i_29] [i_30] [i_12] = (max(((((max(var_5, var_4))) ? (var_3 && var_6) : ((min(var_7, var_9))))), ((max((!var_8), var_7)))));
                        }
                        /* vectorizable */
                        for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                        {
                            arr_101 [i_11] &= ((var_5 ? (var_9 ^ var_6) : (var_4 > var_9)));
                            var_58 = 42481;
                            var_59 += var_6;
                        }
                    }
                    var_60 -= (min(((max((-1 * 125), (var_0 / var_3)))), (((var_8 * var_2) / (((var_4 ? var_5 : var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
