/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = ((arr_0 [i_0 + 3] [i_0 - 1]) ? ((var_11 ? (arr_1 [i_0 + 2]) : (arr_0 [19] [i_0 + 3]))) : (max((arr_0 [i_0 + 2] [i_0 + 1]), (arr_0 [i_0] [i_0 + 3]))));
        var_20 = (((arr_0 [i_0] [i_0]) - (var_18 * -1073741824)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = ((arr_1 [i_1]) ? var_2 : -8386598725940724465);
        var_22 ^= (((-8386598725940724465 + 9223372036854775807) >> (((arr_2 [i_1]) - 897350256))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_1] = ((((min((((arr_11 [i_1]) >= (arr_4 [i_1]))), ((var_5 || (arr_0 [i_1] [i_3])))))) ^ (arr_5 [i_1] [i_1])));
                    arr_13 [i_1] [i_1] = var_18;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = (((-8386598725940724485 + 9223372036854775807) << (((arr_15 [i_4]) - 124))));
        arr_16 [i_4] = ((-((-2147483641 ? -8386598725940724465 : 44))));
    }
    var_24 = (((!var_9) ^ var_2));
    #pragma endscop
}
