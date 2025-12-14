/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_10 == ((((-8146 % var_9) < (var_2 / var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [2] [i_0] = 1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = (((-28657 >= 6017505250581034115) ? (((((-81 ? 0 : 1))) ? -81 : 3452426157)) : ((~((var_10 ? var_9 : 3809243597))))));
                                var_12 &= (min(((1 ? ((0 ? 60 : 0)) : 1)), (arr_3 [i_0] [i_0])));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, ((max((arr_6 [i_1] [i_0]), 2778780827)))));
            }
        }
    }
    var_14 -= (((((var_0 & (-81 | 1)))) ? (((((var_2 ? var_6 : var_9))) ^ var_4)) : (((var_4 ? (var_3 | 0) : (472209139 ^ var_0))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                var_15 += ((1 ? (min(-var_0, 1)) : (((0 < 0) ? (arr_13 [i_6] [i_6 - 1] [i_6] [i_5]) : (var_9 < 1)))));
                var_16 = var_3;
                var_17 = ((((min(var_6, ((min(1, (arr_3 [i_5] [1]))))))) / 1));
            }
        }
    }
    #pragma endscop
}
