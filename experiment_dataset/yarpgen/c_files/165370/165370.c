/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_7, var_1));
    var_11 |= var_4;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-116 & ((0 ? 3939882859 : 0))));
        var_12 = (max(var_12, (((~(~-var_7))))));
        var_13 = (max(var_13, (((0 ? ((-(arr_1 [i_0 + 2]))) : ((((~var_9) ? (var_1 ^ var_3) : ((((var_5 < (arr_0 [1])))))))))))));
        var_14 = (min(var_14, var_1));
    }
    var_15 = ((34316 | (~var_1)));
    var_16 = ((((98 ? var_4 : var_3))));
    #pragma endscop
}
