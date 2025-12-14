/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (min((((((var_3 ? var_3 : var_12))) ? ((1137037560052066697 << (var_8 - 908552523))) : var_10)), (((!(((1 ? 1260719010 : 20612))))))));
    var_18 = ((min(var_13, var_0)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_13, (((((min(var_9, var_12))) ? ((min(1, (arr_1 [i_0])))) : ((var_14 ? (arr_1 [i_0]) : var_1)))))));
        var_20 = (~var_3);
        var_21 = ((((var_6 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 3]))) | ((~(arr_1 [i_0 - 3])))));
    }
    #pragma endscop
}
