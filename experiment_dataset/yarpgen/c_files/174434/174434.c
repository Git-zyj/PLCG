/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((arr_2 [i_1 + 1] [i_1 - 3]) ? ((((((var_6 ? (arr_0 [i_0] [i_0]) : var_0))) ? 255 : (max(var_10, var_0))))) : (((((var_4 ? var_8 : var_0))) - (arr_0 [i_0] [i_1])))));
                var_16 = ((~(((arr_0 [i_1 - 1] [i_1 + 2]) & var_13))));
                var_17 += (min(11850, (max((arr_0 [i_1 + 1] [i_1 - 2]), (arr_2 [i_1 + 1] [i_1 + 2])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (((!var_13) * ((var_11 / (~var_4)))));
                    var_19 |= (~(((((~(arr_1 [i_1] [i_2])))) ? var_4 : ((var_12 ? (arr_3 [i_1]) : var_0)))));
                    var_20 = (max(var_20, ((min(((+((((arr_3 [i_1]) && (arr_2 [i_0] [i_0])))))), ((-(!var_14))))))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_21 = var_6;
                    arr_10 [i_0] [i_0] [i_1 - 1] [i_3 + 2] = (((var_11 > (arr_5 [4] [1] [1] [i_1 + 1]))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_5] [i_4] [i_5] [i_5] [i_6] = ((((var_9 == (var_11 == var_12))) || (((((min(var_7, var_4))) ? 276 : (((arr_1 [3] [i_1]) ? (arr_9 [i_0] [i_0] [i_6]) : var_5)))))));
                                var_22 = ((max(var_5, var_7)) <= (min((!-7338908924179094704), ((~(arr_9 [i_0] [i_5] [i_6 - 1]))))));
                            }
                        }
                    }
                    var_23 = ((((((~(max((arr_13 [i_4] [i_4]), (arr_0 [i_0] [i_4]))))) + 9223372036854775807)) << ((min((arr_12 [i_1 - 3] [i_1 + 1] [i_1 - 2] [i_1 - 1]), (arr_12 [i_1 + 1] [i_1 - 3] [i_1 - 1] [i_1 - 1]))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_24 = (((arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2]) >> ((((var_13 ? var_0 : var_1)) - 1066400921))));
                            var_25 = ((~(var_12 - var_13)));
                            var_26 = (max(var_26, (((~(arr_8 [i_1 - 2] [i_1]))))));
                            var_27 *= (arr_22 [i_0] [i_1] [i_1] [i_1 - 3] [i_4] [i_7]);
                            var_28 += (arr_25 [i_4] [i_1] [i_4] [i_7] [i_8] [i_8]);
                        }
                        var_29 = (~((~(arr_17 [i_7] [i_7] [i_4] [i_4] [i_1] [i_1] [10]))));
                        var_30 = -var_0;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_31 = (~((((max(var_5, (arr_4 [i_9] [i_4] [i_1])))) ? ((11853 ? (arr_24 [i_0] [i_1] [i_4] [i_9]) : var_9)) : (~var_6))));
                        var_32 = (((((((max(var_10, (arr_13 [i_1] [i_1])))) ? ((((arr_9 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_1 - 3] [6]) : 32748))) : (var_3 ^ 3471180584)))) ? (arr_14 [i_1 - 2] [i_1] [i_9] [i_1 + 1] [i_1 - 3]) : (((((((arr_7 [i_4] [i_4] [i_1] [i_4]) || var_3)))) + (arr_24 [i_0] [i_1] [i_4] [i_9])))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_34 [i_0] [i_10] [i_4] [i_11] = (arr_31 [i_4] [i_1 - 1] [i_1] [i_10 - 2]);
                                var_33 += (((((arr_25 [i_0] [i_1 + 1] [i_4] [i_10 + 1] [i_0] [i_4]) ? (arr_25 [i_0] [i_1 - 3] [i_0] [i_10 - 2] [11] [i_10 - 2]) : (arr_25 [i_0] [i_1 - 3] [i_1 - 3] [i_10 - 2] [i_11] [i_1]))) * (((!(arr_17 [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1]))))));
                                var_34 = (arr_6 [i_10] [i_4] [i_10 - 1] [i_11]);
                                arr_35 [i_0] [i_0] [i_1] [i_10] [i_10 - 2] [i_11] = (arr_2 [i_1] [i_1 - 3]);
                                var_35 = ((((min((arr_6 [i_10] [i_1 - 3] [i_1 - 3] [i_10]), (((arr_6 [i_10] [i_1 + 2] [i_10] [i_10]) << (var_11 - 1680357175)))))) ? (min((((arr_29 [i_1] [i_10] [i_11]) ? var_12 : var_7)), ((((arr_9 [i_0] [i_4] [i_10]) <= (arr_4 [i_1 - 3] [i_4] [i_11])))))) : (((var_5 % (arr_23 [i_11] [2] [i_1 - 1] [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_36 = var_5;
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] = var_8;
                        }
                        arr_43 [i_0] [i_0] [2] [2] [i_13] = (min(((((min(var_7, var_12))) ? ((var_10 ? var_12 : (arr_28 [i_0] [i_0] [i_0] [i_0]))) : ((var_14 ? (arr_36 [i_0] [i_0] [i_0]) : -646954649)))), ((min((max(var_7, var_13)), var_13)))));
                        var_37 += 11861;
                    }
                    arr_44 [i_0] [i_1] [i_12] = (max(((!((max(var_5, (arr_8 [i_0] [i_0])))))), (((((var_9 ? (arr_24 [i_0] [i_1 - 3] [i_12] [i_0]) : var_7))) >= (((arr_11 [i_0] [6] [i_12] [i_12]) ? (arr_22 [i_0] [1] [i_1 - 2] [i_1 - 3] [i_12] [i_12]) : var_4))))));
                }
            }
        }
    }
    var_38 = (min(var_38, (var_4 / var_2)));
    var_39 = var_9;
    var_40 = (max(((-var_2 / (min(var_7, 7576317853823407532)))), ((~((var_0 ? var_1 : var_1))))));
    #pragma endscop
}
