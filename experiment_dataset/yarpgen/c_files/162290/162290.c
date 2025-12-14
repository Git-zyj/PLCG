/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = ((var_1 % (~var_11)));
        var_13 *= var_3;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [9] [i_1] [i_0] [i_2] = (~(~4352));
                    arr_7 [i_0] [i_0] [i_1] = ((var_3 ? var_10 : (var_7 + var_9)));
                    var_14 = (1801971031 * 1);
                    var_15 = var_5;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_16 += ((var_2 ? (!var_11) : (var_7 % var_5)));
                            var_17 = ((-(var_0 % var_6)));
                            var_18 ^= (((512 ? var_6 : 4294966804)));
                            arr_21 [i_3] [8] [i_5] [i_6] [6] = (((((!(var_8 * var_4)))) >> (((((var_7 ? var_1 : var_4))) - 1041839392))));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_25 [i_3] [i_3] [15] [i_5] [i_6] [4] [i_8] &= (min(((var_3 >> (var_4 - 788777169))), var_4));
                            arr_26 [i_3] [i_4] [i_6] [i_8] = var_8;
                            var_19 = (max(((((min(var_5, var_10))) / var_6)), (((!(var_4 * var_6))))));
                            var_20 = ((-var_1 ? (max(1, 512)) : -var_9));
                        }
                        arr_27 [i_4] [i_5] [i_4] [i_3] = ((((var_1 & var_7) >> (var_2 - 17859001109650258270))));
                        var_21 += ((~(((min(var_0, var_9)) * (!var_3)))));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_22 &= ((var_2 != ((((!((min(var_5, var_7)))))))));
                        var_23 = (((~var_2) * ((var_0 % (var_7 != var_1)))));
                        arr_30 [i_9] [i_9] [i_3] [1] [1] [i_3] = ((((max(var_0, ((var_4 << (var_11 - 171)))))) ? (((((var_7 << (var_4 - 788777220))) >> ((((min(var_11, var_11))) - 179))))) : (min((var_9 + var_8), (var_0 * var_2)))));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_11] = (!var_2);
                            arr_37 [i_4] [i_4] [i_11] = var_9;
                        }
                        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_24 = (var_3 | var_1);
                            var_25 = var_10;
                        }
                        var_26 = (min(var_3, var_6));
                        var_27 = (max(var_27, var_0));

                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            arr_43 [9] [i_4] [i_5] [i_10] &= (((min(((var_4 << (var_3 - 10031337520375719946))), (!var_0)))) ? (min(var_11, (min(var_10, var_4)))) : var_6);
                            var_28 = (~var_8);
                            var_29 = ((!((((var_2 ? var_3 : var_11))))));
                            var_30 = (((min(4294966778, 1)) + var_8));
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            var_31 = (min(var_7, var_2));
                            var_32 = ((var_6 || (((max(var_6, var_9))))));
                        }
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            var_33 += ((var_0 * (((var_4 - var_5) - (min(var_8, var_2))))));
                            arr_48 [i_3] [15] [i_4] [1] [i_5] [i_15] [i_15 + 1] = (min(var_6, ((var_7 ? var_7 : var_6))));
                        }
                    }
                    var_34 = (((((1 >> 1) ? (~-1066856261) : 1)) + ((-(var_1 >= var_0)))));

                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        var_35 = (!(var_3 || var_4));
                        var_36 = (!var_4);

                        for (int i_17 = 3; i_17 < 16;i_17 += 1)
                        {
                            arr_57 [i_16] [i_5] [i_17] [i_5] [i_17 - 2] = (((((!(((var_2 ? var_9 : var_5)))))) >> (var_1 - 1041839376)));
                            var_37 = (var_9 >= ((-(var_10 % var_9))));
                            var_38 = (!var_5);
                        }

                        for (int i_18 = 3; i_18 < 16;i_18 += 1)
                        {
                            arr_62 [i_3] [i_4] [1] [i_16] = (((var_2 ? (var_3 || var_6) : var_6)));
                            var_39 += (min(var_2, (var_8 / var_3)));
                            var_40 = (((min((var_1 & var_1), (min(var_4, var_4)))) >> (var_6 - 10960)));
                            arr_63 [i_3] [2] [6] [i_5] [i_18] &= (((var_4 << (((var_7 ^ var_4) - 3098289560)))) + var_3);
                            var_41 = ((var_1 + ((((var_8 + 2147483647) << (var_8 - 2607880888))))));
                        }
                        var_42 = (((((var_7 ? -var_0 : (((var_9 >> (var_3 - 10031337520375719964))))))) ? (max(var_7, var_4)) : var_0));
                    }
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        var_43 += var_7;
                        var_44 += (!554425258635215866);
                        arr_67 [16] [15] [i_5] = ((min(var_10, var_5)));
                        arr_68 [i_5] [i_4] = (~var_7);
                    }
                }
            }
        }
        var_45 += (max(((var_11 ? 13 : var_10)), (min(var_5, var_0))));
        var_46 += (max((~2147483647), ((((var_0 ? var_3 : var_3)) * (((var_3 ? var_4 : var_11)))))));
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 10;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {
            {

                for (int i_22 = 3; i_22 < 8;i_22 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            {
                                var_47 = (min(((((min(var_2, var_8))) ? var_10 : (~var_6))), (((max(var_1, var_1))))));
                                var_48 = ((min(var_9, var_0)));
                            }
                        }
                    }
                    arr_86 [i_20] [i_21] [5] = (min(-var_9, (((var_4 - var_6) ? (var_8 - var_3) : ((min(var_10, var_0)))))));
                }
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 7;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 10;i_26 += 1)
                    {
                        {
                            var_49 &= ((var_9 ? var_5 : ((var_0 ? var_3 : var_3))));

                            for (int i_27 = 1; i_27 < 8;i_27 += 1)
                            {
                                arr_93 [i_27] [i_27] = var_4;
                                var_50 += (((((var_5 != var_6) ? (var_7 & var_0) : -var_5)) >> ((-(!var_1)))));
                            }
                        }
                    }
                }
                var_51 = ((var_8 % (min(((var_10 ? 10559070590473446145 : 19950)), 1352563576))));
            }
        }
    }
    #pragma endscop
}
