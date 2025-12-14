/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (-1 ? ((736813872 ? 1 : 1)) : 1);
    var_16 |= (var_10 ? var_9 : var_12);
    var_17 = (min(var_17, (((var_9 ? (var_4 == var_4) : (((var_12 | var_8) ? var_2 : var_10)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (max((max(-8735898749875060493, -1607059818939837788)), ((var_9 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        arr_3 [i_0] = ((min(8735898749875060507, 14557)));
    }
    #pragma endscop
}
