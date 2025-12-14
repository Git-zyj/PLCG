/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2990113410;
    var_19 = (max(var_19, var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (max((-1 & -27), (-32767 - 1))) : 0));
        var_20 += ((var_7 ? (arr_0 [8]) : (((97 && var_9) ? (min(var_6, 1)) : 17))));
    }
    #pragma endscop
}
