/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((min(2566785317, -1217142683)) - ((((min(var_18, var_1)))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = -var_6;
        var_21 *= ((2146435072 >= (!var_9)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (!3538813671);
                    var_22 = var_0;
                    var_23 = -7;
                    arr_10 [6] [i_1] [i_2] [i_0] = ((((~(min(var_14, var_1)))) - ((((!-1) >> (((max(var_18, var_12)) - 156323467502199133)))))));
                }
            }
        }
        var_24 -= ((~(var_11 && -1217142683)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_17 [i_0] [i_3] [i_0] = var_15;
                    arr_18 [i_0] [i_0] [i_0] = (max(28419, 1125899906842623));
                    var_25 |= ((~((~(!var_13)))));
                    var_26 = var_6;
                    var_27 = var_12;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = (((-var_11 + 2147483647) >> (var_11 - 978977977)));
        var_28 += var_0;
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_27 [i_6] = (~2839033316);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_29 = var_3;
                    arr_33 [i_8] = (!var_16);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                {
                    arr_39 [i_6] [i_9] [i_9] = (var_4 / var_5);
                    var_30 = (32919 >= 723052298);
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_44 [i_12 + 1] = ((!(var_16 / var_2)));
                                var_31 += (var_6 & var_8);
                            }
                        }
                    }
                }
            }
        }
        arr_45 [i_6 + 1] = (!var_17);
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 20;i_13 += 1)
    {
        arr_48 [i_13] = var_18;
        arr_49 [i_13 - 1] = var_15;
        var_32 = (max(var_32, var_9));
    }
    for (int i_14 = 1; i_14 < 13;i_14 += 1)
    {
        arr_52 [i_14 - 1] |= max(4219142919, 0);
        arr_53 [i_14] [i_14] = var_6;

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_33 = ((!((max(32632, ((var_10 >> (var_5 - 39))))))));
            arr_58 [i_14] [i_14] = ((-(min((max(var_6, var_14)), var_13))));
            var_34 = var_11;
            arr_59 [i_15] [i_15] [i_15] = (min((~var_3), var_1));
            var_35 |= (min(1642814077996241184, 3779590651760331784));
        }
    }
    for (int i_16 = 1; i_16 < 13;i_16 += 1)
    {
        var_36 = var_12;
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    {
                        arr_71 [i_16 + 1] [i_16] [i_16 - 1] [i_16 + 2] [i_16] [i_17] = (min((max((min(var_0, var_17)), var_5)), ((min(var_5, (max(var_17, var_13)))))));
                        var_37 = var_5;

                        for (int i_20 = 2; i_20 < 12;i_20 += 1)
                        {
                            var_38 -= var_9;
                            var_39 = (!var_2);
                            var_40 = 32919;
                            arr_75 [i_17] [i_19] [i_18] [i_17] [i_17] = ((min(((min(var_2, var_5))), (var_1 + var_2))));
                        }
                        var_41 += ((max((max(var_3, var_1)), 14184)));
                    }
                }
            }
        }
        arr_76 [12] = var_1;

        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                var_42 += var_5;
                var_43 = (min((min((max(var_14, var_5)), var_17)), var_6));
                arr_83 [i_16 - 1] |= (var_7 ^ ((max(var_2, var_10))));
            }
            for (int i_23 = 0; i_23 < 15;i_23 += 1)
            {
                var_44 = (max(((max(var_11, 23017))), (max(var_7, (min(var_0, var_4))))));

                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    arr_89 [i_21] = ((min((min(4294967287, -1642814077996241185)), 1685814814)));
                    arr_90 [i_16] [12] = (max(var_14, ((((-127 - 1) / 14341)))));
                    var_45 = (min(var_45, var_7));

                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 15;i_25 += 1)
                    {
                        var_46 += var_0;
                        arr_93 [i_25] [11] [i_21] [i_23] [11] [i_24] [i_24] = ((var_8 | (var_1 <= var_5)));
                        var_47 = (542 >= 2047);
                    }
                    arr_94 [i_16] |= (((~var_9) == var_0));
                }
                for (int i_26 = 0; i_26 < 15;i_26 += 1)
                {

                    /* vectorizable */
                    for (int i_27 = 1; i_27 < 14;i_27 += 1)
                    {
                        arr_102 [i_23] [i_23] [i_23] = var_2;
                        arr_103 [i_16] [i_21] [i_16] [i_26] [i_16] |= (!var_13);
                        var_48 = ((!(!var_4)));
                    }
                    var_49 *= (min(((max((max(var_3, var_8)), var_13))), (min(((min(var_10, var_5))), var_0))));
                    arr_104 [i_21] [i_21] [i_23] [10] [i_21] = -var_13;
                }
                for (int i_28 = 0; i_28 < 15;i_28 += 1)
                {
                    arr_108 [i_28] [i_28] [i_28] [i_28] = (max((max((min(var_14, var_8)), (var_13 ^ var_17))), var_4));
                    var_50 += ((~(!var_13)));
                    var_51 += var_1;
                    var_52 = (min(var_52, ((max(var_12, (max((max(var_4, var_15)), ((max(var_13, var_6))))))))));
                    var_53 = (((var_1 * ((max(var_6, var_3))))));
                }
                for (int i_29 = 0; i_29 < 15;i_29 += 1)
                {
                    var_54 = (min((!-var_18), (var_11 / var_4)));
                    arr_111 [i_21] = (((((((var_14 <= var_1) <= var_2)))) % (~var_1)));
                    arr_112 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_16] [i_16 + 1] = (((max((1217142673 - 522814110), (min(-6567438265910561941, -21912)))) * var_17));
                }
            }
            for (int i_30 = 4; i_30 < 13;i_30 += 1) /* same iter space */
            {
                arr_115 [i_16 + 2] &= (18446744073709551615 >= -3725228389656028667);

                for (int i_31 = 2; i_31 < 11;i_31 += 1)
                {
                    var_55 = var_7;
                    var_56 = (max((max((max(var_13, var_8)), (max(4294967285, 32904)))), (((var_16 / (max(var_10, var_4)))))));

                    /* vectorizable */
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        arr_121 [i_16] [i_32] [i_30] [i_31] [i_32] |= (var_9 ^ var_13);
                        var_57 = (var_6 - var_0);
                    }
                    for (int i_33 = 1; i_33 < 14;i_33 += 1)
                    {
                        arr_125 [i_16] [i_21] [i_30 - 2] [i_31] [i_33 - 1] = ((var_16 + (105 / -723052298)));
                        arr_126 [i_16 + 2] [i_21] [i_21] [i_21] [i_33] = (((var_3 & var_0) + (min((~var_0), (~var_12)))));
                    }
                }
            }
            for (int i_34 = 4; i_34 < 13;i_34 += 1) /* same iter space */
            {
                var_58 = (max((max(23985, 1724436801)), var_8));
                var_59 = ((((((!(~var_15))))) != ((max(var_13, var_5)))));
            }
            arr_130 [i_21] = var_10;
            var_60 = ((((min(var_10, (~var_7)))) && (var_0 - var_15)));
        }
    }
    #pragma endscop
}
