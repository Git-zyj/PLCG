/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 15061150623751146692;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 ^= (arr_1 [16] [16]);
    }
    var_16 = (max(var_16, (!2)));
    #pragma endscop
}
