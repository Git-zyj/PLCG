/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((var_11 ? (var_1 / var_5) : var_4)), 8427908605605882525);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((10018835468103669089 ? 10018835468103669087 : 8427908605605882525));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_2] [i_2] = (arr_8 [i_0] [i_2] [i_2]);
                            var_14 &= (((arr_14 [20] [i_0] [i_3] [i_4]) ? (arr_14 [2] [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_15 = (max(((min(var_11, (arr_14 [i_3] [i_2] [i_2] [17])))), -var_7));
                    }
                }
            }
        }
        arr_17 [i_0] &= 8427908605605882525;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = (((arr_18 [i_5]) * var_0));
        var_16 = (max(var_16, -1490206081));
        arr_23 [i_5] [i_5] = var_7;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_26 [i_6] = -1;
        var_17 = (((((max(var_4, var_4)) ? var_5 : (max(8427908605605882525, (arr_14 [i_6] [i_6] [i_6] [i_6])))))));
        var_18 = ((var_8 ? 1 : (var_4 | var_7)));
    }
    var_19 = var_2;
    var_20 = (((((var_5 ? 15579694000165493982 : var_4))) ? ((min(var_5, var_11))) : ((var_0 ? ((8427908605605882525 ? var_0 : var_11)) : (min(var_1, var_0))))));
    #pragma endscop
}
