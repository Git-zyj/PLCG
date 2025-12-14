/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_14 = ((3009396343 ? -50 : 1));
        var_15 *= ((-(((arr_1 [i_0 - 2]) ? 536857792 : (arr_1 [i_0 - 2])))));
        var_16 = (max((arr_1 [i_0 + 1]), 1));
    }
    var_17 = (min(var_17, (((-((((min(var_7, var_10))) ? var_2 : var_5)))))));
    var_18 = (max(((((max(-1270894591, var_12))) ? 16058923704770838048 : -1270894591)), 3));
    var_19 = ((4294967295 ? var_8 : 1270894590));
    var_20 = (min(var_20, var_0));
    #pragma endscop
}
