/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_7;
    var_11 = (((min((var_9 - var_2), (var_5 - 61241))) >= (var_6 < var_3)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((!(((((arr_3 [8]) && var_1)) && (arr_8 [i_2] [i_2] [11]))))))));
                            var_13 = ((((((min((arr_4 [i_4]), 1518046138)) - (arr_10 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [1])))) ? 6 : (((((var_1 ? (arr_2 [i_2] [i_1]) : (arr_2 [1] [i_4])))) - (var_9 - var_0)))));
                            arr_14 [i_1] [i_2] [i_3] [5] = ((((min(var_5, (253 || var_4)))) & ((min(var_5, (arr_12 [i_4 + 1] [i_4 + 1] [13] [i_4] [14] [i_4 + 1]))))));
                            var_14 = (max(var_14, (((((((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) + 2147483647)) >> ((((((arr_10 [8] [i_1] [i_2] [i_3] [15]) + 252)) <= (arr_12 [i_0] [4] [4] [i_3] [1] [i_4])))))))));
                            var_15 = var_1;
                        }
                    }
                }
                var_16 = (min(var_16, ((max((max(((min(var_0, (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))), ((var_3 ? (arr_13 [i_0] [i_1] [i_2] [i_0]) : (arr_1 [i_0]))))), (arr_4 [6]))))));
            }
            arr_15 [i_0] [i_1] = arr_12 [i_1] [13] [2] [2] [i_1] [2];
            var_17 = (min(var_17, (((((min((((arr_8 [i_0] [i_1] [5]) ^ (arr_4 [i_0]))), ((((arr_3 [i_0]) >= 128)))))) ? ((-(max((arr_7 [3] [1] [i_1] [10]), (arr_2 [i_1] [i_1]))))) : (((!(((arr_10 [i_1] [i_1] [i_0] [13] [i_0]) == 62979))))))))));
        }
        var_18 = (min(var_18, ((min((((max(213, 3989439965)) - (arr_5 [i_0]))), 43)))));
        arr_16 [i_0] = (((~(arr_0 [i_0] [i_0]))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_19 ^= (arr_12 [i_5] [i_5] [11] [i_5] [i_5] [i_5]);
        var_20 = 253;

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_21 = (max(((~(min(var_3, (arr_13 [i_5] [i_5] [i_6] [i_6]))))), (arr_7 [i_6] [i_5] [i_5] [i_5])));
            var_22 = (max(var_22, ((((max(var_5, (((arr_3 [i_6]) ? (arr_21 [6] [i_6] [i_5]) : var_4)))) + ((((arr_13 [i_5] [i_6] [10] [i_6]) == (((min(var_0, var_5))))))))))));
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_23 = (max(var_23, (((~(--128))))));
        arr_26 [i_7] = ((((arr_23 [i_7]) && 43)));
    }
    #pragma endscop
}
