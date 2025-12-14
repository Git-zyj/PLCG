/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(var_7, ((var_2 ? var_12 : 18446744073709551615)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) ? (arr_1 [5]) : var_8));
        arr_2 [i_0] = ((18446744073709551615 ? 2732240833782674755 : 33554431));
    }
    var_17 = var_9;
    #pragma endscop
}
