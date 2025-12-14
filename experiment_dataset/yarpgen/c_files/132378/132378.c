/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    var_16 = (max((~var_5), ((max(((var_0 ? var_10 : var_13)), ((min(var_5, var_12))))))));
    var_17 = ((var_2 ? ((799158832 ? 7013815257094798768 : var_2)) : (((((var_1 ? -2 : 505405046)))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [0] = (min(((-26 ? (arr_0 [i_0 - 1]) : -70)), ((min((arr_0 [i_0]), var_5)))));
        arr_3 [14] = (((((min(var_12, var_6))) ? 255 : ((min(var_1, (arr_0 [i_0])))))));
    }
    #pragma endscop
}
