/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (((((arr_6 [3] [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_0] [i_1 - 1] [i_1]) : 41)) >> (((arr_6 [1] [i_1 - 1] [i_2]) - 9259929183488578384))));
                    arr_9 [i_0] [i_0] [i_2] = (max((((!(arr_1 [i_0 - 1])))), (((var_4 + 2147483647) >> (((arr_1 [i_0 + 2]) - 191))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_11 = (min(var_11, (arr_16 [i_3] [i_3] [i_5])));
                    arr_20 [i_5] = ((-123 != (((-1 < (((2629625040 & (arr_16 [i_3 + 1] [i_3 + 1] [i_3])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_29 [i_5] = (min(var_7, (min((arr_28 [i_6] [i_7 + 2] [i_7] [i_7] [i_7] [i_7]), (arr_28 [i_3] [i_7 + 1] [9] [i_7] [i_7 + 1] [i_7])))));
                                arr_30 [i_3] [i_5] [i_5] [i_6] [i_7] = (max(7072, (arr_14 [i_3 + 2] [i_6])));
                                var_12 = (min(var_1, -var_2));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        arr_38 [i_8] [i_8] [i_8] = var_1;
                        arr_39 [10] [0] [i_8] [i_9] [i_8] [i_10] = (arr_23 [i_3 - 2] [i_8] [i_9 - 3] [i_8]);
                    }
                    var_13 ^= (arr_33 [i_8 + 3] [6]);
                }
            }
        }
        var_14 = ((524272 >> (2561623574 - 2561623545)));
        arr_40 [i_3] = ((((var_0 / (((arr_34 [i_3] [i_3 - 2] [i_3]) ? var_6 : (arr_37 [9]))))) % (((-(arr_27 [8] [10]))))));
    }
    var_15 = (max(var_15, var_6));
    #pragma endscop
}
