/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = ((~(arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = 107;
                    var_17 = (min(var_17, ((max(((~(~var_7))), (arr_5 [i_1]))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = max((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [5]))), (~0));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_15 [i_3] [1] = (arr_13 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [i_3] [i_4 + 1] [i_3] [i_5] [i_6] = (((arr_13 [i_3] [i_4 - 1]) - (arr_22 [i_3] [i_3] [13] [13] [17] [i_6])));
                        arr_25 [10] [i_3] [4] [2] [4] [10] = ((~(!4147349377)));
                        var_18 = ((909077710 ? 2 : -92));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_7] [i_4] [i_5] [i_3] [i_5] = ((~(arr_11 [i_3])));
                        var_19 |= (((max((arr_12 [i_4]), (min(var_12, (arr_26 [i_7 + 2] [14] [i_7] [i_7 - 1] [22] [i_7]))))) * ((((arr_13 [i_3] [i_5]) - (var_1 - 16))))));
                        arr_29 [4] [18] [4] [4] [i_3] [18] = ((((min(var_9, (arr_11 [i_3])))) ? (((arr_11 [i_3]) ? (arr_11 [i_3]) : (arr_11 [i_3]))) : (arr_11 [i_3])));
                        var_20 |= (arr_26 [1] [i_4 + 2] [i_7] [i_5] [i_7] [1]);
                    }
                    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_8 - 2] [i_4] [i_5] [i_3] [1] [9] = (arr_14 [i_3] [i_4 + 3]);
                        var_21 = ((((-(arr_21 [i_8] [i_5] [i_4] [i_4] [i_3] [i_3]))) - (arr_18 [i_5] [i_3])));
                        var_22 = (((((~(arr_21 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 2] [14] [i_4 + 1])))) ? ((((!(arr_30 [20] [i_4 + 3] [i_4 - 1] [i_4 - 1]))))) : ((9223372036854775807 ? 2738187361005588828 : 9223372036854775807))));
                        var_23 = (arr_13 [i_3] [i_3]);
                    }
                    arr_33 [i_3] [i_3] [i_3] [i_5] = (((arr_26 [i_4 - 2] [i_4 + 2] [i_3] [i_3] [i_4] [i_3]) % (arr_12 [i_4 + 1])));
                }
            }
        }
        arr_34 [i_3] [i_3] = (arr_23 [i_3] [i_3] [18] [i_3]);
        arr_35 [i_3] [22] = (arr_16 [i_3]);
    }
    var_24 = ((+(((!var_2) % (~53901)))));
    var_25 = var_1;
    #pragma endscop
}
