/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = var_5;
                var_15 -= -32764;
            }
        }
    }
    var_16 = (max(var_16, var_5));
    var_17 = (((min((max(var_11, -29)), ((min(4294967295, 1862915996))))) != var_9));
    #pragma endscop
}
