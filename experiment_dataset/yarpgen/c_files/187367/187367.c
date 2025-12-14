/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [8] [12] &= ((((max(221, (var_2 % 226)))) ? ((min(3927372596166757664, 10798380011786931938))) : ((1627516146218434489 ? 7202583026381442339 : ((var_11 ? 18020257877900658903 : 14519371477542793951))))));
                        arr_11 [i_3] [i_1] [i_0] [i_3] = var_4;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 += ((max(73, 759631132)) - (((max(84, 129)))));
                        var_20 += (max(3927372596166757664, 10111428270851570917));
                        arr_14 [i_0] [i_1] [i_0] [11] = min((var_10 / 15157876228853222462), 14519371477542793951);
                        var_21 += 10798380011786931916;
                        arr_15 [i_0] = (((131 == 0) * var_12));
                    }
                    arr_16 [i_0] [2] = 576460752303423484;
                }
            }
        }
    }
    var_22 = max(426486195808892712, 426486195808892712);
    var_23 = (max(var_23, var_10));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = ((18020257877900658914 ? 14519371477542793951 : 1));
        var_25 ^= ((0 ? (9474649607579801721 + 14821069582880585898) : 1));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((6870015763005916617 ? 73 : -31939)))));
                                arr_28 [16] [i_7] = (16802085098077604458 + var_17);
                                arr_29 [i_7] [13] [i_7] = (17650157425043353611 == 1023);
                            }
                        }
                    }
                    arr_30 [i_7] = (((136 && 182) & (0 ^ 0)));
                    arr_31 [7] [i_7] [i_6 - 1] [i_5] = (((-31939 && var_17) != 5000518378666648470));
                    arr_32 [i_5] [i_7] [i_5] = var_9;
                }
            }
        }
        arr_33 [i_5] = (0 | 16802085098077604471);
    }
    #pragma endscop
}
