/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 79;
    var_14 = var_11;
    var_15 = ((((min(var_10, 12421006599723268980))) ? (max(16106601792361625234, 6025737473986282643)) : ((max(((6025737473986282655 ? 103 : -24716)), -24709)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (min(18446744073709551611, 6025737473986282636));
                var_17 -= min(((min(var_9, 92))), 11442609796585144141);
                var_18 = (min(var_18, var_6));
                arr_4 [i_1] [i_1] = 29;
                var_19 *= 238;
            }
        }
    }
    #pragma endscop
}
