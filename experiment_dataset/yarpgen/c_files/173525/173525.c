/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(32765, var_10));
    var_20 += var_14;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((~(min(112, (((-9223372036854775807 - 1) + 63519))))));
        var_21 ^= ((((((var_8 | (arr_0 [18] [i_0]))) ^ (max(-72, (arr_1 [i_0]))))) | var_16));
        var_22 = (max(var_22, ((((-((7167 ? var_16 : (arr_0 [2] [i_0])))))))));
    }
    var_23 = (max(((~((min(var_16, var_2))))), (((min(var_10, var_13)) | var_18))));
    #pragma endscop
}
