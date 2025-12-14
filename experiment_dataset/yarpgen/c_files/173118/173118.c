/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] |= ((!(arr_0 [13])));
        var_13 ^= var_3;
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = ((var_6 ^ ((((!(arr_1 [i_1])))))));
        arr_6 [i_1] = ((422705380 ? -422705381 : 1));
    }
    #pragma endscop
}
