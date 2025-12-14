/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = 247;
                var_19 |= ((((((arr_1 [i_0]) ? -1504335648 : (arr_0 [i_0])))) >= (((-0 << ((((15476165919124355120 ? 2970578154585196495 : var_7)) - 2970578154585196490)))))));
            }
        }
    }
    var_20 += (((((~((var_12 ? 15476165919124355125 : 15476165919124355102))))) ? 15476165919124355125 : (((((15476165919124355125 ? var_1 : var_17)))))));
    #pragma endscop
}
