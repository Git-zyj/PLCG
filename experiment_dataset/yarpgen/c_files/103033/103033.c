/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (9255617916152831312 ? var_9 : var_3);
    var_16 = (max(var_16, (!var_11)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 += 255;
        arr_3 [i_0] &= ((((((arr_1 [i_0] [i_0]) ? var_3 : var_8))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? -60 : (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
