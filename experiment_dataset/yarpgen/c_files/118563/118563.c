/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [5] = max(-889593355, ((~(arr_0 [i_0]))));
        var_19 = (((8388607 - (((var_16 - (arr_0 [12])))))));
        var_20 = (min((+-32765), ((~(arr_1 [i_0])))));
        var_21 -= (((var_15 ? (arr_1 [i_0]) : var_12)) > -889593355);
    }
    var_22 = var_11;
    var_23 = ((min((var_9 + 1764939548682321259), var_6)));
    #pragma endscop
}
