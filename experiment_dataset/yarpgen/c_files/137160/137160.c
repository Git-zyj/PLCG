/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((((min(255, 90))) ? var_4 : var_3)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(4294967295, ((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));
        var_21 = (var_9 << (((((arr_0 [i_0] [i_0]) ? ((var_18 ? -124 : 4294967295)) : (~1))) - 4294967165)));
    }
    var_22 = max((min(var_10, (~-22851))), (var_7 <= var_4));
    #pragma endscop
}
