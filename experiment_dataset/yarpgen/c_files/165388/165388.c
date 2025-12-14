/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 -= ((((-(arr_0 [i_0 + 1]))) == (((arr_0 [i_0 + 2]) | (arr_0 [i_0 + 2])))));
        var_20 = ((((max(((var_18 ? (arr_2 [i_0]) : var_4)), (arr_2 [i_0 - 1])))) ? ((min(var_1, var_3))) : (var_9 - var_11)));
    }
    var_21 += var_16;
    #pragma endscop
}
