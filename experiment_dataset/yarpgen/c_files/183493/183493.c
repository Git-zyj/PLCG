/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 *= (max((max(((65535 + (arr_1 [i_0]))), (arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 1]))), (arr_5 [i_0 + 1])));
                var_20 = (max(var_20, ((((--1) ? ((max((arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 2]), (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])))) : ((((125 ? (arr_2 [i_0] [4]) : 57344)) + -1)))))));
            }
        }
    }
    var_21 = (max((((66 * var_17) ? (8192 - var_11) : (min(var_11, var_9)))), var_15));
    #pragma endscop
}
