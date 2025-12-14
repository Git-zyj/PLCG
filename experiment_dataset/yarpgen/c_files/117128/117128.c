/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 ^= 12295211908890419643;
                var_19 *= (((arr_4 [i_0] [i_0 + 1] [i_0]) | 124));
            }
        }
    }
    var_20 = var_16;
    var_21 = (max(((var_14 ? (var_9 | var_17) : ((min(687841930, 12))))), var_12));
    var_22 = (min(var_22, (((((min(var_9, 2615999574))) ? (((((var_12 ? var_7 : var_15))))) : var_17)))));
    #pragma endscop
}
