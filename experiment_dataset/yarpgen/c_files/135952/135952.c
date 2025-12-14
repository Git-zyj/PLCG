/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? var_6 : var_10));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [1] &= (253 ^ -2699140336881178236);
        var_16 = (max(var_16, ((7344 > (arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0] [i_0] = ((((min(3822733645953375701, 0))) ? (((((arr_0 [i_0 - 3]) || 50)))) : ((9180821528471193468 | (arr_0 [i_0 - 3])))));
        var_17 = (max(var_17, (~0)));
    }
    #pragma endscop
}
