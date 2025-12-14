/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 ^= ((!(arr_2 [i_0] [i_1])));
                    arr_9 [i_0] [i_1] [i_0] [8] = (arr_5 [i_2] [i_1]);
                    arr_10 [i_0] [i_2] = (max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [1]) : (arr_2 [2] [i_2]))), ((((arr_7 [i_1] [i_2]) ? (arr_7 [i_1] [i_0]) : -3083)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((0 - (arr_7 [1] [i_4]))) | (((min((arr_12 [i_4 - 2] [i_4 + 1] [10] [i_4] [i_4 + 1] [i_4 - 2]), 68)))))))));
                                arr_15 [1] [1] [4] [7] [5] [i_2] [i_2] = (arr_3 [i_0] [i_3]);
                                var_22 = ((127 ? (arr_2 [3] [i_2]) : ((((127 - 255) ? -1897052638 : ((0 ^ (arr_6 [10] [10]))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 11;i_5 += 1)
                {
                    var_23 -= (arr_13 [i_0] [i_5]);
                    arr_18 [i_5] = (var_10 * var_0);
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_24 = -var_7;
                    var_25 ^= arr_8 [i_1] [11] [i_1];
                    var_26 = var_2;
                    var_27 |= ((~(arr_21 [0] [i_1] [10] [8])));
                }
                var_28 = (((arr_1 [3] [i_1]) & (255 & 255)));
                var_29 += ((((((arr_2 [0] [i_1]) >= (arr_2 [i_0] [i_1]))))) - (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_2 [4] [4]))));
            }
        }
    }
    #pragma endscop
}
