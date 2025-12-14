/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_21 = var_5;
            var_22 = ((-var_9 ? var_1 : (!var_16)));
            arr_6 [i_1] = var_12;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = -1;

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_14 [2] [i_2] [i_0] = var_18;
                var_23 ^= (~var_16);
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_24 = (!-var_14);
                    arr_22 [i_0] [13] [i_0] [i_4] [i_4] = ((var_9 ? var_18 : var_14));
                    var_25 = (max(var_25, (((-var_14 ? var_15 : ((var_8 ? var_17 : var_19)))))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_25 [i_2] [i_6] [i_2] = (~var_1);
                    var_26 -= (!var_12);
                }
                var_27 = (max(var_27, var_15));
                var_28 = var_13;
            }
            var_29 = (((var_7 ? var_7 : var_8)));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [i_2] [i_7] [4] [i_9] = (var_16 ? ((var_10 ? var_15 : var_9)) : var_11);
                            arr_33 [1] [2] [i_7] [i_8] [i_9 - 1] [3] [i_9] = (((((var_9 ? var_8 : var_16))) ? var_16 : ((var_5 ? var_3 : var_1))));
                        }
                    }
                }
            }
            arr_34 [i_0] [4] [i_2] = var_17;
        }
        var_30 = (var_18 ? (min(var_15, ((min(var_18, var_4))))) : (((var_16 ? ((var_3 ? var_7 : var_4)) : var_18))));
        arr_35 [i_0] = var_10;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_31 = var_1;
        arr_40 [i_10] = ((10232705784044446313 ? 241656908 : 0));
        arr_41 [9] [i_10] = var_0;
        var_32 -= var_0;
    }
    var_33 -= var_3;
    var_34 = (!var_5);

    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_35 = (((var_11 ? var_4 : ((var_16 ? var_11 : var_12)))));
        arr_44 [i_11] = var_0;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_36 = (min(var_36, var_6));
        var_37 ^= ((((var_6 ? var_2 : var_5))) ? -1909377331 : var_6);
        arr_47 [i_12] = var_17;
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                arr_57 [i_13] [i_13] [0] |= ((var_10 ? var_15 : var_18));
                var_38 = var_1;
            }

            /* vectorizable */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                arr_60 [i_13] [i_14] [i_16] = ((var_7 ? var_7 : var_19));
                var_39 = var_5;
                var_40 |= var_7;
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                var_41 = (min(var_41, 990159245));
                var_42 = (((-(!var_14))));
                var_43 ^= ((var_8 ? (!var_7) : var_13));
                var_44 -= ((((min(var_11, var_17))) ? var_3 : var_16));
            }
            var_45 = ((var_19 ? var_2 : var_15));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            var_46 ^= var_4;
            var_47 -= ((var_1 ? var_3 : var_7));
            arr_65 [i_13] [i_18] = (var_5 ? ((var_16 ? var_17 : var_8)) : var_18);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            var_48 ^= var_10;
            var_49 -= var_5;
        }

        /* vectorizable */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_50 -= var_1;
                    arr_78 [i_22] = (((((var_3 ? var_14 : var_5))) ? var_18 : ((var_10 ? var_5 : var_13))));
                    var_51 -= var_14;
                }
                for (int i_23 = 0; i_23 < 25;i_23 += 1)
                {
                    var_52 = ((-654686523 ? -13 : 18446744073709551615));
                    var_53 |= ((0 ? 9 : -4348132065337456526));
                }
                var_54 = (((((2339618355378586723 ? 5770568353154245950 : 9223372036854775807))) ? ((var_15 ? var_13 : var_6)) : var_15));
                arr_82 [i_13] [i_20] [i_21] = ((((var_5 ? var_3 : var_5))) ? var_9 : ((var_0 ? var_0 : var_17)));

                for (int i_24 = 0; i_24 < 25;i_24 += 1) /* same iter space */
                {

                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        var_55 &= (((439187918 ? 12288 : 13875502073723625837)));
                        arr_87 [i_13] [20] [i_21] [i_24] [i_20] = var_6;
                    }
                    for (int i_26 = 1; i_26 < 23;i_26 += 1)
                    {
                        arr_92 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] &= (~var_15);
                        arr_93 [16] = ((var_18 ? var_11 : (((var_0 ? var_11 : var_14)))));
                        var_56 -= var_13;
                        var_57 = var_0;
                    }
                    var_58 = (((var_7 ? var_2 : var_8)));
                }
                for (int i_27 = 0; i_27 < 25;i_27 += 1) /* same iter space */
                {
                    arr_96 [i_13] [i_13] [i_21] [i_21] [i_27] = ((-18468 ? -1 : 1736678453944717522));
                    var_59 = (((((var_6 ? var_18 : var_5))) ? ((var_1 ? var_0 : var_11)) : (((var_10 ? var_17 : var_13)))));
                    var_60 ^= ((((var_4 ? 6661560222472507248 : 1778162415))) ? var_17 : 2413430103);
                    var_61 *= var_4;
                }
            }
            for (int i_28 = 3; i_28 < 24;i_28 += 1)
            {
                arr_99 [i_28] = ((var_10 ? ((var_1 ? var_0 : var_2)) : ((var_10 ? var_5 : var_3))));

                for (int i_29 = 0; i_29 < 25;i_29 += 1)
                {
                    arr_103 [i_28] [i_28] [i_20] [i_28] = (~(~var_0));
                    arr_104 [i_13] [i_20] [i_28] [i_28] = ((var_5 ? ((var_16 ? var_0 : var_15)) : var_14));
                    arr_105 [i_28] [i_29] = (!var_11);
                }
                arr_106 [i_28] = var_9;
                var_62 = ((var_11 ? var_13 : var_5));
            }

            for (int i_30 = 0; i_30 < 25;i_30 += 1)
            {

                for (int i_31 = 0; i_31 < 25;i_31 += 1)
                {
                    var_63 = ((var_8 ? var_17 : var_8));
                    var_64 = (((((var_10 ? var_4 : var_6))) ? ((var_1 ? var_11 : var_0)) : var_5));
                    arr_112 [i_13] [i_13] [i_13] [i_30] [i_13] [i_31] = var_19;
                }
                for (int i_32 = 0; i_32 < 25;i_32 += 1)
                {
                    var_65 = (((~var_8) ? var_0 : (((var_13 ? var_18 : var_17)))));

                    for (int i_33 = 0; i_33 < 25;i_33 += 1)
                    {
                        var_66 = ((var_14 ? var_17 : var_15));
                        arr_118 [i_32] [i_30] = ((var_11 ? var_6 : var_6));
                    }
                    for (int i_34 = 0; i_34 < 25;i_34 += 1)
                    {
                        var_67 = ((((var_0 ? var_11 : var_14))) ? var_5 : var_15);
                        var_68 = ((~((var_19 ? var_1 : var_13))));
                        var_69 = var_1;
                        var_70 = (((var_11 ? var_1 : var_0)));
                    }
                    for (int i_35 = 4; i_35 < 24;i_35 += 1)
                    {
                        var_71 -= var_19;
                        var_72 = (max(var_72, var_10));
                        var_73 = var_7;
                    }
                    arr_123 [i_32] [i_30] [i_20] [i_13] = ((var_11 ? var_6 : var_5));
                    var_74 = (max(var_74, (((!(((var_13 ? var_18 : var_18))))))));
                    arr_124 [i_20] = var_8;
                }
                for (int i_36 = 0; i_36 < 25;i_36 += 1)
                {
                    arr_127 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30] = ((0 ? 65517 : 18446744073709551609));
                    var_75 *= (((((var_11 ? var_7 : var_0))) ? var_8 : var_2));
                    var_76 -= var_6;
                }
                var_77 = var_13;
                var_78 = (var_13 ? (((var_10 ? var_12 : var_15))) : ((var_4 ? var_14 : var_16)));

                for (int i_37 = 0; i_37 < 25;i_37 += 1) /* same iter space */
                {
                    var_79 -= (var_19 ? var_5 : var_10);
                    var_80 &= (-17273309547115793511 ? ((var_15 ? -1081072554 : 4)) : 15608);
                }
                for (int i_38 = 0; i_38 < 25;i_38 += 1) /* same iter space */
                {
                    arr_133 [i_38] [i_30] = (var_11 ? (~var_6) : ((var_8 ? var_10 : var_5)));
                    arr_134 [i_13] [i_13] [i_38] = (!var_2);
                    arr_135 [i_13] [i_30] [i_30] [i_20] [i_38] = (((!var_3) ? var_0 : var_1));
                }
                for (int i_39 = 0; i_39 < 1;i_39 += 1)
                {

                    for (int i_40 = 0; i_40 < 25;i_40 += 1)
                    {
                        var_81 += var_1;
                        var_82 = var_10;
                        var_83 = ((((var_5 ? var_3 : var_3))) ? var_10 : var_10);
                    }
                    arr_142 [i_39] [i_39] [i_39] [i_13] = (var_19 ? var_11 : var_14);
                }
                for (int i_41 = 0; i_41 < 25;i_41 += 1)
                {
                    arr_146 [i_13] [i_13] [i_13] &= (var_2 ? var_12 : var_12);
                    var_84 = (~var_13);
                }
            }
            for (int i_42 = 0; i_42 < 25;i_42 += 1)
            {

                for (int i_43 = 0; i_43 < 25;i_43 += 1)
                {
                    var_85 = (max(var_85, var_14));

                    for (int i_44 = 0; i_44 < 25;i_44 += 1)
                    {
                        arr_153 [i_13] [i_42] [i_42] [i_43] = 815487282;
                        arr_154 [i_44] [i_42] [i_42] [i_42] [i_13] = ((var_5 ? ((var_11 ? var_15 : var_14)) : (((var_13 ? var_17 : var_3)))));
                        var_86 = var_3;
                    }
                    for (int i_45 = 1; i_45 < 21;i_45 += 1)
                    {
                        var_87 = ((var_10 ? (!var_10) : var_5));
                        arr_157 [i_42] [i_20] [11] [i_42] [i_43] [i_45] = (!var_15);
                        var_88 &= (((!var_8) ? -var_19 : (((var_10 ? var_12 : var_17)))));
                    }
                }
                for (int i_46 = 0; i_46 < 25;i_46 += 1) /* same iter space */
                {
                    arr_161 [i_42] [4] [4] [i_46] [i_42] = (var_9 ? var_19 : 13);
                    arr_162 [i_13] [i_13] [i_42] = ((var_6 ? var_11 : var_15));
                }
                for (int i_47 = 0; i_47 < 25;i_47 += 1) /* same iter space */
                {

                    for (int i_48 = 0; i_48 < 25;i_48 += 1)
                    {
                        var_89 &= (var_14 ? var_8 : -var_5);
                        arr_167 [i_42] [21] [15] [i_20] [i_42] = (((var_18 ? var_15 : var_19)));
                    }
                    for (int i_49 = 0; i_49 < 25;i_49 += 1)
                    {
                        var_90 = var_10;
                        arr_170 [i_42] = (var_1 ? var_19 : (~var_19));
                    }
                    var_91 = var_18;
                    arr_171 [i_42] [i_20] [i_42] &= var_19;
                }
                for (int i_50 = 0; i_50 < 25;i_50 += 1) /* same iter space */
                {
                    var_92 = (((((var_5 ? var_3 : var_7))) ? (((var_14 ? var_3 : var_18))) : ((-1647709333 ? 2297508900 : 355))));
                    arr_174 [i_42] [i_13] [i_42] = ((var_19 ? var_6 : var_3));
                }
                var_93 = var_2;
            }
            for (int i_51 = 0; i_51 < 25;i_51 += 1)
            {
                var_94 ^= 3;
                var_95 = var_19;
            }
        }
        arr_177 [i_13] = (((((var_9 ? var_2 : var_19))) ? (~var_7) : var_9));
        var_96 = (((((var_14 ? var_3 : var_14))) ? var_13 : var_9));
    }
    #pragma endscop
}
