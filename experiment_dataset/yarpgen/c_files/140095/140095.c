/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 ^= (max(var_8, ((((1024 == 63828) >= var_12)))));
        arr_2 [i_0] = (max(var_2, var_17));
    }
    var_20 = ((((min(3694529231, var_5))) ? ((min(64511, (min(var_2, -27314))))) : var_6));
    #pragma endscop
}
