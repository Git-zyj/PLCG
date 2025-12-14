/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_4 ? var_4 : (((64486282 & (!var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = var_9;
                var_13 = ((-(arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
