/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = ((((((((var_1 ? var_11 : 536059382))) ? 1 : 120))) ? var_12 : 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = var_2;
                    arr_8 [i_0] [i_2] = var_5;
                    var_18 *= ((1 ? (arr_5 [i_2 - 1] [i_1] [11] [i_2]) : var_3));
                    var_19 = (((arr_6 [i_0] [i_1] [i_0] [i_0]) ? 1 : var_2));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_3] = 600774764;
                        var_20 = (3694192531 & 3694192531);
                        var_21 = ((1570971665 && var_11) ? var_11 : ((var_15 ? var_11 : var_6)));
                        var_22 *= 3694192557;
                        arr_14 [i_0] [i_1] [i_2] = ((3694192532 > (((1570971665 ? 1 : 1)))));
                    }
                }
            }
        }
        var_23 = var_10;
        arr_15 [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 = -1064923488462981315;
        var_25 *= ((15074 ? var_2 : -1570971666));
        var_26 = (105 ? (!var_5) : var_3);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_27 = ((arr_12 [i_5] [i_5]) ? (arr_12 [i_5] [i_5]) : (arr_12 [i_5] [i_5]));
        var_28 -= -1;
    }
    #pragma endscop
}
