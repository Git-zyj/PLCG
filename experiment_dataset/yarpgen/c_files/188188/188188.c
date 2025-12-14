/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 - 2] [i_2] = (!var_8);
                    arr_9 [i_2] [i_1] [i_0] [i_0] = (((-1 & 65535) ? ((max(var_5, ((~(arr_7 [i_0] [i_1] [i_2] [i_0])))))) : (arr_6 [i_2] [i_1] [i_0])));
                    var_12 = var_1;
                }
                var_13 ^= ((-((max(19, 31634)))));
                var_14 = (arr_4 [i_1] [i_1 - 2] [i_1 - 2] [i_0]);
                var_15 = (min(var_15, (((2914924437 ? (((((~84) || (var_5 >= 6231376178855402985))))) : (2914924437 >= 0))))));
                var_16 = ((148166683 == (max(4294967295, 8488))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [i_5] = ((((arr_4 [i_3] [i_5] [i_6] [i_7]) ? (0 | 16777216) : var_9)));
                                var_17 = (arr_5 [i_3]);
                                var_18 -= min(((((arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 2] [i_7] [i_7]) ? (arr_23 [i_7 + 3] [i_7 + 2] [i_7] [i_7 + 1] [i_7 - 1]) : (arr_23 [i_7 + 3] [i_7 + 1] [i_7] [i_7 + 3] [i_7])))), (((((max(var_0, 5100)))) / 171)));
                                arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_6] = 6231376178855402985;
                                var_19 = max(148166685, 5121);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        var_20 = -var_5;
                        var_21 = (max(var_21, 255));
                        var_22 = 6231376178855403002;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_23 = (arr_14 [i_5] [i_4]);
                        var_24 -= (6 & 1657736659);
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    arr_36 [i_3] [i_4] [i_10] = ((~(-9223372036854775807 - 1)));
                    var_25 = (max(var_25, 110));
                }
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    var_26 = ((min(-643, 62824)));
                    var_27 = min(((-9006 ? -643 : 3811005068)), 613793520);
                    arr_41 [i_3] [i_4] = (arr_35 [i_3] [i_11] [i_11] [i_4]);
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    arr_45 [i_3] [i_4] [i_12] = (~6386057478026301750);
                    arr_46 [i_3] [i_4] = (~60436);
                    var_28 = (min(var_28, -185));
                }
                var_29 ^= var_1;
                var_30 ^= (-31910 | 5000);
                var_31 |= (!613793520);
            }
        }
    }
    #pragma endscop
}
