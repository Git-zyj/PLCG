/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_13));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_1 | (arr_0 [i_0])))) ? (max((arr_1 [i_0] [i_0]), 5057819178275872853)) : (((1 ? 0 : 1))));
        arr_3 [i_0] = 111;
        var_20 = (max(var_20, ((min(1, 71)))));
        var_21 -= (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (18446744073709551615 - 1674003453998704404);
    }
    #pragma endscop
}
