/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_10, (((-1 < (1 & 1))))));
    var_14 = ((var_5 ? (min((max(var_12, var_0)), (min(var_4, -15)))) : ((max((var_10 % -15), (((-15 ? 3244340900 : 1))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = 15;
        var_16 = ((-(min((arr_0 [i_0]), (arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (var_0 >= 397531236);
        var_17 = (~var_7);
    }
    #pragma endscop
}
