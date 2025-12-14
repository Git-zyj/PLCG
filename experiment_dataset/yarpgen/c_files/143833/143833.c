/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (!var_7);
    var_13 = (~var_10);
    var_14 = 65535;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = var_7;
                    var_16 = -20587;
                    var_17 = (min(var_17, (arr_0 [1])));
                }
            }
        }
    }
    #pragma endscop
}
