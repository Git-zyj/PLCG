/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [7] [i_0] = ((18446744073709551615 ? var_12 : ((var_5 ? (var_6 * 13226) : var_3))));
        var_15 = (~var_3);
        arr_4 [1] = ((arr_2 [i_0]) == (arr_0 [i_0]));
    }
    #pragma endscop
}
