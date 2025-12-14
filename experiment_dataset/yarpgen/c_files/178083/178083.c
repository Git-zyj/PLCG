/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 ^= -16141356123185967711;
                            var_15 = (max(var_15, (((-(((~5225200104268663183) / (~13221543969440888432))))))));
                            arr_11 [i_0] = (min((min((~716098476), (~13221543969440888432))), (!-1633069388)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (!-1188484332)));
                            var_17 = -716098499;
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(((max(14764660398779643844, 19399))), (--123)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_19 = (max(var_19, 86));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((253 < (((!(43683 + 5225200104268663177)))))))));
                            arr_25 [i_6] = ((((13221543969440888432 == (((~(-2147483647 - 1)))))) && 13221543969440888421));
                            var_21 = (min(var_21, (4025699564 == 59)));
                            var_22 ^= max((16627893703776916473 / 2911298684), (!1));
                            arr_26 [i_6] [i_6] [i_7] [i_7] [i_8] [i_9] = ((5225200104268663196 <= (!16384)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_23 = 233;
                                var_24 = ((~(((!(~157176476342183620))))));
                                var_25 = (min((min((max(-2147483642, 164406181)), (3682083674929907753 < 5225200104268663192))), ((~(!13221543969440888404)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
