/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((((~var_12) - (var_0 * var_10)))), (var_14 + 12713556656394866662)));
    var_19 = ((var_4 | (((((var_11 ? 0 : 12713556656394866665))) ? var_0 : (var_14 | var_16)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = ((10041 & ((((((arr_1 [i_0] [5]) ? var_9 : 127))) & (min(16687, (arr_1 [i_0] [6])))))));
        var_21 = ((~((((max(10, (-127 - 1)))) ? (max((arr_0 [i_0]), -27708)) : (~var_17)))));
        var_22 = (~var_7);
    }
    var_23 -= 448;
    var_24 = var_17;
    #pragma endscop
}
