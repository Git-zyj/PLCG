/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_7 ? var_16 : (max(var_1, ((-3753234140534273613 ? 1 : 65512))))));
    var_18 = -43003;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 9289));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = var_4;
                                arr_15 [i_2] [i_3] [i_3] [i_2 - 1] [i_2] [6] [i_2] = ((1 ? 6086510965992720865 : (-13 % 65525)));
                                var_21 = ((((arr_3 [i_2 + 2]) ? (arr_9 [i_2] [i_2 + 1] [i_2]) : (arr_3 [i_2 + 2]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [11] [i_2] [i_2] [i_2] = (i_2 % 2 == zero) ? ((max((((arr_19 [i_2] [i_1] [i_2 - 3] [i_6 + 1] [i_1]) ? var_12 : (arr_19 [i_2] [i_6] [i_2 + 1] [i_6 + 2] [i_6]))), (((max((arr_19 [i_2] [i_2] [10] [i_5] [12]), (arr_0 [i_6 - 3]))) >> (((arr_14 [i_2 - 1] [15] [i_2 - 2] [i_2 + 1] [i_2] [i_2]) + 3396))))))) : ((max((((arr_19 [i_2] [i_1] [i_2 - 3] [i_6 + 1] [i_1]) ? var_12 : (arr_19 [i_2] [i_6] [i_2 + 1] [i_6 + 2] [i_6]))), (((max((arr_19 [i_2] [i_2] [10] [i_5] [12]), (arr_0 [i_6 - 3]))) >> (((((arr_14 [i_2 - 1] [15] [i_2 - 2] [i_2 + 1] [i_2] [i_2]) + 3396)) + 7668)))))));
                                var_22 &= (arr_18 [i_0] [i_1] [i_0] [i_2] [i_5] [i_0] [i_6]);
                                arr_22 [i_0] [0] [i_5] [i_0] [i_6] [i_2] [8] = ((((max((max(var_3, var_16)), (arr_12 [i_2 + 2] [i_2] [i_2] [i_0 + 1])))) ? 65534 : (arr_7 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((arr_26 [i_10]) ? (arr_29 [i_9 + 2] [12] [i_9 + 2]) : var_15)))));
                                var_24 = (max(var_24, ((min(((((arr_28 [i_9 + 2] [i_9 + 2] [i_9 + 1]) > 244))), (max((arr_28 [i_9 + 1] [i_9 + 1] [i_9 + 1]), (arr_28 [i_9 + 4] [i_9 + 4] [i_9 + 4]))))))));
                            }
                        }
                    }
                    var_25 -= (((((arr_30 [i_9 + 3] [i_9 - 1] [i_9] [i_9 + 2]) ? var_14 : var_8)) | (((min(var_13, var_10))))));
                    var_26 = var_8;
                }
            }
        }
    }
    var_27 = (((min((((-5133160540607900487 ? var_12 : 1))), -5133160540607900477))) ? (((-var_1 ? var_12 : (1 <= 1)))) : var_9);
    #pragma endscop
}
