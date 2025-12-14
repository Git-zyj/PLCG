/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, 15916827158692062712));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (min((((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? 0 : (arr_0 [i_0]))) : ((576460752236314624 + (arr_1 [i_0] [i_0]))))), ((var_12 | (((arr_0 [i_0]) ^ 576460752236314624))))));
        var_19 = ((~((((max(576460752236314624, (arr_1 [i_0] [i_0]))) <= ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))))));
    }
    var_20 = var_7;
    var_21 = min(var_16, (((var_6 > (var_11 & 17870283321473236991)))));
    #pragma endscop
}
