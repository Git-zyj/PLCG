/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_3 [i_0]) ? 7174 : (var_9 != 7174)));
        var_18 = var_6;
        arr_5 [i_0] = ((14336 != (((arr_2 [15]) ? var_17 : -7174))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = (((var_7 % var_3) ? (arr_2 [i_1 - 2]) : 7174));
        arr_9 [i_1] = 7179;
        var_19 = (((7170 && var_13) ? 65511 : (!-856655676)));
        var_20 = ((arr_2 [i_1 - 4]) ? 65489 : (arr_6 [i_1 - 4] [i_1 - 2]));
    }
    var_21 = var_9;
    var_22 &= var_16;
    var_23 = var_11;
    #pragma endscop
}
