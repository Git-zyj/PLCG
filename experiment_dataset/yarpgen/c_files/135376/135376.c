/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((-2630481022453597957 >= var_11) == (!var_0)))));
    var_18 = ((var_1 ? -175324380 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_2])))) ? ((max((arr_1 [i_2]), (arr_1 [i_0])))) : (((arr_1 [i_1]) - (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [19] = (((var_3 | var_12) ? (((((arr_1 [i_3]) ? (arr_0 [i_2] [i_1]) : (arr_7 [i_0] [i_1] [i_0] [13]))) ^ (arr_11 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 3]))) : (arr_9 [i_0])));
                                var_20 = (((((((-(arr_5 [i_0] [i_0]))) * (arr_0 [i_3] [i_4 + 2])))) ? ((var_7 ? (var_2 * 23909) : -var_13)) : (arr_8 [i_4] [i_4 + 1] [i_4] [i_4])));
                                var_21 = ((((arr_1 [i_4 + 3]) <= -36232919)));
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] = ((((~(max((arr_10 [i_2] [i_0]), (arr_3 [i_0]))))) & ((max(var_10, 4208784849)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = ((-((65518 ? ((max((arr_7 [i_0] [i_0] [i_0] [i_6]), var_2))) : -26088))));
                                var_23 = (((((((~(arr_0 [i_0] [i_1])))) + 2147483647)) >> (((((arr_12 [i_5] [i_5 + 4] [i_5] [i_5 + 3] [i_5] [i_6]) ? -175324380 : 9716000683434663185)) - 18446744073534227216))));
                                var_24 = (arr_18 [i_0] [i_5] [i_1]);
                                arr_21 [i_0] [i_1] [i_0] [i_2] [i_5] [i_5 - 1] [i_6] = min(((((arr_3 [i_0]) ? var_8 : (arr_6 [i_0] [i_1] [i_5 - 1] [i_0])))), (arr_3 [i_0]));
                                var_25 = (min(var_25, ((((arr_11 [i_5] [i_5 + 4] [i_5] [i_5 + 3] [i_5 + 4]) / (((arr_16 [i_0] [i_1] [i_0] [i_0]) ? (max((arr_5 [i_1] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_5]))) : (arr_10 [i_5 - 1] [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_11;
    var_27 ^= var_16;
    #pragma endscop
}
