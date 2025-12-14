/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_3;
    var_16 = (!1494602237);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] |= (((((-419507952 < 224) && var_9)) ? (min(var_0, ((var_13 ? (arr_3 [i_0]) : (-9223372036854775807 - 1))))) : 4294967295));
        arr_5 [i_0] = var_0;
    }
    var_17 = ((var_14 - (min(var_4, (var_4 - var_2)))));
    #pragma endscop
}
