/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_16 ? (!var_10) : ((var_4 >> (var_15 + 883087518)))))) ? 116 : ((min(var_1, (~var_16))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 |= ((((min(-843309225670300053, -843309225670300051))) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : ((min(((((arr_1 [i_0]) < var_15))), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_19 = (!-2097152);
        var_20 = (min(var_20, ((min((max((min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))), (arr_1 [i_0]))), -2097165)))));
    }
    var_21 = (var_11 && var_12);
    #pragma endscop
}
