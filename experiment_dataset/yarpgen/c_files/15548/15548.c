/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(var_12, ((var_3 ? var_10 : ((18091 ? var_12 : 15824592338456188785))))));
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 ^= 6;
                var_17 = (min(var_17, ((((-1 + -18190) ? ((max(42624, 1))) : ((max((arr_1 [i_1] [i_0]), var_4))))))));
            }
        }
    }
    #pragma endscop
}
