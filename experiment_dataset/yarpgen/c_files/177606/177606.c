/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = var_8;
                var_14 = var_6;
                arr_6 [i_0] [i_1 - 2] [i_1] = var_9;
            }
        }
    }
    var_15 -= var_7;
    var_16 = var_5;
    #pragma endscop
}
