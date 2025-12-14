/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (((((288230376149614592 | (1263906838 & 13157344547497703047)))) ? -20 : var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 2] = ((~(((arr_0 [i_0]) ? 2 : 31))));
        var_21 = (max(var_21, -var_11));
        arr_5 [i_0] [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = ((((~(arr_0 [i_1])))) ? ((((arr_6 [i_1]) << (var_9 - 3878782341)))) : ((((((((arr_0 [9]) + 2147483647)) << (1 - 1)))) ? (max((arr_8 [0]), var_18)) : (arr_1 [i_1]))));
        var_22 = (min(var_22, ((((((min((min(var_0, (arr_7 [i_1]))), ((min((arr_0 [i_1]), var_9))))) + 9223372036854775807)) << (((((((22 ? (-2147483647 - 1) : 1))) ? 1 : var_7)) - 1)))))));
    }
    #pragma endscop
}
