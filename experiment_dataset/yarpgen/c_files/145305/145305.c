/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-900023786758662793 && 1) ? var_11 : (var_4 >= var_11)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = (((((var_8 == (arr_1 [i_0])))) != (26612 == 6)));
        var_18 = (~-31123);
        var_19 = 5953975218247827616;
        var_20 = (max(var_20, (((var_8 || (((-(arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_21 = ((((max((482004132 && var_8), var_11))) ? ((((((arr_3 [i_1] [i_1]) - (arr_0 [i_1])))) ? ((min(26620, 14117))) : -var_10)) : var_11));
        var_22 = var_5;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_23 += (((arr_3 [i_4 - 3] [i_4 - 4]) ? (arr_6 [i_4 + 2]) : (arr_3 [i_4 + 1] [i_4 - 3])));
                        var_24 = (arr_12 [i_2] [i_3] [i_4 - 3]);
                    }
                }
            }
        }
        arr_17 [i_2] &= var_7;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_25 = ((-(((arr_4 [i_6] [i_6]) - var_12))));
        arr_21 [i_6] [i_6] = (arr_18 [i_6]);
    }
    #pragma endscop
}
