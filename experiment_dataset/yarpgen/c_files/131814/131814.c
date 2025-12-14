/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 ^= min(71, (min(((min(var_13, 63252))), ((63248 >> (var_6 + 7772499953031526894))))));
                var_17 = (((162 <= -35) >> (1727773199 - 1727773191)));
            }
        }
    }
    var_18 -= var_3;
    var_19 = (min(var_19, ((((20795 << ((((((min(-31299, -19243)) + 31325)) - 17)))))))));
    var_20 = ((var_7 ? ((max(94, 94))) : var_8));
    var_21 = (min(var_13, ((~(-5092 & 2033172613)))));
    #pragma endscop
}
