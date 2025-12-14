/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!82596801) ? ((~(var_9 & 0))) : var_9));
    var_19 = var_6;
    var_20 -= (((((~(!124)))) ? ((((min(-1320116288, 108)) < ((var_4 ? var_1 : var_1))))) : (((var_10 + 2147483647) << (((var_10 + 133) - 25))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [3] [i_1] = (!65535);
                        arr_12 [i_0] [i_1] [i_2] [i_3] = var_12;
                        var_21 = (max(11217, (max(4660602505523363583, (arr_7 [i_1])))));
                    }
                }
            }
        }
        arr_13 [1] = ((~(arr_4 [i_0])));
        var_22 = var_15;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = (~var_2);
        arr_16 [i_4] = ((((-1 ? 1244476192 : 288944738)) - 17));
    }
    #pragma endscop
}
