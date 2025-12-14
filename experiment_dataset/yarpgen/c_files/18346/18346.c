/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((0 ? ((1 ? 8736556059115575227 : 1)) : 1));
        var_16 = (min(var_16, (((1 ? 0 : 1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (((((-6340173910916501221 ? 0 : 8736556059115575235))) ? ((0 ? 1 : 8736556059115575235)) : -16568));
        arr_4 [i_1] = (-9223372036854775807 ? ((1 ? 16576 : 1873346945)) : (((1 ? 1 : 0))));
        arr_5 [i_1] = ((((((((-8736556059115575248 ? 8 : 1))) ? 5097185622796991099 : 0))) ? (((-8736556059115575226 ? 0 : ((8736556059115575227 ? 1407908157 : 1))))) : ((2305843008139952128 ? 8736556059115575241 : ((0 ? -8736556059115575247 : 8736556059115575256))))));
    }
    #pragma endscop
}
