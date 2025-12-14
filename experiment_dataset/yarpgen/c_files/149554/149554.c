/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_10 = (min(var_10, var_7));
                                var_11 = (max(var_11, ((((max(-1154904167, 226)) + ((51632 ? var_1 : var_8)))))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_12 = ((~((max((max(var_4, 51632)), 51632)))));
                                var_13 = 51632;
                                arr_16 [i_3] [i_1] = var_2;
                                arr_17 [i_1] = (11 << ((min(var_5, var_0))));
                            }

                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_20 [i_1] [i_2] [i_1] [i_1] = (var_6 ? ((var_4 ? (max(var_5, 0)) : var_9)) : var_9);
                                arr_21 [i_2] [7] [i_2] [i_1] [i_0] [i_6] [i_1] = var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_14 = 13904;
                            var_15 = var_3;
                            var_16 -= (!-1062420612);
                            var_17 = (((-(min(var_5, -1062420612)))));

                            for (int i_9 = 2; i_9 < 13;i_9 += 1)
                            {
                                var_18 = (max((max((1 - 0), ((max(0, var_8))))), var_1));
                                arr_31 [i_0] [i_1] [i_1] [i_8] = 13903;
                            }
                            for (int i_10 = 0; i_10 < 17;i_10 += 1)
                            {
                                var_19 = ((1760657006 ? (((~16128) ^ ((1985040603 ? 17563 : 2938704252)))) : 235));
                                var_20 = (min(var_20, (((-2940490467082703667 ? var_0 : (max(252755164, var_9)))))));
                                arr_35 [0] [i_1] = var_9;
                            }
                            for (int i_11 = 0; i_11 < 17;i_11 += 1)
                            {
                                arr_39 [i_0] [6] [i_1] [1] [i_11] = 536870911;
                                arr_40 [i_11] [i_7] |= (((((125 ? -16135 : ((var_4 ? 65535 : var_8))))) ? ((min(var_9, var_2))) : (((384 * 27) ? ((132120576 ? var_0 : var_7)) : var_1))));
                                arr_41 [i_0] [i_1] = -var_5;
                            }
                            for (int i_12 = 3; i_12 < 13;i_12 += 1)
                            {
                                var_21 *= (min(((var_2 ? var_9 : 105)), -31));
                                arr_45 [i_0] [15] [i_1] = (max(var_7, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 0;
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 14;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                arr_58 [i_13] [i_17] [i_15] [i_17] &= var_0;
                                var_23 |= (-32 + var_4);
                            }
                        }
                    }
                    var_24 = ((var_7 >> ((((-(var_9 < var_1))) + 16))));
                    var_25 = -35;
                    arr_59 [i_13] [i_13] [i_14] = ((16383 ? (!var_6) : ((~(!384)))));
                }
                arr_60 [i_14] [i_14] [4] = var_1;

                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 16;i_20 += 1)
                        {
                            {
                                arr_68 [i_13] [i_14] [i_14] [i_14] [i_18] [i_19] [i_20] = (2147483647 * var_9);
                                var_26 |= var_6;
                                arr_69 [i_13] [i_13] [9] [i_14] [i_13] [i_13] [i_13] = -16125;
                            }
                        }
                    }
                    arr_70 [i_13] [i_14] [i_14] [i_18] = (min((min(var_3, var_6)), (~var_9)));
                    var_27 |= var_1;
                    var_28 += (~var_3);
                }
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {

                    for (int i_22 = 1; i_22 < 14;i_22 += 1)
                    {
                        var_29 = ((!var_0) ^ ((min(0, (31962 >= 65527)))));

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_30 = ((var_0 | (max((~0), (-16 | var_4)))));
                            arr_79 [i_14] [i_14] = (min(((min((max(60366, 248)), var_0))), ((var_8 ? ((var_7 ? 18446744073709551615 : var_6)) : (var_4 + var_9)))));
                        }
                        for (int i_24 = 1; i_24 < 13;i_24 += 1)
                        {
                            var_31 = max(7, ((max(((var_0 ? 0 : (-2147483647 - 1))), 246))));
                            arr_82 [i_13] [i_14] [i_13] = (((((((233 ? var_4 : var_5)) + var_6))) ? 0 : -163737313));
                        }
                        /* vectorizable */
                        for (int i_25 = 2; i_25 < 13;i_25 += 1)
                        {
                            var_32 = var_1;
                            arr_85 [10] [i_14] [12] [i_22] [i_14] [1] [i_25] = 7;
                            arr_86 [i_13] [i_13] [i_13] [i_14] [i_13] [1] = ((~(1 * var_3)));
                        }
                        var_33 *= (((~(max(2724061545, var_3)))) >> (-1650452695 + 1650452722));
                    }
                    var_34 = (min(var_34, (2724061545 & -32)));
                    var_35 = ((4294967295 >> (-1231383350 + 1231383379)));
                }
                for (int i_26 = 0; i_26 < 16;i_26 += 1)
                {
                    arr_89 [i_14] = var_8;

                    for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
                    {
                        var_36 = min((max(1, var_8)), 0);
                        arr_92 [i_13] [i_13] [i_13] [i_14] = (51052 ^ 0);
                        arr_93 [i_14] = var_7;
                    }
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
                    {
                        arr_98 [i_14] [i_28] [i_26] [i_14] [i_14] = (((14494 ? 1 : 31247)));

                        for (int i_29 = 0; i_29 < 16;i_29 += 1)
                        {
                            var_37 = ((0 ? 32767 : 0));
                            arr_101 [i_13] [i_14] [i_26] [10] [i_29] [i_29] |= var_6;
                        }
                        for (int i_30 = 0; i_30 < 1;i_30 += 1)
                        {
                            var_38 += (!var_9);
                            var_39 -= (1 & -1920738777);
                        }
                        for (int i_31 = 0; i_31 < 16;i_31 += 1)
                        {
                            arr_108 [i_31] [i_14] [11] [i_14] [i_14] [i_13] = ((-1649021909 ^ var_0) / 2147483647);
                            arr_109 [i_13] [i_13] [1] [i_13] [i_13] [i_13] [i_14] = (255 / 12610888012799425330);
                            var_40 ^= var_4;
                        }
                    }
                }
                for (int i_32 = 2; i_32 < 15;i_32 += 1)
                {

                    for (int i_33 = 0; i_33 < 16;i_33 += 1)
                    {
                        var_41 = (min((!var_4), (!9223372036854775807)));
                        var_42 = var_3;
                    }
                    for (int i_34 = 0; i_34 < 16;i_34 += 1) /* same iter space */
                    {

                        for (int i_35 = 0; i_35 < 16;i_35 += 1)
                        {
                            arr_119 [i_14] [5] [i_32] [i_32] = var_1;
                            arr_120 [i_35] [i_14] [i_32] [i_14] [4] = (max((((~(max(var_1, var_7))))), 2147766282));
                        }
                        arr_121 [i_13] [i_14] [i_14] [i_34] = var_1;
                    }
                    for (int i_36 = 0; i_36 < 16;i_36 += 1) /* same iter space */
                    {
                        var_43 *= (min(var_3, ((70368744175616 << ((((max(var_4, var_1))) - 33499))))));
                        var_44 &= ((((var_9 ? -1 : var_3))) ? (min(var_4, 467724686)) : ((var_0 ? 36261 : 1)));
                    }
                    var_45 *= ((!((((3102070070871962091 > 10625444486741006772) ? ((var_0 ? var_0 : var_6)) : (~var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
