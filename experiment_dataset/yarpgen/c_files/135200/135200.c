/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [16] = (max(((max((max(var_11, (arr_1 [12]))), ((min((arr_0 [1]), var_3)))))), (min((max(var_11, var_2)), (min(0, 7001830932573329824))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = min((min((max(7001830932573329824, 7001830932573329824)), ((min((arr_6 [i_0] [i_0]), (arr_5 [i_0])))))), (max((min((arr_3 [i_0]), 68719214592)), ((min(var_3, var_7))))));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = (min((min(((min((arr_2 [i_1]), 35245))), (max((arr_3 [i_1]), var_1)))), (min((max(18446744004990337023, (arr_5 [i_1]))), ((max(var_10, var_4)))))));
                    arr_11 [i_1] [i_1] [i_1] = max((min(((max(2924223015, var_8))), (max(var_5, var_2)))), ((min(((min((arr_2 [i_1]), var_8))), (max(var_5, var_4))))));
                    arr_12 [i_0] [i_1] [i_2] = (min((max((min(0, 18446744073709551590)), ((min(var_8, var_5))))), ((max((min(355167220, (arr_7 [i_0] [i_0] [i_1] [i_2]))), (min(var_11, var_9)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((min(((max(var_7, (arr_16 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3])))), (min((arr_13 [i_0]), 203))))), (max(((max((arr_6 [i_0] [i_0]), (arr_8 [i_0] [i_0])))), (max(var_1, 0))))));
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] = (max(((min((max(0, (arr_3 [i_0]))), ((max(var_4, var_11)))))), (min((min(var_3, 26)), ((max(30716, var_6)))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_4] = (min((max((min(var_11, (arr_1 [i_0]))), ((min(75, 32764))))), ((min(((max((arr_7 [i_4] [i_0] [i_0] [i_0]), var_3))), (max(var_7, (arr_16 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 8;i_5 += 1)
    {
        arr_22 [4] &= (min((min((max(var_2, (arr_14 [i_5] [i_5] [10]))), ((min(-3991, 7478))))), ((max(((min((arr_7 [i_5] [i_5] [1] [1]), (arr_7 [i_5] [10] [14] [i_5])))), (min(183, 9223372036854775807)))))));
        arr_23 [i_5] [i_5] = (max(((min((min((arr_13 [i_5]), (arr_7 [13] [i_5] [i_5] [i_5]))), ((min(56, 4094)))))), (max(((min((arr_3 [i_5]), (arr_13 [i_5])))), (max((arr_15 [i_5] [i_5]), (arr_14 [i_5] [i_5] [i_5])))))));
        arr_24 [i_5] [i_5] = (min((min((max((arr_20 [i_5]), 68719214588)), (min((arr_2 [i_5]), 11928853070882236735)))), (min((max((arr_8 [i_5] [i_5]), var_1)), ((min(var_7, (arr_14 [i_5 - 1] [i_5 - 1] [i_5]))))))));
        arr_25 [i_5] [i_5] = (min(((min(((min((arr_16 [i_5] [i_5] [14] [i_5 + 1] [i_5] [i_5]), (arr_5 [i_5])))), (min(var_3, (arr_20 [i_5])))))), (max((max((arr_14 [i_5] [i_5] [i_5]), 68719214592)), ((min(134217727, (arr_13 [i_5]))))))));
    }
    var_13 = (max(((min((max(var_4, var_9)), (min(51543, 1))))), (max((max(var_1, var_5)), (max(0, 18446744073709551606))))));
    #pragma endscop
}
