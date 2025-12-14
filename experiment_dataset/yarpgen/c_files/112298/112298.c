/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-1525414583, 0));
    var_19 = ((((((max(var_10, var_4)) * var_8))) ? (!var_11) : var_8));
    var_20 = (min(1, var_16));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = ((((arr_1 [i_0] [i_0]) ? var_15 : -15)) | ((max(((-(arr_0 [9]))), ((min(var_6, (arr_0 [i_0]))))))));
        var_22 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = (((((1 >> (var_6 - 171)))) < var_0));
        var_24 = (arr_3 [i_1] [i_1]);
    }
    #pragma endscop
}
