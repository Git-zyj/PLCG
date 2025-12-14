/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(130048, 1920505192)))) ? var_5 : (130059 / 1920505192)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = var_9;
        var_13 = (min(((-(arr_0 [i_0]))), var_0));
        arr_2 [i_0] [1] = ((max((!var_9), var_2)));
    }
    var_14 = (max(var_14, ((max(var_5, var_5)))));
    #pragma endscop
}
