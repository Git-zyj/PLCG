/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_1 + 1] [i_0] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] = (~var_2);
                                arr_15 [i_0] [4] [i_2] [4] [i_4] [i_4] = (((-2 >= -106) ? ((4294967295 ? 4095 : 38065)) : (0 && -228262331)));
                                arr_16 [i_3] [i_2] [i_1] [i_0] = (21905 - 111);
                                arr_17 [i_0] [4] = ((((((!2489872687) ? (((arr_1 [i_4]) / (arr_5 [i_3] [i_2] [i_1] [i_0]))) : (arr_3 [i_0] [i_0])))) ? (((((arr_3 [i_0] [i_0]) && ((9549 < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (arr_4 [i_1 + 2] [i_1] [i_1 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [i_5] [i_6] = (arr_2 [i_0] [i_6]);
                                arr_25 [i_0] [i_0] [i_0] [i_5] [10] [i_0] [i_0] = (((((arr_3 [i_1 - 1] [i_2 - 1]) == (min((arr_12 [i_5] [i_1] [i_5] [i_5] [i_6] [i_6]), var_2)))) ? 102 : (((!(arr_8 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_0]))))));
                                arr_26 [i_5] [i_1] [i_1] = var_5;
                                arr_27 [i_0] [i_1] [i_2 - 1] [i_2] [i_1] = (((-(arr_19 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = -0;
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                arr_32 [i_7] [i_8] [i_8] = ((((max((max(var_13, 8782690601718879597)), 15))) ? ((((arr_28 [i_7 + 4] [i_8]) * (arr_28 [i_7 + 1] [i_7 + 1])))) : (max((max(-5897296151962210390, 0)), ((((arr_29 [i_7]) ? 333433489 : 5)))))));
                arr_33 [i_7] [i_7] [i_7] = max((arr_29 [i_7]), ((~((var_3 / (arr_28 [i_7] [18]))))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_40 [i_8] [i_9] [i_8] [i_8] |= ((1 ? 4169764801 : 27425));
                            arr_41 [i_7] [i_8] = 8522380316808156432;
                        }
                    }
                }
                arr_42 [i_8] &= -4065225725735953256;
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_50 [i_11] = (((~((-272872830 ? (arr_37 [i_7] [i_8] [i_11] [i_12] [11] [i_13]) : (arr_29 [i_13]))))));
                                arr_51 [i_7] [i_8] [i_7] [i_12] [i_13] = min((min(var_0, (!-1))), (arr_45 [i_7]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 &= var_2;
    #pragma endscop
}
