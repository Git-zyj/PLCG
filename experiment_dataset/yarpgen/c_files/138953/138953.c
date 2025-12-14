/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_17));
                var_20 = (!-var_17);
            }
        }
    }
    var_21 = var_3;
    var_22 = (max(var_22, var_12));
    #pragma endscop
}
