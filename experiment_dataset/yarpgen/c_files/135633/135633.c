/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((!((min((min(var_7, var_3)), (max(var_7, var_0))))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = ((~(~-6835194244647352233)));
        var_22 = (arr_2 [i_0]);
        var_23 = (i_0 % 2 == zero) ? ((((arr_0 [i_0]) >> (arr_0 [i_0])))) : ((((((arr_0 [i_0]) + 2147483647)) >> (((arr_0 [i_0]) + 55)))));
        var_24 *= max(var_6, (min((arr_1 [i_0]), (arr_0 [20]))));
    }
    var_25 = ((var_16 ? ((~((var_9 ? var_3 : var_6)))) : ((var_13 ? (~15468) : (~0)))));
    var_26 = (max(var_17, var_4));
    #pragma endscop
}
