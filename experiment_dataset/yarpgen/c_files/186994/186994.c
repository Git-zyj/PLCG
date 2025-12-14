/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 &= (!380458617729949787);
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (!0);
        arr_3 [i_0] = var_5;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = ((!(!var_11)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_2] [i_3] = ((var_8 <= ((((~2147483647) && ((min(1, 199))))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((arr_4 [i_1 + 1]) ? var_8 : var_5);

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_16 = (min(var_16, (!var_10)));
                            arr_20 [i_1] [i_2] [i_3] [i_4] [8] [i_1 - 2] = var_9;
                            var_17 = var_7;
                        }
                        arr_21 [i_4] [i_3] [i_2] [i_1 - 2] = (arr_4 [i_1 - 2]);
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_25 [i_6] [i_6] = (arr_6 [i_1 - 1]);

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_18 = var_1;
                            var_19 = 3;
                            var_20 &= (max(((var_6 ? var_9 : (arr_14 [i_6 - 1] [i_6] [i_1 + 1]))), (~-2147483647)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_10));
                                var_22 = ((!((min((((!(arr_14 [i_9] [i_2] [i_2])))), (111 / 127))))));
                                arr_34 [i_9] [i_9] [i_8] [i_3] = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_23 += (arr_0 [i_1 - 1]);
                                var_24 ^= (max(var_10, (2147483647 < 1)));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_25 = (((!var_2) || var_10));
            var_26 = 0;
            var_27 = (((arr_24 [1] [i_1 - 2] [1] [i_1] [i_1]) ? var_4 : (arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_12] [i_12])));
            arr_43 [i_12] = ((-1190250902 | (!111)));
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_28 = (max(var_28, (((var_3 == (arr_49 [i_13 + 4] [i_13] [i_13]))))));
                            arr_51 [i_1 + 1] [9] [i_1 + 1] [i_1] [i_1 - 1] = (arr_18 [0] [0] [i_13 - 2] [0] [i_15]);
                        }
                    }
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        arr_54 [i_16] = (((!205) ? (arr_53 [i_16]) : var_6));
        arr_55 [i_16] = ((((((arr_1 [i_16]) * ((-16615 ? (arr_1 [i_16]) : -2177111298566333147))))) ? (((!(arr_0 [i_16])))) : ((1 - ((3587 ? var_1 : (arr_0 [i_16])))))));
    }
    for (int i_17 = 1; i_17 < 20;i_17 += 1)
    {
        arr_59 [11] = var_3;
        arr_60 [i_17 - 1] |= ((((2003658426726524564 ? var_6 : (!4294967295)))) ? var_12 : var_6);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 21;i_21 += 1)
                        {
                            {
                                arr_75 [i_17 + 2] = ((+(max((arr_68 [i_17] [i_17 - 1]), var_3))));
                                var_29 = (min(var_29, ((((32767 || 287104476244869120) < 29816)))));
                                var_30 = (max(var_30, 1));
                            }
                        }
                    }
                    arr_76 [i_17] [1] [4] [7] = var_0;
                    var_31 = (max(((((arr_73 [19] [19] [i_17 + 1] [i_18]) || -421986687))), var_6));

                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        arr_79 [i_17] = (arr_64 [i_18] [i_17 - 1] [i_17]);

                        for (int i_23 = 0; i_23 < 22;i_23 += 1)
                        {
                            var_32 ^= (arr_61 [i_19] [i_18] [i_19]);
                            arr_82 [i_23] = ((!(arr_65 [i_22])));
                        }
                        for (int i_24 = 0; i_24 < 0;i_24 += 1)
                        {
                            var_33 = (0 + 1);
                            arr_86 [i_18] [i_18] [i_18] [i_17 - 1] |= (var_8 == 57);
                        }
                        arr_87 [i_17] [i_17] [i_17] [i_17] = (((-125 + 2147483647) << (((-1069727785 + 1069727812) - 27))));
                        arr_88 [i_17] [18] [i_17 + 2] [i_17 - 1] [i_17] &= (((((-(arr_0 [i_19])))) ? (arr_68 [i_17 - 1] [i_17]) : 2590980800953368216));
                        var_34 = 25827;
                    }
                }
            }
        }
    }
    #pragma endscop
}
