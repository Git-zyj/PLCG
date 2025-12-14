/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 17400320324252020959;
        var_18 = (min(var_18, 1));
        var_19 = (min(var_19, -3808554018));
    }
    var_20 = var_0;
    var_21 = (((((var_15 >> (var_11 + 141)))) ? ((var_10 ? (3153090402 - 102) : (!4503598553628672))) : (((((30687 ? var_0 : var_15)))))));
    var_22 = ((!((!((min(var_9, -83)))))));
    var_23 = ((~(var_8 == 5699539297368907944)));
    #pragma endscop
}
