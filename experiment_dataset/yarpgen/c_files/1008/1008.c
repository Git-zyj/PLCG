/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_5;
    var_13 = ((var_11 ? (((!((min(var_4, var_5)))))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [21] [i_0] = (min(var_7, (((-(var_3 * var_9))))));
                arr_7 [18] [19] [i_0] = ((var_4 ? (!var_0) : ((var_1 ? var_9 : var_4))));
                var_14 &= ((3163305649 || 2032028444) ? ((var_7 ? (min(var_10, var_8)) : (min(3163305649, 268435455)))) : (((var_10 ? var_3 : var_5))));
                var_15 = (max(var_15, (((((min(var_7, var_10))) ? var_5 : var_5)))));
            }
        }
    }
    var_16 = (min(3163305649, var_5));
    var_17 = var_6;
    #pragma endscop
}
