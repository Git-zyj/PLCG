/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = min((((((var_17 ? var_15 : var_3))) ? (((var_10 >> (var_16 + 5154695665900459778)))) : (var_7 % var_7))), var_1);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (min(-0, ((((arr_2 [5]) & (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_0 [2] [i_0]))))))));
        var_21 = (arr_0 [i_0] [12]);
        var_22 = (((arr_0 [i_0] [8]) ? ((-(arr_3 [i_0] [i_0]))) : (arr_0 [11] [i_0])));
        var_23 = (min((arr_1 [7] [4]), ((((arr_2 [i_0]) < (arr_1 [i_0] [i_0]))))));
        var_24 = arr_3 [i_0] [i_0];
    }
    var_25 = max((((((var_1 >> (var_5 - 7035)))) ? ((var_7 ? var_14 : var_13)) : ((var_13 ? var_7 : var_6)))), ((min((!var_14), var_5))));
    #pragma endscop
}
