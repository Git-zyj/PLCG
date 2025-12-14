/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_17 *= ((arr_7 [i_1] [i_1] [i_2] [i_0]) ? 10479 : 9797025410624950583);
                    var_18 *= 10479;
                    var_19 = (min((((!(arr_3 [i_2 - 2])))), (((var_10 != 549755813887) | (arr_6 [i_1] [i_2 - 1] [i_2] [i_1])))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((var_13 ? var_12 : (arr_6 [i_3] [i_3 + 1] [i_3] [i_1])));
                    arr_12 [i_0] [i_0] [i_1] [i_3] = 1357630081;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_0] [i_1] = ((-(arr_3 [i_1])));
                    arr_17 [i_0] [i_1] = (((~(arr_2 [i_0]))));
                    arr_18 [i_0] [i_1] [i_1] [i_1] = var_16;
                    arr_19 [i_0] [i_0] [i_1] = var_16;
                }
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    arr_23 [i_1] [i_5] = (((((((((arr_14 [i_5] [i_1] [i_1] [i_0]) & var_6))) ? 2937337215 : (min(1937510650579514800, 1357630081))))) ? (((((arr_22 [i_0] [i_0] [i_5 - 1] [i_1]) <= 65510)))) : (min(9702072012863749238, (((17211775785999159673 ? var_9 : 4294967295)))))));
                    var_20 &= (arr_9 [i_0] [i_1] [i_0] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_28 [i_1] [i_5] [i_5] [i_1] [i_5] = 10989267328658316498;
                                arr_29 [i_0] [i_1] [i_5] [i_6] [i_7] = ((~(arr_26 [i_0] [i_1] [i_5] [i_6] [i_7])));
                                arr_30 [i_1] [i_1] [i_5] [i_6] [i_7] = (arr_2 [i_7]);
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_21 = (min(((((arr_13 [i_1] [i_1] [i_8]) <= (min(var_2, 56309))))), (((arr_3 [i_0]) ^ (arr_3 [i_5])))));
                        var_22 = 1210358220;
                        var_23 = (max(var_23, ((((min(var_0, 1357630081))) / (min((arr_0 [i_5 + 1]), (arr_0 [i_5 - 3])))))));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_24 -= ((((((min(var_9, var_9))))) & ((-((1 ? 8649718663084601027 : 55056))))));
                        arr_35 [i_0] [i_0] [i_1] [i_0] [i_0] = (((((var_15 > var_8) >= ((((arr_15 [i_1] [i_1] [i_5] [i_9]) <= (arr_20 [i_1])))))) || (arr_25 [i_0] [i_1] [i_0] [i_0] [i_5 + 2])));
                    }
                    arr_36 [i_0] [i_1] [i_1] [i_5] = (min((min((min(8958517179069106614, 13555296513470968393)), var_11)), (((((min(var_7, 10479))) ? ((((!(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : 4294967281)))));
                }
                arr_37 [i_1] = (min(-var_2, (((((-(arr_24 [i_0] [i_0] [i_0] [i_1])))) ? (arr_22 [i_0] [i_0] [i_1] [i_1]) : (((arr_9 [i_0] [i_0] [i_1] [i_1]) ? (arr_24 [i_0] [i_1] [i_0] [i_1]) : 10978254857272673449))))));
            }
        }
    }
    var_25 = var_5;
    var_26 = var_1;
    #pragma endscop
}
