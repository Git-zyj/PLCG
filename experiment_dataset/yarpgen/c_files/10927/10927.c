/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((arr_2 [2]) - ((((arr_2 [i_0]) || 24)))));
        var_17 = ((!(arr_0 [7])));
    }
    var_18 = (max(((min(((var_11 ? -1 : var_12)), var_15))), ((var_13 ? -7870404951530101921 : var_12))));
    #pragma endscop
}
