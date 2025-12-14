/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_6 & (max(var_1, 12145)))) - (max((-601646911430465174 / var_4), var_11))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 *= ((((var_6 != (arr_2 [i_0]))) || (((-(arr_0 [i_0]))))));
        var_14 = ((((min(var_10, -601646911430465174))) ? (arr_2 [i_0]) : ((43153 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
    }
    #pragma endscop
}
