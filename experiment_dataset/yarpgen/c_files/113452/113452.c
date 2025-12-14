/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 % ((-(var_9 ^ 16384)))));
    var_15 -= var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [7] [7] = (!((((arr_1 [i_0]) ? (var_1 != var_0) : (arr_1 [i_0])))));
        var_16 ^= var_1;
        arr_4 [i_0] = ((~(((!(((~(arr_2 [i_0] [i_0])))))))));
        var_17 += ((94 ? ((((511 ? 5343 : (arr_0 [i_0]))) & ((-109 ? var_2 : (arr_2 [9] [i_0]))))) : ((((arr_0 [i_0]) >= ((min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_9 [i_1] = ((((var_7 && var_12) && (((-31020 ? var_11 : 7386576016620642966))))));
            arr_10 [i_1] [i_1] [i_1] = (!(((~(arr_6 [i_1] [i_0])))));
        }
    }
    var_18 = (min((-5343 % -2156), (((-16562 + 2147483647) << (5328 < var_8)))));
    #pragma endscop
}
