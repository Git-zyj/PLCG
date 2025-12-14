/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 ^= ((-(arr_2 [i_0])));
                var_19 = (min(var_19, (~-672546900)));
            }
        }
    }
    var_20 |= (min(((min(var_16, (((672546903 ? 51141 : -4)))))), (min(var_2, (max(-672546915, 2277082539106038812))))));
    #pragma endscop
}
