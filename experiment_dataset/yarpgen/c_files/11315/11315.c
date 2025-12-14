/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_3, var_13))) ? var_10 : var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = ((2074168349 ? (var_12 + var_11) : var_11));

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 = var_2;
                            arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] [i_1] [i_2] = var_0;
                        }
                    }
                }
                arr_14 [i_1] [i_1] [i_1] [i_1] = (2074168349 > 255);
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_17 = ((var_2 ? var_0 : var_11));
                var_18 = -2074168349;
                arr_18 [i_1] [8] [i_1] [i_5] = var_1;
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (!var_9)));
                        var_20 = (min(var_20, (((var_2 ? 2074168348 : var_5)))));
                        var_21 = (var_2 ? var_6 : 2147483647);
                        arr_26 [i_0] [1] [3] [i_1] [i_6] [i_7] [i_8 - 2] = ((var_7 + ((var_0 ? 59383 : var_7))));
                    }
                    for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                    {
                        var_22 = ((var_8 >> (var_9 - 8987676156832473064)));
                        arr_29 [i_0] [i_1] [i_0] = ((var_9 ? var_13 : -239606996));
                        arr_30 [i_1] [i_1] [5] [i_1] [i_9] = ((((var_0 ? var_2 : var_4)) > var_3));
                    }
                    arr_31 [i_6] [i_6] [i_1] [6] [i_6] [i_6] = var_6;
                    arr_32 [i_6] [i_6] [i_1 + 2] [i_6] |= (var_10 / var_2);
                }
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((((-6225 ? 65535 : 65517))) ? var_5 : var_12))));
                            var_24 = var_5;
                            arr_39 [i_0] [i_10] [i_1] [i_10] = (((var_1 > var_9) ? var_0 : 6147));
                        }
                    }
                }
                var_25 = (max(var_25, var_4));
                arr_40 [i_1] [i_1 + 2] [i_6] = ((170679525 ? var_9 : var_0));
            }
            arr_41 [6] &= ((var_6 ? var_3 : 27187));
            var_26 = (min(var_26, (~var_8)));
        }
        for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            arr_51 [i_13] = ((((var_12 ? var_11 : 65539)) == 32256));
                            var_27 = var_3;
                            arr_52 [i_12] [i_14] [i_13] = ((var_1 ? (((var_3 ? 21466 : var_0))) : var_2));
                            var_28 = ((var_2 ? ((var_8 ? var_0 : var_6)) : var_6));
                            var_29 = 240;
                        }
                    }
                }
            }
            var_30 = (var_4 ? var_1 : (9223372036854775807 + -1561875427));
            var_31 = (var_3 ? var_10 : -7895469136272214046);
            arr_53 [i_0] [i_0] = var_3;
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            arr_57 [i_0] [5] = 34436;
            arr_58 [i_0] = (((var_1 == var_2) == var_5));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 10;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            var_32 = ((var_10 ? var_2 : var_3));
                            var_33 = (min(var_33, ((var_6 ? var_4 : -2074168364))));
                            arr_67 [i_0] [i_19] [i_18] [i_19] = var_4;
                        }
                        arr_68 [i_0] [i_16] [i_17] [i_18] [i_18] = ((((-2074168370 ? -154465532 : var_13)) == var_4));
                    }
                }
            }
            arr_69 [i_0] [i_16] = ((var_0 ? 9844 : var_2));
        }
        arr_70 [i_0] = ((var_2 ? (var_13 && -3046) : (var_8 & var_0)));
    }
    for (int i_20 = 1; i_20 < 12;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 13;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                {
                    arr_78 [i_22] [8] [i_21] [i_20 - 1] = (max((max(var_13, (1702920196 < var_4))), var_13));
                    arr_79 [i_20] = var_13;
                }
            }
        }
        arr_80 [3] = (((((30344 ? var_13 : var_4))) ? ((-27178 ? var_8 : var_10)) : ((var_4 ? 0 : var_10))));
        var_34 = var_12;

        /* vectorizable */
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
            {
                var_35 = var_7;
                var_36 = (var_1 & var_7);

                for (int i_25 = 2; i_25 < 11;i_25 += 1)
                {
                    arr_89 [i_20 + 1] [i_20 + 1] [2] = var_1;
                    arr_90 [1] = var_9;

                    for (int i_26 = 2; i_26 < 11;i_26 += 1)
                    {
                        var_37 = ((var_8 ? var_12 : -27178));
                        var_38 = (var_11 ? 6154 : 3498430103566570396);
                    }
                }
                for (int i_27 = 4; i_27 < 12;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        arr_101 [i_20] [i_23] [i_24] [8] [i_24] = (~var_13);
                        arr_102 [i_20] [i_27] [i_24] [i_20] [i_20] = var_13;
                        var_39 = ((-7473161593923814477 ? var_7 : var_1));
                        arr_103 [i_20] [i_23] [i_24] [i_27] [i_27 + 1] [i_23] [i_27] = ((var_1 ? (~var_10) : var_1));
                    }
                    arr_104 [i_20] [i_23] [i_23] [i_24] [i_27 - 4] [i_24] = (var_7 < var_3);
                    arr_105 [i_27] [i_24] [i_20] = var_8;
                }
                var_40 = (var_8 < var_6);
            }
            for (int i_29 = 0; i_29 < 13;i_29 += 1) /* same iter space */
            {
                arr_109 [0] [i_23] [i_23] [i_23] = (-31786 ? -4949204838041530981 : -1794479848);
                var_41 = (max(var_41, (var_0 == 1652206394)));
                var_42 = (min(var_42, (((var_9 ? var_3 : var_12)))));
                arr_110 [i_20] [i_20] [i_20] = (var_0 >= var_9);
                arr_111 [i_20] [i_23] [11] = 426186925;
            }
            for (int i_30 = 0; i_30 < 13;i_30 += 1) /* same iter space */
            {
                arr_114 [i_20] [i_23] [i_30] = var_4;
                arr_115 [i_20] [i_23] [5] [5] = var_1;
                arr_116 [i_30] [i_30] [i_30] [9] = (var_12 ? var_4 : var_1);
                arr_117 [9] [i_30] = var_11;
            }

            for (int i_31 = 2; i_31 < 11;i_31 += 1)
            {

                for (int i_32 = 1; i_32 < 10;i_32 += 1)
                {

                    for (int i_33 = 0; i_33 < 13;i_33 += 1)
                    {
                        arr_127 [i_20] [i_32] [i_31 + 2] [i_32] = ((var_5 ? var_0 : var_9));
                        var_43 = (~var_7);
                        arr_128 [i_32] [i_23] [i_31] = ((var_11 ? (((var_0 ? 2074168345 : var_8))) : var_12));
                        arr_129 [i_23] [12] [i_31 - 2] [i_23] [i_32] = var_6;
                    }
                    arr_130 [i_32 + 2] [i_32] [i_32] [i_20] = (var_1 + var_3);
                    arr_131 [11] [i_32] = -var_5;
                    arr_132 [i_20] [i_23] [0] [i_32] = ((var_12 ? -4639716135556334485 : var_11));
                }
                for (int i_34 = 1; i_34 < 12;i_34 += 1)
                {
                    arr_137 [i_20] [i_23] [2] [i_34] [i_31] [i_34] = ((var_1 ? var_6 : var_4));

                    for (int i_35 = 2; i_35 < 11;i_35 += 1)
                    {
                        arr_141 [i_20] [5] [1] [i_31] [i_34] [i_34] [i_35] = (var_11 < var_13);
                        var_44 = -4639716135556334485;
                        arr_142 [i_20] [i_34] [5] [i_34] = var_0;
                    }
                    arr_143 [i_34] [i_23] [i_34] = ((var_5 ? var_10 : var_10));
                    arr_144 [i_34] [i_23] [i_34] [i_34 - 1] = (~var_7);
                }

                for (int i_36 = 1; i_36 < 10;i_36 += 1)
                {
                    arr_149 [i_31] |= 154465531;
                    arr_150 [i_36] [i_23] [i_36] = (var_10 < var_4);
                }
                for (int i_37 = 1; i_37 < 11;i_37 += 1)
                {

                    for (int i_38 = 1; i_38 < 12;i_38 += 1)
                    {
                        arr_157 [i_20] [5] [i_20] [i_20] [i_37] [1] = ((567453553048682496 ? ((var_11 ? 27187 : var_6)) : var_11));
                        var_45 += (var_12 & 59404);
                    }
                    arr_158 [i_37] [0] = ((-1134360613 ? var_2 : var_0));
                    arr_159 [i_20] [i_20] [i_20] [i_37] [i_20] = 154465540;
                }

                for (int i_39 = 0; i_39 < 13;i_39 += 1)
                {
                    var_46 = (var_2 || var_0);
                    arr_163 [i_20 + 1] [i_20 + 1] [11] = (154465531 < var_6);
                    arr_164 [i_20] [i_23] [8] [10] = var_7;
                }

                for (int i_40 = 2; i_40 < 11;i_40 += 1)
                {

                    for (int i_41 = 0; i_41 < 13;i_41 += 1)
                    {
                        var_47 = var_0;
                        arr_170 [i_31] = var_3;
                        arr_171 [8] [8] [i_31] [i_40] [8] [i_41] [i_41] = var_7;
                        arr_172 [i_20] [i_23] [i_31] [i_40] = ((194734001 ? 2147483647 : 196));
                    }
                    for (int i_42 = 0; i_42 < 13;i_42 += 1)
                    {
                        arr_175 [i_20 - 1] [0] [i_40] = (var_13 ? -718471953 : 174710249);
                        var_48 |= 3319932946688481301;
                    }
                    for (int i_43 = 1; i_43 < 11;i_43 += 1)
                    {
                        var_49 -= var_0;
                        arr_180 [i_43] = var_8;
                        arr_181 [i_20 + 1] [i_43] [1] [i_31] [i_40] [i_43] = ((var_5 ? var_7 : var_5));
                    }
                    arr_182 [i_20] [i_23] = (var_8 < var_0);
                    arr_183 [i_23] [i_23] [i_31] [i_23] [i_20] [i_20] = (var_1 ? ((9845 ? -9032075876616852968 : var_7)) : var_11);
                    arr_184 [4] [i_23] [1] [4] = 196;
                }
                var_50 |= (var_13 && var_0);
            }
            var_51 = (var_0 ? (var_2 - var_9) : var_13);
        }
    }
    var_52 = (-2147483647 - 1);
    #pragma endscop
}
