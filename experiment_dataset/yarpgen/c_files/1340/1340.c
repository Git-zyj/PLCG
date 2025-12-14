/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (-var_4 ? (!var_6) : ((~(!var_0))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = var_8;
            var_14 = ((!((max(var_6, var_6)))));
            arr_6 [i_0] [i_1] = ((-(~var_4)));
        }
        arr_7 [i_0] = ((-(((!(!var_6))))));
        var_15 = (max((min(var_5, var_8)), (max(var_11, var_5))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (!(((var_10 ? var_10 : var_2))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = ((-(((!var_1) >> (((1 * 108) - 106))))));
                                arr_26 [i_2] [i_2] [i_3] [i_4] [i_5] [i_6] [i_6] = ((((((var_3 / var_9) - ((min(var_1, var_11)))))) ? (!var_8) : -var_6));
                                var_17 = (((!22) || ((max(var_6, var_7)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_31 [i_2] [i_3] [i_4] [i_7] [i_8] = ((~((var_3 >> (((~var_9) + 1379834286))))));
                                arr_32 [i_8] [i_3] [i_4] [i_7] [i_8] [i_4] [i_2] = ((((min(var_5, var_5) & var_11))));
                                var_18 = ((((min(var_8, -var_3))) ? (!-var_11) : (var_6 != var_1)));
                                arr_33 [i_2] [i_7] [i_4] [i_3] [i_3] [i_2] = ((-(var_0 & var_8)));
                                var_19 = ((1 / 233) ? ((((min(var_6, var_11))) ? (198 * 17908899051744290736) : (100 / 147))) : ((min(-var_4, (min(var_9, var_11))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((max(var_0, var_6)) > (!var_8)))) <= (!1066955555)));
                                var_20 = (min(-var_2, (((!(!var_1))))));
                                var_21 = ((-(((!1135928579) ? var_9 : (min(var_3, var_9))))));
                            }
                        }
                    }
                    arr_40 [i_2] [i_3] [i_3] [i_2] = var_2;
                }
            }
        }
        arr_41 [i_2] [i_2] = (!(min((!var_11), (!var_1))));
        var_22 = (+(((!((((var_6 + 2147483647) << (var_5 - 1930281748736906032))))))));
        var_23 = -var_8;
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 9;i_14 += 1)
                {
                    {
                        arr_52 [i_11] [i_12] [i_12] [i_13] [i_13] [i_14] = (var_11 || var_4);

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_24 = (!var_9);
                            var_25 = ((!(~var_9)));
                        }
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            arr_58 [i_16] [i_16] [i_14] [i_13] [i_12] [i_11] = (!var_5);
                            var_26 = (!var_7);
                            var_27 = (!var_11);
                        }
                    }
                }
            }
            var_28 = (!var_0);

            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 3; i_19 < 10;i_19 += 1)
                    {
                        arr_68 [i_18] [i_12] [i_12] [i_17] [i_18] [i_19] = (!var_3);
                        var_29 = ((!(!var_8)));
                        arr_69 [i_11] [i_12] [i_17] [i_18] [i_18] = (!var_0);
                        arr_70 [i_11] [i_12] [i_17] [i_18] [i_18] = ((var_1 ? var_7 : var_1));
                    }
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_30 = ((-(var_11 ^ var_6)));
                        arr_73 [i_18] [i_12] [i_12] = (!var_0);
                        var_31 = (~var_10);
                    }
                    arr_74 [i_11] [i_18] [i_12] [i_17] [i_18] [i_18] = -var_1;
                }
                for (int i_21 = 4; i_21 < 10;i_21 += 1)
                {
                    arr_78 [i_11] [i_12] [i_17] [i_21] = (var_4 <= var_6);
                    var_32 = var_10;
                }
                arr_79 [i_11] [i_12] [i_17] [i_17] = var_6;
            }
            for (int i_22 = 0; i_22 < 11;i_22 += 1) /* same iter space */
            {
                arr_84 [i_11] [i_12] [i_22] = (var_2 ? var_6 : var_0);
                var_33 = (var_7 > var_6);
            }
            for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
            {
                arr_87 [i_12] [i_12] = var_10;
                arr_88 [i_11] [i_11] [i_11] [i_11] = var_8;
            }
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 10;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    {
                        var_34 = ((!(((var_1 ? var_10 : var_7)))));
                        arr_95 [i_11] [i_12] [i_24] [i_25] = -var_2;
                        var_35 = (var_3 || var_0);
                        arr_96 [i_11] [i_12] [i_24] = -var_6;
                        var_36 = (!var_5);
                    }
                }
            }
            arr_97 [i_11] = (--54);
        }
        for (int i_26 = 1; i_26 < 1;i_26 += 1) /* same iter space */
        {
            var_37 = (!var_3);
            var_38 = (!var_10);
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 11;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 11;i_28 += 1)
                {
                    {
                        arr_107 [i_26] = (~(min((max(var_6, var_8)), (max(var_3, var_8)))));
                        arr_108 [i_11] [i_26] [i_27] [i_28] = ((-var_11 ? (!var_4) : var_3));
                    }
                }
            }
            var_39 = var_10;
        }
        arr_109 [i_11] = ((((((!(!var_7))))) != ((~((var_6 ? var_11 : var_5))))));

        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            arr_113 [i_29] [i_29] [i_29] = ((!(var_7 > var_0)));
            arr_114 [i_11] [i_29] = (min((!var_5), (min(var_7, var_5))));
            arr_115 [i_29] = ((-((max(var_3, var_10)))));
        }
    }
    var_40 = var_8;
    var_41 = var_10;
    #pragma endscop
}
