/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_6 << (-942302925 + 942302929))) ^ 942302925))) ? ((((var_10 << (var_10 - 35484))))) : var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = ((((((arr_0 [i_0]) > -942302925))) != var_13));
        var_18 = ((942302925 ? 942302925 : 2424344340198954085));
        var_19 = var_13;
    }
    #pragma endscop
}
