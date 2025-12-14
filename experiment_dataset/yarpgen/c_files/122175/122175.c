/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (~((((max(13436473591573230387, var_11)) > ((max(var_6, var_9)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 ^= -263873873;
        arr_3 [i_0] = (((((~((~(arr_1 [i_0])))))) ? (((!(arr_0 [i_0] [i_0])))) : (!13436473591573230387)));
        arr_4 [i_0] = var_12;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_20 = ((((arr_1 [i_1]) ? var_14 : 263873880)));
        arr_8 [i_1] = (var_12 ? (((!(arr_7 [i_1])))) : (((arr_5 [i_1] [i_1]) >> (var_2 - 1400193511))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = -263873873;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_22 += (-1012247502 ? -263873873 : (arr_5 [i_1 + 4] [i_2 - 3]));
                                var_23 = (((arr_17 [i_1 - 4] [i_3 - 1]) ^ (arr_12 [i_1 + 4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_24 ^= (~var_0);
                                arr_24 [i_1 - 4] [i_3] [i_2] [i_6] [i_3] [i_6 - 1] = (~15787542251817323126);
                                var_25 = (arr_23 [i_1 - 3] [i_1 + 3] [i_1] [i_3 + 2] [i_7]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_3] [i_9] [i_9] [i_9] [i_9] [i_9] = (((arr_7 [i_3 + 2]) ? (!-1627316411) : 263873877));
                                arr_30 [i_1 - 4] [i_3] [i_3 - 1] = (((arr_22 [i_3]) & (arr_22 [i_3])));
                                arr_31 [i_1] [i_3] [i_1] [i_2] [i_9] [i_8] = 263873877;
                            }
                        }
                    }
                }
            }
        }
        arr_32 [i_1] = (-1966624537 || var_2);
        arr_33 [i_1 - 4] = var_6;
    }
    #pragma endscop
}
