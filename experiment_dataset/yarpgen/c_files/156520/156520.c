/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [6] [i_0] = (((var_13 << (((-1924147065 + 1924147089) - 24)))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [11] = ((-((((var_5 && var_8) > ((27633 ? 3655444276 : var_5)))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [15] [13] [i_3] = (max(var_11, (((((min(var_5, 2)))) - (max(0, var_10))))));
                        arr_11 [i_1] [i_3 + 2] = -var_2;
                        var_14 = ((~(max(0, -11))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -var_4;
                            arr_16 [i_0] [i_1] [i_1] [i_3] [5] = 1;
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [2] = (((((arr_17 [i_0] [i_1] [i_2] [6] [i_5]) ? (((0 ? 2328638924 : 10529))) : -5706286590023134985)) > (((-8065758545078132470 ? ((min(var_4, 480))) : ((((arr_1 [i_0]) || (arr_1 [12])))))))));
                            arr_21 [i_0] [i_0] [16] [i_0] [i_0] [i_0] [i_0] = (((((((var_6 ? (arr_3 [i_0] [i_0]) : var_6))) ? (min(var_9, 1737912706)) : (!353386593))) > -547366280));
                        }
                    }
                }
            }
            arr_22 [i_1] [i_1] [i_0] &= 52947;
            var_15 = ((((var_0 - (max(0, (arr_0 [i_0] [i_1]))))) * ((((var_2 ? var_5 : var_9))))));
        }
        arr_23 [i_0] = ((~((var_10 | (min(var_2, var_0))))));
        var_16 = (min(var_16, (((0 ? -289961521 : 13254017988617079647)))));
    }
    var_17 = 1638015895;
    #pragma endscop
}
