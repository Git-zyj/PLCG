/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = var_12;
                var_20 += -8437863592592034063;
            }
        }
    }
    var_21 = (max(((-77 ? ((var_18 ? 4294967295 : var_0)) : var_6)), var_13));
    #pragma endscop
}
