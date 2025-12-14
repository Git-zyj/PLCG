/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min(var_10, var_9));
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 ^= (min((((arr_0 [i_0]) ? ((min((arr_0 [i_0]), (arr_0 [10])))) : (arr_0 [i_0]))), ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
        var_16 *= (min((arr_1 [i_0]), (arr_1 [i_0])));
        var_17 *= (((((((arr_1 [18]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))) ? ((min((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [20]) : (arr_0 [i_0])))));
    }
    var_18 = (!-var_11);
    #pragma endscop
}
