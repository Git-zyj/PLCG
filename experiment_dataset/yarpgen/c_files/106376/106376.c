/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max(var_18, var_16));
    var_21 = var_16;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = var_11;
        arr_3 [i_0] = min(18288510114553980846, ((max(-1, (49 != var_17)))));
        arr_4 [i_0 - 1] = ((((max((arr_0 [i_0 - 1]), 1))) ? -63 : ((1485055676 ? 86 : (arr_0 [i_0 + 1])))));
        var_22 |= (max((max(17777823304169278680, (var_15 < var_9))), ((((max(11644371941121669830, (arr_0 [i_0])))) ? var_11 : (52015 & var_12)))));
    }
    #pragma endscop
}
