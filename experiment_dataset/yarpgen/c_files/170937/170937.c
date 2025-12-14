/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? ((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << ((((2219284518 & (arr_4 [i_0] [i_1] [i_0]))) - 71600166))))) : ((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << ((((((2219284518 & (arr_4 [i_0] [i_1] [i_0]))) - 71600166)) - 2147481594)))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0]);
                    }
                }
            }
        }
        arr_13 [i_0] = (~15447690002032952157);
        var_14 = (~var_1);
        arr_14 [i_0] [i_0] = ((~(arr_5 [i_0 + 2])));
    }
    var_15 = (min(var_15, var_4));
    var_16 = (max(((var_5 ? (min(var_13, var_10)) : var_4)), (var_10 && var_4)));
    var_17 = var_12;
    #pragma endscop
}
