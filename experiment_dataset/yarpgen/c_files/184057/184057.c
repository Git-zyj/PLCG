/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 ^= (+((((var_0 ? (arr_2 [i_0]) : 0)) - (((arr_1 [i_0]) - (arr_0 [1]))))));
        arr_3 [0] [i_0] = var_5;
    }
    var_14 = (max((max((max(0, var_12)), ((max(0, var_9))))), (((var_4 - var_7) % var_7))));
    var_15 = (((((var_10 ? (max(48, var_7)) : (var_8 | var_3)))) ? ((((max(var_0, var_1)) <= (!var_6)))) : var_11));
    #pragma endscop
}
