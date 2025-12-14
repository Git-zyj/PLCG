/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 << (((!((min(var_11, var_16))))))));
    var_21 = var_2;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_22 = max((arr_1 [i_0 - 2] [i_0 - 2]), 11749913227338145026);
        var_23 = (max(var_23, var_11));
        var_24 = 1210193500;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = (-(((!(!var_16)))));
        var_25 = max((arr_3 [i_1]), ((-(arr_3 [i_1]))));
        var_26 = (max(var_26, (~var_16)));
    }
    var_27 = var_3;
    var_28 = ((~((max((!-1935682608), (min(var_6, var_5)))))));
    #pragma endscop
}
