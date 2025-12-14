/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_11 = (min(var_11, (var_8 > var_5)));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_0] = var_5;
                            arr_14 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] = var_10;
                            var_12 *= (!var_2);
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] = var_3;
                            var_13 = var_6;
                        }
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            var_14 = (max(var_14, var_5));
                            arr_18 [i_0] = ((((var_3 ? var_4 : var_10)) == 614738860));
                        }
                        var_15 = (max(var_15, var_9));
                        arr_19 [i_0] [i_0] = var_9;
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_23 [i_1] [i_0] [i_1] [i_1] [i_1] [14] = var_8;
                        arr_24 [i_0] [i_1 - 2] [i_0] [i_0] [i_0] [i_0] = ((1 & (((max(1, 1))))));
                    }
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_2] [i_7] = (max(((1 ? -109 : (min(-84, 864470830)))), -73));
                        var_16 = (max(-var_8, var_8));
                    }
                    var_17 = (max(var_17, var_1));
                    arr_28 [i_0 + 1] [i_0] = var_2;
                    arr_29 [i_2] [i_2] &= var_10;
                    var_18 = (max(var_18, var_6));
                }
            }
        }
        arr_30 [i_0] [i_0] = (max((((var_10 ? 1720538534 : -86))), (((max(-75, var_7))))));
        arr_31 [i_0 + 2] [i_0] = var_2;
        var_19 = ((((min(var_7, var_9))) ? ((min(var_7, var_8))) : ((var_1 ? var_0 : var_3))));
        var_20 = (((((((min(var_6, var_0))) * ((min(var_7, var_3)))))) ? (((((30 ? 1 : var_5)) / var_8))) : var_4));
    }
    var_21 |= (~var_8);
    #pragma endscop
}
