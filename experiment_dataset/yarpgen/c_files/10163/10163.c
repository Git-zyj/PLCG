/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 &= var_12;
        arr_2 [i_0] = ((min((arr_0 [13]), (arr_0 [i_0]))));
    }
    var_15 += var_8;
    #pragma endscop
}
