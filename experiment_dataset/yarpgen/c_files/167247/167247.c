/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((-65 ? 71494644084506624 : -71494644084506624))));
    var_20 ^= (var_1 << (var_4 - 102));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = min(var_13, ((126 ^ (!-65))));
                var_22 *= (arr_1 [i_1 + 1]);
            }
        }
    }
    var_23 = ((var_2 ? var_14 : 569883051));
    #pragma endscop
}
