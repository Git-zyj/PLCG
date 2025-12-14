/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_7;
    var_17 = (max((var_0 - -8302754981574750082), ((var_5 ? ((21 ? -8302754981574750081 : var_2)) : var_9))));
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((arr_0 [i_0]), (max(var_11, var_10))))) ? ((((arr_1 [i_0]) | (arr_1 [i_0])))) : (arr_0 [i_0])));
        var_19 = ((+((((arr_0 [i_0]) <= var_12)))));
    }
    #pragma endscop
}
