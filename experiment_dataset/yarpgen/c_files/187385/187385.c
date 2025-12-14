/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(((min(var_13, ((var_9 ? var_4 : var_0))))), (max(var_0, (((var_6 + 9223372036854775807) >> 1))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(4181957275, 0));
        var_20 = var_12;
        var_21 ^= var_3;
        var_22 *= (((!var_15) ? (arr_1 [i_0]) : var_16));
        var_23 = (arr_1 [i_0]);
    }
    var_24 = (max((((var_0 | var_16) ? (~0) : var_7)), ((min(1, (~78))))));
    var_25 = 78;
    #pragma endscop
}
