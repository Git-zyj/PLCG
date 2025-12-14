/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 20950;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = var_16;
        var_22 = var_18;
        var_23 = ((-((3117608226 >> (var_18 + 57)))));
        var_24 = (min(var_24, (((-(arr_0 [i_0]))))));
    }
    var_25 = -98;
    #pragma endscop
}
