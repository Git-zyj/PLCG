/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_12;
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (var_13 - -1952863484);
        var_22 = 1952863483;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((-((((arr_2 [i_0]) ? 598733298 : -20)))));
            arr_6 [15] [20] [i_0] = (!354440568);
        }
        arr_7 [i_0] = -693435252;
    }
    var_23 = (0 + var_17);
    #pragma endscop
}
