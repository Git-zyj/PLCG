/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(var_10, var_9));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((var_8 >= (var_2 - var_3))))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_12 = (~var_6);
                            var_13 = ((var_4 ? var_5 : var_6));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_14 = ((~((-(!var_8)))));
                            var_15 = ((var_1 ? var_5 : ((var_3 ? var_7 : var_4))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_16 = (var_6 % var_7);
                            var_17 = (min(var_17, (((var_2 ? var_0 : var_0)))));
                        }
                        arr_19 [i_3] = var_7;
                        var_18 = ((!(!var_9)));
                    }
                    var_19 = (max(var_19, (((-(((var_5 <= (var_0 == var_5)))))))));
                    var_20 = (((var_4 - var_7) ? var_8 : (((var_5 ? var_2 : var_8)))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_21 = (!2289072513);
            arr_22 [i_0] [i_7] = ((-(!var_2)));
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_22 *= var_4;
                var_23 = var_1;
            }
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_24 = (var_7 % var_0);
                        var_25 = (((!var_4) ? var_6 : var_5));
                    }
                    var_26 = (var_2 - var_8);
                    arr_39 [i_10] [4] = var_1;
                    var_27 = (var_3 - var_6);
                    var_28 *= var_8;
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_46 [4] [i_10 + 2] = ((var_3 ? var_3 : var_0));
                        arr_47 [8] [i_8] [i_8] [i_13] [3] = var_0;
                    }
                    var_29 *= var_3;
                }

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    arr_50 [i_0] [i_0] [i_8] [i_10] [i_15] [i_15] = (~var_9);
                    arr_51 [i_0] [0] [9] = ((var_4 ? var_4 : var_1));
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                        {
                            arr_60 [i_0] [i_0] [2] [i_0] [i_0] [i_0] [i_0] = ((var_2 ? ((var_2 >> (var_5 - 20280))) : var_2));
                            var_30 = -var_6;
                        }
                        for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                        {
                            var_31 *= (var_0 % var_1);
                            arr_64 [i_0] [i_0] [1] [i_17] [i_19] = ((var_4 << (var_7 - 3939066335)));
                        }
                        var_32 = (min(var_32, (((var_3 ? var_5 : var_8)))));
                        arr_65 [i_16] [2] [i_16] = ((var_6 ? var_1 : var_6));
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            var_33 = (min(var_33, var_2));

            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                arr_72 [i_21] [i_20] [11] = (((var_2 - var_0) | var_3));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 13;i_23 += 1)
                    {
                        {
                            arr_78 [i_23] [i_20] = (((var_8 == var_3) ? ((var_5 ? var_6 : var_7)) : var_8));
                            var_34 = (min(var_34, ((((((var_8 ? var_9 : var_2))) ? (var_0 != var_4) : (~0))))));
                            var_35 = var_4;
                        }
                    }
                }
                arr_79 [13] [i_21] = ((var_9 * (var_5 / var_3)));
            }
        }
        for (int i_24 = 1; i_24 < 13;i_24 += 1)
        {
            var_36 = (max(var_36, (((23266 % ((((0 ? 2005894772 : -567642525)))))))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    {
                        var_37 = ((((var_7 ? var_4 : var_6))) ? ((var_3 ? var_1 : var_3)) : (((var_7 ? var_8 : var_9))));
                        var_38 *= -28364;
                        var_39 = (((1 ? 16448680138202266379 : -5042)));

                        for (int i_27 = 0; i_27 < 14;i_27 += 1)
                        {
                            var_40 = (min(var_40, ((((var_7 ? var_6 : var_8))))));
                            var_41 = (var_7 == var_2);
                        }
                        for (int i_28 = 1; i_28 < 11;i_28 += 1)
                        {
                            var_42 = ((~(-1568 == 2005894757)));
                            var_43 = (max(var_43, (~var_6)));
                        }
                    }
                }
            }
            var_44 *= (var_7 < 872891027);

            for (int i_29 = 0; i_29 < 14;i_29 += 1)
            {
                var_45 *= (((2005894757 || 1998063935507285236) > (var_2 + var_7)));
                var_46 *= (((var_8 ? var_7 : -var_8)));
            }
        }
    }
    /* vectorizable */
    for (int i_30 = 1; i_30 < 11;i_30 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_31 = 0; i_31 < 12;i_31 += 1)
        {
            for (int i_32 = 1; i_32 < 11;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 12;i_33 += 1)
                {
                    {

                        for (int i_34 = 1; i_34 < 11;i_34 += 1)
                        {
                            var_47 = (max(var_47, (!var_3)));
                            var_48 *= ((var_6 >> (var_5 - 20264)));
                            arr_111 [i_30] [i_31] [i_32] [1] [i_34 - 1] [i_32] = var_8;
                            arr_112 [i_30] [i_30] [i_31] [i_32 - 1] [i_33] [i_32 - 1] [i_34] = (var_6 * var_9);
                            arr_113 [i_30] [1] [i_31] [1] [1] [11] [i_34] = ((var_0 ? var_1 : var_1));
                        }
                        for (int i_35 = 1; i_35 < 10;i_35 += 1)
                        {
                            var_49 = var_7;
                            var_50 = (var_1 && var_9);
                            arr_116 [i_35] [i_35 - 1] [i_33] [i_32] [i_31] [i_30 + 1] = ((var_0 ? var_1 : var_0));
                        }
                        for (int i_36 = 0; i_36 < 12;i_36 += 1)
                        {
                            var_51 *= (var_6 > var_3);
                            arr_119 [9] [i_31] [i_32] [i_31] [i_36] [i_36] = (((var_6 >> (var_7 - 3939066325))));
                            var_52 *= ((2005894757 & (-127 - 1)));
                            var_53 = (~var_5);
                        }
                        arr_120 [i_30 - 1] [i_31] [1] [2] = var_3;
                        arr_121 [2] [i_31] [0] = var_9;
                    }
                }
            }
        }
        var_54 = var_6;
    }
    for (int i_37 = 1; i_37 < 11;i_37 += 1) /* same iter space */
    {

        for (int i_38 = 2; i_38 < 11;i_38 += 1) /* same iter space */
        {

            for (int i_39 = 1; i_39 < 11;i_39 += 1)
            {
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 12;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 12;i_41 += 1)
                    {
                        {
                            var_55 *= (~var_4);
                            var_56 = (((((var_9 ? var_9 : var_6))) && (((var_6 ? var_3 : var_0)))));
                            var_57 *= (((((var_5 ? var_8 : var_1))) ^ var_7));
                            var_58 = (((1 ? 4294967277 : 1)) == ((var_8 ? var_0 : var_4)));
                            arr_135 [i_37] [i_39 - 1] [i_39] = (((~((var_2 ? var_7 : var_0)))));
                        }
                    }
                }
                var_59 = 2289072524;
                var_60 *= var_1;
                arr_136 [5] [i_38] [i_39] = (((((var_5 ? ((var_9 ? var_2 : var_1)) : var_4))) ? var_5 : (!var_2)));
                var_61 = (min(var_61, var_9));
            }
            for (int i_42 = 2; i_42 < 8;i_42 += 1)
            {
                /* LoopNest 2 */
                for (int i_43 = 0; i_43 < 12;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 12;i_44 += 1)
                    {
                        {
                            var_62 = ((0 | -11461) - ((var_9 ? var_6 : var_5)));
                            var_63 = ((((var_4 ? ((var_5 ? var_4 : var_5)) : -var_8))) ? (var_4 ^ var_5) : (((~var_2) ? var_7 : var_8)));
                            var_64 = (((((-((var_8 ? var_1 : var_8))))) | ((var_3 ? var_2 : var_3))));
                            arr_145 [i_37] [i_38] [i_44] [i_43] [2] = 2115964799;
                        }
                    }
                }

                for (int i_45 = 0; i_45 < 1;i_45 += 1)
                {
                    arr_148 [8] [i_38] [i_45] [i_45] [i_45] = ((var_8 ^ var_3) ? ((var_5 ? var_1 : var_0)) : (var_9 % var_7));
                    var_65 = ((!(((var_4 ? ((var_2 ? var_2 : var_3)) : var_0)))));
                    var_66 = (~((var_2 ? var_7 : var_2)));
                    var_67 *= (((~-var_1) ? (((-(~var_5)))) : (var_0 % var_7)));
                }
                for (int i_46 = 0; i_46 < 12;i_46 += 1)
                {

                    for (int i_47 = 0; i_47 < 12;i_47 += 1)
                    {
                        arr_155 [i_37] [i_37] [1] [i_37] [5] [4] = (~var_8);
                        arr_156 [i_47] [i_46] [7] [10] = var_4;
                        arr_157 [i_37 + 1] = ((var_2 - (var_0 % var_5)));
                        arr_158 [i_42 + 3] = (~28379);
                    }
                    var_68 = (var_3 ? (((((var_3 ? var_8 : var_1))) ? (var_7 + var_0) : var_1)) : (var_8 * var_4));
                }
                /* LoopNest 2 */
                for (int i_48 = 0; i_48 < 12;i_48 += 1)
                {
                    for (int i_49 = 0; i_49 < 12;i_49 += 1)
                    {
                        {
                            var_69 = ((925632309 == (var_2 ^ var_9)));
                            arr_164 [7] [6] = (((1998063935507285228 > 40179) <= (~var_9)));
                            var_70 = (!var_9);
                            arr_165 [i_37] [4] [9] [i_42 - 1] [i_37] [i_49] = ((~(var_8 % var_5)));
                            arr_166 [9] = ((~(((((var_8 ? var_6 : var_7))) ? (~var_2) : (var_7 - var_8)))));
                        }
                    }
                }
                var_71 = ((((var_0 ? var_9 : var_2))));
            }
            for (int i_50 = 2; i_50 < 10;i_50 += 1)
            {

                for (int i_51 = 0; i_51 < 12;i_51 += 1) /* same iter space */
                {
                    var_72 = ((!(!1998063935507285237)));
                    var_73 = (max(var_73, var_2));
                    var_74 = (max(var_74, (((((var_3 & ((var_6 ? var_6 : var_3)))) & (((var_4 >> (var_5 != var_9)))))))));
                    var_75 = (((((((var_7 ? var_1 : var_1))) / var_6)) % ((((((-32767 - 1) ? 64 : 2289072524)))))));
                    var_76 = -var_8;
                }
                /* vectorizable */
                for (int i_52 = 0; i_52 < 12;i_52 += 1) /* same iter space */
                {
                    var_77 = ((var_8 ? var_3 : var_0));
                    arr_176 [i_52] [i_38] [i_50] [5] = (((((var_1 ? var_1 : var_1))) ? -var_3 : var_4));
                    var_78 *= ((var_8 << (var_3 - 492461728)));
                }
                var_79 = (min(var_79, ((!(((var_0 ? var_6 : (((var_1 ? var_0 : var_5))))))))));
                var_80 *= var_7;
            }
            var_81 *= (((((var_0 ? var_7 : var_5))) || (!var_2)));
            arr_177 [i_37] [i_37] [11] = ((~(((var_2 ? var_3 : var_4)))));
        }
        /* vectorizable */
        for (int i_53 = 2; i_53 < 11;i_53 += 1) /* same iter space */
        {
            arr_180 [3] = (!var_9);
            var_82 = (min(var_82, (!var_5)));
            var_83 = (var_5 == var_3);
            var_84 *= (var_5 | var_3);
        }
        /* vectorizable */
        for (int i_54 = 2; i_54 < 11;i_54 += 1) /* same iter space */
        {
            arr_184 [0] = var_0;
            var_85 = (min(var_85, var_2));
            /* LoopNest 2 */
            for (int i_55 = 0; i_55 < 12;i_55 += 1)
            {
                for (int i_56 = 0; i_56 < 12;i_56 += 1)
                {
                    {
                        var_86 = var_2;
                        arr_189 [i_56] [4] [i_54] [4] = ((65522 ? -67 : var_6));
                        arr_190 [i_37] [i_37] [i_55] [i_55] = var_0;
                        arr_191 [1] [2] = (((var_9 + 2147483647) >> (var_7 - 3939066349)));
                    }
                }
            }
        }
        arr_192 [i_37] = var_9;
        var_87 = var_4;
        arr_193 [i_37 - 1] [i_37] = ((~(var_7 <= var_9)));
    }
    var_88 = var_4;
    var_89 *= var_0;
    var_90 *= ((var_2 ? ((var_1 * (var_7 < var_6))) : (-var_0 && var_8)));
    #pragma endscop
}
