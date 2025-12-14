/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((arr_0 [i_0]) ? ((((arr_3 [i_1] [i_0 - 1] [i_1]) > -2022472497))) : ((var_9 ? ((-(arr_2 [1]))) : (min(var_17, 418422171)))));
                arr_7 [i_0] [i_1] [i_0 + 1] = var_18;

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] &= (((min(((max((arr_11 [i_0] [i_1] [i_2] [i_4]), 109))), ((var_17 ? var_3 : 0)))) != (((((max(var_13, 2814746564367758141))) ? 932106363 : ((239 ? (arr_3 [i_2] [i_2 + 1] [i_0]) : (arr_16 [i_0 - 1]))))))));
                                var_20 *= (((min(-0, (((var_14 | (arr_5 [i_0] [i_4])))))) != (((((-(arr_3 [i_0] [4] [i_0])))) * (max((arr_15 [i_0 - 1] [i_0 + 1] [i_0 + 1]), var_6))))));
                                arr_18 [i_1 + 1] [i_1] = ((~((-(arr_14 [i_2] [i_2 + 3] [i_2] [i_2] [i_4])))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2 + 2] = var_14;
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 = 4294967295;
                                var_22 &= (((((((max(var_4, (arr_14 [i_0 - 1] [i_1] [i_5 + 3] [12] [i_7 - 2])))) ? (~var_6) : (min(2516691911, 19))))) >= ((((max((arr_26 [i_7] [i_7 - 1]), var_2))) ? (var_18 + -2814746564367758135) : (arr_10 [i_0])))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_31 [i_1] [i_1] = (max((max((((2448127722 ? (arr_10 [i_0 - 2]) : 2814746564367758116))), (arr_0 [i_1 - 1]))), ((max((~2814746564367758141), 1326952873)))));
                        var_23 = var_8;
                        var_24 -= (max(((((932106386 | var_4) >= (max(0, (arr_20 [i_5] [19] [i_5 + 1] [i_5 + 1])))))), (arr_21 [i_0] [i_1 - 2] [i_5 - 1] [i_0])));
                        var_25 ^= (-127 - 1);
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_26 = var_12;
                    var_27 = (((arr_9 [1] [i_1] [i_0] [i_0 - 2]) - var_14));
                }
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        var_28 = (max(var_28, ((max(((max(((min(339862123, -127))), (max(16383, -2814746564367758117))))), 14104)))));
                        var_29 = (max(((~(arr_21 [i_1] [i_10] [i_0] [i_1]))), -25));
                    }
                    var_30 = ((~(((((var_12 > (arr_21 [i_0] [i_0] [i_0] [i_1]))) || (var_2 * 7731504475267031574))))));
                    arr_41 [i_1] [8] [i_1] [7] = (((min(((min(33922, var_13))), (~109))) & (~-1)));
                    var_31 ^= (var_11 < -2814746564367758112);
                }
                var_32 = (max(var_32, (((((var_2 < ((~(-127 - 1))))) ? ((max((((arr_3 [i_0 - 1] [6] [i_0]) * -1)), var_14))) : (min(((-1326952865 ? 2516691911 : 4294950896)), var_1)))))));
            }
        }
    }
    var_33 &= var_11;
    #pragma endscop
}
