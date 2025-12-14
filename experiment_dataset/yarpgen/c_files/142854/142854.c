/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(max((var_7 / var_5), var_5)));
    var_12 = var_10;
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = 37390;
        var_15 = (max(var_15, ((min((min(((min(var_0, 191))), var_5)), ((((arr_2 [i_0]) > (arr_0 [i_0])))))))));
        var_16 = arr_1 [6];
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = 8377767141188503008;
        var_17 = (max(var_17, 12830));
        var_18 = (max(var_8, var_7));
    }
    #pragma endscop
}
