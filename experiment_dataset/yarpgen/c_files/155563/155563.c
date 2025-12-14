/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(var_14, ((var_14 ? var_13 : var_4)))))));
    var_17 = (min(var_17, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 += ((var_0 ? (arr_1 [23]) : (arr_0 [i_0])));
                    var_19 -= (min((arr_8 [i_1 - 2] [22]), (min((arr_7 [i_0]), (arr_4 [i_1 - 1] [i_1 + 2])))));
                    var_20 = (min(var_20, var_12));
                    var_21 = var_12;

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_22 += -1813414133;
                        var_23 = (max(var_23, ((min(62, (arr_8 [10] [10]))))));
                        var_24 = (min(-var_3, ((145 ? (~12608956252585552687) : (arr_10 [i_0] [1] [8] [8])))));
                        var_25 = (max(var_25, ((((((62 / (arr_8 [i_0] [8])))) ? (arr_2 [i_2] [i_3]) : var_4)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_26 -= ((((((arr_4 [i_2] [i_4]) ? var_14 : (arr_12 [i_4] [18] [i_1] [i_0])))) * ((3641 ? 50 : (arr_5 [i_2])))));
                        var_27 = ((-(arr_4 [i_1 - 2] [i_1])));
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        var_28 *= (min((min((max(var_8, 0)), 50)), 0));
                        var_29 = (max(var_29, ((max((arr_12 [i_0] [i_0] [8] [i_1 + 2]), (arr_12 [i_1] [i_1] [i_1] [i_1 - 1]))))));
                        var_30 = (max(var_30, 206));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_31 *= (((-((1 ? 32756 : 61895)))));
                                arr_31 [i_10] = max((arr_13 [i_6 - 2] [i_6 - 2] [i_10 - 2] [i_6 - 2]), (var_12 / var_9));
                            }
                        }
                    }
                    var_32 = (max(var_32, ((min((((arr_15 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 2] [16]) - (arr_14 [i_6] [i_6 - 1] [i_6] [i_6 + 1]))), ((-(arr_15 [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 2] [i_6]))))))));
                    arr_32 [i_6] [i_6] [i_6] [i_6] |= ((max(var_14, ((1 ^ (arr_14 [i_7] [i_7] [23] [i_7]))))));
                    arr_33 [16] [16] [16] [i_7] |= -900895244;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        var_33 = (arr_11 [i_6 - 1]);
                        var_34 = (min(var_34, (arr_17 [i_12] [i_6] [i_12 + 2] [i_12 + 1])));
                        var_35 = (arr_27 [17] [i_6 - 2] [i_12 - 1] [17] [i_11]);
                    }
                    arr_38 [i_7] &= (arr_25 [i_6] [i_7] [1] [i_11]);
                }
                var_36 ^= -1;
            }
        }
    }
    #pragma endscop
}
