/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] = ((2759790240687034659 ? var_6 : (((arr_1 [i_0 + 1]) ? (arr_11 [i_0 + 1] [i_0 - 1]) : 1))));
                                arr_13 [i_0] [i_3 + 3] [i_3 - 1] [i_2] [i_1] [i_0] = ((1 ? 1 : 1));
                                var_16 = (max(var_16, (((((((arr_5 [i_0] [i_0]) ? (arr_7 [i_1] [i_2] [i_2] [i_2]) : (((arr_4 [i_1] [i_3] [i_3]) ? (arr_7 [i_1] [i_1] [i_1] [i_3]) : (arr_5 [i_1] [i_1])))))) ? ((+(((arr_0 [i_0] [i_0]) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0] [i_0] [9]))))) : ((-(arr_2 [i_0 - 2] [i_0 - 2] [i_2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0 - 3] [i_1] [i_0] [i_0] [i_0] |= max(((-(arr_8 [i_5] [6] [i_2] [i_0 + 1] [i_6]))), 1);
                                var_17 -= (max((arr_4 [i_6] [i_6] [i_5]), ((((arr_11 [i_0 - 1] [i_0 + 1]) ? (((18446744073709551603 > (arr_3 [i_0] [i_0])))) : (~1))))));
                                arr_20 [0] [i_0] [i_2] [0] = ((~(~var_6)));
                                var_18 += ((((((arr_18 [i_0 - 2] [i_1]) ? (arr_18 [2] [i_1]) : (arr_18 [i_0] [i_1])))) ? (((arr_18 [i_0] [i_5]) ? (arr_18 [i_5] [i_1]) : (arr_18 [i_1] [i_6]))) : ((max((arr_18 [i_0 - 3] [i_6]), (arr_18 [i_0] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_19 &= (min((((arr_2 [i_0 - 1] [i_0] [i_0 - 1]) & (max(var_12, var_4)))), (((((((var_11 >= (arr_16 [i_0 - 3] [i_0 - 3] [i_2] [i_7] [1]))))) == (~18446744073709551603))))));
                                arr_27 [i_0] [i_1] [i_1] [i_1] [i_8] |= (var_4 | var_12);
                                var_20 -= (~(arr_11 [i_0 - 2] [i_0 - 2]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_21 = (arr_0 [i_10] [i_9]);
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_1 [i_0 - 2]) ? var_3 : (arr_1 [i_0 - 3])))) ? (((((13 ? var_5 : (arr_32 [i_2] [i_2]))) & (!1)))) : ((var_4 ? 32256 : var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    var_23 = var_4;
    var_24 = var_9;
    var_25 = var_6;
    #pragma endscop
}
