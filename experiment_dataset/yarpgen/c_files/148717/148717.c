/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((5422206905556485812 >= 13024537168153065802) + var_3))) ? ((var_1 ? ((var_8 ? var_0 : var_1)) : (((var_8 ? var_9 : 229))))) : ((min(((max(192, var_9))), ((var_11 ? var_1 : var_11)))))));
    var_13 = var_4;
    var_14 *= var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((((arr_1 [i_0]) << (arr_1 [i_0]))));
        var_16 = ((!(((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_9)) < (arr_1 [i_0])))));
        var_17 = (max(((((arr_1 [i_0]) ? 229 : (arr_1 [i_0])))), ((var_11 ? 0 : (min((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    #pragma endscop
}
