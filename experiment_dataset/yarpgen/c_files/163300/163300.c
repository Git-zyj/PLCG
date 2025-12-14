/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((((var_8 ^ var_0) < (((max(var_4, 62485)))))) ? (max(-var_10, (~var_1))) : (((~(!var_8))))));
    var_12 ^= var_0;
    var_13 = (max(((+(((var_4 + 2147483647) << var_0)))), ((-(var_5 >= var_9)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((((var_0 ? var_2 : var_2))) ? (var_6 < var_5) : -var_0));
            var_14 = ((var_4 ? var_5 : var_5));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((((var_0 ? var_4 : var_8)) * (var_5 == var_6)));
                            var_15 = (((var_0 % var_10) <= var_5));
                        }
                    }
                }
                var_16 = -var_9;
            }
        }
        var_17 = (max(var_17, var_1));
        var_18 ^= (((~((var_0 ? var_5 : var_0)))) / ((var_9 ? (var_1 % var_5) : var_4)));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_19 = -var_3;

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_22 [i_5] = (min(((var_8 ? ((min(var_0, var_6))) : ((var_6 ? var_8 : var_2)))), ((min(var_1, var_10)))));
            var_20 = var_8;
        }
        arr_23 [i_5] = (((-var_5 & var_5) & var_5));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_27 [i_7] = (((max((max(var_9, var_1)), var_0))) ? ((var_0 ? var_0 : var_1)) : ((((((var_0 ? var_6 : var_1))) || ((max(var_1, var_0)))))));

        /* vectorizable */
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            arr_38 [i_7] [i_8] [i_9] [i_9] [i_7] [i_11] = ((var_9 ? var_3 : (var_7 > var_4)));
                            arr_39 [i_7] [i_7] [i_9] [i_9] [i_10] [i_11] = (var_4 % var_9);
                            var_21 = (min(var_21, (((var_1 ? var_0 : var_3)))));
                        }
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            arr_43 [i_7] [i_7] [i_9] [i_10] [1] = var_5;
                            arr_44 [i_7] [i_8] [i_9] [i_7] [i_12 + 1] = ((var_3 ? var_6 : var_6));
                        }
                        var_22 = (var_9 - var_5);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        arr_50 [i_7] [i_7] = (~var_10);
                        var_23 = ((((var_9 ? var_8 : var_8)) ^ (var_6 % var_8)));
                    }
                }
            }

            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_59 [i_17] [i_8] [i_8] [i_7] = ((-(var_7 | var_9)));
                            var_24 = var_2;
                            var_25 = (var_0 | var_2);
                        }
                    }
                }
                var_26 = ((62477 || (((var_10 ? var_5 : var_2)))));
            }
            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {
                            var_27 = var_10;
                            var_28 = (((((var_7 ? var_4 : var_5))) ? var_0 : (var_10 % var_8)));
                        }
                    }
                }
                var_29 = ((~((var_4 ? var_3 : var_10))));

                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
                    {
                        var_30 = (31996 ^ 62485);
                        var_31 = (max(var_31, var_5));
                        var_32 -= (~var_2);
                        var_33 = var_8;
                    }
                    for (int i_23 = 0; i_23 < 22;i_23 += 1) /* same iter space */
                    {
                        arr_75 [i_7] [i_8] = (((var_4 - var_0) % (var_5 && var_2)));
                        var_34 = (min(var_34, ((((((var_0 ? var_9 : var_8))) ? var_9 : -var_1)))));
                    }
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        var_35 -= (var_4 & var_4);
                        arr_78 [i_7] [i_21] [i_7] [5] [i_8] [i_7] = (13981 + 0);
                        var_36 = (max(var_36, (var_3 != var_4)));
                        var_37 = (((!var_1) | var_6));
                        var_38 = (max(var_38, ((((var_1 + 2147483647) << (!var_4))))));
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        arr_82 [15] [i_7] = -var_10;
                        arr_83 [i_7] [20] [i_8 + 2] [i_18] [i_7] [i_25] = var_10;
                    }
                    arr_84 [i_21] [i_7] [i_7] [3] = ((var_8 ? (var_8 / var_5) : (var_4 < var_4)));
                    var_39 = (max(var_39, (8 * 3453446131)));
                    var_40 = (((((var_10 ? var_6 : var_9))) ? (var_2 ^ var_9) : var_8));
                }
            }
            var_41 = var_6;
        }
        for (int i_26 = 0; i_26 < 22;i_26 += 1)
        {

            for (int i_27 = 0; i_27 < 22;i_27 += 1)
            {
                arr_89 [i_7] [i_7] [i_7] [i_7] = ((var_4 & (max(((max(var_7, var_3))), (min(var_4, var_1))))));

                for (int i_28 = 0; i_28 < 22;i_28 += 1)
                {
                    var_42 = ((!((min(var_6, (max(var_9, var_8)))))));
                    var_43 = var_6;

                    for (int i_29 = 0; i_29 < 0;i_29 += 1) /* same iter space */
                    {
                        arr_96 [i_7] [i_7] [i_27] [i_27] [8] = (max((min(var_5, var_2)), ((min(65535, 1)))));
                        var_44 = (max(var_44, (-7433583552399539154 <= -18835)));
                        arr_97 [i_7] [i_7] [i_7] [i_7] [i_7] = (((((-24 < ((8 ? -6891275353744141281 : 1))))) / ((((var_4 / var_8) < (var_5 - var_7))))));
                    }
                    for (int i_30 = 0; i_30 < 0;i_30 += 1) /* same iter space */
                    {
                        arr_101 [i_30] [i_7] [i_27] [i_7] [i_7] = (min(((var_2 ? var_8 : var_0)), (var_6 | var_2)));
                        arr_102 [1] [i_26] [i_7] = ((!((min((var_0 % var_3), ((var_10 ? var_10 : var_1)))))));
                        var_45 = (min(((min((min(var_2, var_7)), var_7))), (min((max(var_8, var_9)), var_9))));
                        arr_103 [i_7] [i_7] [i_27] [i_27] [16] [i_28] [i_30 + 1] = var_6;
                    }
                }
                /* vectorizable */
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    arr_106 [i_7] [i_7] [i_7] [i_31] = (((var_6 < var_3) ? var_4 : (var_2 == var_10)));

                    for (int i_32 = 1; i_32 < 19;i_32 += 1)
                    {
                        var_46 = (max(var_46, (~17409)));
                        var_47 = var_2;
                        arr_109 [i_31] [i_31] [i_7] [i_31] [i_31] = (((var_8 < var_4) - var_4));
                        arr_110 [i_7] [i_26] [i_7] [i_31] [i_32] = ((var_1 ? var_9 : var_3));
                    }
                    for (int i_33 = 4; i_33 < 21;i_33 += 1)
                    {
                        arr_115 [i_7] [i_27] [i_27] [i_27] = (var_8 > var_0);
                        arr_116 [i_7] = (var_0 & var_4);
                        arr_117 [i_7] [i_7] [i_26] [i_27] [i_27] [i_7] [i_33] = var_6;
                        var_48 ^= ((var_6 ? var_9 : var_2));
                    }
                    var_49 = (max(var_49, (((var_9 << (var_2 - 461634476))))));
                    var_50 = (~62);
                    arr_118 [i_7] [i_27] = (~var_2);
                }
            }
            for (int i_34 = 2; i_34 < 18;i_34 += 1) /* same iter space */
            {
                arr_121 [i_26] |= (((~var_5) | (max(var_9, var_8))));
                arr_122 [i_7] = var_0;
                var_51 &= (~var_6);
                var_52 &= ((!(((var_0 ? var_7 : var_6)))));
                var_53 = ((((min((~var_1), ((max(var_4, var_9)))))) ? (max(var_1, var_1)) : (var_1 + var_3)));
            }
            /* vectorizable */
            for (int i_35 = 2; i_35 < 18;i_35 += 1) /* same iter space */
            {

                for (int i_36 = 0; i_36 < 22;i_36 += 1)
                {
                    arr_129 [i_7] [17] [i_7] [i_7] = var_2;
                    var_54 = (var_0 == var_2);
                    arr_130 [i_7] [i_26] [i_26] [i_36] [i_7] [i_36] = (((var_9 || var_10) ? var_0 : ((var_0 ? var_3 : var_3))));
                }
                for (int i_37 = 0; i_37 < 22;i_37 += 1) /* same iter space */
                {
                    arr_133 [i_7] [i_26] [i_35] [i_7] [i_35] [i_37] = (var_5 % var_8);

                    for (int i_38 = 0; i_38 < 22;i_38 += 1)
                    {
                        arr_136 [i_7] = ((var_2 ? var_10 : var_0));
                        var_55 = (max(var_55, var_0));
                    }
                    for (int i_39 = 0; i_39 < 22;i_39 += 1)
                    {
                        arr_140 [i_7] [i_7] [i_35] [i_37] [i_39] = (((var_7 - var_10) ? var_1 : (var_4 < var_3)));
                        arr_141 [i_39] [1] [i_37] [i_26] [i_26] [18] [12] &= (var_7 + var_4);
                    }
                    for (int i_40 = 0; i_40 < 22;i_40 += 1)
                    {
                        var_56 -= (((var_3 | var_9) ? var_1 : var_6));
                        var_57 -= ((var_6 ? var_10 : var_6));
                    }
                    var_58 = (max(var_58, var_10));
                }
                for (int i_41 = 0; i_41 < 22;i_41 += 1) /* same iter space */
                {

                    for (int i_42 = 0; i_42 < 22;i_42 += 1)
                    {
                        var_59 = ((!(((var_1 ? var_9 : var_6)))));
                        var_60 = -var_10;
                    }
                    var_61 *= (((var_8 ? var_6 : var_7)));
                    arr_149 [i_7] [i_35] [i_26] [i_7] = (((var_2 * var_0) & var_5));
                }
                var_62 = -var_10;
            }
            arr_150 [i_7] [i_7] [i_26] = (!var_1);
            var_63 = (min(((var_7 ? var_8 : var_8)), ((max(var_3, var_0)))));
        }
        arr_151 [i_7] [i_7] = (min(((var_0 ? var_6 : var_9)), (var_2 % var_2)));
    }
    for (int i_43 = 0; i_43 < 1;i_43 += 1)
    {
        /* LoopNest 3 */
        for (int i_44 = 3; i_44 < 17;i_44 += 1)
        {
            for (int i_45 = 1; i_45 < 1;i_45 += 1)
            {
                for (int i_46 = 0; i_46 < 20;i_46 += 1)
                {
                    {
                        arr_161 [i_45] [i_45] [i_43] [i_45] = var_6;
                        var_64 = var_2;
                    }
                }
            }
        }
        arr_162 [i_43] = ((((((((max(var_4, var_3))) < ((max(var_0, var_9))))))) | (((var_10 / var_1) ? var_7 : ((var_3 ? var_0 : var_6))))));
        var_65 = (min(var_65, ((((var_5 ^ var_7) >= (((max(var_3, var_3)))))))));
        var_66 = (((((((((var_1 + 2147483647) << (var_5 - 17207986747557241679)))) % var_2))) ? (var_5 + var_6) : (((max(var_0, var_7))))));
    }
    #pragma endscop
}
