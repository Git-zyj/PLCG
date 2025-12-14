/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-9223372036854775807 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (arr_7 [i_2] [i_2] [i_1] [i_0]);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (arr_7 [i_1] [i_1] [i_1] [i_3]);

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_17 = (min(var_17, ((9223372036854775807 ? ((192 ? -9223372036854775800 : (9223372036854775807 / 224))) : 12))));
                            var_18 = (((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 1]) ? var_10 : (arr_1 [i_2 - 1] [i_1])));
                        }
                        var_19 = ((83 ? 0 : 12));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_1] [i_5] = (max(36028797018963967, 149));
                            arr_18 [i_0] [i_1] [i_1] [i_3] [i_3] = (max(((min(114, 115))), 8681960172182199376));
                            var_20 *= ((-9223372036854775807 ? 0 : (6 && 24)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_6] = (((-9223372036854775807 - 1) ? var_8 : 0));
                        arr_22 [i_0] [i_0] [i_0] [10] [i_2] [i_6] = ((-36028797018963967 ? 4741013025234990618 : -1079812406));
                    }
                    arr_23 [i_2] [3] [i_0] = var_11;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_21 = (~(min(-91, ((3556223287051689001 + (arr_20 [i_1] [i_2 + 1] [i_7] [i_8]))))));
                                var_22 += (((((((36028797018963974 ? 165 : -36028797018963982))) ? 63065 : ((var_8 ? (-32767 - 1) : 128)))) | (arr_7 [i_0] [i_1] [i_0] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 9223372036854775807;
    #pragma endscop
}
