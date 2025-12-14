/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((max(-95, (!111)))), (((max(-4259385478943366378, 11197)) ^ 4259385478943366384))));
    var_14 -= var_10;
    var_15 += ((~(((var_9 ^ var_0) - (-32767 - 1)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_7 + 2147483647) << (((min(var_5, var_6)) - 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (!1911880656)));
                                var_17 += (4138 ^ 1);
                                var_18 = (min(var_18, (var_4 - var_11)));
                                arr_11 [i_0] [i_3] [i_3] [i_0] [i_1] [i_0] = ((!((((~var_9) << ((((var_5 >> (699 - 682))) - 7567)))))));
                                arr_12 [i_0] [i_0] [i_2 + 4] [i_2] [i_3] [i_0] [i_2 + 4] = ((~(1 >= -5283789477228740923)));
                            }
                        }
                    }
                    arr_13 [i_0] [10] [i_0] = (~-4259385478943366385);
                    arr_14 [i_0] [i_0] [i_0] = ((~(var_2 / var_12)));
                    var_19 = (max(-46, (var_10 ^ -1911880685)));
                }
            }
        }
        arr_15 [i_0] [i_0] = (-4259385478943366373 <= -110);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, (((min((4138 + 1), 1911880639))))));
                    var_21 = (max(((((!3) && -4292))), (22580 / -692)));
                    arr_22 [i_0 + 1] [i_0] = (-4259385478943366364 % -1232100283);
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (!4259385478943366384);
        arr_26 [i_7] [i_7] = (max(-95, ((2229348545473148144 - (var_4 / -4259385478943366384)))));
        var_22 = (~var_8);
    }
    #pragma endscop
}
