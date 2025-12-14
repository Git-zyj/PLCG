/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(((~((min(var_4, 99))))), ((max(var_9, (arr_0 [i_0 - 1] [i_0 - 1]))))));
                var_21 = (!77);
            }
        }
    }
    var_22 -= var_16;
    #pragma endscop
}
