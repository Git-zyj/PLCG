/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((0 ? var_0 : var_6))) ? (var_7 ^ var_4) : (1458447874 | -8))) ^ var_5));
    var_11 = var_3;
    var_12 |= ((((var_8 ? var_7 : var_1))) ? var_8 : (((((max(var_0, var_6)) <= (max(1099511627775, 2147352576)))))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_13 = (((((max((arr_0 [i_0 + 1]), (arr_1 [i_0] [i_0 - 2]))))) ? var_1 : (((2966041767 && var_1) ? (arr_1 [i_0] [i_0]) : var_3))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_0] [i_0] [i_1] [i_0 - 4] = ((~-20) ? 123 : -1);
                        arr_12 [i_0] [i_2] [i_0] [i_0] = (arr_0 [i_0]);
                        var_14 = (min(var_14, (arr_6 [i_0 - 1] [4] [i_0 - 1] [i_0 - 2])));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_15 = (max(-3825450180665661529, 3));
                            var_16 = (min(var_16, (((max(((arr_1 [0] [i_1]), (max(33553920, 8)))))))));
                            var_17 -= ((((max(var_9, 1924568078))) & ((1328925528 ? (arr_4 [i_4] [i_1] [i_1]) : (min((arr_10 [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_2] [8])))))));
                            var_18 -= (((max(3850272333439630479, -3825450180665661529)) != 28407));
                        }
                    }
                }
            }
        }
        var_19 += ((~((((max(var_0, var_2))) ? var_1 : (((arr_3 [i_0 - 3]) ? var_2 : var_2))))));
        var_20 = 3850272333439630479;
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5 - 1] [i_5] = var_4;
        var_21 += (~3850272333439630479);
        var_22 = (-var_8 % (arr_10 [i_5] [i_5] [i_5 + 1]));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 6;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_23 += (arr_21 [i_7 + 4] [i_5 + 1]);
                        var_24 -= (arr_5 [i_5 - 2] [i_7 - 1] [i_7 + 2]);
                        arr_27 [i_5] [i_6] [i_7 + 2] [i_7 + 2] = var_4;
                        var_25 = (2377608415 / 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
