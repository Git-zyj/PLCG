/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1599683952 < 9515941420177279893);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (((((~((0 << (((arr_0 [i_1]) + 1281486742))))))) ? var_0 : var_0));
                var_15 = (min(var_15, (((-4305860824329574916 ? 170 : 61)))));
            }
        }
    }
    var_16 |= var_6;
    var_17 &= var_0;
    #pragma endscop
}
