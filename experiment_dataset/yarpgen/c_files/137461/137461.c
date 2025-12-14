/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_9;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_1] = var_5;
            arr_9 [i_1] = ((((max(2073995800, 2073995781))) ? var_4 : (((((var_7 ? var_11 : var_11))) ? var_2 : var_11))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 &= ((-((var_4 ? (((max(var_4, var_4)))) : var_3))));

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_17 = ((var_5 ? (((!((max(var_9, var_11)))))) : (((!((min(var_12, var_2))))))));
                arr_15 [4] [i_2] [16] [2] = ((-46967866 ? 13217964979240759639 : 2));
                arr_16 [13] [i_2] [i_2] [i_3 - 1] = var_7;
                var_18 = (max(var_18, ((!((((((var_7 ? var_11 : var_4))) ? var_6 : ((var_14 ? var_11 : var_4)))))))));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_19 = (((((var_4 ? var_11 : var_10))) ? (min(((var_9 ? var_9 : var_4)), (max(-98, 13217964979240759639)))) : ((((!(((var_10 ? var_12 : var_12)))))))));
                var_20 = ((-((var_6 ? var_8 : var_1))));

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_21 += (min((max((max(var_0, var_3)), (((var_12 ? var_8 : var_4))))), (max(var_9, var_8))));
                    var_22 = var_11;
                    var_23 *= var_10;
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        arr_29 [11] [i_7] [i_4] [i_7] [i_0] = ((var_8 ? var_13 : var_11));
                        arr_30 [16] [i_7] = (!var_9);
                        var_24 = (min(var_24, (!var_12)));
                    }
                    var_25 = var_0;
                }
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, ((min((((9223372036854775807 ? 1 : 1))), var_1)))));

                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        var_27 = (min(var_27, ((((((2220971514 ? 2073995775 : 42564))) ? var_2 : ((var_8 ? var_2 : ((max(var_7, var_14))))))))));
                        arr_42 [8] [i_8] [2] [i_10 - 2] = ((((max((min(var_9, var_11)), ((var_9 ? var_2 : var_3))))) ? ((max(((var_5 ? var_0 : var_13)), var_2))) : var_9));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_28 = (max(var_0, (~var_10)));
                        arr_45 [i_8] [i_8] = var_7;
                        var_29 = (max(((var_8 ? var_9 : var_8)), (((var_10 ? var_8 : var_13)))));
                        var_30 = (max(9223372036854775807, 1));
                    }
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_31 = (var_11 ? var_9 : (((var_11 ? var_10 : var_13))));
                    var_32 += ((var_12 ? var_9 : var_7));
                    arr_48 [i_8] = ((var_12 ? var_13 : var_12));
                }
                var_33 = (max(var_33, ((min((((!var_14) ? ((var_1 ? var_1 : var_9)) : ((var_3 ? var_7 : var_3)))), (min((((var_10 ? var_4 : var_1))), (max(var_14, var_3)))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_34 = (min(((2220971514 ? 7914201619400369323 : 1696640761)), (((var_2 ? var_8 : var_13)))));
                            arr_55 [i_8] [17] [i_14] [11] [i_8] [i_8] = ((((max(var_4, var_11))) ? var_12 : ((((min(var_5, var_12))) ? -var_11 : var_7))));
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {

                    /* vectorizable */
                    for (int i_17 = 3; i_17 < 18;i_17 += 1)
                    {
                        arr_62 [11] [i_8] [4] [9] [5] [i_16] [i_17 - 2] = ((var_13 ? ((var_5 ? var_11 : var_1)) : var_11));
                        var_35 ^= (((var_12 ? var_8 : var_7)));
                    }

                    for (int i_18 = 1; i_18 < 18;i_18 += 1)
                    {
                        var_36 ^= var_4;
                        var_37 -= (max((((((((-9223372036854775807 - 1) ? 12 : -33))) ? ((max(var_5, var_5))) : var_1))), (((((var_5 ? var_3 : var_12))) ? (((var_11 ? var_0 : var_0))) : ((53 ? 7 : 1705373640259252659))))));
                        var_38 = ((((min(var_9, (min(var_9, var_14))))) ? (((((min(var_7, var_7))) ? -var_6 : (((max(var_4, var_8))))))) : var_3));
                        var_39 = ((~(~var_1)));
                    }
                    var_40 = (max(((((max(var_10, var_3))) ? (!var_9) : ((var_3 ? var_2 : var_3)))), ((((!var_3) ? var_10 : ((var_7 ? var_11 : var_4)))))));
                    var_41 = (((((-((var_10 ? var_14 : var_4))))) ? var_13 : var_14));
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_42 = ((!((min(((var_14 ? var_3 : var_13)), (!var_11))))));
                    arr_67 [i_8] [17] [i_8] = ((var_9 ? (max(var_5, var_6)) : (~var_12)));
                }
                for (int i_20 = 1; i_20 < 18;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        var_43 = var_1;
                        var_44 = var_7;
                        var_45 = (max(((((((var_10 ? var_6 : var_0))) ? (max(var_6, var_4)) : var_10))), (((!var_11) ? ((var_7 ? var_10 : var_3)) : (((var_3 ? var_14 : var_13)))))));
                        var_46 = (max((max(var_14, var_2)), (~var_7)));
                        var_47 = var_12;
                    }
                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 19;i_22 += 1)
                    {
                        arr_76 [16] [14] [8] [i_8] [i_0] &= ((var_5 ? var_10 : var_1));
                        var_48 = var_13;
                        arr_77 [18] [16] [i_8] [i_20 + 1] [i_22 - 1] = ((var_9 ? var_3 : var_4));
                        arr_78 [i_9 + 2] [15] [3] [1] [i_8] = ((-var_2 ? var_7 : var_12));
                    }
                    for (int i_23 = 2; i_23 < 16;i_23 += 1)
                    {
                        arr_81 [0] [i_8] [i_9 - 1] [10] [i_23 + 3] [i_23 + 4] [i_8] = (min(((min(var_7, var_13))), var_0));
                        var_49 = (((max((min(var_11, var_7)), (((var_5 ? var_7 : var_14)))))) ? (min(var_3, ((max(var_10, var_10))))) : ((min(var_1, var_6))));
                        var_50 = var_2;
                        var_51 = (((((var_9 ? var_7 : var_14))) ? (min(1446944719, 5627709359990855471)) : (((var_4 ? ((var_4 ? var_0 : var_6)) : (((var_10 ? var_2 : var_8))))))));
                    }
                    arr_82 [i_0] [i_0] [5] [i_8] [i_0] = var_9;
                    arr_83 [1] [4] [i_9 - 1] [i_20 + 1] [i_20 + 1] |= var_12;
                }
            }
            arr_84 [i_0] [i_8] [i_8] = ((var_5 ? ((1373401341 ? var_11 : 2073995792)) : var_8));
            arr_85 [6] [i_8] = var_4;
            arr_86 [0] &= ((-((var_11 ? ((var_11 ? var_9 : var_6)) : var_6))));
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            arr_90 [i_24] = (!var_1);

            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                arr_95 [i_0] [i_0] = var_8;
                arr_96 [i_0] [i_0] = -var_8;
            }

            for (int i_26 = 0; i_26 < 20;i_26 += 1)
            {
                arr_101 [17] [i_26] [i_26] = ((var_10 ? var_0 : var_12));
                var_52 = (((var_6 ? var_14 : var_13)));
                var_53 = (max(var_53, var_0));
            }
        }

        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            var_54 = (((~var_0) ? (~var_4) : var_5));
            var_55 = var_10;
            arr_104 [i_0] [5] = (max(var_6, ((min(((min(var_7, var_14))), ((var_3 ? var_5 : var_8)))))));
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 20;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    {
                        var_56 = (((((((min(var_4, var_10))) ? ((var_14 ? var_11 : var_4)) : var_7))) ? ((max(var_10, var_2))) : ((~((var_14 ? var_10 : var_8))))));
                        var_57 = (((!var_12) ? ((((((var_6 ? var_14 : var_5))) ? (((var_2 ? var_10 : var_10))) : (min(var_12, var_7))))) : ((var_3 ? (~var_3) : (!var_5)))));
                    }
                }
            }

            /* vectorizable */
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                var_58 = var_6;

                for (int i_31 = 0; i_31 < 20;i_31 += 1)
                {
                    var_59 = var_7;

                    for (int i_32 = 0; i_32 < 20;i_32 += 1) /* same iter space */
                    {
                        arr_118 [6] [11] [i_30] [11] [1] [13] = ((var_9 ? var_2 : ((var_3 ? var_1 : var_5))));
                        arr_119 [i_0] [1] [i_0] [6] [13] = ((var_8 ? ((var_2 ? var_11 : var_10)) : -var_10));
                    }
                    for (int i_33 = 0; i_33 < 20;i_33 += 1) /* same iter space */
                    {
                        var_60 += (((((var_4 ? var_1 : var_6))) ? var_10 : (!var_11)));
                        arr_122 [i_0] [i_27] [i_30] [4] [i_31] [i_33] = ((-var_14 ? ((var_0 ? var_9 : var_10)) : var_14));
                        var_61 = ((var_9 ? var_3 : var_13));
                        arr_123 [5] [i_27] [i_30] [i_31] [i_33] = var_2;
                        arr_124 [i_0] [19] [11] [i_31] [0] = (((((var_10 ? var_6 : var_4))) ? var_2 : ((var_12 ? var_12 : var_2))));
                    }
                    for (int i_34 = 1; i_34 < 19;i_34 += 1)
                    {
                        arr_127 [16] [i_0] [11] [i_34] [i_30] [19] [7] = var_13;
                        var_62 = ((9223372036854775794 ? 8760 : 9223372036854775797));
                    }
                    arr_128 [i_31] [4] [i_31] [1] [19] [i_31] = ((var_8 ? var_11 : (~var_3)));
                    arr_129 [6] [15] [i_27] [i_0] = (!-var_10);
                }
                arr_130 [i_0] [i_0] [i_0] [1] = var_9;
                arr_131 [i_30] = ((var_12 ? var_8 : var_11));
            }
            /* vectorizable */
            for (int i_35 = 1; i_35 < 16;i_35 += 1)
            {

                for (int i_36 = 1; i_36 < 17;i_36 += 1)
                {
                    arr_137 [i_35] [17] [i_35] = (~var_1);
                    arr_138 [i_0] [i_35] [i_35 - 1] [8] = ((var_10 ? var_3 : var_6));
                }
                for (int i_37 = 0; i_37 < 20;i_37 += 1)
                {
                    var_63 = (max(var_63, (((var_1 ? (((0 ? 1 : 1))) : ((var_11 ? var_13 : var_7)))))));
                    var_64 = ((var_11 ? var_5 : var_10));
                }
                for (int i_38 = 4; i_38 < 19;i_38 += 1)
                {
                    var_65 += (((var_0 ? var_8 : var_8)));
                    var_66 = (((!var_10) ? ((var_5 ? var_7 : var_0)) : (((var_0 ? var_2 : var_13)))));
                }
                for (int i_39 = 4; i_39 < 19;i_39 += 1)
                {
                    arr_147 [i_35] = var_1;
                    arr_148 [i_35] [0] [16] [i_35] = var_6;
                    arr_149 [i_0] [9] [i_35] [i_35 + 1] [12] = ((var_4 ? var_14 : var_6));
                }
                var_67 = ((var_0 ? (((var_1 ? var_4 : var_5))) : ((var_5 ? var_9 : var_5))));
                var_68 = ((-9223372036854775785 ? 30456367 : 480));
                arr_150 [i_35] [5] = -var_7;
                arr_151 [i_35] [2] [i_35] = ((var_8 ? var_1 : var_3));
            }
        }
        /* vectorizable */
        for (int i_40 = 1; i_40 < 16;i_40 += 1)
        {
            var_69 = (var_3 ? var_7 : var_12);
            arr_154 [1] [7] [i_0] = (~var_12);
            var_70 = (!var_4);

            for (int i_41 = 0; i_41 < 20;i_41 += 1)
            {
                var_71 = ((var_12 ? var_7 : ((var_6 ? var_14 : var_3))));
                var_72 = ((var_8 ? var_1 : var_13));
            }
        }
        for (int i_42 = 1; i_42 < 18;i_42 += 1)
        {
            var_73 += (min(var_10, ((var_3 ? (min(var_6, var_9)) : var_14))));
            arr_159 [3] [1] = (min(var_7, ((35234 ? (max(1, 8323785281554689914)) : 8332088900000591112))));

            for (int i_43 = 0; i_43 < 20;i_43 += 1)
            {
                /* LoopNest 2 */
                for (int i_44 = 0; i_44 < 20;i_44 += 1)
                {
                    for (int i_45 = 0; i_45 < 20;i_45 += 1)
                    {
                        {
                            var_74 = (max(var_74, var_13));
                            var_75 = max((((var_12 ? (~var_2) : ((max(var_14, var_7)))))), ((var_3 ? var_9 : ((var_14 ? var_12 : var_9)))));
                            arr_169 [i_0] [i_0] [i_0] [i_0] [i_0] [i_43] = ((((max(((var_0 ? var_9 : var_13)), ((max(var_2, var_7)))))) ? (max(((var_10 ? var_5 : var_9)), ((min(var_8, var_5))))) : (!var_4)));
                            arr_170 [i_43] [11] [i_43] [11] [13] [14] = (var_14 ? ((-var_13 ? var_14 : (max(var_1, var_14)))) : ((((max(var_14, var_6))) ? var_1 : (!var_12))));
                        }
                    }
                }
                var_76 = (max(var_8, ((var_11 ? (max(var_8, var_9)) : var_1))));
            }
            var_77 = (min(((((!var_10) ? var_4 : var_10))), (min(9474, (min(4264510929, 9223372036854775808))))));
            var_78 = (((max(var_8, var_4))) ? (((max(var_4, var_14)))) : (((((var_10 ? var_8 : var_8))) ? var_5 : (!var_11))));
        }
        var_79 = ((((min(var_0, var_6))) ? ((var_5 ? var_8 : var_2)) : ((var_6 ? var_8 : var_5))));

        for (int i_46 = 1; i_46 < 16;i_46 += 1) /* same iter space */
        {
            arr_173 [7] = (((((var_8 ? var_7 : var_4))) ? ((var_7 ? var_14 : var_0)) : var_2));
            var_80 &= var_11;
            arr_174 [0] = ((((max(var_6, var_12))) ? (max(var_0, var_1)) : (max(((min(var_1, var_11))), ((61 ? 8796093022192 : (-9223372036854775807 - 1)))))));
        }
        for (int i_47 = 1; i_47 < 16;i_47 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_48 = 0; i_48 < 20;i_48 += 1) /* same iter space */
            {
                arr_181 [1] [i_47 + 2] [i_47] = (var_13 ? var_3 : var_4);
                arr_182 [i_47] [15] [1] = -var_2;
                var_81 = ((var_12 ? var_8 : var_2));
                arr_183 [i_47] [i_47 + 2] [11] [i_47] = ((var_14 ? var_7 : var_13));
                var_82 += var_8;
            }
            for (int i_49 = 0; i_49 < 20;i_49 += 1) /* same iter space */
            {
                var_83 -= (max((min(((max(var_4, var_1))), (min(var_10, var_9)))), (max((min(var_9, var_1)), var_4))));

                for (int i_50 = 0; i_50 < 1;i_50 += 1) /* same iter space */
                {
                    arr_190 [i_47] [17] [i_47 + 3] [i_47] = ((((min(4264510906, -9223372036854775787))) ? (min(((var_7 ? var_11 : var_7)), var_4)) : (((min(42, -3396))))));
                    var_84 = var_6;
                    var_85 = (min((((-((var_0 ? var_12 : var_12))))), (((((var_12 ? var_10 : var_12))) ? (((var_6 ? var_4 : var_10))) : var_0))));
                    var_86 ^= -var_5;
                }
                for (int i_51 = 0; i_51 < 1;i_51 += 1) /* same iter space */
                {
                    var_87 = (min(var_87, ((min(((max(var_4, (!var_12)))), ((((max(var_6, var_5))) ? ((var_8 ? var_3 : var_4)) : (((var_6 ? var_10 : var_14))))))))));

                    for (int i_52 = 0; i_52 < 20;i_52 += 1)
                    {
                        var_88 = (max(var_88, ((min((~var_12), ((var_2 ? (((1 ? 1 : 61928))) : var_0)))))));
                        var_89 = max(((((((var_9 ? var_3 : var_3))) ? ((max(var_14, var_5))) : var_12))), 0);
                    }
                    arr_198 [i_0] [i_47 - 1] [i_47] [1] = (((max(11630186505044394048, -8796093022192))) ? (max((min(var_10, var_0)), ((max(var_11, var_2))))) : var_14);

                    for (int i_53 = 0; i_53 < 1;i_53 += 1)
                    {
                        arr_202 [15] [9] [i_49] [i_47] [i_53] = ((~(((((var_4 ? var_10 : var_10))) ? (max(var_11, var_10)) : (max(var_1, var_13))))));
                        var_90 ^= ((-(((((var_6 ? var_3 : var_12))) ? ((var_8 ? var_12 : var_5)) : ((max(var_7, var_5)))))));
                    }
                }
                var_91 = ((((max(var_10, var_10))) ? (((((var_9 ? var_1 : var_0))) ? (((max(var_14, var_7)))) : ((var_2 ? var_2 : var_11)))) : ((var_14 ? var_12 : var_1))));
            }
            var_92 = ((((min(var_7, var_5))) ? (min(var_10, (min(var_8, var_0)))) : ((max(var_14, -var_13)))));
        }
    }
    /* vectorizable */
    for (int i_54 = 0; i_54 < 24;i_54 += 1)
    {
        var_93 &= (!556948666);
        var_94 = ((var_11 ? var_10 : var_7));

        for (int i_55 = 0; i_55 < 24;i_55 += 1)
        {
            var_95 = ((var_1 ? var_1 : var_6));
            arr_208 [16] [i_55] = ((-((var_12 ? var_14 : var_1))));
        }
        arr_209 [10] = ((var_12 ? var_7 : var_10));
    }
    var_96 = (min((((((var_4 ? var_1 : var_3))) ? (min(var_14, var_9)) : var_0)), ((((((var_7 ? var_5 : var_1))) ? (min(var_14, var_12)) : var_1)))));
    #pragma endscop
}
