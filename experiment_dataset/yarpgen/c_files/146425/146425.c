/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_11 * (~var_15)))) ? (((var_12 == var_4) ? (var_18 + var_9) : var_9)) : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (var_7 & var_3)));
                                arr_10 [i_0] [1] [i_2] [8] [2] [i_0] = var_13;
                            }
                        }
                    }
                    arr_11 [i_0] [9] [4] = var_9;
                }
            }
        }
        var_21 -= (((var_18 | var_13) ^ var_7));
        var_22 = (!var_0);

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_23 = ((var_11 ? var_18 : var_4));
            arr_15 [i_0] [i_5] [i_0] = ((((var_10 ? var_7 : var_1)) + var_6));
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_24 = var_7;
            arr_21 [i_6] = (((var_11 ? var_1 : var_16)));
            var_25 = (min(var_25, (((((var_6 ? var_2 : var_3)) == var_16)))));
            var_26 += var_15;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 6;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_27 = (min(var_27, var_8));
                            arr_30 [i_6] [i_7] [2] [i_10] [i_10] &= var_13;
                            arr_31 [i_6] [i_6] [i_8] = var_18;
                            var_28 = (max(var_28, (!var_2)));
                        }
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            var_29 = ((((min((~var_14), (var_3 & var_3)))) ? (~var_7) : var_12));

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    var_30 *= (((((~(~var_15)))) ? ((~(~var_15))) : (~var_18)));
                    arr_39 [i_13] [i_6] [i_6] [i_6] = var_14;
                    arr_40 [i_6] [i_13] [i_13] [i_13] = (min(var_0, var_8));
                }
                var_31 &= var_14;

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] = 120;
                    var_32 -= var_18;
                    var_33 |= (min(var_16, (((max(var_16, var_7)) - (var_0 + var_7)))));

                    for (int i_15 = 3; i_15 < 9;i_15 += 1)
                    {
                        arr_46 [i_6] = ((61 * (((~var_17) ? var_9 : var_10))));
                        var_34 |= (!var_17);
                        var_35 = var_11;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_36 = (~var_15);
                        var_37 = var_12;
                        var_38 = ((var_9 ? var_14 : var_16));
                    }
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        var_39 = (min(var_39, var_15));
                        var_40 = ((max(var_4, var_3)));
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_41 = (((var_10 >> (((var_6 ^ var_2) + 20944)))));
                        arr_54 [i_6] [i_11 - 2] = ((((max(var_17, (var_17 < var_15)))) ? (min(var_10, (min(var_0, var_17)))) : var_13));
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        {
                            var_42 = (max((((var_5 ? var_6 : var_4))), (((max(var_2, var_10))))));
                            var_43 = (((min((min(var_8, var_2)), var_6))) - var_9);
                        }
                    }
                }
            }
            arr_60 [i_11 - 1] [i_11] |= var_7;
        }
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {

            for (int i_22 = 1; i_22 < 8;i_22 += 1)
            {

                for (int i_23 = 1; i_23 < 9;i_23 += 1)
                {
                    var_44 = ((((max(var_13, var_17))) ? (var_13 ^ var_0) : (~var_17)));

                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        arr_72 [i_6] [i_6] [i_22] [i_6] [0] [i_6] [i_21] = var_3;
                        var_45 = var_14;
                        arr_73 [i_24] [i_6] [i_6] [i_21] [i_6] [i_6] [i_6] = (min((var_5 ^ var_17), ((-var_14 ? (~var_18) : (max(var_3, var_11))))));
                    }
                    for (int i_25 = 2; i_25 < 8;i_25 += 1)
                    {
                        arr_76 [i_6] [i_21] [i_22] [i_6] [i_25 + 2] = (var_6 ^ var_8);
                        arr_77 [8] |= 0;
                    }
                    for (int i_26 = 0; i_26 < 0;i_26 += 1)
                    {
                        var_46 = var_11;
                        arr_81 [0] [i_6] = var_0;
                        arr_82 [i_6] = var_1;
                        var_47 = (~var_17);
                    }
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        var_48 = ((((!(!var_8))) ? (min(var_1, var_14)) : (!var_4)));
                        var_49 = ((((min(var_6, ((var_6 ? var_18 : var_18))))) ? (var_7 * var_3) : (min((~var_11), (~var_5)))));
                        var_50 = var_6;
                    }
                }
                for (int i_28 = 3; i_28 < 9;i_28 += 1)
                {
                    arr_89 [i_6] = var_7;
                    var_51 += ((((min(var_17, var_18)))));
                    var_52 = var_0;

                    for (int i_29 = 0; i_29 < 10;i_29 += 1) /* same iter space */
                    {
                        var_53 += (((min(((min(var_15, var_13))), var_1)) << ((((min(var_5, var_4))) - 156))));
                        arr_94 [i_6] [4] [i_22 + 2] [i_6] [i_29] = ((((var_17 << (var_15 - 49161)))));
                        var_54 = var_10;
                        arr_95 [i_6] [i_21] [i_22 + 2] [i_21] [i_29] = (((((var_9 ? var_0 : var_11)))) ? ((~(~var_3))) : ((var_7 ? var_1 : (((var_8 ? var_13 : var_15))))));
                    }
                    for (int i_30 = 0; i_30 < 10;i_30 += 1) /* same iter space */
                    {
                        arr_99 [i_6] [i_21] [i_6] = ((!(((var_18 ? var_9 : var_11)))));
                        arr_100 [i_6] [i_21] [i_22] [i_6] [i_6] = (!var_12);
                    }
                }
                var_55 = (max(var_55, ((((-(max(var_3, var_11))))))));
                /* LoopNest 2 */
                for (int i_31 = 1; i_31 < 8;i_31 += 1)
                {
                    for (int i_32 = 2; i_32 < 8;i_32 += 1)
                    {
                        {
                            var_56 -= -var_2;
                            arr_105 [9] [i_21] [i_22] [i_6] [9] [i_32] = (max(var_4, var_6));
                            var_57 -= ((((((var_7 ? var_13 : var_10)))) + var_0));
                        }
                    }
                }
            }
            for (int i_33 = 0; i_33 < 10;i_33 += 1)
            {
                var_58 = var_5;
                var_59 -= ((min(var_8, var_6)));
                arr_108 [i_21] [i_6] [8] = var_5;
                arr_109 [i_6] [i_6] [8] [i_33] = ((var_1 ? var_2 : (!var_14)));
            }
            /* LoopNest 2 */
            for (int i_34 = 1; i_34 < 8;i_34 += 1)
            {
                for (int i_35 = 1; i_35 < 7;i_35 += 1)
                {
                    {
                        arr_115 [1] [i_34] [i_6] = ((~(~var_14)));

                        for (int i_36 = 2; i_36 < 9;i_36 += 1)
                        {
                            var_60 = (min(var_60, (((var_2 | ((~((max(var_2, var_10))))))))));
                            var_61 = (min(var_61, (((((var_3 ? var_0 : (~var_5))) ^ var_5)))));
                            var_62 = (max(var_62, ((((var_7 <= var_1) < (((var_11 ? var_7 : var_9))))))));
                        }
                        for (int i_37 = 0; i_37 < 1;i_37 += 1)
                        {
                            var_63 = ((((var_4 ? (min(var_9, var_5)) : var_9)) - var_16));
                            arr_121 [7] [1] [i_6] [7] = var_9;
                            var_64 = (((~var_6) > (!var_3)));
                        }
                        /* vectorizable */
                        for (int i_38 = 1; i_38 < 8;i_38 += 1)
                        {
                            arr_125 [9] [i_21] [i_21] [i_6] [i_21] = (((1114976336316725484 / 247) ? var_1 : var_7));
                            var_65 = ((var_17 ? var_14 : var_6));
                        }
                        for (int i_39 = 0; i_39 < 10;i_39 += 1)
                        {
                            var_66 = ((min(var_7, var_6)));
                            arr_128 [8] [i_21] [i_6] [i_21] = ((((max((!var_7), (var_3 == var_14)))) % var_13));
                            arr_129 [i_6] [i_6] [0] [i_35 + 3] [i_21] = var_18;
                            var_67 = (~var_2);
                        }
                        arr_130 [i_6] [i_6] [i_6] = var_14;
                        arr_131 [i_6] [3] [i_6] [i_35] = var_13;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_40 = 0; i_40 < 10;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 10;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 10;i_42 += 1)
                    {
                        {
                            arr_141 [i_6] = (((~(var_12 | var_18))));
                            arr_142 [i_6] [i_41] [i_40] [i_21] [i_6] = (((min(var_2, var_15))));
                        }
                    }
                }
            }
            var_68 = ((((-var_12 ? (~var_3) : var_16)) <= var_1));
        }
        for (int i_43 = 0; i_43 < 10;i_43 += 1)
        {
            /* LoopNest 2 */
            for (int i_44 = 4; i_44 < 7;i_44 += 1)
            {
                for (int i_45 = 0; i_45 < 10;i_45 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_46 = 0; i_46 < 10;i_46 += 1) /* same iter space */
                        {
                            arr_154 [i_6] [i_6] [i_6] [i_6] = var_14;
                            var_69 = (var_12 >= var_10);
                        }
                        for (int i_47 = 0; i_47 < 10;i_47 += 1) /* same iter space */
                        {
                            var_70 += var_16;
                            arr_158 [i_6] [i_6] [i_43] [i_44] [i_44 - 4] [i_45] [i_6] = ((~(~4)));
                            var_71 *= (min(123, 0));
                            arr_159 [i_6] [i_43] [i_6] [i_45] [i_47] = ((var_16 / (min(var_0, var_1))));
                            var_72 = (min(var_72, (((var_4 ? var_9 : (!var_17))))));
                        }
                        /* vectorizable */
                        for (int i_48 = 2; i_48 < 8;i_48 += 1)
                        {
                            var_73 = var_9;
                            arr_163 [i_6] = ((var_3 ? var_4 : var_7));
                            var_74 = var_13;
                            var_75 ^= (!-var_15);
                        }
                        var_76 = var_17;
                    }
                }
            }
            arr_164 [i_6] [i_6] = (((max(var_7, var_15))));
            var_77 = var_8;
        }
        arr_165 [i_6] = var_15;
        var_78 |= -var_3;
        var_79 = var_5;
    }
    #pragma endscop
}
