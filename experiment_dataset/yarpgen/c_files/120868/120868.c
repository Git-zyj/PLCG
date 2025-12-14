/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_18 = var_9;
        var_19 = (max(var_19, ((((min(var_15, 1)) >= 3618964181)))));
        arr_3 [9] = ((((1 ? 1 : 0))) || var_2);
    }
    var_20 = 11922;
    #pragma endscop
}
