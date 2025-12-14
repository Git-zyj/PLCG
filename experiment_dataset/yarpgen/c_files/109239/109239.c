/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (301518561 / var_15);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = ((1 - (arr_2 [i_0 - 2])));
        var_21 = ((((max((arr_2 [i_0 - 1]), 1))) ? (((!((((arr_0 [i_0]) ? 1 : (arr_0 [i_0]))))))) : 1));
        var_22 = 1;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = (max((((1 % (arr_3 [i_1])))), (max(var_10, (min(var_6, var_4))))));
        var_24 = (arr_4 [i_1]);
    }
    var_25 = var_2;
    #pragma endscop
}
