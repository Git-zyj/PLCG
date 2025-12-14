/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((9223372036854775807 ? var_8 : ((min(var_5, 255)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 - 1] = ((4294967292 ? 4 : 4294967292));
        var_11 ^= (arr_0 [i_0] [i_0 + 1]);
        var_12 = ((-(arr_0 [i_0 + 1] [i_0 - 1])));
    }
    var_13 = (((((var_2 ? 4 : -var_9))) ? -var_9 : ((var_4 ? (min(10, var_3)) : var_6))));

    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1 + 4] = (max((arr_1 [i_1 - 1]), (arr_3 [i_1 - 2] [i_1])));
        var_14 = 4294967292;
    }
    #pragma endscop
}
