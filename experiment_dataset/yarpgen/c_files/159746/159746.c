/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((!(arr_2 [i_0])));
        arr_3 [i_0] [i_0] &= var_4;
        arr_4 [13] = ((-(min(((-4 ? -39 : (arr_0 [i_0]))), (((-127 - 1) ? -112 : 8))))));
    }
    var_16 = (max(var_16, ((min(((-((var_6 ? var_1 : var_1)))), var_9)))));
    #pragma endscop
}
