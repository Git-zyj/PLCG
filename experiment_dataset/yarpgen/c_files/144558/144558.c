/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = 0;
        arr_2 [i_0] = (min(((min(0, 35411))), 24));
        var_20 = ((!((min(var_12, var_3)))));
        var_21 = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_22 = (arr_3 [i_2]);
                        var_23 = var_18;
                        var_24 = (arr_5 [i_0] [i_0] [i_2 - 3]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_25 ^= (((arr_11 [i_4]) / var_18));
        var_26 = ((0 ? (arr_10 [i_4]) : 255));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_27 |= ((0 ? ((max(7, (~0)))) : -5816979610461775522));
        var_28 |= (((((var_3 ? 0 : -185342621))) ? (var_17 <= 255) : (0 || 0)));
        var_29 ^= ((!(arr_8 [i_5] [i_5] [i_5] [i_5] [0] [i_5])));
    }
    var_30 = var_15;
    #pragma endscop
}
