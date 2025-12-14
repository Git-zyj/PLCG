/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 | (((var_0 ? (0 <= 0) : ((var_2 ? var_16 : var_15))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((2834526217 <= (~7)));
        arr_3 [i_0 - 3] = (((126 ? (126 & 129) : (arr_0 [i_0 - 3]))) ^ (((min(126, (arr_1 [i_0 - 4]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = (arr_9 [i_2] [i_2] [i_1 - 1]);
                    var_21 = ((0 ? ((((arr_12 [i_1] [i_1] [i_1] [i_3]) ? 153 : 1))) : (((arr_7 [i_1] [i_1]) * (arr_9 [i_1 - 1] [8] [8])))));
                    arr_14 [i_1] [i_2] [21] [i_1] = (((((arr_5 [i_1]) ? 17345836107368810592 : 134)) - 1));
                    var_22 ^= ((~(arr_11 [i_1 + 1] [19] [24])));
                }
            }
        }
        var_23 += ((2305843009211596800 ^ (arr_10 [i_1 + 1] [i_1 - 2] [i_1 - 1])));
    }
    var_24 = (min(var_24, (var_2 & 1)));
    #pragma endscop
}
