/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [4] [i_1] [i_1] [i_1] = var_7;
                    var_10 += ((~(var_6 && var_8)));
                    arr_10 [18] [i_1] [i_2] = -2147483644;
                    var_11 = (!-2147483647);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_3] [i_4] [5] = ((var_4 ? var_7 : var_0));
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] [i_5] = ((!(((2147483643 ? -8659 : 1631192786)))));
                            }
                        }
                    }
                    arr_21 [i_1] &= (var_8 | var_3);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_12 |= var_1;
                                arr_28 [i_1] [i_3] [i_1] = var_1;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_13 = (~88);
                        var_14 = (!var_4);
                    }
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        var_15 *= var_7;
                        arr_36 [i_0] [14] [i_8] [i_8] [i_8] [i_10] = var_7;
                    }
                    arr_37 [i_0 + 1] [i_1] [i_8] [i_8] &= (arr_23 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_1] [i_8] [i_8]);
                    var_16 = (var_4 == var_3);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_17 = ((~(((arr_5 [18] [18]) / var_5))));
                                var_18 = (max(var_18, -25217));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_19 = (max(var_19, 25226));
                        arr_52 [i_11] = (arr_5 [5] [5]);
                        arr_53 [i_1] [i_14] = (arr_25 [i_1] [2] [i_11] [i_11]);
                        arr_54 [i_0 - 2] [i_0 - 2] [4] [i_1] [i_1] [1] |= ((var_5 ? var_9 : var_4));
                        arr_55 [i_0] [i_1] [i_0] [i_14] |= (25200 >= 65535);
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        {
                            arr_61 [i_1] [i_1] [1] &= (min(25235, (!384244307)));
                            arr_62 [i_0] [i_15] [i_15] [i_15] [i_16] = ((min((min(var_1, var_0)), ((max(var_0, var_2))))) ^ ((((~0) ? var_0 : (~-20)))));
                        }
                    }
                }
                arr_63 [i_0] = (min(7412037021687887963, 7));
            }
        }
    }
    var_20 &= var_8;
    var_21 = (((!var_5) <= var_2));
    var_22 &= (((var_5 + 2147483647) >> ((((((min(var_7, var_8))) ? ((var_9 ? var_5 : var_6)) : var_4)) + 1063204815))));

    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_70 [i_18] = var_7;
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    {
                        arr_77 [i_17] [i_19] [i_20] = 15;
                        arr_78 [i_19] = var_6;
                        var_23 = (min((((~var_2) ? var_3 : 2147483643)), ((((!var_5) ? 52069 : var_2)))));
                    }
                }
            }
            var_24 = ((((min(-104, (!var_9)))) ? (min((!1), var_8)) : -80));
        }

        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            var_25 = (!23051);
            arr_81 [i_17] [i_17] [i_21] = var_3;
        }
        /* vectorizable */
        for (int i_22 = 1; i_22 < 21;i_22 += 1)
        {

            for (int i_23 = 4; i_23 < 21;i_23 += 1) /* same iter space */
            {
                arr_88 [17] [i_22] [i_23] = var_7;
                var_26 += (~1);
                var_27 = (arr_74 [i_17] [i_22] [i_17]);
                var_28 = var_5;
                arr_89 [i_17] [i_22] [i_23] = (((var_8 * 0) >= var_3));
            }
            for (int i_24 = 4; i_24 < 21;i_24 += 1) /* same iter space */
            {
                arr_92 [i_24] = ((-(arr_76 [i_17] [i_24] [i_24])));
                arr_93 [2] [i_22] |= (!var_4);
                arr_94 [i_24] [i_24] [i_24] [i_24] = (!19671);
                arr_95 [i_24] = (arr_84 [i_22 - 1] [7] [i_22 + 2] [i_24 + 1]);
            }
            for (int i_25 = 4; i_25 < 21;i_25 += 1) /* same iter space */
            {
                arr_99 [i_25] = ((!(((arr_90 [i_17] [i_22 + 2] [i_25]) < var_3))));
                var_29 -= ((var_0 << (((arr_66 [i_25] [i_25 - 2]) - 15128604862937662607))));
                arr_100 [3] [i_22] [i_25] = (~35743);
            }
            for (int i_26 = 4; i_26 < 21;i_26 += 1) /* same iter space */
            {
                arr_103 [i_17] [i_17] [i_17] [i_17] = (~65530);
                var_30 |= var_2;
            }
            var_31 -= (--8051736892881472125);
            arr_104 [i_22 + 1] = ((~(arr_80 [i_22 + 2])));
        }
    }
    for (int i_27 = 0; i_27 < 20;i_27 += 1)
    {
        /* LoopNest 3 */
        for (int i_28 = 3; i_28 < 18;i_28 += 1)
        {
            for (int i_29 = 4; i_29 < 19;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 20;i_30 += 1)
                {
                    {
                        var_32 = var_3;
                        arr_114 [i_27] [i_28] [i_29] [i_29] [19] [i_30] &= var_7;
                    }
                }
            }
        }
        var_33 = var_9;
        arr_115 [i_27] = ((+((((var_9 % var_4) >= (max((arr_14 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]), var_7)))))));
    }
    #pragma endscop
}
