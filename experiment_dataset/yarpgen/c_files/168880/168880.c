/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 |= var_5;
        arr_2 [i_0] = (~1067798308);
        var_11 = (min(44660, (!952)));
    }
    var_12 = (min(var_12, var_9));
    var_13 = -9969;
    #pragma endscop
}
