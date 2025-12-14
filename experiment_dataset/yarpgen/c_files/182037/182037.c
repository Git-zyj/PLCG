/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (((!13) >= (((41 ? 236 : 65497)))));
        var_17 = (max(var_17, ((min(-6767059495961841968, var_15)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (65523 / 13);
        arr_6 [i_1] = (((((min(15, var_15)) ? (~var_2) : (arr_0 [6] [6])))));
    }
    var_19 = ((-((((min(var_3, var_14))) ? (~13115) : (min(56, -41))))));
    #pragma endscop
}
