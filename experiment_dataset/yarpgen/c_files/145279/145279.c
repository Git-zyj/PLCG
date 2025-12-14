/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_1 ? var_9 : var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((((arr_1 [i_0]) ^ (((arr_0 [i_0]) ? (arr_0 [i_0]) : 11094233386011882888)))));
        arr_2 [i_0] = (((~(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 += (arr_3 [i_1]);
        var_14 ^= ((((1542127430 ? 18446744073709551612 : (arr_0 [i_1])))) ? ((var_10 ? (arr_4 [i_1]) : (max(243, (arr_4 [i_1]))))) : 245);
        var_15 = ((max((arr_0 [i_1]), -1602297814)));
        var_16 = (min(var_16, (((((!(arr_1 [i_1]))) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_2] [i_2] = (((-(arr_1 [i_2 - 1]))) ^ (arr_1 [i_2 + 1]));
            var_17 = ((!(arr_4 [i_1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_3] [i_4] = (arr_14 [i_2 + 1] [i_2] [i_2]);
                        var_18 = (max(var_18, (((((((arr_10 [i_1] [i_2 - 1] [4] [i_2 + 1]) & (arr_13 [6] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((arr_13 [12] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_10 [i_1] [i_1] [8] [i_2 - 1]) : (arr_10 [i_1] [i_2] [4] [i_2 - 1]))) : ((0 ^ (arr_13 [2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))))));
                        var_19 = (~(max((arr_9 [i_1] [i_2] [i_3] [i_2]), (arr_13 [i_2] [i_2 - 1] [i_3] [i_4] [i_2 + 1] [i_2 - 1]))));
                    }
                }
            }
            arr_16 [i_2] [i_2] [i_1] = (((max((arr_1 [i_1]), (arr_13 [i_2] [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) & (min(var_9, (arr_13 [i_2] [i_1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            arr_20 [i_5] [i_1] &= ((((((arr_6 [i_1] [i_5 + 3] [i_5 + 2]) ? (arr_6 [i_5 + 1] [i_1] [i_1]) : (arr_6 [i_1] [i_1] [i_5 - 2])))) ? ((((((arr_3 [i_5]) && 11090319042325843194))))) : ((-((var_1 ? 0 : 13))))));
            var_20 = (arr_18 [i_5] [i_5] [i_5]);
            var_21 = (arr_14 [i_5 + 3] [i_5] [i_5 - 2]);
            arr_21 [i_1] [i_1] [i_1] = (max(((((((var_7 - (arr_17 [i_1])))) ? (((arr_0 [i_1]) ? (arr_6 [i_1] [i_5 + 3] [i_5 - 2]) : var_7)) : (((arr_1 [i_1]) + var_7))))), (arr_19 [i_5])));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_25 [i_6] [i_1] [i_6] = (!16779);
            arr_26 [i_1] [i_6] [i_1] = (var_0 ^ -1);
        }
    }
    var_22 = var_3;
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_23 = (max(var_23, ((min((((arr_28 [i_7 - 1] [9]) ? (arr_28 [i_7 - 3] [i_7]) : (arr_28 [i_7 + 1] [i_7]))), (((~(arr_23 [i_7])))))))));

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_24 = (((((arr_5 [i_7] [i_9 - 2] [i_9]) ? (arr_5 [i_7] [i_9 + 1] [i_9 + 1]) : (arr_5 [i_7] [i_9 + 1] [i_9]))) ^ ((-(arr_5 [i_7] [i_9 + 1] [i_8])))));
                                arr_39 [i_7] = ((((-(arr_8 [i_7] [i_8])))) ? ((((var_0 ? 12 : 2795025979)))) : (min((arr_3 [i_10 + 2]), ((max(var_1, (arr_6 [i_11 + 1] [i_10] [i_8])))))));
                                var_25 ^= ((~((((((arr_3 [i_7 + 1]) ? var_10 : (arr_33 [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7])))) ? (arr_8 [i_9 + 1] [i_7 - 1]) : (~var_10)))));
                            }
                        }
                    }
                    arr_40 [i_7] [i_7] [i_7] [i_7] = ((-(max((max((arr_33 [i_7] [i_7] [i_7] [5] [i_7]), 635219504)), (arr_33 [i_7] [i_8] [i_8] [i_9] [3])))));
                    arr_41 [i_7] [i_7] [i_9] [i_7] = var_3;
                }
                arr_42 [i_8] [i_7] |= (((~(arr_3 [i_7 - 1]))));
                arr_43 [i_7] [i_8] [i_8] = (((((arr_22 [i_7 - 3] [i_7 - 3]) ^ ((min((arr_31 [i_7 - 4] [i_7] [i_7 - 1]), (arr_38 [i_7] [i_8] [i_8] [i_7] [i_7 - 4]))))))) && (((((arr_5 [i_7] [i_7] [i_8]) && 0)))));
            }
        }
    }
    #pragma endscop
}
