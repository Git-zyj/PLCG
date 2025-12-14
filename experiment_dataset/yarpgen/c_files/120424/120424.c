/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 ? 0 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 |= var_6;
                var_14 -= ((-102275218875955536 ? 14563 : 943346701));
            }
        }
    }
    var_15 -= var_6;
    var_16 -= ((~(var_3 | 508477076)));
    #pragma endscop
}
