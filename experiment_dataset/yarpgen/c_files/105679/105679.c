/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = ((var_8 ? var_6 : 0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] |= (min(127, (max(var_11, (min(var_14, var_16))))));
        var_20 = (max((min((((arr_2 [i_0]) ? 18446744073709551610 : (arr_2 [i_0]))), var_2)), (arr_1 [i_0])));
        var_21 = (((241 ? -7761 : 15308)));
    }
    var_22 -= var_14;
    #pragma endscop
}
