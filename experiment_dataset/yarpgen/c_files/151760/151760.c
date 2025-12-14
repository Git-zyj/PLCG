/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (arr_3 [i_0] [i_1] [i_0]);
                var_18 = ((15576 ? 15576 : -15581));
                var_19 *= (!-9);
            }
        }
    }
    var_20 = var_12;
    var_21 *= (!2771432943);
    var_22 = ((var_12 ? (!var_6) : var_9));
    #pragma endscop
}
