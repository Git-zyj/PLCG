/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (var_5 & 255);
    var_18 = var_15;
    var_19 = (!var_3);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        var_20 = (arr_2 [14]);
        arr_4 [i_0] = ((~((((1 ? 23858 : 9171))))));
    }
    #pragma endscop
}
