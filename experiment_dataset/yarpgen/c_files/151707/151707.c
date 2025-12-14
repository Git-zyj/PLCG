/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((max(4569736269440928261, 155)), (max(-var_1, var_15)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (arr_1 [i_0]);
                                var_18 = (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                    var_19 = 9702693940637723228;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_15 [i_1] [i_5 + 1] [i_5] [i_6 + 2] [1] [i_6 - 1])));
                                arr_17 [i_0] [i_6 - 2] = (max(3821550264740678436, (((!(arr_14 [i_0 - 1] [i_1] [i_1] [i_5] [i_1]))))));
                                arr_18 [i_2] [i_6 + 1] [i_2] [i_2] [i_1] [i_0] &= 3137151593753099574;
                            }
                        }
                    }
                    arr_19 [i_2] [i_1] [i_2] [i_2] = (arr_6 [i_0]);
                    var_21 = var_8;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = var_2;
        var_22 = (min(var_22, (arr_21 [i_7] [i_7])));
        var_23 = var_9;
        var_24 = 68;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_25 = (arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]);

        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_26 = var_5;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_27 = -4886;
                            var_28 = (arr_16 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 + 2] [i_9 + 2]);
                            arr_36 [i_8] [i_8] [i_9] [7] [7] = 148;
                        }
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            arr_41 [i_8] [i_13] = (max((arr_32 [i_8] [i_8] [i_13 + 2]), (arr_32 [i_8] [i_8] [i_13 + 2])));
            var_29 = (arr_2 [i_8] [i_13]);
        }
    }
    var_30 = var_3;
    #pragma endscop
}
