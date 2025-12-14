/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((0 + (-2147483647 - 1)))) | (max(var_16, 2884904375))));
    var_21 = (min(var_21, var_0));
    var_22 = ((((((14 | 241) || -8111811691653199615))) % 1));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_23 *= var_9;
                    var_24 = (max(var_24, (arr_2 [i_0] [i_1] [i_2 + 1])));
                    var_25 = -8111811691653199604;
                    var_26 = ((75 || 3108058289) << (max(-8111811691653199599, 21)));
                }
            }
        }
    }
    #pragma endscop
}
