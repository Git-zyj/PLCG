/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = ((max((arr_3 [i_0] [i_0]), (arr_2 [i_0 + 1]))));
        arr_4 [i_0] = (((arr_1 [i_0]) ? (((max((arr_2 [i_0]), 11)))) : (min(49399, (arr_3 [i_0] [i_0])))));
    }
    var_11 = (((min(var_1, (var_1 == 53667))) << (var_4 <= var_1)));
    var_12 = ((max(var_8, var_9)));
    #pragma endscop
}
