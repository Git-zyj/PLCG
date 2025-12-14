/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-((-((2263573094217644601 ? var_7 : 7967)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (!-104);
                var_13 = ((((-104 ? -104 : var_4))) ? var_8 : ((81 ? var_3 : var_5)));
                var_14 = (max(var_14, (((103 ? (min(var_9, (min(-123, 4319526235285459481)))) : -0)))));
            }
        }
    }
    var_15 = (max((((3327168076038708085 <= 33553920) ? 144115188075855871 : var_3)), ((3610002231 ? 75 : 3327168076038708085))));
    var_16 = var_10;
    #pragma endscop
}
