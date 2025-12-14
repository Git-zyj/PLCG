/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_9;
    var_18 = (min(var_18, ((min(29, 49)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 -= (((var_14 / (arr_2 [i_0]))));
        var_20 = (min(var_20, var_13));
    }
    #pragma endscop
}
