/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_2);

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_16;
        var_20 = (max(var_20, ((((((-6818875537944097161 ^ (arr_1 [i_0 + 1])))) ? (arr_0 [i_0 - 3] [i_0 - 2]) : ((((((arr_1 [i_0]) ? var_9 : var_15))) ? (min(var_5, (arr_1 [i_0]))) : (arr_3 [i_0]))))))));
    }
    #pragma endscop
}
