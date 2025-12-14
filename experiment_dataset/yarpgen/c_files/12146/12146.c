/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_8;
        var_14 = (!var_0);
        arr_5 [i_0] = ((-(arr_2 [i_0])));
    }
    var_15 = var_3;
    var_16 = (min(var_16, (((min(var_0, ((1326683669 ? var_11 : var_1))))))));
    #pragma endscop
}
