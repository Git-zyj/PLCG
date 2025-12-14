/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 7855;
    var_14 += (((((1 | 1) ? var_0 : (((1 ? var_8 : var_2)))))) ? (((var_2 | var_10) ? ((var_3 ? (-127 - 1) : var_0)) : (((var_8 << (52 - 46)))))) : ((((var_1 ^ var_6) ^ var_8))));
    var_15 = (5457781885587809532 << var_8);
    var_16 = 20538;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (-127 - 1);
        var_17 = ((((((177 >= (arr_1 [i_0]))))) > (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    #pragma endscop
}
