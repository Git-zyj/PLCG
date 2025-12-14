/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_12;
    var_20 = -var_6;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_21 &= (((579332142 ? 579332130 : 579332128)));
        arr_2 [i_0] = (min((((arr_0 [i_0 - 3] [i_0]) ? (arr_0 [i_0 - 3] [i_0]) : (arr_0 [i_0 - 2] [i_0 - 2]))), (!var_5)));
    }
    #pragma endscop
}
