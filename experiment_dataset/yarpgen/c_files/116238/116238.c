/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 += 372182088;
        arr_3 [5] [i_0] = var_6;
        arr_4 [i_0] = (arr_2 [1]);
    }
    var_21 = (var_7 && var_17);
    var_22 = var_3;
    #pragma endscop
}
