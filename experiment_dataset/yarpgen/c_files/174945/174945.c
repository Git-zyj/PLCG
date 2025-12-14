/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, -36));
                var_20 = 74;
            }
        }
    }
    var_21 = var_15;
    var_22 = (!var_16);
    #pragma endscop
}
