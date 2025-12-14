/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((693143455 ? (((arr_1 [i_2]) / (arr_2 [i_0]))) : (((arr_0 [i_0] [i_0]) / (arr_6 [i_0] [i_0] [i_1])))));
                    arr_8 [10] [i_2] = ((((var_3 < var_18) & (arr_0 [i_0] [4]))));
                    arr_9 [i_2] [i_2] = (((((!(-2147483647 - 1))) ? ((((arr_2 [i_0]) ? var_15 : 0))) : (min(var_16, var_16)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (max(3928348455, (((-8621988797670968652 ? 65504 : (25441 != -1024827521))))));
                                var_22 &= (((arr_1 [i_0]) ? ((((!((3928348455 && (arr_10 [i_0] [9]))))))) : (arr_5 [i_3] [i_1] [i_2])));
                                var_23 *= (max((((arr_7 [i_0] [16] [i_2] [16]) | (arr_7 [i_0] [i_0] [0] [6]))), ((min(var_10, (arr_1 [i_4 + 3]))))));
                                var_24 = (min(var_24, ((min((max((arr_11 [i_4 - 2]), var_7)), (max((arr_11 [i_4 + 4]), (arr_11 [i_4 + 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_8));

    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        var_26 = (min(var_26, var_18));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_27 = (~((~(arr_5 [19] [10] [17]))));
            var_28 = (~245159599);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_5] [i_5] = -2147483641;
            arr_26 [i_5] = ((~((((!(arr_13 [i_7] [i_7] [i_7] [19] [i_5] [20]))) ? ((var_6 ? 18446744073709551615 : var_5)) : (~var_2)))));
        }
        var_29 = 8621988797670968651;
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_30 [10] [4] |= (arr_19 [2] [i_8]);
        arr_31 [6] = ((((((max(7215902579645653909, var_3))) ? (((arr_14 [20] [i_8] [12] [i_8] [20]) / var_9)) : (~13514041671428523126))) ^ ((((((arr_18 [i_8] [0] [6]) ? var_9 : var_13))) ? var_8 : (arr_16 [1])))));
        var_30 = (arr_3 [7] [0]);
    }
    #pragma endscop
}
