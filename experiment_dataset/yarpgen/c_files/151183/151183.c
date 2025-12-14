/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((arr_1 [i_0]) ? (~var_10) : (max(var_15, ((-(arr_1 [i_0]))))));
        var_21 *= ((!((min((arr_1 [i_0]), var_5)))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_22 ^= arr_4 [i_1];
        var_23 = ((!(arr_2 [i_1] [6])));
    }
    var_24 -= var_17;

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_25 = (min(var_25, -2147483640));
        var_26 = (min(var_26, ((min((arr_7 [i_2]), (~-271101390))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = (min((arr_15 [i_2] [i_3] [i_2] [i_2]), (arr_15 [i_3] [i_3] [i_4] [i_4])));
                    var_27 = var_2;
                    arr_17 [12] [i_3] [i_4] = ((!(arr_11 [i_2] [i_3])));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_28 = (~((-(max((arr_9 [i_5] [i_5] [i_5]), 271101388)))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_29 = (min(var_29, var_14));
                    var_30 = ((~(~var_19)));
                    var_31 = max(((((max(var_5, (arr_10 [i_5] [0])))) ? (min((arr_19 [i_5]), 896)) : (arr_19 [i_7]))), ((~(((arr_24 [i_5] [i_5] [i_5]) ? var_10 : var_15)))));
                }
            }
        }
        var_32 += (~var_14);
    }
    #pragma endscop
}
