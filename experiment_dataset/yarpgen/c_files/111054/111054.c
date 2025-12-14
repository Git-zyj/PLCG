/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((-((-((var_6 ? var_11 : (arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [5]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (((((((min(var_9, var_3))) > (6462363268055691954 | var_6)))) ^ ((((-(arr_0 [i_1]))) * (((!(arr_1 [i_1] [i_1]))))))));
        arr_6 [i_1] [i_1] = var_11;
        var_21 = (min(var_21, var_9));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 = max((min((arr_7 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), ((((arr_7 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_0 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_2] [i_3 - 1] = (max(((((arr_12 [15] [i_3] [i_2] [i_5]) == 6462363268055691943))), (max((((arr_1 [i_2] [i_2]) ? var_11 : -6462363268055691937)), ((min((arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_12 [i_2] [i_2] [i_2] [i_2]))))))));
                        arr_18 [i_2] [i_3] [i_2] [i_3] [i_2] = ((((arr_16 [16] [i_5] [i_4] [i_5] [i_4]) + 9)));
                        var_23 = ((((((arr_12 [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 1]) < (arr_12 [i_3 - 1] [i_3 - 1] [i_2] [1])))) >= (((((2 >> (35 - 10)))) ? ((((arr_12 [i_5] [i_2] [i_2] [17]) >= var_2))) : var_16))));
                        var_24 = (min(var_24, ((((arr_1 [i_3 - 1] [i_3 - 1]) - ((var_18 + (arr_1 [i_3 - 1] [i_3 - 1]))))))));
                    }
                }
            }
        }
        var_25 = (min(var_25, ((max((((var_15 && (arr_14 [i_2] [16])))), (max(138, (var_3 / var_14))))))));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            arr_23 [i_2] [i_6 + 1] [i_2] = var_8;
            var_26 = (((arr_16 [i_6 - 1] [1] [i_6 + 1] [i_6] [i_6 - 1]) - (((var_2 ? (arr_0 [i_2]) : 84)))));
            var_27 *= var_6;
            var_28 = (max(var_28, (arr_16 [i_2] [19] [21] [i_2] [5])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_28 [i_2] = (((arr_15 [i_2] [i_2] [i_2] [15] [i_2]) / (arr_15 [i_2] [i_7] [i_7] [7] [i_2])));
            arr_29 [i_2] [i_7] = ((~(arr_1 [i_2] [i_7])));
        }
    }
    var_29 = ((var_13 ^ (min(var_3, var_10))));
    #pragma endscop
}
