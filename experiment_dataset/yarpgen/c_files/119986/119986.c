/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(-var_11, (var_8 % var_9)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 &= (min(var_7, (arr_0 [i_0])));
        var_16 = 75;
        var_17 = ((!(((var_11 ? var_6 : 18596)))));
        var_18 = (((arr_1 [4]) ? ((((min(var_6, var_10))) ? ((var_1 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : var_5)) : ((min(328455842, ((((arr_1 [i_0]) ? var_0 : var_9))))))));
        var_19 ^= var_9;
    }
    var_20 = (min(var_20, (((((((var_0 && (((24 ? var_0 : var_5))))))) <= (max((max(var_4, var_7)), ((var_1 ? 0 : 0)))))))));
    #pragma endscop
}
