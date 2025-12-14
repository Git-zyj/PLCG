/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 = max(((((((-(arr_2 [i_0])))) && -var_3))), 1075410052);
        var_19 = (min(var_19, (1075410052 > 171)));
        var_20 = (max((max(1075410052, 1075410039)), ((var_7 ? (arr_0 [i_0]) : (((!(arr_2 [i_0]))))))));
        var_21 = (-(min(0, -1696546145)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = ((-1696546116 ? -1696546145 : -1075410066));
            arr_5 [i_1] [i_1] = 1335770113;
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_23 = (arr_0 [i_0]);
            var_24 = (max((((arr_4 [i_2 - 2]) - (arr_6 [i_2 - 1]))), (((var_15 > ((var_13 & (arr_6 [i_0]))))))));
            arr_9 [i_0] [i_2] [i_2 - 2] = min(var_16, (arr_6 [i_0]));
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            arr_12 [i_3] = (((+-669332864) + (max(5791538628162509359, (1075410052 % 1696546154)))));
            var_25 += (arr_4 [i_3]);
            var_26 = 1075410052;

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_15 [i_4] [i_3] [i_3] [1] = ((((~(var_13 == var_15))) & ((((((arr_3 [i_4] [2]) || 54)) && var_1)))));
                arr_16 [i_3] = (((var_4 + 2147483647) << (((((arr_10 [i_0] [5]) + (min(var_6, (arr_3 [i_0] [i_0]))))) - 237409017559342615))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                var_27 = ((17290995927442301685 ? ((43 ? 11325 : 17290995927442301685)) : 1));
                var_28 = var_16;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_29 = var_13;
                            arr_24 [8] [i_3] [8] [i_6] [i_3] [i_3] = (arr_3 [i_0] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_30 = (arr_18 [i_5 + 3] [i_5 + 3] [i_5] [i_5]);
                            var_31 = (min(var_31, (((-(((-1075410078 + 2147483647) << (((arr_28 [i_9] [i_3] [i_3] [i_3 - 3] [6]) - 8964)))))))));
                            var_32 -= (0 || 197);
                            arr_31 [i_3] = (((((var_2 / (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (17290995927442301685 * var_15) : var_16));
                            arr_32 [8] [i_8] [i_3] [i_8] [i_8] [5] [9] = ((var_6 || (arr_0 [i_3 + 2])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_33 = var_16;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        var_34 = var_11;
                        var_35 -= (((((arr_19 [i_10] [8] [i_12] [4]) + 2147483647)) >> (((arr_26 [i_10]) - 41449))));
                        var_36 = (((~var_12) << (((~152) + 176))));
                    }
                }
            }
        }
        arr_46 [i_10] [i_10] = -1075410038;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_37 = (((!var_8) && var_16));
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 21;i_17 += 1)
                {
                    {
                        var_38 = (min(var_38, (var_7 < var_1)));

                        for (int i_18 = 2; i_18 < 24;i_18 += 1)
                        {
                            var_39 = ((((arr_51 [i_14]) ? (arr_55 [i_14] [1] [i_14] [i_17] [1]) : 0)) >= var_16);
                            arr_59 [i_14] [16] [i_14] [13] [i_17] = ((arr_57 [i_18 + 1]) ? 1987313254 : var_11);
                        }
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            var_40 -= (((arr_60 [i_14] [i_19]) / (arr_56 [i_14] [i_14] [i_14] [i_14] [i_14])));
            var_41 = (min(var_41, var_8));
        }
        arr_62 [8] [12] |= (((arr_55 [i_14] [i_14] [i_14] [i_14] [i_14]) / ((-(arr_49 [20])))));
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {
        var_42 *= ((((min(var_2, (max(1075410078, (arr_51 [0])))))) ? var_7 : (((var_14 + 32768) ^ ((((arr_55 [i_20] [i_20] [i_20] [i_20] [6]) || var_0)))))));
        arr_66 [i_20] = ((max(-1696546145, -1976841285)));
    }
    var_43 -= var_3;
    #pragma endscop
}
