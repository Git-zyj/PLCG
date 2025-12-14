/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-var_0 ? (max(var_11, -11848686113716196118)) : (arr_3 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_1] [i_1 - 1] [i_1] [i_1] = (((arr_3 [i_1 + 1] [i_1 + 3]) ? (max(127, 8323654777607899654)) : (arr_3 [i_1 + 1] [i_1 + 1])));
                    var_12 = (max((arr_3 [i_0] [i_1]), (arr_8 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [2] [i_3 - 1] [i_3 - 1] [i_2] = ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_7 [i_4 - 1] [i_3 - 1] [i_1 + 3] [i_3 - 1])))) ? ((var_2 ? var_3 : 127)) : (arr_8 [i_4 - 1])));
                                arr_18 [i_1 + 1] [i_2] [i_3] [i_4 + 2] = ((((((arr_3 [i_1 - 1] [i_2]) ? var_5 : var_3))) && ((((arr_16 [1] [i_1 - 1] [i_2] [i_3]) ? (((var_7 ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_7 [1] [i_1 - 1] [2] [3])))) : (max(127, 6598057959993355497)))))));
                                arr_19 [i_0] [1] [9] [i_3] [0] [i_4 - 2] = (min((max((arr_13 [i_2] [i_3 - 1] [1]), ((min(24033, (arr_14 [i_0] [9] [i_2] [i_3] [i_4])))))), ((((arr_12 [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4]) / ((0 ? (arr_2 [i_1]) : (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_3 - 1]))))))));
                                arr_20 [1] [i_1] [1] [i_1] [i_1] [i_1] = (max((max(((min((arr_7 [i_0] [i_1 + 1] [i_2] [i_3]), 165456649))), 6598057959993355498)), 125));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1 + 1] [0] [i_5] [i_5] [i_6] [i_6] = (min(128, 1));
                                arr_26 [i_0] [i_2] [i_0] [i_5 + 1] = (((arr_3 [i_0] [i_1]) ? 1 : ((1 & (arr_13 [i_5] [i_2] [i_1 - 1])))));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    arr_30 [i_0] [i_7 - 2] = ((3224124271226319914 ? 6598057959993355497 : ((((((arr_0 [i_7]) ? var_10 : var_7)))))));
                    arr_31 [5] [i_1 - 1] = ((min((arr_16 [i_0] [i_1 - 1] [i_7 + 2] [i_7]), (arr_0 [i_0]))));
                    arr_32 [i_0] [i_0] [1] = (arr_6 [i_0] [i_1] [i_7 + 1]);
                }

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_35 [i_0] [i_0] [i_0] [i_0] = (var_2 || 7529);
                    arr_36 [i_0] [i_1 - 1] [i_8] = (((var_9 ? 2109002510 : var_10)));
                    var_13 = (min(var_13, (((((arr_16 [i_0] [i_0] [i_1 + 2] [i_8]) ? var_6 : (arr_2 [i_0])))))));
                }
            }
        }
    }
    var_14 = 120;
    var_15 = ((125 << (113 - 112)));

    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_16 = ((!((max((arr_38 [i_9] [i_9]), (arr_38 [i_9] [i_9]))))));
        var_17 = (min((max(var_2, (((arr_38 [i_9] [i_9]) - 18446744073709551488)))), ((((-(arr_37 [15] [15])))))));
    }
    #pragma endscop
}
