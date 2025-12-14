/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(var_10, (max(1273596719, -1)))))));
    var_12 = (min(var_12, var_3));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 += max(-17828, 31644);
        arr_4 [i_0] = 251658240;
    }
    var_14 ^= var_5;
    #pragma endscop
}
