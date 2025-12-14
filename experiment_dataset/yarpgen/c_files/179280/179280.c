/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (((var_9 ? var_14 : (~var_4))));
    var_19 |= var_7;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 = (max(var_20, 0));
        arr_2 [i_0 - 1] [i_0 - 1] = -var_8;
    }
    #pragma endscop
}
