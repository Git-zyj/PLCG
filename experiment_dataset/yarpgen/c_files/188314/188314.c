/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 + var_10);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((((min(9223372036854775807, 9223372036854775796)) + (max(var_11, var_11)))));
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        var_19 = (~((-2 ? 0 : 905961744)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = var_9;
        arr_8 [i_1] = (arr_5 [6]);
        var_20 = ((((min((max(-4858, -6843722892387896966)), ((min(1, (arr_6 [i_1]))))))) ? (min((!9223372036854775796), var_8)) : -905961718));
    }
    #pragma endscop
}
