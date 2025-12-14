/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [10] [10] |= ((~((((arr_0 [5]) != 5968117826003366472)))));
        var_20 = ((~(arr_1 [i_0])));
        var_21 = ((~(~0)));
    }
    var_22 = ((((var_15 > ((var_10 ? 13873 : var_17)))) ? ((-1163479534 ? 1593466118881097200 : 36028797018955776)) : (((var_18 ? var_8 : (max(-13715, -5247075901624701045)))))));
    #pragma endscop
}
