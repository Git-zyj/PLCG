/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (max(var_1, ((var_11 << (!var_9)))));
    var_13 = ((-4 ? 3898118984 : 4));
    var_14 = ((!((((((var_9 ? var_8 : var_10))) ? (5693 != 127) : var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = ((var_8 != (!var_9)));
        var_16 = ((var_9 ? var_11 : var_1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = (3810681691 != 4);
                        var_17 *= (((((98 << (((-48 + 79) - 19))))) ? (var_8 >> var_11) : var_7));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] = (((-127 - 1) ? 5720148651379809017 : 1));
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = (!var_0);
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((var_8 * ((var_6 << (var_0 - 1827350683)))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_18 &= (var_1 / var_7);
                            var_19 = var_7;
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((((-5 ? 63 : var_6)) < 29));
                            var_20 = var_0;
                            arr_23 [i_0] [3] [i_0] [13] [i_1] = var_9;
                        }
                        var_21 = (min(var_21, ((var_9 / (var_8 & var_0)))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_33 [12] [i_8] [i_7] [12] = ((var_5 ? var_8 : var_10));

                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            arr_36 [i_0] [1] [1] [9] [i_10] = (((12561 ? 4 : -5)));
                            var_22 ^= ((var_6 << (var_10 - 205024251073571582)));
                        }
                    }
                }
            }
            arr_37 [i_7] [i_7] [i_7] = ((var_0 ? var_10 : var_5));
            arr_38 [i_7] [i_0] = (var_11 / var_4);
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_45 [6] [6] = (18 < 262016);
                arr_46 [i_12] [i_11] [14] = (~var_1);
            }
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                arr_50 [i_13] [i_11] [3] = (((var_9 + 2147483647) << (((-var_8 + 31302) - 21))));
                arr_51 [i_0] [i_0] [i_11] [i_0] = ((var_0 >> (var_8 - 31260)));
                arr_52 [i_0] [i_11] = ((var_2 >> (var_6 > var_0)));
            }
            var_23 = var_6;
        }
        var_24 = (var_10 < var_6);
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 22;i_17 += 1)
                    {
                        var_25 = (max(var_25, (((~4294705300) ? ((2430871020 >> (6430 - 6421))) : -var_6))));
                        var_26 = (127 / 719889184);
                        arr_64 [i_14] [i_15] [i_16 + 2] [i_15] = (~var_3);
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        arr_68 [i_15] [i_15] [i_15] = ((var_4 ? ((var_10 >> (var_3 < var_4))) : var_3));
                        arr_69 [i_18] [i_15] [i_16] [i_15] [i_15] [i_14] = var_9;
                        var_27 = ((((((((var_3 ? var_2 : var_2))) ? (var_4 < var_0) : (var_11 >> var_3)))) ? (max(var_3, (max(var_10, var_4)))) : (((7 ? -207685227 : -1647967849)))));
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 22;i_20 += 1)
                        {
                            {
                                arr_77 [i_15] [12] [i_19] [i_14] [i_15] [i_15] = ((~((var_10 ? var_4 : var_4))));
                                var_28 = (min(var_28, (104 + var_3)));
                                arr_78 [i_14] [i_14] [i_14] [i_14] [i_14] [i_15] = var_4;
                            }
                        }
                    }
                }
            }
        }
        arr_79 [i_14] = ((-((~(8019731701263714512 < 6993)))));
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
    {
        arr_83 [i_21] = (((var_3 - var_0) ? (!var_9) : (var_1 * var_1)));

        for (int i_22 = 0; i_22 < 24;i_22 += 1)
        {
            var_29 = ((max(-6984, 5416273749182243718)));
            arr_86 [i_21] [i_21] = ((((max(var_0, var_3))) ? var_6 : (~var_11)));
        }
        for (int i_23 = 3; i_23 < 23;i_23 += 1) /* same iter space */
        {
            arr_90 [i_23] [i_23] = (((((((9223372036854775807 ? -6454 : 0))) / var_7)) != ((((((max(-1, 1))) && var_11))))));
            var_30 = (((((!var_8) / (max(var_4, var_3))))) ? var_7 : (var_9 != var_8));
        }
        for (int i_24 = 3; i_24 < 23;i_24 += 1) /* same iter space */
        {
            var_31 = (((((((var_5 != var_3) > ((var_1 >> (var_8 - 31261))))))) & ((((var_10 ? var_11 : var_5)) / (((0 ? 1 : -98)))))));
            var_32 = var_8;
        }
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 1;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 24;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 24;i_27 += 1)
                {
                    {
                        var_33 = var_5;
                        var_34 -= var_0;
                        var_35 = (((var_1 < var_10) < ((var_9 ? var_5 : var_10))));
                    }
                }
            }
        }
        var_36 -= ((var_0 < (var_2 / var_3)));
    }
    for (int i_28 = 0; i_28 < 22;i_28 += 1)
    {
        var_37 = (min(var_37, (((((((max(var_3, var_5)) - var_1))) ? ((var_9 ? ((var_5 >> (var_8 - 31281))) : (var_3 & var_3))) : var_8)))));
        var_38 = var_2;

        for (int i_29 = 0; i_29 < 22;i_29 += 1)
        {
            arr_105 [i_29] [i_29] [i_28] = (((0 < var_0) << (-98 + 117)));

            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {
                var_39 = (max((10427012372445837103 >> 0), (var_11 != var_1)));
                var_40 = (min(var_40, (max((((((max(-101, -41)))) / var_0)), (((!(((var_10 ? var_4 : var_8))))))))));
            }
            for (int i_31 = 3; i_31 < 20;i_31 += 1)
            {
                var_41 *= var_2;
                var_42 &= var_1;
            }
        }
    }
    #pragma endscop
}
