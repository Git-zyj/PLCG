/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 -= (max(var_16, (((!0) + (max(1073217536, (arr_1 [i_0])))))));
        var_21 = ((arr_2 [3]) || ((max(-var_19, (arr_2 [i_0])))));
        var_22 = (arr_1 [i_0]);
        var_23 = (min(var_23, (max(var_10, var_16))));
    }
    var_24 = (~var_2);
    var_25 = var_6;
    var_26 = var_7;
    #pragma endscop
}
