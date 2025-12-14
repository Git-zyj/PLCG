/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [1] [i_0 + 1] [i_1] = (~64439);
                var_16 = (((~(max(var_14, var_9)))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
