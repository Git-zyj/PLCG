/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= min(var_10, var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_19 *= arr_0 [i_1 - 1];
                var_20 = var_7;
            }
        }
    }
    #pragma endscop
}
