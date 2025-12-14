/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((arr_1 [i_0]) ? var_14 : ((((var_1 || (arr_2 [i_0]))))));
        arr_4 [i_0] = -3046412243;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = -17004;
        var_21 ^= ((1248555052 ? 2815428063 : 2147483648));
        var_22 = 17004;
        arr_9 [i_1] = (arr_1 [i_1]);
        arr_10 [i_1] [i_1] = ((6428491248264807169 ? -16979 : 8685683781316060987));
    }
    var_23 = ((((max((~2148065036), var_16))) != var_15));
    var_24 = (((((((min(var_12, -29221))) || var_14))) | (!var_2)));
    #pragma endscop
}
