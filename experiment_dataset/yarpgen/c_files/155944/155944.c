/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = ((-(min((15164 * 3772116146978226586), var_10))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1 - 1] = (arr_5 [i_1] [i_1]);
        var_16 ^= (((-870246613991625492 / (arr_2 [i_1 + 1] [i_1 + 1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3 - 1] [i_3 - 1] [i_2] = var_12;
                    var_17 = 3772116146978226597;
                }
            }
        }
        var_18 = ((-(arr_2 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_21 [i_5] [1] = var_9;
        arr_22 [i_5] = (var_1 ^ var_7);
        arr_23 [i_5] = ((var_3 ? var_13 : ((var_2 ^ (arr_1 [0])))));
    }
    var_19 &= ((var_0 ? var_1 : var_2));
    #pragma endscop
}
