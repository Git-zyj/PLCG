/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_18, var_6));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [6] [i_0 - 1] = (arr_1 [i_0 + 3] [i_0 + 1]);
        var_20 ^= (arr_0 [i_0] [14]);
    }
    #pragma endscop
}
