/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(var_5, (min(var_11, var_3)))) & var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((-(arr_4 [i_0] [i_0]))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_9 [12] [i_1] [i_0] [12] = (((((17981638938657652136 >> (131056 - 131040)))) || (((var_5 % (arr_2 [i_0] [8] [i_2]))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] = ((((arr_10 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]) | 131056)) & (0 || var_7));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                    }
                    arr_14 [2] [2] [2] = (((var_11 || 1) > (arr_7 [i_0])));
                    arr_15 [i_0] [i_1] [i_1] = (!var_5);
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_4] = -42;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_5] = ((~((((((arr_24 [i_0] [i_0] [i_0]) > (arr_11 [i_0]))) || ((min((arr_1 [i_5] [i_0]), (arr_1 [i_0] [i_0])))))))));
                                arr_26 [i_0] [i_0] [i_4] [i_0] [i_0] = (((((min(var_8, var_5)) * ((((arr_19 [i_0] [i_4] [i_4] [i_6]) / 30884)))))) ? ((((-3463294705432605790 ? (arr_24 [i_5] [i_4] [i_0]) : var_4)) / (min((arr_0 [i_0] [i_0]), var_5)))) : ((((((min(235, (arr_6 [i_6]))))) * (var_2 / var_8)))));
                                arr_27 [i_0] [i_1] [i_4] [i_0] = ((((min((arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1]), ((((arr_19 [i_0] [i_1] [i_0] [i_1]) - 1)))))) && ((!(((~(arr_21 [i_0]))))))));
                                arr_28 [i_6] [i_6] [i_6] [i_0] [i_6] = (arr_17 [i_4] [i_1] [i_4] [i_4]);
                            }
                        }
                    }
                    arr_29 [i_0] = (((var_5 ^ -19) & (((~((~(arr_22 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1] [i_4]))))))));
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    arr_32 [0] [i_1] = (var_9 % var_7);
                    arr_33 [i_0] = (-25 / var_6);
                    arr_34 [i_0] = (var_4 | 11474);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_42 [i_0] [i_0] [i_7] [i_8] [i_9] [i_8] = (arr_23 [i_0]);
                                arr_43 [i_0] [i_0] [i_0] [i_9] [i_0] = var_9;
                                arr_44 [i_0] [i_1] [i_0] [i_0] [i_9] = 11;
                                arr_45 [i_7] [i_9] [i_0] [i_8] [i_8] = 13258414291561752326;
                                arr_46 [i_9] [i_0] [i_0] [i_7] [i_0] [i_0] = ((!(((min(var_5, 9223367638808264704)) < var_6))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_50 [i_0] [i_1] [i_1] = (((-var_2 + 2147483647) >> ((((((9223372036854775807 / (arr_24 [i_0] [i_0] [i_10])))) && ((min(0, (arr_0 [i_0] [i_0])))))))));
                    arr_51 [i_0] [i_1] [i_0] [i_1] = ((min((((arr_0 [i_10] [i_0]) >> (var_3 - 17670760560069948556))), (min(-25, 18446744073709551615)))));
                    arr_52 [i_0] [i_1] [i_0] = (min((var_6 & var_10), (((var_4 > (arr_4 [i_10] [i_0 + 1]))))));
                }
                arr_53 [4] [i_1] = var_2;
            }
        }
    }
    #pragma endscop
}
