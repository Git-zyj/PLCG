/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [6] [i_1] [i_1] [i_1] = ((!((!(arr_7 [i_0 + 2] [i_0] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = ((~(arr_1 [i_0 - 1])));
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [1] = (((((arr_12 [i_4] [i_4] [i_4 - 1] [i_4] [i_1] [i_4] [i_1]) ? (arr_12 [i_4] [1] [i_4 - 1] [5] [1] [i_3] [1]) : (arr_12 [i_4 - 1] [10] [i_4 + 1] [i_3] [i_3 - 2] [i_3] [10]))) & ((((arr_12 [i_0 - 1] [3] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1]) ? (arr_6 [i_2 - 3] [i_2 - 1] [i_4 - 1]) : (((~(arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5] [i_4 - 1])))))))));
                                arr_15 [i_0] [i_1] [6] [i_3 - 1] [i_4 - 1] [8] |= ((((((arr_6 [i_2 + 2] [i_0 + 1] [i_0]) ? ((min((arr_11 [i_0] [i_0]), 15))) : (((var_7 < (arr_4 [i_2]))))))) ? 37900 : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0])));
                                var_15 = (~((~(((arr_13 [i_2] [i_2] [0] [i_2] [i_2]) + (-2147483647 - 1))))));
                                var_16 = (max(var_16, ((max((max(((((arr_10 [i_0] [1] [i_0] [i_3 + 4] [i_4 + 1]) ? var_0 : (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4])))), (min((arr_3 [i_3]), (arr_12 [i_0 + 1] [6] [i_0 + 1] [8] [i_0 + 1] [i_0] [i_0 - 1]))))), (arr_12 [i_4] [i_3 - 1] [i_3] [i_1] [i_2] [i_1] [i_0 + 1]))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((max((arr_7 [5] [i_1] [i_2 - 2]), (((((arr_0 [i_1]) ? (arr_5 [i_0] [6]) : (arr_3 [i_0]))) & ((-16 ? 27651 : 37895)))))))));
                    var_18 = (min(var_18, (((!((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_2))))))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_19 = ((~357677238) ? (((37920 / (arr_16 [i_5 - 1])))) : (((arr_21 [23]) ? (arr_18 [i_5 - 1] [i_6]) : (arr_19 [i_6] [16] [i_5]))));
            arr_22 [i_5] [i_6] = ((~(arr_17 [i_5 + 1])));
            var_20 = ((~(((!(arr_18 [i_6] [i_5]))))));
        }
        arr_23 [15] = (((arr_18 [i_5 + 1] [i_5 + 1]) >= (arr_21 [i_5])));
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_21 = (((arr_19 [i_7 + 1] [i_7 + 1] [i_7 + 2]) ? (arr_18 [i_7] [i_7]) : (((arr_19 [i_7 + 2] [i_7] [i_7 + 2]) % 27597))));
        var_22 -= arr_25 [6] [i_7 + 1];
    }
    var_23 ^= var_1;
    #pragma endscop
}
