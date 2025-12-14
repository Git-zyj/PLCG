/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_0;
        var_20 += (min(var_7, (min(var_1, var_18))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (max(var_21, var_9));
        var_22 = (min(var_22, 10773));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (~var_8);
        arr_9 [i_2] = var_18;
    }
    var_23 = var_14;
    var_24 = (min(-var_16, var_9));
    var_25 = (min(var_25, ((min(var_11, (min(-var_8, var_6)))))));
    #pragma endscop
}
