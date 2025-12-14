/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_1));
    var_15 = ((var_7 ? (max((max(var_5, var_0)), ((max(-15865, var_1))))) : (!240)));
    var_16 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (!36);
        var_17 = -22952;
    }
    #pragma endscop
}
