/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(((max(var_10, var_2))), (var_13 - var_10))), ((max(((var_6 ? var_5 : var_12)), 15)))));
    var_18 -= var_16;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((((var_9 ^ (arr_0 [i_0])))) ? (max((arr_1 [22]), var_12)) : (max((arr_0 [i_0]), (arr_1 [i_0]))))) | (((~(var_7 ^ var_15))))));
        var_19 = (min(var_19, var_3));
        var_20 = (arr_1 [i_0]);
    }
    var_21 = (max((min(636477223, (min(var_15, var_13)))), (((var_10 ^ var_13) ? var_7 : (~var_16)))));
    #pragma endscop
}
