/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [4] [7] &= ((~((((var_1 ? var_2 : var_14)) ^ var_1))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_9 [4] [i_1] [i_0] = var_6;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_17 = (var_0 | var_12);
                        arr_12 [i_0] [i_0] = (var_8 || var_4);
                        var_18 = (((((-127 - 1) >= 127)) ? (((var_11 >> (var_14 - 97)))) : ((var_7 | (arr_3 [i_2])))));
                        arr_13 [i_2] [16] [i_0] = ((var_11 && (arr_0 [i_2])));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_19 *= ((((11504 * 120) ? (!var_0) : (var_3 >= var_10))) << ((((((max(39129, var_2))) << ((((var_14 ? var_1 : var_14)) - 572436782)))) - 320544747)));
                    var_20 = (max(var_13, ((((1961493719407285270 ? -10 : 4175453533557300443)) & (((var_6 ? var_13 : var_3)))))));
                    var_21 = (min(var_21, ((((((((var_12 || var_9) && (arr_3 [i_1]))))) | (((((var_1 ? var_5 : var_13))) | var_4)))))));
                    arr_16 [i_0] [i_0] [i_4] [i_1] = 32755;
                    var_22 = ((((((((var_9 ? var_7 : 508))) >= ((-127 ? 16407903136175477819 : -3))))) >= -var_2));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_1] [0] [15] = ((((var_1 | (2038840937534073803 || var_6)))) / var_12);
                    arr_21 [i_1] = (((((((max(var_6, (arr_5 [2])))) ? ((((arr_5 [16]) >= var_15))) : (var_6 / var_13)))) ? (((-1 <= var_0) ? (var_0 + var_2) : 2038840937534073804)) : (((var_7 ? ((var_1 ? 9223372036854775804 : (arr_7 [i_5] [13] [i_5] [13]))) : ((var_2 + (arr_19 [i_0] [i_0] [0]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [12] [i_5] = (((((((min(var_2, 1040384))) == (max(var_0, 3966297502))))) > var_10));
                                arr_28 [7] [11] [5] = var_13;
                                arr_29 [i_0] [i_0] [9] = (((arr_2 [i_5] [i_6 - 1]) ? (((arr_2 [i_0] [i_6 - 1]) % var_4)) : (arr_2 [i_1] [i_6 - 1])));
                                var_23 *= ((((((!(((var_2 ? var_1 : var_8))))))) / ((var_5 ? ((var_9 << (var_12 - 2223602805))) : (!var_3)))));
                            }
                        }
                    }
                }
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    arr_34 [i_8] [i_0] [i_1] [i_8] = (((~var_2) > ((((max((arr_11 [i_1] [i_1] [i_8] [6] [i_8 - 3]), 16407903136175477819))) ? ((0 ? -7884939490842858156 : 0)) : (((min(var_6, var_6))))))));
                    arr_35 [i_0] [i_1] [i_8] = (((var_14 == var_7) == ((((var_5 ? var_0 : var_9)) * ((var_6 ? var_10 : 2038840937534073796))))));
                }
                var_24 = (min(var_24, ((max((((arr_18 [i_0] [i_1] [i_1]) ? var_8 : var_11)), (((-(arr_22 [i_0] [i_0] [i_1])))))))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {

                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        var_25 |= (((arr_0 [i_1]) ? var_0 : -72));
                        arr_44 [i_10] [i_0] [i_1] [i_9] [i_10] = (((var_3 + 2147483647) << (var_1 - 572436795)));
                    }

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_26 = (arr_43 [2] [i_11] [i_1] [i_11] [4]);
                        var_27 -= ((72 ? -97 : -32755));
                        arr_47 [i_11] [i_1] = (arr_15 [i_0] [i_0] [i_0] [9]);
                        arr_48 [i_11] [i_11] [i_1] [3] [i_11] = var_1;
                        var_28 = (((arr_0 [i_1]) == var_10));
                    }
                }
            }
        }
    }
    #pragma endscop
}
