/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(var_16, ((max(1634559207, -1689131150))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 -= ((~(min(-14399, 1689131149))));
                var_20 *= ((arr_1 [i_0] [i_0 + 2]) << (var_6 + 1037573074345183206));
            }
        }
    }
    var_21 = (min(var_21, (var_2 ^ var_8)));
    var_22 = (min(var_4, (max((var_14 < 9007194959773696), var_15))));
    var_23 = var_14;
    #pragma endscop
}
