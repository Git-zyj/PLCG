/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 = ((~(arr_2 [i_0 - 1] [i_0 - 1])));
        arr_3 [i_0 - 1] = arr_1 [i_0] [i_0 - 1];
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((-((~(((!(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                        var_13 = (max(var_13, (arr_6 [i_1] [i_1])));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_14 *= (((((-(arr_7 [i_3] [i_3])))) ? ((+(((arr_15 [i_1] [i_1] [1] [21] [i_4] [i_5]) ? (arr_19 [5] [5] [i_3] [i_3] [i_3]) : (arr_8 [i_1] [i_1]))))) : (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5])));
                            arr_20 [i_1] [7] [i_3] [1] [i_1] = (((((~(arr_12 [i_1] [i_1] [i_1] [i_1])))) ? (((((~(arr_19 [11] [i_4] [i_3] [i_2] [i_1])))) ? (arr_10 [i_1] [i_1]) : (arr_4 [i_1]))) : (((arr_15 [i_1] [i_1] [14] [i_1] [7] [i_1]) ? (((arr_11 [i_2] [20] [i_3]) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_16 [23] [i_2] [i_3] [i_3] [i_3] [i_5]))) : (arr_12 [i_5] [i_3] [i_2] [i_1])))));
                        }
                    }
                }
            }
        }
        arr_21 [i_1] [i_1] = ((-((~(arr_5 [i_1])))));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_25 [5] = (~-2126808218);
        arr_26 [9] = ((~(arr_0 [i_6])));
        arr_27 [i_6] [i_6] = (((arr_14 [i_6] [i_6] [i_6] [i_6] [12] [1]) ? (arr_14 [i_6] [i_6] [i_6] [10] [i_6] [i_6]) : (arr_14 [i_6] [3] [i_6] [i_6] [i_6] [12])));
    }
    var_15 = var_8;
    var_16 = 10841278704601954131;
    #pragma endscop
}
