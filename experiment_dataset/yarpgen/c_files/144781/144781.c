/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_5 ? ((var_1 ? var_10 : var_14)) : (((var_8 ? 32767 : var_9))))), (!4328263505030636696)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_21 |= (max((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 1] [i_0]))), (min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 2] [i_0])))));
        var_22 += (min((arr_1 [i_0 + 1] [i_0 + 2]), (arr_1 [i_0 + 2] [i_0 + 2])));
        var_23 = (arr_1 [i_0] [i_0]);
    }
    var_24 = var_14;
    #pragma endscop
}
