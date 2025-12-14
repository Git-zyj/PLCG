/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) ? ((var_2 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : ((((63 ? 193 : 60)) + (arr_2 [i_0] [i_0]))));
        var_18 &= (((arr_2 [i_0] [i_0]) ? (((((126 ? -106 : 14572675081122296924)) < 0))) : (arr_2 [i_0] [6])));
    }
    #pragma endscop
}
