/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (((((((1337187405105591657 ? 16320 : -80)) & var_2))) ? (max(var_5, ((0 ? var_5 : var_1)))) : -39572));
        var_19 = (min(var_19, (((((max(var_16, 65524))) || (((var_7 ? ((min(2324297217, (arr_0 [i_0] [i_0])))) : (var_10 ^ var_0)))))))));
        var_20 = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) >> (var_5 - 32507)));
    }
    var_21 = var_11;
    var_22 = var_11;
    #pragma endscop
}
