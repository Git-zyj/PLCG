/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-(!var_6))))));
    var_17 ^= (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = var_0;
                var_19 = ((((0 <= (((arr_5 [i_1] [i_1] [9]) ? (arr_0 [i_0] [i_1]) : (arr_0 [1] [i_1]))))) ? (((var_5 ? 154 : -61))) : ((max(((-(arr_4 [i_1]))), 43185)))));
            }
        }
    }
    #pragma endscop
}
