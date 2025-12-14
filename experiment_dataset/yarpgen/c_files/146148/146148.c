/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = var_9;
    var_20 = (0 != 12466635711618027998);
    var_21 |= ((((((((var_2 >> (var_15 - 3190922248)))) != (~var_15)))) >> (var_11 - 1861112035)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_22 ^= (arr_0 [1] [i_0 - 3]);
        arr_3 [i_0] = ((156 ^ (~11362007970668771775)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_2 [i_1])));
        arr_7 [i_1] = (arr_2 [i_1]);
        var_23 = arr_2 [i_1];
        arr_8 [i_1] = ((((~(((arr_4 [i_1]) ? 3815711475 : (arr_1 [i_1] [i_1]))))) | (arr_0 [i_1] [i_1])));
    }
    #pragma endscop
}
