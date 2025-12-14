/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((~((6073656440434641220 ? (~1041253024) : ((min(6, 150))))))))));
                var_21 = -6358381471562984954;
            }
        }
    }
    var_22 |= (((((min(var_4, 6649999354897601635)) & var_7)) % var_13));
    #pragma endscop
}
