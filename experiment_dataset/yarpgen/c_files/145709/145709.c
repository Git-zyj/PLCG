/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((9223372036854775807 - var_8) >= (((min(var_2, 65535)))))))));
    var_13 = var_2;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 -= arr_7 [i_0] [i_0] [18] [i_0] [i_0] [i_0];
                        arr_11 [1] [i_2] [0] [1] = (((arr_10 [i_3] [i_2] [i_1]) ? ((((((var_4 / (arr_10 [i_0] [i_0] [i_0])))) || (((-(arr_1 [i_3]))))))) : (((((arr_1 [8]) >= (arr_10 [3] [i_3] [i_3])))))));
                    }
                }
            }
            var_15 += min(1, var_3);
            var_16 = (min(var_16, ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 3]) : var_2)) / ((min((arr_5 [i_0 + 4] [i_0 + 3] [i_0] [i_0 - 1]), (arr_2 [i_0 + 2])))))))));
            var_17 = (((arr_2 [i_1]) * (((arr_1 [i_0]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_1])))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_14 [14] [i_0 + 3] [i_4] = (((((arr_8 [i_0 + 4]) + (arr_8 [i_0 - 1]))) / ((((arr_9 [i_0] [i_4] [i_0 + 4]) | (arr_1 [i_0 + 4]))))));

            /* vectorizable */
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                var_18 = (((((arr_10 [i_0] [i_0] [i_0]) * (arr_16 [i_0] [i_5 + 2] [i_5 - 1]))) < (arr_16 [i_0 + 4] [i_4] [i_5 - 1])));
                var_19 = 65529;
                var_20 = (min(var_20, ((1 >= (((arr_0 [i_0]) << (((arr_2 [i_0]) - 1413))))))));
                var_21 -= ((-(((arr_2 [i_0]) - var_1))));
                arr_17 [i_0 + 1] [i_4] [i_5] &= (65535 && var_2);
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                arr_21 [i_6] = ((((((-(arr_19 [i_0] [i_4] [i_4] [i_6 - 3]))) + 9223372036854775807)) << (((-var_3 + 187) - 18))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_22 = (arr_0 [i_0]);
                            var_23 = ((-((-(arr_1 [i_7])))));
                            var_24 = (arr_9 [i_6] [i_6 - 2] [i_6 - 3]);
                            var_25 = (max(var_25, (((((var_9 ? (arr_7 [i_0] [12] [9] [i_0] [i_0 + 3] [0]) : 0)) <= (arr_25 [i_0 + 2] [i_4]))))));
                        }
                    }
                }
                var_26 = (arr_6 [i_4] [21] [i_4] [i_4]);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    var_27 = (~var_4);
                    arr_31 [i_0] [i_0] [i_9] [i_9] [i_10 - 3] = (max((arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_9] [i_10]), ((max((arr_7 [i_0] [i_0] [i_0] [i_0 - 2] [i_10] [14]), (arr_7 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_10 - 2]))))));
                    var_28 = (max(var_28, ((((min((min(var_9, (arr_28 [i_0 + 4] [i_4] [i_9] [i_10] [i_10]))), 1536)) - (((arr_13 [i_0] [i_4]) ? (arr_12 [i_0 - 4] [i_9] [i_9]) : var_5)))))));
                    var_29 = (min((max(var_7, (arr_10 [i_0] [i_4] [i_9]))), var_0));
                    var_30 = ((-(arr_8 [i_4])));
                }
                var_31 = (arr_1 [i_4]);
            }
            arr_32 [i_4] = ((-(arr_9 [i_0] [15] [i_0])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            arr_36 [i_0] = 192;
            arr_37 [i_0] [22] = ((~((~(arr_0 [3])))));
            arr_38 [i_11] [i_0] &= (((arr_4 [i_0] [i_11] [i_11]) <= (arr_2 [i_0 - 1])));
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                var_32 = (arr_6 [i_13] [i_13] [i_12] [i_0]);
                arr_45 [i_0] [i_12] [1] [0] = ((var_7 << (((((arr_20 [i_0]) ? (arr_10 [i_12] [i_12] [i_12]) : (arr_12 [i_0] [i_0] [i_0]))) - 12294))));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_33 += (max((max((arr_8 [i_0 + 4]), (arr_8 [i_0 - 2]))), 137438953471));
                var_34 = 7;
                var_35 = (max(var_35, ((((~(arr_47 [i_0] [i_14])))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_53 [2] [i_0] [i_0 + 1] &= (arr_41 [i_16] [i_14] [i_12]);
                            arr_54 [i_14] [i_14] [i_14] [i_12] [i_14] = (arr_9 [i_14] [i_15] [i_16]);
                            arr_55 [i_16] [i_12] [i_15] [i_15] [i_14] [i_12] [i_0 + 1] = 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_36 = (arr_8 [i_18 - 1]);
                            var_37 ^= 65525;
                            var_38 = (min(var_38, (((((((arr_57 [i_0 - 4] [i_12] [i_17 - 1] [i_18 - 1]) ? (arr_51 [i_0 - 4] [i_0] [i_0] [i_0] [i_0 + 3]) : (arr_26 [i_17] [i_17 + 2] [i_0 + 3] [i_0 + 4])))) ? (24 * var_2) : var_1)))));
                        }
                    }
                }
            }
            var_39 = ((-((((!9223372036854775807) || ((((arr_56 [i_12] [i_12] [i_12] [i_0]) ? -12 : 32767))))))));
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            arr_73 [i_12] [i_12] [i_12] [i_12] = var_10;
                            var_40 = ((-((min((arr_1 [i_19 - 1]), (arr_1 [i_19 - 1]))))));
                            var_41 = ((~((((min(var_0, (arr_57 [i_0] [i_12] [i_19] [i_21])))) ? (arr_59 [i_0 - 3] [i_12] [2] [2] [i_21]) : (arr_64 [i_0 - 2] [i_12] [i_19] [i_21])))));
                            var_42 |= 1024;
                        }
                        arr_74 [8] [i_12] [i_12] [i_19] [i_20] = ((-(((!(((-(arr_23 [i_0] [i_0] [i_0] [i_0] [i_19] [i_20])))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 22;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                {
                    var_43 = (max(var_43, ((min(((((arr_22 [i_0] [i_22] [i_23] [i_0] [i_0] [i_23]) * 1))), (((((arr_13 [i_22] [i_23]) ? (-9223372036854775807 - 1) : 249)) | var_3)))))));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 23;i_25 += 1)
                        {
                            {
                                var_44 -= ((0 & (max(var_3, ((~(arr_64 [i_25] [i_23] [i_22 + 1] [i_0 + 2])))))));
                                var_45 = (max((((min(65529, (arr_47 [i_0 + 3] [i_23]))))), (min((max(var_3, (arr_83 [i_0] [i_22 - 1] [i_23] [i_24] [i_25]))), (arr_16 [i_25] [i_23] [i_22])))));
                                arr_88 [7] [i_22] [i_23] [i_25] [i_25] [i_25] [i_22 - 1] = var_10;
                                var_46 = ((-((((32767 & (arr_26 [i_0] [1] [i_23] [i_24])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 2; i_26 < 20;i_26 += 1)
    {
        var_47 = (arr_89 [i_26] [i_26]);
        var_48 = (min(var_48, (arr_89 [i_26] [i_26 - 1])));
    }
    for (int i_27 = 0; i_27 < 25;i_27 += 1)
    {
        arr_94 [i_27] = (max((((arr_92 [i_27]) / (arr_92 [i_27]))), (((arr_93 [i_27]) / (((arr_91 [i_27]) * var_0))))));
        var_49 &= ((((-(((arr_92 [i_27]) ? 0 : var_1)))) >> ((((~((min(var_8, var_1))))) + 43913))));
        arr_95 [i_27] = ((((min((((arr_93 [i_27]) + (arr_92 [i_27]))), (arr_91 [i_27])))) ? (((+((((arr_92 [i_27]) < (arr_91 [i_27]))))))) : (min(((((arr_93 [7]) >= var_4))), (((arr_91 [i_27]) - var_5))))));
    }
    var_50 = (max(var_7, (-var_6 / var_1)));
    #pragma endscop
}
