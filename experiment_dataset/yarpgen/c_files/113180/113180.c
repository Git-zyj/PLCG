/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, -100));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min(((min((arr_10 [i_2] [i_1] [i_0]), (arr_7 [i_3] [i_2] [i_0] [i_0])))), (3 | 83))))));
                            var_17 = (max(var_17, (max(23, -87))));
                            var_18 -= (108 <= var_13);
                        }
                    }
                }
                var_19 = (min(var_19, (((-(arr_4 [i_1] [i_0]))))));
                var_20 = -48;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] |= (((arr_15 [i_5] [i_5] [15] [i_5 + 2]) > (arr_7 [i_5] [i_5 + 1] [i_5] [i_5 + 2])));
                            arr_18 [i_5] [i_1] [i_1] [i_1] [i_1] = (max(((-92 ? (arr_9 [i_5 + 1] [i_0] [i_0] [i_5]) : -6)), ((max(20, (arr_7 [i_5 + 3] [i_5 + 3] [i_4] [i_5 - 1]))))));
                            var_21 = ((((max((arr_8 [i_1] [i_5 + 2] [i_5] [i_5]), (max(-11, 33))))) == (((arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : var_5))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_22 -= ((((min(62, -54))) ? (((((max(var_2, var_14))) || ((min(var_3, var_7)))))) : (arr_24 [i_0] [i_1] [i_6] [i_7 + 1] [i_6 - 3] [i_7 - 3])));
                            var_23 = (max(var_23, (((((((arr_21 [i_6] [i_1] [i_0]) ? (arr_8 [i_0] [i_1] [i_1] [i_0]) : (arr_5 [i_0])))) ? 53 : ((var_13 ? var_2 : -26)))))));
                            var_24 = ((88 ? -56 : 35));
                            var_25 = ((((max(((83 ? (arr_25 [i_1] [i_1]) : var_1)), ((max(-15, -36)))))) ? (48 / 54) : -1));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_26 -= min((max(var_12, (arr_35 [i_11] [i_9] [6] [6]))), (min(-54, 33)));
                                var_27 -= var_3;
                            }
                        }
                    }
                    var_28 |= (min((min(var_11, 95)), (max(((min(-18, -4))), (arr_31 [14] [i_9] [i_9] [i_9])))));
                    arr_38 [i_8] [i_9] [i_10] = (((48 / -35) ? var_9 : 43));
                    var_29 = var_5;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 21;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 22;i_17 += 1)
                        {
                            {
                                var_30 = ((((max((arr_49 [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_48 [i_13] [i_15] [i_14] [i_13])))) ? -9 : ((min(var_7, -110)))));
                                var_31 = (min(var_31, (((((min(-6, -82))) ? (((!((max(19, -54)))))) : var_11)))));
                                var_32 |= (min(-var_14, ((~(arr_40 [i_15 - 2])))));
                                var_33 = ((25 ? ((-87 ? (arr_46 [3] [16] [i_15] [i_14] [16]) : var_5)) : ((min((arr_48 [i_13] [i_14 + 2] [i_14 + 2] [i_14 + 2]), -37)))));
                            }
                        }
                    }
                    var_34 = arr_40 [i_15 + 2];
                }
            }
        }
    }
    #pragma endscop
}
