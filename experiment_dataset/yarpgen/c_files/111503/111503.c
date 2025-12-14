/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [24] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= (((-(arr_1 [i_1]))) << (((((arr_1 [i_1]) ? var_7 : 16)) - 39671)));
        var_14 = (min(var_14, -1775557083));
        var_15 = (arr_1 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                {
                    var_16 = ((var_8 <= ((((arr_12 [i_1] [i_2 - 1] [i_2 + 1]) && ((max(0, 29))))))));
                    arr_13 [i_1] [i_2] [i_2] = -38;
                    arr_14 [i_1] [i_2] [i_2] = (arr_4 [i_2 + 1] [i_2 - 1]);
                    arr_15 [i_1] [i_2] [i_3] [i_3] = arr_0 [i_2];
                    arr_16 [i_2] [i_3] [i_2 + 1] [i_2] = 29;
                }
            }
        }
        arr_17 [i_1] = -1;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = (((arr_10 [i_4]) ? (arr_0 [18]) : ((var_4 ? (arr_11 [20] [i_4] [i_4] [i_4]) : var_4))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_17 = ((91 ? (arr_10 [i_5]) : (~167)));
                    arr_27 [i_6] [i_5 + 1] [1] = (((arr_26 [i_6] [i_4] [i_5 - 1] [i_4]) << (((arr_19 [i_4]) - 19949))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_18 = 58218;
                                var_19 = (((arr_0 [10]) + 62));
                                var_20 = ((~((~(arr_28 [i_4] [i_4] [i_4] [i_4])))));
                                arr_34 [i_7] [i_5] [i_6] = var_9;
                                arr_35 [i_4] [i_5] = ((arr_32 [i_7] [i_7 - 3] [i_7] [i_7] [i_7] [i_5 + 1] [i_5 - 1]) ? (arr_11 [12] [i_6] [i_5] [12]) : 17);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_21 -= (((((12861513745817577513 ? var_6 : var_2))) ? (arr_5 [i_9]) : (arr_41 [i_4] [i_9] [14])));
                    var_22 = ((-(arr_22 [i_10] [i_9] [i_4])));
                }
            }
        }
    }
    var_23 ^= var_13;
    var_24 &= ((var_9 ? var_3 : (((((13487428166556736534 << (-4942510168407756837 + 4942510168407756845)))) ? var_5 : var_7))));
    var_25 = ((((var_5 ? 61210 : ((var_8 ? -23 : var_0)))) > (((((-7336729689866694535 ? var_8 : var_0)) <= var_3)))));
    #pragma endscop
}
