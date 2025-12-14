/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((min(var_1, 0))) ? (min(0, var_2)) : (min(var_2, var_12)))), ((min((min(20, var_11)), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = var_1;
                arr_7 [6] [i_0] = (min(((11352059982846330274 >> (((arr_3 [i_0 - 2] [i_0 - 2]) - 3488877849190063979)))), ((max((max(var_11, 22899)), (min(13, (arr_3 [i_1] [i_0 - 3]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_2] = var_7;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [2] [i_4] [i_2] = (max((min(var_12, (min((arr_12 [i_3]), 2434649444)))), (((243 && 2080941410413801233) ? (var_15 / var_7) : (((-(arr_0 [10]))))))));
                                arr_25 [i_2] [1] [8] [i_2] = ((((max(159, (arr_9 [i_5] [i_6 + 1])))) == (((arr_9 [i_6 + 3] [i_3]) ? var_16 : var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((var_17 ^ (1 * var_17)))) && (((var_5 ? (min(var_12, var_2)) : ((min(var_17, var_11))))))));
    var_21 = (min(((min((var_6 == 192), 28))), 5733360488511430176));
    #pragma endscop
}
