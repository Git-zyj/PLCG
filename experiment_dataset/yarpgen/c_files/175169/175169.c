/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_9;
    var_11 = (min(var_11, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 ^= (!195);
        var_13 = 61;
    }
    var_14 = var_2;
    #pragma endscop
}
