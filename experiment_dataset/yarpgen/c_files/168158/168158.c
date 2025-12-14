/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 = (min(((min(1153058031, (min(var_6, (arr_5 [i_0] [10] [1])))))), ((((min(var_1, 1))) ? (17160011186759772479 - var_2) : ((min((arr_3 [i_0]), var_4)))))));
                            var_12 ^= (arr_0 [4]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_13 = min((((-(min(1, 281474976710655))))), (-1363541713 - 1461326547967032697));
                            var_14 = ((((((4294967293 <= (arr_1 [11]))))) > (min(var_1, -95))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    var_15 = var_7;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_16 = ((((!(arr_15 [i_6] [i_6] [i_6]))) ? (((((arr_10 [i_7] [i_10 - 1] [i_10] [3] [i_7]) < ((((arr_24 [i_9] [1] [i_7] [i_6]) <= var_9))))))) : (max((arr_14 [i_6] [i_6] [i_10]), var_2))));
                                arr_30 [i_6] [10] [i_8] [i_9] [i_10] = (((var_8 ? (arr_5 [i_10 - 1] [i_8 + 3] [i_8]) : var_9)));
                                var_17 = (((min((arr_20 [i_9] [i_8 + 1] [i_7]), 1)) * (((min(1, var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (var_5 > -961515662)));
    #pragma endscop
}
