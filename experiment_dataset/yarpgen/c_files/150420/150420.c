/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (~(!var_9));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [1] &= 10529192966711225863;
        var_18 = (((10529192966711225870 / 36535) >> (((min(29004, var_11)) - 28984))));
        var_19 = (min(((((((var_5 >> (((arr_1 [i_0]) + 1338))))) ? (arr_0 [i_0] [i_0]) : var_2))), ((min(70, 0)))));
    }
    #pragma endscop
}
