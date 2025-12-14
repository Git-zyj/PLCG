/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_18, ((min((arr_1 [i_0 - 2]), (min(var_12, (max((arr_0 [i_0]), var_1)))))))));
        var_19 = (min(var_19, ((((((!(((var_12 ? var_9 : var_1))))))) >= ((511 ? (min(var_11, var_11)) : (arr_1 [i_0])))))));
    }
    var_20 = (max(195, ((((max(var_4, var_10))) ? -1 : ((min((-32767 - 1), var_15)))))));
    var_21 = (var_14 || var_16);
    #pragma endscop
}
