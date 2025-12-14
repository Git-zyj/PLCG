/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 |= 4920480629608166687;
        var_12 = (min(var_12, (~4920480629608166683)));
        arr_2 [i_0] = (0 && var_7);
        var_13 ^= ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = 128;
        arr_7 [i_1] = 7286937414829812469;
    }
    #pragma endscop
}
