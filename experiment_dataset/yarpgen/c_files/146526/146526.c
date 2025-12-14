/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? var_10 : ((var_8 ? var_0 : ((var_4 ? var_10 : -268435456))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (min((min((arr_1 [11] [i_1]), (max(var_14, var_14)))), 268435432));
                var_17 = (max(var_17, (((var_8 ? ((((!(arr_1 [i_0 + 1] [i_1 - 2]))))) : (((((4096 ? 9385617039813033224 : -268435457))) ? ((max(268435410, 160))) : var_10)))))));
            }
        }
    }
    #pragma endscop
}
