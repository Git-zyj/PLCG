/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((3 ? (min(18124255231248320251, 4331099031007637289)) : 1742096133));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((min(158, -8316750262217042067)))));
                    arr_8 [i_0] = -158;
                    var_13 = (arr_3 [i_0 - 2]);
                }
            }
        }
    }
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_15 = (arr_6 [i_3] [i_4] [i_5] [i_4]);

                            for (int i_7 = 2; i_7 < 11;i_7 += 1)
                            {
                                var_16 = min((arr_15 [i_3] [i_4 + 1] [i_4 + 1] [i_6] [i_7] [i_4]), (((158 ? 1 : 125))));
                                var_17 = (min(var_17, (((min(49, (arr_20 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7])))))));
                                var_18 = (max(var_18, (((max(-1, 2147483646))))));
                            }
                            for (int i_8 = 4; i_8 < 11;i_8 += 1)
                            {
                                var_19 ^= (arr_5 [i_3] [i_5]);
                                arr_24 [i_4] [i_4] = ((((((arr_19 [i_4 + 1] [i_4]) & (arr_18 [i_4 + 1] [i_6] [i_4 + 1] [i_6] [i_8])))) ? (min(8316750262217042067, 8)) : (((max((arr_16 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_8 - 4]), (arr_0 [i_3 - 1])))))));
                                var_20 = (min(var_20, (arr_4 [i_3])));
                                var_21 = (((min((arr_14 [i_4]), 26943))));
                            }
                            arr_25 [i_3] [i_3] [i_4 + 1] [i_5] [i_4] [i_3] = (1 >> 3);
                            var_22 = (max(var_22, (arr_5 [i_4] [i_6])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_32 [i_4] [i_4] [i_4] = (((arr_29 [i_3] [i_4] [i_3] [i_3] [i_10] [i_9]) ? (arr_12 [i_3 + 1] [i_4 + 1] [i_4]) : 2590799204));
                            var_23 ^= 1;
                            arr_33 [i_10] |= (arr_13 [i_10] [i_10]);
                        }
                    }
                }
                arr_34 [i_3] [i_4] [i_4] = ((-(max((arr_21 [i_3 - 1] [i_4] [i_4 + 1]), (min((arr_30 [i_3 - 1] [i_3] [i_3] [i_4]), 8))))));
                arr_35 [i_4] = ((((((arr_26 [i_3 - 1] [i_3 + 1] [i_4]) ? (arr_31 [i_3] [i_4]) : (arr_28 [i_3] [i_3 + 1] [i_3 + 1])))) ? ((max((arr_26 [i_3] [i_3] [i_4]), 13752))) : (((arr_23 [i_3 - 1] [i_3] [i_3] [i_4 + 1] [i_4 + 1]) & 16481282818132527485))));
            }
        }
    }
    #pragma endscop
}
