/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((-9223372036854775807 != var_3), (min((max(var_3, var_14)), ((max(var_19, var_5))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min((min(var_11, (arr_1 [i_0]))), (min((arr_1 [i_0]), -4294967288))));
        arr_4 [i_0] = (((((((min(var_0, 9223372036854775807))) ? (max(4294967295, var_11)) : var_12))) >= (9223372036854775806 + -1694297826)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((1694297826 ? (255 || 98) : var_1));
        var_21 -= 9223372036854775807;
        var_22 = (arr_1 [i_1]);
    }
    var_23 -= -var_16;
    var_24 = ((((max(var_7, (var_6 > var_6)))) ? (-2566590033193914501 % 1) : var_12));
    var_25 = (max((min(((max(var_6, 389706210))), (var_9 | var_17))), var_7));
    #pragma endscop
}
