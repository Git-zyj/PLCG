/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_13 = (((min(5029163822736484771, 62244)) > (arr_1 [i_0] [2])));
        var_14 -= (max(-4537530571488324244, 144115188075855616));
    }
    var_15 ^= 9;
    var_16 = ((~(((!(((var_11 ? 1 : 15375))))))));
    #pragma endscop
}
