/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((1640469415 ? -6983083778107727120 : 49796)), ((((((arr_1 [i_0]) | var_5))) ? (min(-4365885958498492953, 0)) : (~-95)))));
                arr_7 [i_0] [i_0] [i_1] &= ((-1640469415 ? 117 : 2147483647));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_14 = (((~32760) < var_5));
                        var_15 = ((~((min(1, var_4)))));
                    }
                    var_16 |= (((!(arr_2 [i_2] [i_3]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_17 = (min(-663956488, 42));
                                arr_30 [i_6] [i_9] [i_9] [i_6] [i_6] [i_6] = ((1 ? -93 : 290815831));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_18 += var_6;
                            var_19 = (min(1640469427, (min(-47, ((31 ? 18446744073709551615 : 63))))));
                        }
                    }
                }
                var_20 = (((((-77 ? 47 : 32760))) ? -1 : (arr_22 [i_6] [i_6] [i_6] [i_6])));

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_21 += (((((0 <= (arr_29 [6] [i_15] [i_14 + 1] [i_14 + 1] [i_14 + 1])))) <= (!-2147483647)));
                                var_22 = 2147483647;
                            }
                        }
                    }
                    var_23 = (arr_16 [i_6]);
                }
                for (int i_16 = 1; i_16 < 11;i_16 += 1) /* same iter space */
                {
                    arr_46 [8] [8] [0] [i_6] &= (min(((((1640469415 << (((var_4 + 28408) - 25)))))), -2896549715257748416));
                    var_24 = -31139;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            {
                                var_25 = var_7;
                                arr_52 [i_6] [i_7] [i_6] [i_6] [i_18] = (((arr_2 [i_6] [i_17]) ? ((max(-47, var_4))) : ((((3707525312435911572 ? -93 : -2024517601)) - (((!(arr_17 [i_6] [i_6]))))))));
                            }
                        }
                    }
                }
                for (int i_19 = 1; i_19 < 11;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_26 = ((-52 ? 10399464504818401678 : (((arr_32 [i_19 - 1] [i_19 + 1] [i_19 + 1]) ? -7 : var_6))));
                        var_27 = (min(var_27, (((!((((max(var_9, 912862350599719629))) && ((((arr_57 [i_6] [i_6] [8] [i_6] [i_6] [4]) ? 0 : -3))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 13;i_22 += 1)
                        {
                            {
                                var_28 = (arr_56 [i_19] [i_19 + 2] [i_19] [i_19 - 1]);
                                var_29 = (max(var_29, ((((var_6 / var_10) ? ((3943376207675336357 / (arr_61 [i_6] [1] [1] [i_6]))) : ((min(var_5, 1640469396))))))));
                            }
                        }
                    }
                    arr_66 [i_6] [3] [i_7] [i_6] = (((((var_7 ? var_9 : var_8))) ? (-47 + -107) : (max(42542130, (arr_65 [i_19 - 1] [i_6] [i_19 - 1] [i_6] [i_19 + 1])))));
                }
                for (int i_23 = 1; i_23 < 11;i_23 += 1) /* same iter space */
                {
                    arr_69 [i_6] = (min(var_8, ((((arr_65 [i_7] [i_6] [i_6] [i_6] [i_23]) != var_2)))));
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 10;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 13;i_25 += 1)
                        {
                            {
                                var_30 = (min(122, ((((max(1687, var_5))) / -125))));
                                arr_76 [5] [i_6] [i_23] [i_6] [i_6] [i_6] = (((((-125 / 16975772054124134076) ? var_4 : var_13)) * ((max((var_10 / 1782), (var_4 / var_0))))));
                            }
                        }
                    }
                    var_31 = (((!125) ? ((-36 ? ((min((arr_16 [i_6]), var_13))) : (min((arr_67 [i_23] [i_6] [i_6]), var_12)))) : var_7));
                }
            }
        }
    }
    var_32 *= var_11;
    /* LoopNest 3 */
    for (int i_26 = 0; i_26 < 21;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 21;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 21;i_28 += 1)
            {
                {
                    arr_85 [i_26] [18] [i_28] [i_27] = (1686 | 95);
                    var_33 = ((var_10 ? ((215 ? 0 : 1)) : ((((min(var_8, var_9))) ? var_8 : ((min(-27, 24116)))))));
                }
            }
        }
    }
    #pragma endscop
}
