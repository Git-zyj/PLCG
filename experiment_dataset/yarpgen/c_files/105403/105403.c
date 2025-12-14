/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!-2297913129);
        var_14 += -32;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (-32767 - 1);
        arr_8 [i_1] = (min((arr_6 [i_1 - 1]), (((~(((arr_6 [i_1]) ? 2297913132 : -60602008)))))));
        var_15 ^= (~20188);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = (arr_6 [i_2]);
        var_17 = (min(var_17, (arr_9 [i_2])));
        arr_11 [i_2] [i_2] = ((((((((((arr_4 [i_2]) && var_10))) >= -14232)))) < ((16 + (max((arr_5 [i_2] [i_2]), var_7))))));
        var_18 += (min(((~(arr_2 [i_2]))), var_0));
    }
    var_19 = ((~(((((min(60601996, var_4))) || var_9)))));
    var_20 ^= var_9;
    var_21 -= var_3;
    #pragma endscop
}
