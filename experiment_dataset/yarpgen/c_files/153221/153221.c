/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 = var_0;
        arr_2 [i_0] [1] |= (((arr_0 [16]) ? (arr_1 [i_0 - 1]) : ((~(arr_1 [i_0])))));
        var_11 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((+(min((arr_3 [i_1] [i_1]), 4449))));
        var_12 ^= (min(-873247190, (arr_3 [14] [i_1])));
        arr_6 [0] [i_1] = ((((min(((min(4449, var_1))), 873247190))) ? (((min((arr_4 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))) : ((var_4 ? var_7 : var_2))));
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_13 = (max(var_13, ((min((((960182219 ? (min(1, 873247190)) : ((min(65535, 27)))))), (min((min(65508, 2110759932508091263)), (min(2056420093816015835, 17294869919331251463)))))))));
        arr_9 [i_2 - 1] &= ((var_7 ? 1 : (min((arr_4 [i_2 - 2] [i_2 + 1]), (var_8 / var_8)))));
    }
    var_14 *= (((var_9 >= 24034) ? (min(var_2, (var_8 % var_6))) : (~var_0)));
    #pragma endscop
}
