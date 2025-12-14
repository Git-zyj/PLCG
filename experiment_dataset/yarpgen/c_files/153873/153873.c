/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((!((min(var_2, (min(-2629267430872161865, var_4)))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(((max(var_13, ((-(arr_1 [i_0] [i_0 + 3])))))), var_5));
        var_17 -= (((!2629267430872161843) ? (((!((max((arr_0 [i_0]), var_7)))))) : ((min(var_4, 2921)))));
    }
    var_18 = var_5;
    #pragma endscop
}
