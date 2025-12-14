/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 ^= (max(((~(arr_1 [i_0] [i_0]))), (((var_9 != (arr_2 [i_0] [i_0]))))));
        arr_3 [15] [i_0] &= ((8 ? 255 : -32582));
        var_14 = 196;
        arr_4 [i_0] = (arr_2 [i_0] [8]);
        arr_5 [18] [1] = 227;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] [9] = (((var_4 ? (arr_7 [i_1]) : var_7)));
        arr_9 [14] [i_1] = (((((((max(-1, var_10))) ? (min(23824, var_3)) : ((((-2147483647 - 1) ? var_5 : var_10)))))) && ((min(((193869295 ? var_7 : 23824)), ((var_5 ? -3604 : 196)))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_15 = var_5;
            var_16 ^= (arr_6 [i_2]);
            var_17 ^= 244;
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_18 = (min(var_18, (((65067 ^ (~5304196853925324223))))));
        var_19 = ((18241162332877432542 ? -18314 : (arr_7 [i_3 + 3])));
        arr_15 [i_3] [i_3] = (((arr_13 [i_3 - 2]) ? ((15544 / (arr_11 [6] [i_3 - 3] [i_3]))) : 244));
    }
    var_20 |= (min(var_3, var_10));
    #pragma endscop
}
