/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min((((((min(var_5, var_6))) != ((max(-32762, var_4)))))), (max(2194525979905705243, (16252218093803846373 % 4294967295)))));
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_2 [i_0])));
        arr_3 [i_0] = var_1;
        var_13 = (min((((((var_0 ? var_9 : var_2))) ? ((min((arr_2 [i_0]), var_8))) : (~var_8))), ((((144115188075855871 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))))));
    }
    var_14 = (max(((((((var_1 ? var_8 : var_6))) ? (((var_2 + 2147483647) >> (var_8 - 35378))) : var_5))), (((((-51 ? -1 : 8932247228726229065))) ? var_0 : var_1))));
    var_15 = (max(var_15, var_8));
    #pragma endscop
}
