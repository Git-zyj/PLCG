/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = ((-(var_3 * var_10)));
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((var_8 != (max((((arr_0 [i_0] [i_0]) << (var_9 + 25005))), (((arr_1 [i_0]) >> (var_10 - 2961187191)))))));
        var_19 = ((((((arr_1 [i_0]) ? (~1124436720) : var_5))) ? ((min(114, -14303))) : ((var_12 + (arr_0 [i_0] [i_0])))));
        var_20 = (min(var_20, var_10));
    }
    #pragma endscop
}
