/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(var_10, var_7)), 1));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_18 = arr_2 [i_0];
        var_19 = (min(var_19, ((((arr_0 [6]) - (((((arr_1 [2]) >= (arr_0 [0]))) ? (arr_0 [i_0 + 2]) : var_12)))))));
    }
    var_20 = ((max(((var_11 ? -32757 : var_15), ((max(var_1, 2188)))))));
    #pragma endscop
}
