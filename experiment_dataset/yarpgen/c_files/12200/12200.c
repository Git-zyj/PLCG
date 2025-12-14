/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_17 = (min(var_17, ((((((var_9 ? (((arr_2 [1]) ? var_14 : var_12)) : ((~(arr_2 [12])))))) ? 6761785497398842756 : 0)))));
            arr_5 [i_0] = ((((max(((-(arr_1 [i_0]))), (!4657516171123995037)))) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_4 [6] [i_1 - 1])));
            var_18 = (((((((!(arr_2 [i_0])))) >= -var_14)) ? (((+((((arr_0 [i_0]) == (arr_3 [i_0]))))))) : (max((((var_15 & (arr_1 [11])))), (min((arr_4 [i_0] [i_1]), var_5))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 += ((-26859 ? -26859 : (~-26849)));
                    var_20 = (((arr_12 [i_2 + 1] [i_2]) * 2066713525));
                    var_21 = (((arr_6 [i_0] [i_2 - 1]) ? (arr_8 [i_0] [i_3] [i_4]) : (arr_11 [i_0] [i_0] [9] [9] [i_2 + 1] [i_3 - 1])));
                    var_22 = -37;
                    var_23 = ((arr_10 [1] [i_3] [i_3 - 1]) ? (arr_10 [i_3] [i_3] [i_3 - 1]) : (arr_7 [i_3 - 1] [i_0] [i_3 - 1]));
                }
                arr_13 [i_0] [i_2] [i_0] [i_3] = (arr_11 [i_2 - 1] [i_0] [i_2 - 1] [i_3 + 1] [i_3] [i_3]);
            }

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_2] [i_5] = (((arr_3 [i_0]) ? var_5 : (arr_23 [i_0] [i_2 - 1] [i_5] [i_0] [i_7])));
                            var_24 = (min(var_24, ((((((var_16 * (arr_0 [i_7])))) ? (arr_21 [i_5] [i_6 + 4]) : ((5434820509600056032 ? (arr_21 [8] [i_2 - 1]) : (arr_12 [12] [12]))))))));
                            var_25 = (-14 | 239);
                            arr_25 [6] [5] [i_2 - 1] [i_5] [i_0] [i_6] [i_7] = ((var_4 == (arr_21 [i_6 + 1] [i_2 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_26 = (((arr_21 [i_0] [i_2 - 1]) ? var_1 : -122));
                            arr_31 [i_0] [i_0] [i_0] [i_0] = -64;
                            arr_32 [i_0] [i_0] [i_0] [i_0] [7] = ((arr_9 [i_0]) & (arr_8 [i_0] [i_2] [i_5]));
                            arr_33 [1] [i_8] [i_5] [i_8] [i_0] &= ((1 ? (arr_0 [i_2]) : (arr_7 [i_0] [i_8] [i_5])));
                        }
                    }
                }

                for (int i_10 = 4; i_10 < 13;i_10 += 1)
                {
                    arr_37 [i_0] [i_0] [i_0] = ((var_3 ? (arr_28 [i_2 - 1] [i_2] [i_2 - 1] [i_10] [i_10]) : (arr_28 [i_0] [i_0] [i_2 + 1] [i_0] [i_10])));
                    arr_38 [i_0] [i_2] [i_5] [i_0] = 192;
                    arr_39 [i_2 + 1] [i_0] = ((~(arr_30 [i_2 - 1] [i_2 + 1] [i_10 - 2] [i_0] [i_10] [i_10 - 2])));
                    arr_40 [i_0] [i_0] [i_5] [3] [i_2] = (((arr_0 [i_10 - 3]) <= (arr_27 [i_0] [i_2 + 1] [i_0] [i_10])));
                }
                arr_41 [i_0] [i_2] [i_5] = (var_10 & var_6);
                var_27 = ((((1 ? (arr_21 [i_2 - 1] [i_2 - 1]) : (arr_0 [i_5]))) & -49));
            }
            for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_28 = ((127 & (arr_18 [i_0] [i_0])));
                var_29 = ((var_12 * (arr_8 [i_0] [i_2 - 1] [i_2])));
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            arr_55 [i_0] = (~(arr_46 [i_0] [i_2 - 1] [i_12]));
                            var_30 = (min(var_30, 54));
                        }
                    }
                }
                var_31 = (((arr_21 [i_2 - 1] [i_2 - 1]) ? (arr_11 [i_12 + 1] [i_0] [i_12] [i_0] [i_2] [i_12 + 1]) : (arr_42 [i_2] [8])));
                arr_56 [i_0] [i_0] [i_0] [i_12] = (((arr_7 [i_2 - 1] [i_0] [i_2 - 1]) * (arr_7 [i_2 - 1] [i_0] [i_2 - 1])));
            }
            for (int i_15 = 1; i_15 < 13;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            arr_65 [i_0] [i_2] [i_15] [i_0] [i_17] = (!19);
                            var_32 = (-2147483647 - 1);
                            arr_66 [i_0] [i_0] [i_15] [i_16] [i_17] = var_1;
                            var_33 = ((-127 - 1) ? 248 : 239);
                        }
                    }
                }
                var_34 = (((arr_18 [i_15 - 1] [i_0]) ? (arr_0 [i_15 + 1]) : (arr_18 [i_15 + 1] [i_0])));
                arr_67 [i_0] [i_0] [i_2] [i_15] = (arr_27 [i_2 - 1] [i_15 - 1] [i_15 - 1] [i_15]);
                var_35 = -var_1;
            }
        }
        arr_68 [i_0] = (((((((max(var_1, (arr_4 [i_0] [i_0])))) ? (max(376312866, 96)) : ((120 ^ (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? var_2 : -9223372036854775785));
    }
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        var_36 -= ((((-(arr_69 [10]))) & ((max((arr_70 [12] [12]), (arr_69 [1]))))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 19;i_20 += 1)
            {
                {
                    var_37 = ((((((arr_70 [i_18] [i_18]) / var_8))) ? ((~(arr_70 [i_18] [i_18]))) : ((max((arr_69 [i_18]), ((max(var_13, var_13))))))));
                    arr_79 [i_18] [i_20] [i_20 + 3] = ((((arr_69 [i_18]) ? (arr_69 [i_18]) : var_2)));
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 20;i_22 += 1)
                        {
                            {
                                var_38 = (arr_86 [i_18] [i_19] [i_19] [i_19] [i_18]);
                                var_39 -= var_13;
                            }
                        }
                    }
                }
            }
        }
        arr_87 [i_18] [i_18] = ((!((max(var_13, (arr_77 [i_18] [i_18] [i_18]))))));
    }
    var_40 = var_15;
    var_41 = var_8;
    #pragma endscop
}
