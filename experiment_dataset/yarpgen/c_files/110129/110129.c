/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 += (((-119 ^ (arr_1 [i_0] [i_0]))));
        var_12 = var_2;
    }
    var_13 += (max(var_5, 1023));
    var_14 = (var_4 && var_3);
    #pragma endscop
}
