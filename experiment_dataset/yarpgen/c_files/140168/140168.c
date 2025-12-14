/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = 2124177629;
                var_21 ^= -35;
                var_22 &= 1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 = ((~((2 % (((arr_7 [i_2]) ? 40 : (arr_6 [i_2])))))));

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_11 [i_2] [i_3] = var_4;
            var_24 = (max(-72, 0));
        }
        var_25 = (max((max(var_4, (!1936422001))), (((-1 ? (var_12 < var_14) : (74 && var_0))))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            var_26 = (max(var_26, (arr_2 [i_2])));
                            arr_20 [i_5 + 1] [i_4 + 1] [i_5] [i_5] [i_7 - 1] [i_4 + 1] = -40;
                            arr_21 [i_5] [i_6] [i_5] [i_4 + 1] [i_5] = (((((-1 ? ((1523843254 ? var_5 : -111)) : (~var_0)))) ? ((((((var_1 ? -25 : 0)) <= var_18)))) : (max((!0), var_7))));
                        }
                        var_27 = ((~(!1)));
                        arr_22 [i_2] [i_2] [i_4] [i_5] [i_5] [i_2] = (((((arr_9 [i_5]) ? ((var_13 ? var_14 : -27)) : (!var_6))) == (max(var_16, 2771124041))));

                        for (int i_8 = 4; i_8 < 15;i_8 += 1)
                        {
                            var_28 += (((~(var_3 / var_0))));
                            arr_25 [i_8] [i_2] [i_5] [i_5] [i_4] [i_2] = ((0 * (((var_18 == (!var_6))))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_29 = 1;
                            var_30 = (max(var_30, var_12));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_31 = ((44771 ? var_11 : (((-(arr_4 [i_2]))))));
                            arr_30 [i_4] [i_4] [i_4] [i_5] [i_4] = ((~(max((~0), 42733))));
                            var_32 = (min(var_32, (((2771124033 ? (!var_7) : (((!258637413) ? var_0 : (min(var_4, 1)))))))));
                            var_33 = (max(var_33, -var_17));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_35 [i_11] = (arr_9 [i_11]);
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_43 [4] [i_13] [4] [i_14 - 2] [i_14] = (((arr_16 [i_11]) ? var_0 : (arr_8 [i_14])));
                        var_34 += (((1 ? var_18 : 668044073)));
                        var_35 = ((-(((!(arr_6 [i_11]))))));
                        arr_44 [i_11] [1] [i_12] [i_13] [i_14] = (!var_3);
                    }
                }
            }
        }
        var_36 -= -var_15;
        var_37 = ((var_15 ? (!-97) : 1));
    }
    var_38 = (min(var_38, var_3));

    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            var_39 = (~48);
                            arr_59 [i_15] [i_18] [i_15] [6] = (1523843254 | 1);
                            arr_60 [i_15] [i_15] [i_17] [i_15] [i_19] = (((!var_18) * 179));
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                        {
                            arr_64 [i_15] [1] [i_20] = (-668044073 & 4294967295);
                            var_40 = (min(var_40, 1522143649));
                        }
                        arr_65 [i_15] [i_15] [i_17 - 1] [i_16] = (!255);
                    }
                }
            }
            arr_66 [i_15] [i_15] = var_1;
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
        {
            var_41 = (min(660243322, (((((!(arr_68 [i_15] [i_15] [i_21]))) ? 1 : ((-71 ? 120 : var_0)))))));
            arr_69 [i_15] [i_15] = ((+(((arr_68 [i_21] [i_15] [i_15]) ? var_19 : (arr_68 [i_15] [i_15] [i_21])))));
        }
        arr_70 [i_15] = ((((((var_10 ? var_16 : 1419021413941979371)))) ? var_19 : 112));
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 20;i_23 += 1)
            {
                {
                    arr_77 [i_15] [i_15] [i_15] [i_15] = ((((!((((arr_2 [i_15]) ? var_1 : 20))))) || ((((-(arr_47 [5])))))));

                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        var_42 = var_12;
                        arr_80 [i_15] [i_22 - 1] = (!1);
                        var_43 = ((var_6 == (384788722 % 19666)));
                        arr_81 [i_15] [i_15] [1] [i_23 - 1] [i_24] [i_15] = ((var_18 ? (arr_50 [i_22 - 1] [i_22 - 1] [i_23] [i_15]) : var_10));
                    }
                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        var_44 = (min(var_44, (((((1 ? -19666 : 137438953471))) ? (((((var_13 ? 1 : 71))))) : (max((arr_71 [18] [i_22 - 1] [i_23]), ((var_19 ? var_11 : var_7))))))));
                        var_45 = ((((((arr_47 [i_22 - 1]) ? 255 : (arr_54 [i_22 - 1] [i_22 - 1] [i_23] [i_23 - 1])))) ? var_17 : (-1 & 2334853159)));
                        var_46 = 2097151;
                    }
                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        arr_87 [i_15] [5] = ((var_7 <= ((var_14 ? ((var_17 ? (arr_50 [15] [i_22] [i_23 + 1] [i_15]) : var_3)) : -52))));
                        var_47 = (((!var_3) ? (arr_56 [i_15] [i_15] [i_15] [i_26]) : (((!var_1) ? ((var_18 ? 4611686018427387903 : var_18)) : (!536870911)))));
                    }
                }
            }
        }
        arr_88 [i_15] [i_15] = ((-(0 | -5034958328041314827)));
        arr_89 [i_15] = 1;
    }
    for (int i_27 = 0; i_27 < 16;i_27 += 1)
    {

        for (int i_28 = 2; i_28 < 15;i_28 += 1)
        {
            var_48 = 171;
            var_49 = ((68 != (arr_50 [i_27] [i_27] [i_27] [i_28])));
        }
        /* vectorizable */
        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            var_50 = ((var_2 / -43) < -var_9);

            for (int i_30 = 3; i_30 < 15;i_30 += 1)
            {
                var_51 = (min(var_51, 79));
                /* LoopNest 2 */
                for (int i_31 = 3; i_31 < 14;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 16;i_32 += 1)
                    {
                        {
                            var_52 = (max(var_52, (((-71 ? 652048436 : 255)))));
                            var_53 = (max(var_53, (arr_47 [i_32])));
                            arr_106 [i_30] [i_29] [i_30] [i_31] = (((arr_24 [i_29] [i_31 + 1]) ? var_1 : var_9));
                            var_54 = 13;
                        }
                    }
                }
                arr_107 [i_27] [9] [i_30] = var_13;
                var_55 = -4294967295;
            }
            for (int i_33 = 0; i_33 < 16;i_33 += 1)
            {
                var_56 &= 4294967286;
                var_57 = var_1;
            }
        }
        for (int i_34 = 1; i_34 < 13;i_34 += 1) /* same iter space */
        {
            var_58 = 51189;
            /* LoopNest 2 */
            for (int i_35 = 0; i_35 < 16;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 16;i_36 += 1)
                {
                    {
                        var_59 = ((!(((arr_111 [i_35] [i_34 + 3]) > (arr_105 [i_27] [i_34 + 2] [i_27] [i_34 + 2] [i_34 + 3] [i_34] [i_34 + 3])))));
                        var_60 = (((2109952533 == 254) ? (((((var_7 ? var_4 : var_11))) ? (var_13 > var_18) : (((arr_92 [i_27] [i_27] [i_36]) ? 0 : (arr_6 [i_35]))))) : 1));
                    }
                }
            }
            var_61 = var_11;
        }
        /* vectorizable */
        for (int i_37 = 1; i_37 < 13;i_37 += 1) /* same iter space */
        {
            var_62 = 255;
            var_63 = (((((arr_40 [i_37] [0]) && 248)) ? (-89 > var_1) : var_10));
        }

        for (int i_38 = 0; i_38 < 16;i_38 += 1) /* same iter space */
        {
            arr_123 [i_27] [i_27] [i_27] = (min(((!(!var_1))), var_19));
            /* LoopNest 2 */
            for (int i_39 = 0; i_39 < 1;i_39 += 1)
            {
                for (int i_40 = 0; i_40 < 16;i_40 += 1)
                {
                    {
                        arr_129 [i_27] [i_39] = ((((max((arr_42 [i_27] [i_38] [i_38] [i_39] [5]), (arr_42 [i_40] [i_39] [i_38] [i_27] [i_27])))) + (arr_42 [i_27] [i_38] [i_39] [i_40] [i_40])));
                        arr_130 [i_27] [i_27] [i_39] = ((!(((159 ? -var_5 : (~var_17))))));
                    }
                }
            }
            var_64 = (arr_111 [i_38] [i_38]);
        }
        /* vectorizable */
        for (int i_41 = 0; i_41 < 16;i_41 += 1) /* same iter space */
        {
            arr_133 [i_41] [i_41] = ((((var_11 & (arr_48 [i_27] [i_41])))) ? (!var_0) : var_16);
            var_65 = 1;
        }
        for (int i_42 = 0; i_42 < 16;i_42 += 1) /* same iter space */
        {
            var_66 = (min(var_66, (((2988103175 || (((160 ? (arr_45 [16]) : (arr_45 [2])))))))));
            var_67 = -var_3;
        }
    }
    for (int i_43 = 0; i_43 < 12;i_43 += 1)
    {
        /* LoopNest 2 */
        for (int i_44 = 0; i_44 < 12;i_44 += 1)
        {
            for (int i_45 = 0; i_45 < 1;i_45 += 1)
            {
                {
                    arr_148 [i_43] [i_44] [i_43] = var_12;
                    /* LoopNest 2 */
                    for (int i_46 = 0; i_46 < 1;i_46 += 1)
                    {
                        for (int i_47 = 1; i_47 < 8;i_47 += 1)
                        {
                            {
                                var_68 = (~var_9);
                                var_69 = ((-(13127 % 1)));
                                var_70 = 15;
                            }
                        }
                    }
                    var_71 = (var_14 << (((~var_18) - 100325131)));
                }
            }
        }
        var_72 = ((((!3521383) ? ((43 ? var_19 : 2298985324)) : -78)));
    }
    #pragma endscop
}
