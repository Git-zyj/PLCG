/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_10 * (min(var_11, ((var_11 ? 3061913691 : 4772157919260509144)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((((145 ? ((max(116, -2087888316))) : ((141 ? (arr_1 [i_2] [1]) : 145))))) ? (arr_0 [i_0]) : (arr_3 [i_0] [7] [2])));
                    var_15 = (((min((((var_1 ? (arr_4 [i_0] [i_0] [i_2]) : var_0))), ((var_3 / (arr_6 [i_0] [i_2]))))) & (((var_5 ? ((102 ? var_8 : 147)) : var_9)))));
                    var_16 += var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [3] [i_3] [i_4] = ((var_6 << (((((((var_10 ? var_10 : 1))) ? (arr_7 [i_0] [i_0] [i_2] [i_3] [i_4]) : ((min(var_8, (arr_0 [i_1])))))) - 45))));
                                var_17 -= var_9;
                                var_18 = ((min(var_0, (arr_7 [i_4 + 3] [i_1] [i_1 - 1] [i_1] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_24 [i_6] = var_8;
                    var_19 = ((!(((125 ? (min((arr_16 [i_5] [i_6]), var_4)) : (var_10 && var_2))))));
                }
            }
        }
    }
    #pragma endscop
}
