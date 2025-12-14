/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 += ((((max(21211, (arr_6 [i_2 + 3] [0] [i_2 + 3] [i_2 - 1])))) + 33906));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_20 -= 1145161441;
                        var_21 = ((((max(((max(14, (arr_1 [i_0])))), ((114 / (arr_4 [i_0] [i_1] [16])))))) ? ((((((arr_8 [11] [i_1] [i_3] [i_3]) && var_0))) >> ((((var_4 ? (arr_4 [i_0] [i_0] [i_0]) : 8373429322288643252)) - 1568182640)))) : ((max(1, -102)))));
                    }
                    var_22 = (min(var_22, (arr_5 [i_2] [i_1] [i_0])));
                    var_23 = (max(var_23, (arr_2 [i_0])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_24 ^= (!508);
                    var_25 -= (arr_18 [i_4 + 1] [19] [i_4 + 1]);
                    arr_22 [i_4] [i_5] [19] [15] = 31;
                    arr_23 [i_4] [1] = (arr_20 [i_4 - 1] [i_5 + 1] [i_6 + 2]);
                    arr_24 [i_4] [i_6] [i_6] = (8487010152399607934 == 594129213);
                }
            }
        }

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_4] [i_7] [i_8] [i_9] [1] [i_4] = (arr_31 [i_8]);
                        var_26 ^= ((var_15 ? (arr_19 [i_4 - 1]) : 5624));
                    }
                }
            }
            var_27 = (!(((18446744073709551615 ? 1 : 8651911855811949309))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_45 [1] [1] [i_10] [i_10] = 9200548610061151700;
                            arr_46 [i_7] [i_7] [21] [i_10] [i_11] [i_12 + 1] = (arr_37 [i_12 - 2] [i_7] [i_10] [i_7]);
                            arr_47 [i_10] [i_11] [20] [i_7] [i_10] = (1 > 18446744073709551615);
                            var_28 = var_5;
                        }
                    }
                }
            }
            var_29 = (min(var_29, (((-(arr_29 [i_4] [i_4] [i_4 + 1]))))));
        }
        var_30 = ((~(arr_40 [i_4] [4] [i_4] [i_4] [4])));
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_50 [i_13] = (2147483637 || 48597);
        arr_51 [i_13] [i_13] = ((((((arr_28 [i_13] [i_13] [i_13] [i_13]) / (arr_28 [1] [i_13] [i_13] [i_13])))) ? (min((arr_28 [4] [i_13] [i_13] [i_13]), -7125)) : ((max(256, 3932817419)))));
    }
    for (int i_14 = 1; i_14 < 9;i_14 += 1)
    {
        var_31 += -31800;
        arr_55 [i_14] = (~128);
    }
    var_32 *= 1;
    #pragma endscop
}
