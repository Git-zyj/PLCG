/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [18] = (max(-520783071, 0));
        arr_3 [i_0] [i_0] = ((((max(var_15, (max(160, (arr_0 [i_0] [i_0])))))) ? ((((arr_1 [i_0]) * 0))) : var_3));
        var_17 = ((+(max(((max((arr_1 [i_0]), 2047))), (-6390872230002020254 + var_16)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 = (((!3019833563) * (var_9 != 148)));
        arr_8 [i_1] = ((((1 ? var_15 : 1)) < (((((arr_6 [i_1]) > -43))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_19 = ((((arr_1 [i_2]) ? var_14 : var_11)));
            arr_14 [i_2] = (arr_7 [i_3]);
            var_20 = (((((arr_4 [i_3]) < 1)) ? 1275133733 : var_2));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_4] = (((arr_9 [i_2]) ? (arr_12 [i_4]) : (max((((42 * (arr_10 [i_4])))), (1 ^ var_2)))));
            var_21 = ((528482304 >> (((min((max((arr_10 [i_2]), (arr_15 [i_2] [i_2]))), (arr_5 [i_2] [i_4]))) - 8003774223217740288))));
            arr_18 [i_2] [i_4] = var_3;
        }
        var_22 = (((((((var_9 < (arr_16 [i_2] [i_2])))) >= (!208))) ? (((((-31 >= var_6) || (18446744073709551615 < -11858))))) : (min((min((arr_16 [i_2] [i_2]), (arr_15 [i_2] [i_2]))), (arr_1 [1])))));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                {
                    arr_23 [i_2] [i_5] [i_6 - 2] [i_5] = 1;
                    var_23 = var_10;
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    var_24 = ((8054942080210211740 < (((((arr_16 [i_2] [i_2]) < 65535))))));
                    arr_32 [i_8] [i_2] = 1472;
                    arr_33 [i_8] = ((-(arr_28 [i_7 + 1] [i_9 - 1] [i_8 - 1])));
                    arr_34 [i_2] [i_7] [i_8] [i_9] = ((!(arr_27 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2])));
                }
                var_25 = (arr_30 [i_8] [i_7] [i_7] [5]);
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_43 [i_2] [i_7] [i_7] [i_10] [i_11] [i_12] [i_12] = ((((arr_38 [i_2] [i_7] [i_10] [i_12 - 1]) < var_15)));
                            arr_44 [i_2] [i_7] [i_10] [i_11] [i_12] [i_10] = (((-(arr_4 [i_11]))));
                            arr_45 [3] [i_7] [i_10] [i_11] [i_12] = (arr_36 [i_7 + 1]);
                        }
                    }
                }

                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    var_26 = ((((-(arr_10 [i_2]))) / (44 & 87)));
                    var_27 = (arr_9 [i_2]);
                    arr_50 [i_2] [i_7] [i_7] [i_7] = 4051153883;
                }
            }

            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_59 [i_2] [i_15] [i_14] [i_15] [i_2] = (((((var_5 ? 15657 : var_5))) >= 65527));
                            arr_60 [i_16] [2] [i_14] [i_7] [i_2] = (var_9 * var_14);
                            var_28 = ((((((arr_12 [i_2]) ^ var_4))) || (arr_37 [i_2] [i_7] [i_15] [i_16])));
                            arr_61 [i_16] [i_15] [i_14] [i_7] [i_2] = (arr_40 [i_2]);
                        }
                    }
                }
                var_29 = (((arr_24 [i_7 + 2] [i_7 - 1]) < 1));
            }
            for (int i_17 = 1; i_17 < 9;i_17 += 1)
            {
                arr_65 [i_7] = (((var_9 - var_10) ? (((243813406 ? (arr_35 [i_2] [i_7] [i_17]) : var_3))) : ((var_7 - (arr_49 [i_17 + 2] [4] [i_17] [i_7] [i_2])))));
                var_30 = ((126 > ((var_9 ? 1 : var_1))));

                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {

                    for (int i_19 = 4; i_19 < 12;i_19 += 1)
                    {
                        var_31 = var_15;
                        arr_70 [8] [i_7 + 2] [i_17 + 2] [i_17] [i_7 + 2] [i_7 - 1] [i_2] = ((var_14 * (!var_8)));
                    }
                    var_32 = (((arr_20 [i_18]) ? (arr_48 [i_2] [i_2] [3] [i_2] [i_2] [i_2]) : var_8));
                }
                for (int i_20 = 0; i_20 < 0;i_20 += 1) /* same iter space */
                {
                    var_33 = (~1458555674928271078);
                    arr_74 [i_2] [i_2] = 694198200;
                }
                for (int i_21 = 0; i_21 < 0;i_21 += 1) /* same iter space */
                {
                    var_34 = var_0;
                    var_35 = 1;
                }
                for (int i_22 = 0; i_22 < 0;i_22 += 1) /* same iter space */
                {

                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        arr_81 [i_7] [i_22 + 1] [3] = ((var_1 ^ ((((arr_49 [i_2] [i_2] [i_17] [i_22 + 1] [i_23]) || (arr_51 [i_7 + 1] [i_17] [i_22] [i_23]))))));
                        var_36 = -151;
                        arr_82 [i_17 - 1] [i_23] = ((!(32749 || 1)));
                    }
                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        arr_86 [i_2] [i_2] [1] [i_2] [i_2] = (arr_58 [i_2] [i_7] [i_17] [i_7 + 1] [i_24]);
                        var_37 = arr_28 [i_2] [i_2] [i_2];
                        arr_87 [i_2] [i_7] [i_7] [i_22 + 1] = (arr_49 [i_2] [i_7 + 1] [i_17 + 2] [i_22 + 1] [i_24]);
                        var_38 = ((((63 >> (var_5 - 215))) / ((-(arr_36 [i_2])))));
                    }
                    arr_88 [i_2] [i_22] = (161 && 26);
                }
            }
        }
        for (int i_25 = 2; i_25 < 12;i_25 += 1)
        {
            var_39 = 55895;
            var_40 = (((~((-115 ? 92 : var_16)))));
            var_41 = 16;
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 11;i_27 += 1)
                {
                    {
                        var_42 = min((arr_68 [i_2] [i_25] [i_26] [i_27] [i_25 + 1] [i_25 - 1] [i_27]), ((((var_4 >> var_12) ? (arr_19 [i_27] [i_25] [i_2]) : (arr_37 [i_2] [i_2] [i_26] [i_27])))));
                        arr_97 [i_2] [i_25] = var_8;
                    }
                }
            }
            arr_98 [i_2] [i_25 + 1] = ((-1 > ((min(52, 32749)))));
        }
    }
    var_43 = var_6;
    #pragma endscop
}
