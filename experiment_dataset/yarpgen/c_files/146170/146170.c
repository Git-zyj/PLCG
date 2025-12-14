/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [6] [i_2] [i_2] [i_0 + 2] = ((var_10 << (((arr_2 [i_0] [10]) - 3712255471980426834))));
                    var_17 = ((~(arr_4 [i_0] [i_0] [i_0 + 1])));
                }
            }
        }
        var_18 += (!-1499344028);
        var_19 ^= (((-1499344028 + -16482) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0 - 2]) + (5405224236773829949 - 10226972761493576498)))));
        var_20 -= var_5;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_21 |= (arr_9 [i_3 + 1] [i_3 + 1]);
        var_22 = (((arr_8 [i_3 - 1]) ^ (arr_8 [i_3 + 3])));
    }
    var_23 = (((var_1 / var_1) ? var_3 : (min(var_5, ((var_6 ? var_5 : var_16))))));

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_24 &= var_4;
        var_25 |= var_14;
        arr_14 [i_4] &= (arr_11 [14] [i_4]);
    }
    #pragma endscop
}
