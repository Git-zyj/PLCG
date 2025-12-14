/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_1 [6])));
                var_19 = (min(var_19, (arr_2 [i_1])));
            }
        }
    }
    #pragma endscop
}
