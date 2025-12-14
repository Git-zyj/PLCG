/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = ((4294967289 ? (arr_2 [i_0 - 2]) : (arr_1 [i_0 - 1])));
    }
    var_13 ^= (max(4294967289, (min(-7, var_4))));
    var_14 = ((~(4294967289 >= 1693869602548185028)));
    #pragma endscop
}
