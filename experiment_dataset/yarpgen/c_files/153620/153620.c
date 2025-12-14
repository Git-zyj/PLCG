/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_12 ? ((max(var_2, 1))) : ((min(var_15, 0))))) / var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (1 && (min(1, 0)));
        var_17 = (((min(var_11, 1)) * (((arr_0 [i_0]) >> 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 &= (((max((~0), 1)) | 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = 1;
                                arr_11 [1] [i_1] [i_2] [1] = ((((1 >= (~0))) ? ((0 ? 1 : 1)) : (((!var_14) ? 1 : ((min(1, var_4)))))));
                                arr_12 [i_2] [i_4] = 1;
                            }
                        }
                    }
                    var_20 *= ((min((arr_5 [i_0] [i_1] [i_2]), (!var_4))) || ((min(((0 ? var_3 : var_5)), 1))));
                    arr_13 [i_0] = arr_6 [i_1] [i_1] [i_0];
                }
            }
        }

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_21 = (min(var_21, (1 == var_7)));
            var_22 = (min(((((arr_4 [i_5 + 1] [i_5] [i_5]) >= (arr_3 [1] [i_5] [i_5 + 1])))), 1));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_22 [i_0] [i_6] [i_7] = (!(((var_0 ? var_0 : var_15))));
                arr_23 [i_0] [i_6] = var_10;
                var_23 = (var_8 > ((var_8 ? 1 : var_8)));
                arr_24 [i_7] [i_7] [1] = (arr_15 [i_0] [i_0] [i_0]);
                var_24 = -var_4;
            }
            arr_25 [i_0] = min(1, (min((!var_1), 1)));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_25 = var_2;
                        arr_35 [i_8] [i_8] = (arr_18 [i_9] [i_8] [1]);
                        var_26 = (((max(((max(1, var_4))), ((1 + (arr_18 [i_0] [i_0] [i_10]))))) * (min((arr_20 [i_9] [1]), ((var_10 ? 0 : var_2))))));
                    }
                }
            }
            var_27 = (0 || ((((!var_5) ? ((min(var_9, var_1))) : 0))));
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            var_28 = (((arr_26 [i_11 - 1] [1] [i_11]) >> (((max((arr_17 [i_11] [i_0] [i_0]), 1))))));

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_29 = var_2;
                arr_41 [i_0] [i_11] [i_12] [i_11] = ((-(((min(var_14, var_14))))));
            }
            var_30 = var_8;
            var_31 = var_9;
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                {
                    arr_49 [i_13] = max(((min((arr_5 [i_13] [i_14] [i_15]), 1))), var_10);

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_53 [i_13] = (max(1, (var_5 ^ 1)));
                        var_32 = 1;
                        var_33 = (((var_8 ? var_5 : 1)));
                        arr_54 [i_13] [i_13] = (min(var_6, ((var_1 ? 1 : ((min(var_10, var_10)))))));
                    }

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_57 [i_13] [i_13] = ((((max(var_10, var_14))) ? 1 : (((0 % 1) ? (~var_11) : (var_4 == var_6)))));
                        arr_58 [i_13] [i_15] [1] [i_14] [i_14] [i_13] = (((min(1, (var_3 > 1)))));
                    }
                }
            }
        }
    }

    for (int i_18 = 0; i_18 < 0;i_18 += 1)
    {
        var_34 = (((min((min(1, 1), (min(1, (arr_61 [i_18 + 1] [i_18]))))))));
        arr_62 [i_18] &= ((((min((arr_61 [i_18 + 1] [i_18]), ((var_14 ? var_12 : 0))))) ? (~1) : ((((!(arr_61 [i_18] [i_18])))))));

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_35 = (min(var_35, 1));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        {
                            arr_73 [1] [i_19] [i_18] [i_18] [i_19] [i_21] &= var_13;
                            arr_74 [i_18 + 1] [i_19] [i_20] [i_21] [i_22] [i_20] [i_18] = (var_4 && (~1));
                            var_36 = ((var_12 >= var_15) >= ((min((arr_61 [i_18 + 1] [i_18 + 1]), 1))));
                        }
                    }
                }
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                var_37 = ((var_3 ? (0 && 1) : ((var_1 ? var_12 : 1))));
                var_38 = (min(var_38, 0));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 1;i_25 += 1)
                    {
                        {
                            var_39 *= 0;
                            var_40 = ((((((max(var_1, var_6)) ? 1 : ((max(1, var_15)))))) ? (!1) : ((-((~(arr_69 [i_18] [1] [i_23] [i_24])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 0;i_27 += 1)
                    {
                        {
                            var_41 = (max(var_41, (((((min((1 && var_4), ((var_5 ? var_14 : 0))))) ? ((((~(arr_65 [1]))))) : ((~(1 ^ var_6))))))));
                            arr_90 [i_18] [i_19] [i_23] [i_27] [1] = (((arr_61 [i_27 + 1] [i_18 + 1]) / 1));
                            var_42 |= 1;
                        }
                    }
                }
            }
            var_43 = (((((arr_66 [i_18] [i_18] [i_18 + 1]) > var_13)) ? ((0 ? 1 : 1)) : (~1)));
        }
    }
    for (int i_28 = 0; i_28 < 1;i_28 += 1)
    {
        var_44 -= (~1);
        arr_94 [i_28] = ((arr_72 [i_28] [i_28] [i_28] [i_28] [i_28]) && 1);

        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            arr_99 [i_29] = (((((var_8 ? 1 : var_11))) ? 1 : ((~(arr_85 [i_29] [i_29] [i_29] [i_29])))));
            arr_100 [i_29] [i_29] [i_28] = -var_12;
        }
        for (int i_30 = 0; i_30 < 1;i_30 += 1)
        {
            var_45 = ((var_11 ? ((-(var_13 || var_5))) : var_2));
            var_46 = var_1;

            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 1;i_33 += 1)
                    {
                        {
                            arr_112 [i_28] [1] [i_28] [i_28] [1] [i_31] [1] = ((-1 / ((min(1, var_8)))));
                            var_47 = (min(var_47, var_5));
                            var_48 = (((var_6 && 1) * (((arr_97 [i_28]) / ((max((arr_106 [1] [i_31] [i_31] [i_31]), 1)))))));
                            var_49 |= -var_14;
                        }
                    }
                }
                arr_113 [0] [i_30] [i_31] [i_30] = (max((((var_10 % var_10) >> var_13)), -1));
            }
        }
        for (int i_34 = 0; i_34 < 1;i_34 += 1)
        {

            for (int i_35 = 0; i_35 < 1;i_35 += 1)
            {
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 1;i_37 += 1)
                    {
                        {
                            arr_122 [i_34] [i_36] [i_35] [i_34] [i_34] = (((max((arr_108 [i_28] [i_37] [i_35] [i_34] [i_28]), var_3))) < ((max(0, (arr_108 [i_28] [i_34] [i_35] [i_34] [i_37])))));
                            var_50 = (min(var_50, ((((((!1) ? 1 : var_6))) || ((((((var_10 * (arr_110 [i_34] [1] [i_34] [i_34] [1])))) ? ((var_13 ? 1 : var_14)) : 1)))))));
                            arr_123 [i_28] [i_28] [i_34] [i_28] [i_28] [1] [i_28] = 1;
                            var_51 = ((((var_13 * ((-(arr_103 [i_28] [i_34]))))) * var_1));
                            arr_124 [i_28] [i_34] [i_35] [i_36] [i_34] = -var_14;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 1;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 1;i_39 += 1)
                    {
                        {
                            arr_130 [1] [i_34] [i_35] [i_38] [i_35] [i_34] = -var_14;
                            var_52 = var_6;
                            arr_131 [i_28] [1] [i_34] [i_35] [i_38] [i_38] [i_39] = ((-(((-(arr_129 [i_34] [i_38] [i_34] [i_34] [i_34] [i_34]))))));
                            var_53 = (min(var_53, (((-(max((~1), var_13)))))));
                            var_54 = (((!var_10) ? (0 << var_12) : var_3));
                        }
                    }
                }
                var_55 = (max(1, (((arr_98 [i_34] [1] [i_34]) ? (((!(arr_98 [i_34] [i_34] [i_34])))) : ((1 ? (arr_59 [i_34]) : 1))))));
                var_56 = ((((((arr_105 [i_35]) >= var_11))) / ((min(1, 1)))));
            }
            arr_132 [i_34] [i_34] [i_34] = ((((((min(0, (arr_120 [1] [1] [i_28] [1]))) ? (0 + var_2) : (var_2 >= var_4)))) ? (1 % 1) : ((1 + (var_10 > var_14)))));
            var_57 = (((~var_14) ? ((~(arr_115 [1] [i_34] [i_34]))) : (~0)));
        }
    }
    for (int i_40 = 1; i_40 < 1;i_40 += 1)
    {
        arr_136 [1] &= ((var_11 ? ((-((var_9 ? 1 : (arr_135 [1] [1]))))) : 1));

        for (int i_41 = 0; i_41 < 1;i_41 += 1)
        {
            var_58 = (min(var_58, (((1 % (arr_137 [0] [i_40 - 1]))))));
            arr_139 [i_40] [i_41] [i_40] = (!-var_4);

            for (int i_42 = 1; i_42 < 1;i_42 += 1)
            {
                arr_143 [i_40] [i_41] [i_41] = ((~(arr_135 [i_40 - 1] [i_40])));
                var_59 = (!(((-((max(var_10, var_13)))))));
                var_60 = (var_11 + var_14);
                var_61 &= (max(-var_11, var_1));
                arr_144 [i_40] = var_6;
            }
            for (int i_43 = 1; i_43 < 1;i_43 += 1)
            {
                /* LoopNest 2 */
                for (int i_44 = 0; i_44 < 1;i_44 += 1)
                {
                    for (int i_45 = 1; i_45 < 1;i_45 += 1)
                    {
                        {
                            var_62 = (max(var_62, 1));
                            arr_152 [i_43] [1] [i_43] [i_44] [i_40] [i_44] = var_6;
                            var_63 = (min(var_63, ((((min(var_11, var_11)) ? ((max((arr_150 [i_40] [i_40 - 1] [i_40 - 1] [i_43 - 1] [1] [i_45 - 1]), var_7))) : (arr_150 [1] [i_40 - 1] [1] [i_43 - 1] [i_44] [i_45 - 1]))))));
                        }
                    }
                }
                var_64 = (((0 ? 1 : 1)));
                var_65 -= arr_137 [1] [1];
                var_66 ^= (!((max(((~(arr_141 [1] [i_41] [i_43]))), 1))));
                var_67 = (!var_0);
            }
        }
        /* vectorizable */
        for (int i_46 = 0; i_46 < 0;i_46 += 1)
        {
            var_68 = (arr_137 [i_40] [i_40 - 1]);
            arr_156 [i_40] [i_46] [i_40] = (~var_9);
        }
    }
    var_69 = (min(0, var_14));
    #pragma endscop
}
