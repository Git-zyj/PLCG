/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((var_5 <= 88) > (65520 | var_7)))), var_12));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (arr_0 [i_0 + 1]);
        arr_3 [i_0] = (~28801);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_0));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [3] [i_3] = (arr_7 [i_2 - 3] [i_2 - 3] [i_2 - 2]);
                        var_15 = (arr_6 [i_2] [i_2] [i_2 - 1]);
                        var_16 = (65336 || 9562);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_4] = (((((3885546480747177684 >> (160327782 - 160327776)))) ? -var_1 : 28811));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_17 += (~var_11);
                            arr_22 [i_5] [i_1] [i_4] [i_0] [i_1] [i_5] = 14293;
                            arr_23 [i_0] [i_5] [i_0] [i_0] = arr_14 [i_5] [i_5] [i_5] [i_5] [i_5];
                            var_18 = (65535 ? var_11 : var_7);
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_4] [i_6] [i_6] = (arr_4 [i_0 - 1] [i_2 - 2] [i_2]);
                            arr_27 [i_0] [i_4] [i_2] [i_0] [i_0] = (((arr_20 [i_0 - 1] [i_4] [i_0 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]) ? 2099350141 : var_5));
                            arr_28 [i_0] [i_0] [i_1] [i_1] [i_0] |= 14298;
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_19 -= (~-1);
                            var_20 = (-821561952 || 18446744073709551615);
                            var_21 = (((!var_5) - ((var_6 ? (arr_16 [i_7] [i_4] [i_2 - 1] [i_1] [i_0]) : 1))));
                        }
                        var_22 = (!var_10);
                        var_23 &= ((17 ? 16383 : 18446744073709551602));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        arr_36 [i_2] [i_0] = var_5;
                        var_24 = var_9;
                    }
                    arr_37 [i_0] [i_1] [i_2 - 1] [i_2 - 3] = 274877906943;
                }
            }
        }
        var_25 += 17175;
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            var_26 = -22359;
            var_27 = (((arr_44 [7]) << var_7));
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_28 = (max(var_28, ((((-5056009732814456332 == -1375592470) ? var_11 : 127)))));
            var_29 ^= ((arr_39 [i_9 + 2]) ? (arr_38 [i_9 + 2]) : 4);
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            var_30 = (min(var_9, (max(-1670688632, 1))));
            var_31 *= ((+(max((arr_48 [i_9] [i_12 + 1]), 4553721908187510719))));
            var_32 = 2529733951419968223;
        }
    }
    #pragma endscop
}
