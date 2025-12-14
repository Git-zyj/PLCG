/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (min(var_4, (((((0 ? 2147483647 : 1402056568)) > (min(-1156906684, var_12)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = (arr_2 [i_0]);
        var_17 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_18 = ((-(((!(arr_2 [i_0]))))));
    }
    var_19 = ((~(max(var_10, var_8))));
    #pragma endscop
}
