/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = ((-5148135131086964995 ? ((min((arr_3 [i_0]), -95))) : (arr_1 [i_2])));
                    var_20 = 31;
                    arr_8 [9] [17] [i_2 + 1] |= arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 2];
                    arr_9 [i_2] &= ((255 ? -5587361574370522861 : -5587361574370522836));
                }

                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    arr_13 [i_3] [20] [i_3] |= ((~((5587361574370522836 + (((!(arr_4 [i_0] [i_1]))))))));
                    arr_14 [i_1] [i_1] [i_3] [i_0] = (min(4294967295, (((~(arr_1 [i_0]))))));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_21 += ((127 ? (arr_3 [i_0]) : (arr_2 [i_0] [i_1])));
                    var_22 += (((arr_15 [i_1] [i_1]) ? 229 : (arr_15 [i_1] [i_1])));
                    arr_17 [i_0] [i_1] [i_1] &= ((-(var_7 >= -5148135131086964995)));

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_4] [i_4] [i_5 - 1] [i_5] = (((arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) + var_10));
                        var_23 = (min(var_23, ((((arr_16 [i_5 + 1]) ? var_5 : (arr_0 [i_4] [i_5 + 2]))))));
                    }
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_24 = (min(var_24, (arr_18 [i_1] [i_6] [i_1] [i_1])));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 *= ((((-5587361574370522810 ? var_3 : var_16))) > -5148135131086964995);
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1]) || (arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_26 |= ((18091633791476244517 ? 1 : 0));
                            arr_34 [i_9] [i_7] [1] [1] [i_1] [i_0] = (-5148135131086964995 <= 40593);
                            arr_35 [14] [i_1] [i_1] [i_1] [i_1] = -5587361574370522861;
                        }
                        var_27 += ((((1 ? 70368744177663 : var_10)) - 122));
                        var_28 = (min(var_28, (((var_19 ? 4294967295 : (arr_16 [i_7 + 1]))))));
                        var_29 = (min(var_29, -24));
                        var_30 ^= 2276130532282151251;
                    }
                    var_31 = (min(var_31, ((min(1, (max(((107 ? (arr_4 [i_6] [i_0]) : (-127 - 1))), (-92 && 1847950735))))))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_32 &= (((arr_2 [i_1] [i_1]) ? (arr_2 [i_0] [i_10]) : 49152));
                    arr_39 [i_0] [i_0] [3] [i_0] &= ((arr_3 [i_0]) & (!7189));
                    var_33 = (arr_33 [i_10] [i_1] [i_0] [i_0]);
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_44 [i_0] [16] [i_12] = (((((arr_43 [i_11 - 1] [i_1]) << (arr_43 [i_0] [i_0]))) - ((((~(arr_22 [i_0] [i_1] [1])))))));
                        var_34 *= ((!((!(!var_15)))));
                        var_35 ^= var_14;
                        var_36 = (((!(arr_24 [i_11 - 1] [i_12 - 1]))));
                    }
                    var_37 *= (((((118 & ((var_7 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (max((~-1), 0)) : ((min((~var_14), (arr_10 [i_0] [i_1] [i_11 - 1] [i_11 + 1]))))));
                }
            }
        }
    }
    var_38 = (min(var_38, (((var_10 + ((-(max(1, var_2)))))))));
    var_39 = (min(var_39, ((((~64) <= var_10)))));
    #pragma endscop
}
