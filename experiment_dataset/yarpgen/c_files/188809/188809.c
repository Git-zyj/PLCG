/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((!((min((min(1, var_2)), var_10))))))));
                            var_14 = max((((((var_5 ? 166 : 1))) ? (var_12 + var_0) : ((var_6 ? var_4 : var_8)))), var_0);
                            var_15 = (min(var_15, ((max(((min(var_8, 166))), var_2)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_16 &= ((((!(((var_12 ? 1 : var_7))))) ? var_11 : var_12));
                    var_17 = (min(var_17, var_5));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = (!var_9);
                    var_19 -= (!var_3);
                    var_20 *= (var_1 ? 1 : var_1);
                    var_21 -= (var_0 ^ var_9);
                    var_22 = ((var_7 ? 1 : var_4));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_23 = var_6;
                            var_24 = (max((max(var_5, (var_12 % var_5))), (((((1648530998 ? 70 : 5262016080449736791)) <= ((min(0, var_6))))))));
                            arr_18 [i_0] [i_0] [18] [i_0] = ((16320 ? 9223372036854775807 : 1073725440));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-((var_9 ? ((var_10 ? var_9 : 60660)) : (~var_1)))));

    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_26 = (max(((0 ? var_8 : var_2)), 187));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_27 -= var_5;
                    var_28 = (!var_3);
                    arr_29 [i_11] [i_11] = (var_8 > 4874);
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    arr_33 [i_12] [i_9] [i_10] [i_12] [i_12] = ((var_9 ? var_8 : 11));
                    var_29 = (min(var_29, 34));

                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_37 [i_8] [i_9] [i_9] [i_9] = (!var_12);
                        var_30 = var_9;
                        var_31 = (var_4 / var_4);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_32 *= ((5262016080449736791 ? 1 : var_9));
                        arr_41 [i_14] [i_12] [i_9] [i_9] [i_14] = var_2;
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_33 = (~-var_11);
                        var_34 = (max(var_34, ((((((222 ? var_11 : var_3))) ? var_7 : var_12)))));
                    }
                }
                var_35 = (min(var_35, (((~(max(var_6, 1)))))));

                for (int i_16 = 3; i_16 < 14;i_16 += 1)
                {
                    arr_47 [i_8] [i_8] [i_8 - 1] [i_8] = var_5;

                    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        arr_50 [i_8] [i_10] [i_10] [i_16] [i_17] = ((3221241855 ? var_9 : 1020));
                        var_36 = (max(var_36, (((~(~var_0))))));
                        var_37 = (min(var_37, var_1));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        var_38 = (min(var_38, (var_7 & var_2)));
                        var_39 = -26731;
                    }
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        var_40 = (min(var_40, var_12));
                        var_41 = (min(var_41, var_6));
                    }
                    var_42 = var_12;
                    var_43 = var_11;
                    var_44 = var_3;
                }
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    var_45 = var_6;

                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        var_46 = (min(var_46, (max(((((((var_0 ? var_11 : var_5))) ? ((10 ? 63 : 32767)) : var_12))), -var_9))));
                        var_47 = (min(var_47, var_6));
                        var_48 = (max(var_6, (max(var_8, var_9))));
                    }
                    var_49 = ((187 ? 731005762 : 13184727993259814822));
                }
                /* vectorizable */
                for (int i_22 = 2; i_22 < 14;i_22 += 1)
                {
                    var_50 = var_8;
                    var_51 ^= (var_9 >= var_8);
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {

                    for (int i_24 = 1; i_24 < 14;i_24 += 1)
                    {
                        var_52 = (min(var_52, var_9));
                        var_53 = (max(var_53, ((((!var_10) ? (var_8 | 1) : var_6)))));
                        var_54 = ((126 ? var_6 : var_1));
                        arr_67 [0] [i_8] [i_8 - 1] [i_8 - 1] = ((var_9 ? 31635 : 384));
                    }
                    for (int i_25 = 2; i_25 < 13;i_25 += 1)
                    {
                        var_55 = -64832;
                        var_56 &= var_5;
                    }
                    var_57 = ((!var_5) ? var_8 : var_6);
                    arr_70 [i_8 + 1] [1] [1] = var_9;
                }
            }
            arr_71 [i_8] [i_8] [i_8] = 2251799813160960;
        }
        for (int i_26 = 0; i_26 < 15;i_26 += 1)
        {
            arr_75 [i_8] = var_1;
            arr_76 [i_8] [i_8] = var_9;
        }
        var_58 = (max(var_58, ((var_7 >> (var_0 - 23451)))));
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 14;i_27 += 1)
        {
            for (int i_28 = 1; i_28 < 13;i_28 += 1)
            {
                {
                    var_59 -= var_5;
                    arr_82 [i_8] = -var_8;
                    arr_83 [i_27] = var_11;
                }
            }
        }
    }
    for (int i_29 = 2; i_29 < 14;i_29 += 1)
    {
        var_60 = (((((var_3 ? 62 : var_12))) || ((min(65159, var_7)))));
        var_61 = (min(-var_9, ((min(var_7, var_8)))));
    }
    var_62 = var_9;
    var_63 = (max(var_63, (((-(1 & var_4))))));
    #pragma endscop
}
