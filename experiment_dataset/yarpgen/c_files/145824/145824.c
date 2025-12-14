/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? ((((var_6 && var_2) != var_2))) : var_9));
    var_14 = (((13 ? ((22 ? 12189128114031036665 : 102)) : 92)) < var_11);
    var_15 = var_8;
    var_16 = (max(var_16, ((max(((((var_12 / var_0) ? (var_5 / var_7) : var_2))), var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((var_2 > ((((1 <= (11288188195277017189 <= 5610629560889269637)))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 += ((14 ? (((((max(var_2, -110))) ? (168 != 41) : 32952))) : (min((arr_11 [i_0] [i_1] [i_2] [i_3]), 11288188195277017197))));
                                var_19 += ((var_1 & ((~(arr_11 [i_0] [i_0] [i_0] [i_3])))));
                                var_20 = (arr_10 [i_0] [i_1] [i_1] [6] [i_3] [i_4]);
                            }
                        }
                    }
                    var_21 = ((!(arr_9 [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_22 = ((-13568 ? 25 : 1545607055));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_23 [1] [i_1] [1] [1] [i_1] = ((((max((arr_6 [i_0] [i_1] [i_5]), (arr_0 [i_0])))) ? var_2 : (((-(arr_6 [i_0] [3] [i_5]))))));
                                arr_24 [7] [i_1] [i_5] [i_5] [i_7] = ((var_7 ? (((((~(arr_0 [i_0]))) >> ((((var_6 << (((var_10 + 163) - 44)))) - 188438557464289863))))) : ((((min((arr_3 [i_7]), var_2))) ? var_11 : (((((arr_22 [i_7] [10] [i_5] [i_0]) < (arr_9 [2] [i_1] [i_5] [i_6])))))))));
                            }
                        }
                    }
                    arr_25 [i_5] = var_10;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_23 = ((((arr_13 [i_0]) ? ((var_0 ? var_5 : var_1)) : var_6)) >> (((((arr_26 [i_0]) ? ((var_6 ? var_10 : var_2)) : (((var_5 ? var_0 : (arr_6 [i_8] [i_1] [i_0])))))) - 18446744073709551476)));
                    var_24 -= (((var_6 && var_7) ? ((var_0 ? var_12 : (arr_16 [i_8]))) : ((((!(arr_9 [i_0] [i_0] [i_8] [i_1])))))));

                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        var_25 = ((((max(73, 72))) ^ ((((arr_11 [i_9 + 1] [i_1] [i_0] [1]) != var_9)))));
                        var_26 = (max(var_26, (((((((arr_15 [6] [i_9 - 1] [i_8] [i_8]) << (arr_11 [i_9 - 2] [i_9] [6] [5])))) ? (arr_11 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9]) : (max((arr_16 [i_9 - 1]), var_7)))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_27 = (((arr_16 [i_0]) ? (((arr_15 [i_0] [2] [i_8] [i_10]) >> var_8)) : (((((var_12 % var_7) != var_10))))));
                        var_28 = var_10;
                        var_29 = ((((((var_3 ? var_0 : var_7)) ^ ((((arr_3 [i_8]) | (arr_13 [4])))))) & (((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_8] [i_10] [i_0] [0])))))));
                    }
                    var_30 = ((((max(var_3, (arr_13 [i_8])))) ? var_4 : (((!(arr_13 [i_1]))))));
                }
                var_31 = (((!var_4) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (60 ^ 32957)));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_39 [i_13] [i_0] [i_11] [i_11] [i_1] [i_0] = (((var_8 ? var_5 : var_12)));
                                arr_40 [i_11] [i_11] [i_1] [i_11] [i_12] [i_11] [i_13] = (((arr_32 [i_13] [1] [i_0]) >= (((((var_11 - var_7) != (arr_33 [i_13] [i_13] [i_11] [i_12])))))));
                                arr_41 [i_0] [i_0] [i_11] [i_11] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
