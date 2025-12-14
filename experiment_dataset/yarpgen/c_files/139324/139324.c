/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_4 >= var_9);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (min(var_14, (((max(var_3, (arr_0 [i_0])))))));
        var_15 += var_3;
    }
    var_16 = var_4;
    #pragma endscop
}
