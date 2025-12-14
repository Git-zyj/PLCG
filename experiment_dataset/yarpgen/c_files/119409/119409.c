/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_13));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((min(2714812284078843558, 1764755082)));
        arr_2 [i_0] [i_0] &= ((var_3 ? (arr_1 [1]) : (arr_1 [i_0])));
    }
    var_19 = var_3;
    #pragma endscop
}
