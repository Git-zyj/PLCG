/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? var_0 : ((var_4 ? (((var_1 ? var_2 : var_2))) : var_14))));
    var_16 = var_0;
    var_17 = (min(var_17, ((min(var_4, (max(var_13, var_14)))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 = max(var_3, (max(223, 1)));
        var_19 = (max(((25611 ? 18446744073709551595 : 64)), (arr_0 [i_0 - 3])));
        var_20 = (arr_1 [i_0]);
    }
    var_21 = (var_1 / 26156);
    #pragma endscop
}
