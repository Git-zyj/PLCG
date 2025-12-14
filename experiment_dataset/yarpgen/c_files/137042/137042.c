/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_6 ? var_15 : var_10)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((((((8388607 / 4095) / 4076))) || (((var_9 ? var_10 : (var_15 | var_6))))));
        arr_5 [i_0] [i_0] = (((-(var_15 != var_6))) > var_3);
        var_17 = -3531147233113996966;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = (((var_12 / var_12) ^ (var_5 || var_8)));

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    var_19 -= (3739232129 / -32136);
                    var_20 ^= (!var_12);
                    var_21 |= ((var_12 ? var_10 : var_6));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 ^= (0 || 4100);
                        arr_15 [i_0] [i_0] [i_0] [2] [2] [i_0] [i_0] = (((var_4 && var_5) ? var_11 : ((var_9 ? var_2 : var_3))));
                        arr_16 [6] [i_2] [i_3] [i_2] [i_2] [i_1] [17] = ((var_1 ? var_6 : var_10));
                        arr_17 [i_1] [i_4] [i_4] [i_3] [i_4] = var_3;
                        arr_18 [i_3 + 1] [i_3 + 1] = var_1;
                    }
                    var_23 = (var_1 / var_0);
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_24 = ((var_10 ? var_15 : var_7));

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((var_6 || (var_12 * var_10)));
                        var_25 = (min(var_25, (((var_2 | ((var_2 ? var_1 : var_6)))))));
                    }
                }
                var_26 = (var_3 / var_9);
                arr_24 [1] [i_0] = ((var_0 ? var_5 : var_5));
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_27 |= (~var_6);
                var_28 = (~var_8);
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_35 [11] [i_1] [11] [i_1] = ((((4095 ? 4095 : 1818778859)) + (((var_10 ? var_9 : var_2)))));
                    var_29 = var_7;
                    arr_36 [i_0] [1] [i_8] [1] = (((var_6 % var_9) ? (!var_2) : var_7));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    arr_40 [i_0] [8] [8] [i_1] [i_10] = var_11;
                    arr_41 [i_10] [i_1] [i_1] [i_8] [i_8] [i_8] = -61440;
                    var_30 = ((var_6 ? (var_8 / var_12) : -var_8));
                    arr_42 [i_10] [i_10] [i_10] [13] = var_2;
                    var_31 = (((var_13 != var_11) || (((var_2 ? var_1 : var_5)))));
                }
                var_32 *= (((var_11 < var_15) | var_12));
            }
            var_33 += var_3;
            var_34 = (!555735166);
        }
        var_35 = (((((var_2 ? var_8 : var_10))) ? ((max(var_8, var_2))) : (max(-26524, 1718918131211844635))));
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_36 = (max(var_36, (var_15 - var_4)));
                        var_37 &= (var_15 != var_14);
                        var_38 = -var_0;
                    }
                    for (int i_15 = 3; i_15 < 14;i_15 += 1)
                    {
                        arr_55 [i_12] [i_13] [i_15] = (min(((((var_3 ? var_8 : var_12)) * var_2)), ((((var_8 || var_13) != (var_4 - var_11))))));
                        arr_56 [i_11] [i_11] [i_11] [i_12] [10] [i_15] |= (((var_5 ? var_4 : var_11)));
                        arr_57 [i_11] [i_12] [i_15] = (min((max(var_7, var_1)), ((var_8 ? var_14 : ((var_11 ? var_7 : var_5))))));
                    }
                    var_39 = 21687;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_40 |= (min(((max((var_7 && var_11), var_13))), ((((min(var_13, var_9))) & ((var_12 >> (var_8 + 1965116759780409132)))))));
                                arr_62 [i_11] [8] [i_11] [8] [i_16] = (((var_10 * var_5) > ((var_10 ? var_9 : var_14))));
                            }
                        }
                    }

                    for (int i_18 = 2; i_18 < 14;i_18 += 1)
                    {
                        var_41 = (max(((((231 << (555735160 - 555735155))))), 555735167));
                        var_42 ^= (126 ? (var_14 | var_8) : (((1 ? 560780176 : 4095))));
                    }
                    var_43 = ((((min((~61440), 0))) & 3530970593));
                }
            }
        }
        var_44 = ((((var_9 * var_5) ? var_5 : (var_7 >> var_14))));
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        var_45 = ((min(var_12, var_8)));
        arr_70 [i_19] = (min(((var_9 ? var_4 : var_11)), ((((max(var_3, var_14))) >> (var_7 - 809867176845360864)))));
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {
        arr_73 [i_20] = (((var_11 / var_14) ? ((2717729921 >> (555735166 - 555735164))) : (((min(var_15, var_5))))));
        var_46 = (1511056345 << (1577237374 - 1577237374));
    }
    #pragma endscop
}
