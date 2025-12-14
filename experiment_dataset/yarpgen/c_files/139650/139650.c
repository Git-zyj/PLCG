/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 += arr_1 [i_0] [4];
        arr_2 [i_0] = (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [16] [i_0]))), (-841 ^ -23027)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = ((-(arr_4 [i_1] [i_1])));
        arr_7 [i_1] = ((-((-71 ? -1 : -20))));
    }
    var_13 = var_3;
    var_14 = (max(((((((var_10 + 2147483647) >> (var_3 + 72)))) ? ((var_6 ? var_1 : var_0)) : var_0)), (max(((29 ? 83 : -20)), var_11))));
    var_15 ^= var_3;
    #pragma endscop
}
