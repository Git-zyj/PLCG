/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(1, 1)) ? ((((0 ? var_8 : var_2)))) : (min(((0 ? var_6 : var_11)), ((min(var_5, var_4))))));
    var_20 = (max(var_20, ((((((((min(var_18, -19546))) ? var_3 : (18 && 0)))) && (((32763 ? 1 : 1))))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= (arr_2 [i_0]);
        arr_4 [11] [i_0] = (!65535);
        var_21 ^= ((-(((min(var_3, var_3)) & (arr_2 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 += ((!((min(((min(32763, -32762))), 598299371)))));
        var_23 += ((!(((1 << (var_4 + 84))))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            var_24 = ((((var_0 ? var_15 : var_0)) >> (var_6 - 43801)));
            arr_13 [i_3] [i_2] = (min((((arr_8 [i_2] [i_3 + 1]) + ((min(var_5, (arr_7 [19])))))), var_10));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_25 = (min(((min((!var_15), (min((arr_0 [i_2] [i_2]), var_16))))), ((var_3 ? 1 : 4294967295))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_23 [i_2] [i_4] = 32764;
                        arr_24 [i_6 - 1] [i_4] [i_2] [i_4] [i_2] = ((((min((((arr_7 [i_2]) ? 11 : 32764)), (min((-2147483647 - 1), var_7))))) ? ((1 ? 314460773 : ((65535 ? 1789 : -32749)))) : (arr_16 [i_6] [i_6] [i_6 + 1] [i_6 - 1])));
                        arr_25 [i_2 - 3] [i_4] [i_5 - 1] [i_4] [i_4] [i_2 - 3] = var_16;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_30 [i_2] [i_7] [i_2] = (1 && 16710);
            var_26 ^= var_18;
            var_27 = -114;

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_35 [i_7] [i_8] [i_7] = 229;
                arr_36 [i_8] [i_7] [i_7] [1] = (1 | 36658);
                var_28 -= (arr_32 [i_8] [i_7] [i_2] [i_2]);

                for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                {
                    arr_40 [i_7] [i_7] [i_7] = (min((((!(~var_8)))), (((((!(arr_19 [i_2] [i_2])))) - var_11))));
                    var_29 *= (arr_8 [i_8] [11]);
                    var_30 = var_3;
                    arr_41 [i_7] [i_7] = ((!(((arr_8 [i_2 - 1] [i_2 - 1]) && (((var_11 ? var_16 : 1)))))));
                }
                for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_31 &= (var_13 * 127);
                        arr_46 [i_7] [1] [16] = 65535;
                    }
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        var_32 = ((min((min(var_4, 12556)), var_8)));
                        var_33 = ((((min(var_16, 65535)))));
                    }
                    var_34 = (min(((var_6 ? var_1 : var_5)), (27598 & var_11)));
                    var_35 = (((arr_9 [i_7] [i_8]) ? (((!(((var_9 ? var_0 : var_16)))))) : ((-((var_10 ? 1 : var_11))))));
                }
                arr_50 [i_7] [i_7] [i_7] = (4294967295 / 1);
            }
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                arr_54 [i_7] [i_7] [i_7] = var_1;
                arr_55 [i_7] = var_13;
                var_36 = ((-(((1 - 18446744073709551615) / 3538))));
                var_37 = (0 | var_6);
                arr_56 [i_7] [i_7] [i_7] [i_2 + 1] = ((36658 ? 4095 : 1));
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_38 = (min(((+((var_17 ? (arr_2 [1]) : var_13)))), (~0)));
                var_39 = -var_3;
                var_40 = 3538;
            }
        }
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            var_41 = var_11;
            var_42 = -var_9;
            var_43 = (min(((((var_14 < -32762) >= 87))), ((-var_1 << (var_2 - 26184)))));
        }

        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_44 = (max(var_44, (((~((((((314460773 ? 65519 : var_5))) && (arr_12 [i_2 + 1])))))))));

            /* vectorizable */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                arr_65 [i_2] = -1417780508;
                var_45 = ((21156 ? 7724 : -32758));
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_46 -= (arr_51 [23] [i_17 - 1] [i_17 - 1]);
                            arr_71 [i_2 - 1] [i_2 - 1] [10] [i_18] [i_18] = (arr_16 [i_19] [i_16] [i_19] [i_18]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_20 = 1; i_20 < 23;i_20 += 1)
            {
                arr_74 [i_2 + 1] [i_16] = (!var_14);
                arr_75 [i_2] [i_2] [i_2] = -var_5;
                var_47 = (!var_18);
                var_48 = (5655965610706243491 >> 0);
            }
            for (int i_21 = 1; i_21 < 21;i_21 += 1)
            {
                var_49 = ((var_9 | (arr_2 [i_2])));
                arr_79 [i_16] = ((var_8 == ((-11307 ? 1 : var_1))));
                arr_80 [i_2] [i_2] [i_2] &= (arr_53 [i_2] [i_2] [i_21 + 3] [i_2]);
                arr_81 [i_2] [i_16] [i_16] [i_16] = ((-(((var_17 & 0) ? var_10 : ((min(var_0, var_4)))))));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 23;i_23 += 1)
                    {
                        {
                            arr_87 [i_23 - 2] [i_16] [i_16] [10] [1] [i_16] [i_2] = var_11;
                            arr_88 [i_23 - 2] [i_21] [i_16] [i_2] = (min((((-7732 + 2147483647) >> (28242 - 28237))), (--395312335)));
                            arr_89 [i_2] [i_16] [3] [i_22 - 1] [i_22 - 1] [3] [i_2] = (min((((arr_69 [i_22 - 1] [i_2 - 3]) / var_15)), (((!(!var_17))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_24 = 1; i_24 < 15;i_24 += 1)
    {

        for (int i_25 = 1; i_25 < 1;i_25 += 1)
        {
            var_50 = var_18;
            var_51 = ((((min((arr_92 [i_24] [i_24]), (var_12 && 0)))) || ((!((min(65509, 6806900921311413717)))))));
        }
        for (int i_26 = 1; i_26 < 1;i_26 += 1)
        {
            var_52 = 255;
            arr_99 [i_26] [i_26] [i_24] = ((!(arr_48 [i_26 - 1] [16] [16] [i_24] [i_24])));
            var_53 = ((min(var_18, (arr_94 [i_26 - 1] [i_26 - 1] [i_26 - 1]))));
            var_54 ^= (((((((arr_83 [i_24] [i_24] [i_24] [23]) ? var_13 : (arr_68 [i_24 + 1] [i_24 - 1] [i_24 + 1]))))) ? (arr_77 [i_24] [i_24] [i_24]) : (min(3272768628023714433, ((min(0, 1)))))));
        }
        var_55 = ((((!(var_6 | var_4)))));
    }
    for (int i_27 = 0; i_27 < 19;i_27 += 1)
    {
        arr_104 [5] [i_27] = ((3072 ? (arr_58 [20] [i_27]) : (!var_0)));
        var_56 = ((((((1666775656 ? var_9 : 28877)))) ? 45070 : 1));
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 0;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 19;i_29 += 1)
            {
                {
                    var_57 = (min(var_57, (((-var_15 ? ((min(-1, (min((arr_62 [i_27] [i_28] [i_29]), var_2))))) : ((min(0, 32758))))))));
                    var_58 = ((((var_10 ? var_7 : ((var_18 ? var_14 : var_7)))) != (arr_28 [i_27] [i_28])));
                    arr_111 [i_27] [i_27] [i_27] [i_27] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
