/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = ((-((var_13 % ((~(arr_8 [i_2])))))));
                        arr_13 [i_0] [i_2] [i_0] [i_0] [15] [1] = (((arr_10 [i_0] [i_1] [i_2] [i_3]) * (((arr_5 [i_1 + 1] [i_1 - 3]) ? (arr_5 [i_1 - 2] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 - 1])))));
                        arr_14 [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_2] [1] = (((arr_0 [i_1]) ? (773583706434747841 / var_16) : var_13));

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_19 = ((((((min(-22903, (arr_11 [i_3] [i_3] [i_2] [i_2] [i_1] [i_1])))) + 2147483647)) >> (((max((arr_4 [i_1 + 1]), var_12)) - 2772393913))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [7] = (((((((max(-98, 2147483647))) && ((((arr_16 [i_2] [i_1]) ? 733354148 : var_7)))))) == ((((var_16 || 0) > ((-(arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                        }
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            var_20 ^= (min((((arr_19 [i_3] [i_1 - 2] [13] [1] [13] [13]) ? (arr_15 [1] [i_1 + 1] [i_1 + 1] [i_3] [i_3] [1] [i_5]) : var_13)), ((((arr_15 [i_0] [i_1 + 1] [i_3] [i_0] [i_0] [i_5] [i_5]) <= (arr_16 [i_3] [i_1 + 1]))))));
                            var_21 = (max(((((((-(arr_1 [i_0])))) || 1))), (max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = (arr_7 [i_0] [i_0]);
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_22 = ((((max((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]), var_12)) >> (((-2147483647 - -2147483634) + 28)))));
        var_23 = (min(var_23, (((~(((arr_10 [i_6] [i_6] [i_6] [i_6]) | (arr_3 [i_6] [i_6]))))))));
        arr_24 [i_6] = ((((((arr_15 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6]) == (arr_9 [i_6]))) ? (arr_6 [i_6 - 1] [0] [i_6 - 1]) : (arr_23 [i_6]))));
    }
    var_24 *= ((-((((var_10 ? var_7 : var_4))))));
    var_25 = ((((var_7 ? ((var_15 ? 0 : -49)) : (max(var_7, var_17)))) * ((-2147483647 * (var_14 / var_13)))));
    #pragma endscop
}
