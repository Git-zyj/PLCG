/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-var_4 ? var_2 : (-2069110004 / 2069110003)));
    var_17 = ((((((max(62192, 14))) ? var_13 : 1)) < ((min(1, 0)))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_18 *= var_5;
        arr_2 [i_0 + 1] = var_10;
        var_19 *= (((((var_8 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 2])))) && ((((arr_0 [i_0 - 1]) % var_12)))));
        var_20 ^= var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 *= var_10;
                    var_22 ^= var_15;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 = (((var_15 ? (arr_3 [i_3] [i_3]) : var_2)));
        arr_12 [i_3] [i_3] = var_14;
        var_24 ^= ((arr_7 [2]) >= (var_10 * var_0));
    }
    var_25 = ((var_8 == ((((max(-6308632283363140733, var_8))) ? var_4 : 1282315127))));
    #pragma endscop
}
