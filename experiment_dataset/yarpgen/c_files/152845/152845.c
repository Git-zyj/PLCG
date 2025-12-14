/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 28443;
        arr_3 [2] &= (var_10 && 114);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = var_0;
        arr_7 [i_1] = (((~var_3) ? ((var_4 ? ((58281 ? 37092 : var_4)) : ((min(var_12, var_5))))) : ((min(23628, -24863)))));
        arr_8 [1] |= ((-(((max(60070, 274877906943)) + var_2))));
        var_15 = ((!(!24861)));
    }
    var_16 = (max(var_16, ((((((((min(524287, 141))) ? (max(-274877906943, -10608)) : var_0))) ? ((((max(-274877906943, 120))) ? (!var_1) : ((24863 ? 1 : 8191)))) : ((var_13 ? 23628 : var_0)))))));
    #pragma endscop
}
