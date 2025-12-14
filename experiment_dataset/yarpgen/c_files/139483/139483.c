/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = ((arr_2 [i_0 + 3]) <= ((var_0 ? var_19 : (arr_2 [i_0 - 1]))));
        var_21 = (min(((~(1 | var_19))), ((((494333883 ? -32023 : var_17)) ^ 32022))));
        arr_4 [i_0 + 3] = ((((max((((var_12 <= (arr_0 [i_0 + 4])))), (max(var_4, var_8))))) & ((min(var_9, (max(var_17, var_9)))))));
    }
    var_22 = (((1 * 0) ? -var_8 : (((~(var_4 ^ var_17))))));
    #pragma endscop
}
