/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [2] = (min(-6944, (min((arr_3 [8] [i_0]), (((arr_1 [i_0]) / var_6))))));
                var_16 = min((max((arr_1 [i_0]), var_15)), ((((max(1700387002, var_4))) ? (1700387016 + var_15) : ((var_1 - (arr_1 [i_1]))))));
                arr_6 [i_0] = ((((max(((~(arr_4 [4] [i_1] [i_1]))), (arr_4 [i_1] [i_1] [i_0])))) ? (max((arr_0 [i_1]), var_2)) : (!var_15)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_14 [5] [i_2] [i_2] [i_3] = ((max((arr_9 [i_0] [i_1] [13] [i_2]), (arr_9 [13] [i_1] [i_2 - 1] [i_2]))));
                            var_17 = (max(var_17, ((((((+((((arr_9 [i_0] [i_1] [i_2 - 2] [i_0]) || 72057594037927935)))))) ? ((var_2 ? (min(var_12, (arr_7 [i_0] [i_1] [i_2] [i_3]))) : 109)) : (((((arr_1 [i_0]) <= var_3)))))))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_18 ^= (((1 * (arr_16 [i_0] [8] [i_4] [i_3] [i_4] [i_2 + 1] [i_4]))));
                                var_19 = (min(var_0, var_8));
                            }
                            for (int i_5 = 3; i_5 < 12;i_5 += 1)
                            {
                                arr_20 [i_0] [i_2] [i_0] [i_2] = (i_2 % 2 == zero) ? ((((min(((var_9 ? (arr_16 [i_0] [i_0] [i_2] [i_2] [8] [i_2] [i_5]) : var_13)), (!23824))) >> (((arr_9 [i_2] [i_2 - 1] [4] [i_2]) - 135))))) : ((((min(((var_9 ? (arr_16 [i_0] [i_0] [i_2] [i_2] [8] [i_2] [i_5]) : var_13)), (!23824))) >> (((((arr_9 [i_2] [i_2 - 1] [4] [i_2]) - 135)) + 161)))));
                                arr_21 [i_5] [i_2] [i_3] [6] [i_2] [i_0] = ((((((min(var_0, (arr_16 [i_0] [i_1] [i_2] [i_2 + 1] [i_2 + 1] [1] [11])))))) > (((((~(arr_10 [i_2] [8] [i_2] [i_2])))) ? var_3 : -1962241367))));
                            }
                            arr_22 [i_3] [10] [i_2] [i_2] [i_2] = ((-116 + (min(((var_5 ? 6847937869941949495 : (arr_13 [i_0] [i_1] [i_2] [i_0]))), (arr_4 [i_2 - 2] [i_2] [i_2 - 2])))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            {
                arr_27 [i_7] = ((!(((arr_26 [i_6] [i_7] [i_7]) != var_13))));

                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((((((-(((arr_16 [i_6] [12] [12] [i_6] [12] [8] [12]) ? (arr_0 [i_7]) : -72057594037927942))))) ? (((-(arr_3 [i_6] [i_6])))) : (min(((2147483647 ? var_1 : var_1)), ((min((arr_24 [i_6]), (arr_28 [i_6] [0] [10] [i_6])))))))))));
                    var_22 = (max(var_22, ((((((11598806203767602120 << (((~var_2) - 17908356931766721119))))) ? (((min(-66, -109)))) : (min(((min((arr_17 [i_6] [6] [10] [8] [6] [4]), var_0))), (max(var_9, (arr_9 [i_6] [2] [2] [6]))))))))));
                    arr_30 [i_7] = (arr_18 [i_7] [i_6]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((max((min(var_3, var_6)), 23824)))));
                                arr_37 [i_7] = ((min((((4101 ? 3104 : 1700387002))), var_10)));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            {
                                arr_48 [7] [i_7] [i_11] [4] [i_7] = ((((min((min((arr_23 [i_13]), var_2)), (arr_43 [i_6] [i_7] [i_11] [i_7])))) ? ((((!(var_10 ^ -66))))) : (arr_35 [3] [i_7 + 1] [i_7] [7] [3] [i_13])));
                                var_24 = var_4;
                                var_25 = (min(var_25, (((+((var_12 ? (arr_7 [i_7] [i_7] [i_7] [i_13]) : (((arr_42 [6] [i_7 + 1] [i_7 + 1]) | (arr_42 [9] [6] [9]))))))))));
                            }
                        }
                    }
                    arr_49 [i_6] [i_6] [i_6] [i_7] = (((((~var_5) <= 1)) ? (arr_25 [i_7]) : ((var_11 ? (min(var_11, (arr_39 [i_7]))) : (arr_47 [i_6] [i_7] [i_7])))));
                    var_26 = (max(var_26, (((((-(arr_36 [10] [10] [i_7 + 1] [i_7] [4]))) < (((!(var_3 < var_7)))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 8;i_15 += 1)
                        {
                            {
                                var_27 = (((+-1) ? (arr_2 [2]) : ((((var_13 ? (arr_40 [i_11] [i_7] [i_7]) : (arr_9 [i_6] [i_6] [i_11] [i_7]))) >> (((arr_28 [i_14] [i_7] [7] [4]) - 29167))))));
                                var_28 = (max(var_28, (arr_52 [i_6] [0])));
                                arr_56 [i_15] [i_7] [i_14] [4] [4] [i_7] [i_6] = (arr_29 [1] [i_7] [i_7] [i_14]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_11;
    #pragma endscop
}
