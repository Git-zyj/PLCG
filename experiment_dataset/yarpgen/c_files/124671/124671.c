/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 -= var_14;
    var_17 -= var_3;
    var_18 -= (((max(-8955723647313801660, 8955723647313801680))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((var_13 / -4654087345812499410) ? ((min(-1, 42))) : var_3)))));
                var_20 -= ((18446708889337462784 == (4654087345812499420 / 35184372088806)));
            }
        }
    }
    #pragma endscop
}
