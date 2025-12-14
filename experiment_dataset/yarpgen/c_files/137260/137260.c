/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min((~126), var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [7] [7];
        var_16 = arr_0 [i_0] [3];
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [1] [i_1] = (((~(arr_4 [i_1]))));
        arr_7 [i_1] [i_1] = 14740;
    }
    var_17 = var_14;
    var_18 = -7535994797643393817;
    #pragma endscop
}
