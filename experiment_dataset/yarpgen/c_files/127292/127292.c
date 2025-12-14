/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_20 = (min(var_20, (((var_12 % (((arr_1 [i_0] [i_0]) & (arr_1 [i_0 + 1] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 += ((((95 << (((arr_5 [i_0 - 1]) - 544433083351767351)))) % (((((((arr_4 [i_1] [i_1] [i_1]) & -718974160)) + 2147483647)) >> (var_10 - 65)))));
                        var_22 = (12930630832352984286 / 8388608);
                    }
                }
            }
        }
        arr_11 [i_0] |= (((((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_10 : (arr_0 [i_0 - 1] [i_0 - 1]))) << (((((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? var_7 : 14)) - 62538237))));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_23 = (arr_2 [20] [20]);
        var_24 = (max(var_24, ((min((((arr_8 [i_4 + 3] [i_4 + 3] [i_4]) / (arr_12 [i_4 - 1]))), var_5)))));
        var_25 ^= (587350731 || 3);
        var_26 = (arr_1 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_26 [i_5] [i_6] [i_7] [i_7] [i_8] [i_8] = ((arr_15 [i_6 - 1]) & ((20 << (((var_1 + var_6) - 2714776868)))));
                                arr_27 [i_6] [i_7] [i_8] [i_6] = (max(var_18, -var_19));
                            }
                        }
                    }
                }
                var_27 = (var_13 % var_3);
                var_28 = (max(var_28, ((((-31 + 2147483647) >> (var_8 - 1026831455))))));
            }
        }
    }
    #pragma endscop
}
