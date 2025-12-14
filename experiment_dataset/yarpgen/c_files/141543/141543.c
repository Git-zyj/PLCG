/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((((!(arr_5 [i_0] [i_0]))) ? ((0 | (arr_5 [i_0] [i_1]))) : (((arr_5 [i_0] [i_1]) ? var_15 : var_6))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_10 [1] [i_0] [i_0] [i_0] = (((arr_8 [i_2]) ? (arr_2 [i_1]) : -25131));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((((!(arr_4 [i_3] [9] [i_2])))) + var_11));
                        var_17 = ((-(((!((min(var_13, var_12))))))));
                        var_18 = (max(var_18, (min(((!(((~(arr_8 [i_2])))))), ((var_15 >= (arr_12 [i_3] [i_2] [10] [i_0])))))));
                        var_19 = (min(var_19, ((((arr_9 [i_0] [i_1] [i_2]) * (~-22133))))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_4] = ((var_7 / (((min(var_0, (arr_8 [i_1])))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = (((arr_14 [i_5] [1] [2] [i_0]) <= (max((arr_9 [i_5] [i_2] [i_0]), (arr_14 [i_0] [i_1] [i_1] [i_1])))));
                            var_21 = (min(var_21, ((var_13 || ((max(-96, 22135)))))));
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_22 = (((((!3629772602) ? ((min(var_10, 1661892047))) : (min(var_0, var_4)))) & var_7));
                            arr_21 [i_4] [i_2] [i_1] = ((~(((!(arr_17 [i_0] [i_1] [i_2] [i_4] [i_6]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_29 [i_8] [i_8] = var_4;
                            var_23 += (arr_4 [4] [i_2] [i_1]);
                            var_24 = ((((-1661892055 ? (arr_20 [i_1] [i_8]) : (arr_8 [i_0])))) ? (arr_0 [i_1]) : (((-(arr_14 [i_0] [i_0] [5] [i_7])))));
                        }
                        var_25 = ((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_7])));
                    }

                    for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [6] [11] [i_0] = (arr_7 [i_9] [i_9 - 1] [i_9] [i_9]);
                        arr_33 [i_0] [i_1] = ((-(~86)));
                        arr_34 [i_0] [i_1] [i_2] [2] = (min(((+((((arr_11 [i_0] [i_1]) != (arr_22 [i_0])))))), (((-1 && (((var_13 ? (arr_0 [i_1]) : var_3))))))));
                    }
                    for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_26 *= ((+((max((arr_11 [i_10 - 2] [3]), (arr_23 [6] [i_1] [i_2] [i_2] [i_10]))))));
                        arr_37 [i_0] [i_1] [i_2] [i_10 - 1] [i_10 - 1] = (min(-14781, 1661892052));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_41 [i_0] [10] = (min(var_8, (min(7802, (arr_36 [i_0] [0] [i_0] [i_0] [i_0] [1])))));
                        arr_42 [i_0] [i_0] [i_2] = (((((-1661892069 ? 134 : 18446744073709551615))) ? (((~(arr_18 [i_11] [4] [i_11] [i_11] [i_11])))) : -var_8));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_27 |= (!(arr_3 [i_0] [i_0]));
                        arr_46 [i_2] = var_1;

                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            var_28 ^= var_11;
                            arr_51 [i_0] [i_1] [i_12] [i_12] [i_13 - 1] [i_2] [i_13] = var_3;
                        }
                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            arr_54 [9] [i_14] [3] [i_14] [i_0] = min(((~(arr_27 [6] [i_1] [i_2] [i_12] [i_14] [i_14]))), (((!((max((arr_5 [0] [i_1]), var_12)))))));
                            arr_55 [i_0] [i_0] [i_0] [i_0] |= 7809;
                            var_29 = (max(var_29, -14781));
                            var_30 = (min(var_30, ((max((min(7778, var_0)), ((min(255, (arr_19 [i_14] [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 1])))))))));
                            var_31 ^= var_5;
                        }
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            arr_59 [i_0] [0] [i_2] [i_12] [i_0] = (arr_1 [i_0]);
                            arr_60 [i_0] [i_1] [i_2] [i_0] [i_0] [5] = (((arr_17 [i_0] [i_1] [7] [i_2] [i_15]) / (arr_11 [i_0] [i_1])));
                            arr_61 [i_0] |= ((-(arr_49 [i_0])));
                        }
                        var_32 -= var_8;
                        arr_62 [i_12] [i_0] [i_0] = (min(-1661892059, var_6));
                    }
                    arr_63 [i_2] [i_1] [i_0] = var_0;
                    var_33 -= (var_6 - 1232661638);
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        arr_68 [16] [16] |= ((var_4 < (((var_1 / (arr_65 [i_16] [i_16]))))));
        arr_69 [i_16] [i_16] = var_15;
        arr_70 [i_16] = (!(((-(arr_65 [i_16] [i_16])))));
        arr_71 [12] |= ((max(4294967272, (arr_67 [i_16] [10]))));
    }
    for (int i_17 = 2; i_17 < 16;i_17 += 1)
    {
        var_34 = (min(var_34, var_0));
        arr_74 [i_17] = (((min((arr_64 [i_17 - 1]), var_3)) >= (1 * 202)));
    }
    #pragma endscop
}
