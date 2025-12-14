/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_10;
    var_21 = (((min(((0 ? 3695711232 : var_13)), var_3))) ? ((199 ? var_3 : var_4)) : -31171);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (max(((((arr_1 [i_0]) < (((-16097 - (arr_3 [i_0]))))))), (((arr_2 [i_0]) / (arr_2 [i_0])))));
        var_22 = (min(var_22, 4611128662145553289));
        arr_5 [i_0] [i_0] = (((((var_18 ? ((((arr_2 [i_0]) && 32759))) : (arr_1 [i_0])))) && (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_23 += ((~((-(arr_6 [i_1] [i_1])))));
        var_24 = (max(var_24, -245));
    }
    #pragma endscop
}
