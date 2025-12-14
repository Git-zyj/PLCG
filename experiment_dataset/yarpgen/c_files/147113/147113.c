/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, ((((((!(arr_2 [14] [14])))) + (-112 - -1871162796))))));
        var_17 += 1871162805;
        var_18 = (max(var_18, ((min((arr_1 [4] [i_0]), (min((arr_0 [i_0]), (min(var_13, -3463231611838194975)))))))));
    }
    var_19 = -1871162796;
    var_20 = (min(((min((max(var_5, var_9)), var_12))), var_8));
    #pragma endscop
}
