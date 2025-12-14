/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(-325525709942154560, (23264 && 7161))), var_1));
    var_17 = -8597822981546286052;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = 1116124821;
                var_19 = var_5;
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
