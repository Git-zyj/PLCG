/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 + 4] [i_0 + 1]) != var_0));
        arr_3 [8] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_0 [i_1 + 1]) * var_6));
        arr_7 [i_1 - 1] [18] = var_5;
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [0] = ((max((arr_4 [i_2 + 2]), (((arr_11 [i_2] [i_3] [i_2]) ? var_7 : var_5)))));
            arr_13 [i_2] [4] [i_2] = (((min((max(var_4, var_0)), (arr_10 [i_2 - 1] [i_2 - 2]))) != (((~(max(var_5, var_3)))))));
            arr_14 [i_2] = (((((((max(var_9, (arr_5 [19] [i_2])))) <= ((1 ? (arr_0 [i_2]) : (arr_5 [19] [i_2])))))) << (((min((arr_4 [i_2]), var_2)) - 7248497766372166762))));

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                arr_19 [i_2] [i_2] [i_4] [i_4] = (arr_1 [i_3] [0]);
                arr_20 [14] [4] [10] &= (((((var_4 ? var_5 : (arr_4 [i_2 + 2])))) ? (min((arr_4 [i_2 + 3]), var_10)) : (min((((-(arr_17 [i_2])))), (min((arr_15 [1] [i_3] [i_3]), var_2))))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_2] [i_3] [i_2] = ((var_1 ? var_2 : var_4));
                arr_25 [i_2] = (((arr_0 [i_5 - 1]) == (((var_7 ? (arr_15 [i_2] [i_3] [i_2]) : var_10)))));
                arr_26 [i_5 - 1] [i_2] [i_2] [i_2] = (!var_8);
                arr_27 [i_2] [i_3] [i_3] [i_3] = ((var_7 >= (arr_21 [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_2])));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                arr_31 [i_2] [i_3] [i_6] = var_6;
                arr_32 [i_2] = (arr_5 [i_2] [i_2]);
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {
                arr_35 [i_2] [i_3] [i_3] [i_2] = (((!(arr_30 [i_2] [1] [i_2] [i_2]))));
                arr_36 [i_7] [i_7] = ((max(var_3, (arr_5 [i_2 + 1] [i_7]))));

                /* vectorizable */
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        arr_41 [4] [4] [4] [i_8] [i_9 - 1] = ((-(arr_5 [i_8 - 2] [i_7])));
                        arr_42 [16] [16] [i_2] [16] [i_9] [i_9 + 1] = ((arr_33 [i_2] [i_2]) < var_10);
                        arr_43 [i_3] [i_3] [i_2] [i_8] [i_3] = -3099968300;
                        arr_44 [i_2] [i_2] [13] [i_8 - 1] [i_8] [i_8] = (1 | 1);
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_47 [19] [i_8 - 1] [i_2] [18] [i_2] [i_8] [18] = arr_40 [i_8 + 1] [i_8 - 2] [i_2 + 2];
                        arr_48 [i_2] [0] [i_2] [i_8] = ((-(arr_39 [i_2] [i_2])));
                        arr_49 [i_2] [18] [i_2] [12] [i_10] [11] = (arr_0 [i_2 + 4]);
                        arr_50 [i_2] [i_2] [7] [i_2] [i_3] [i_3] [i_10] = ((-(arr_33 [i_2] [i_8 + 1])));
                    }
                    arr_51 [i_2] [i_2] = (var_3 || var_4);
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_55 [i_2] [i_2] [i_7] [i_2] = (((((arr_52 [i_2 + 3] [i_2 + 1]) ? (arr_52 [i_2 + 3] [i_2 - 2]) : (arr_52 [i_2 + 2] [i_2 + 1]))) % ((var_4 << (((arr_52 [i_2 + 2] [i_2 - 1]) - 8166406430547894895))))));
                    arr_56 [i_11] [i_2] [i_2] [i_2] = (i_2 % 2 == 0) ? ((((((!var_8) ? (max(6674, (arr_4 [i_11]))) : var_5)) >> (((arr_8 [i_2]) + 1721751632454870738))))) : ((((((!var_8) ? (max(6674, (arr_4 [i_11]))) : var_5)) >> (((((arr_8 [i_2]) + 1721751632454870738)) - 2444373919307928333)))));
                    arr_57 [i_2] [i_3] [i_7] [i_11] [i_7] = (((0 <= 1) ? (((~(~var_6)))) : (max((((arr_46 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_16 [i_11] [i_7] [15]) : var_7)), ((min(13907, 1)))))));
                    arr_58 [i_2] [i_2] [1] = (1 & 1);
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    arr_61 [i_7] [i_7] [i_7] [i_7] [1] [i_2] = (min((max((arr_9 [i_2 + 1]), (((arr_0 [i_12]) ? (arr_53 [i_2] [8] [8] [i_2] [17] [i_2]) : var_2)))), (min((arr_4 [i_2 + 2]), (arr_4 [i_2 + 3])))));
                    arr_62 [i_2 + 1] [i_2] [i_7] [i_2] = ((((var_5 ? (arr_22 [i_2 - 1] [i_3] [10] [i_12]) : (arr_46 [i_2 + 2] [0] [i_3] [i_7] [i_12])))) ? (max((max(var_7, (arr_37 [i_2 + 3] [i_3] [i_7] [i_3] [i_7] [i_3]))), (arr_21 [i_2 + 4] [i_2 + 4] [i_2 + 3] [i_2]))) : (arr_33 [i_2] [1]));
                }
                arr_63 [i_2] [i_2] [i_2] = (max((((arr_30 [i_2] [i_2] [i_2] [i_3]) & var_7)), ((((min(var_3, (arr_10 [i_2] [i_2]))) >> (((min((arr_34 [i_2 - 1] [i_2 - 1] [0] [i_7]), -5625192103373996623)) + 5625192103373996648)))))));
            }
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            arr_67 [18] = min(1, 9341193372833314141);
            arr_68 [i_2] [i_2] [i_13] = ((-((var_4 ? ((((arr_4 [i_2]) ? (arr_30 [i_2] [6] [i_2] [i_13]) : (arr_8 [i_2])))) : (var_4 * var_8)))));
        }
        arr_69 [i_2] = -1;
    }
    var_11 = ((var_7 >> (((var_2 * var_0) - 2281355136005177855))));
    var_12 &= var_10;
    var_13 = var_3;
    #pragma endscop
}
