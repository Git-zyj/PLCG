/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_6 ? (((var_3 ? var_13 : var_14))) : var_4)) + (~var_0)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 += ((+((+(((-9223372036854775807 - 1) % 8022390731155989314))))));
        var_17 = (var_11 ? (((~(arr_1 [i_0])))) : (var_11 & var_9));
        var_18 = (min(var_18, (((!(arr_0 [i_0]))))));
    }
    var_19 = (121 + 879597587);
    #pragma endscop
}
