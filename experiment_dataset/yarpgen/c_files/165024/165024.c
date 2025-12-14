/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = var_1;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((arr_8 [i_0] [8] [i_3] [i_3]) ? ((((((arr_1 [i_1] [i_1]) | (arr_7 [i_0 + 3] [i_0] [i_0 - 1] [i_0] [i_0])))) ? (((arr_4 [i_0] [i_3]) ? (arr_4 [i_3] [i_3]) : 1233557923)) : (arr_2 [i_2 + 3] [6]))) : ((min(((((arr_3 [i_2]) > var_5))), ((-(arr_3 [i_1 - 2]))))))))));
                            var_14 |= (min((arr_7 [4] [i_0 + 4] [i_2 + 1] [i_1 - 1] [i_2]), (max((arr_7 [i_3] [i_0 + 4] [i_2 + 1] [i_1 - 1] [i_0 + 4]), (arr_7 [i_0 + 2] [i_0 + 4] [i_2 + 1] [i_1 - 1] [i_0 + 4])))));
                            arr_9 [i_0] [i_3] = (((arr_1 [i_0 + 4] [i_0]) ? (arr_8 [i_0] [7] [i_0] [i_3]) : (((~(arr_3 [i_0]))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, ((((min((arr_7 [i_0 + 4] [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_4]), ((~(arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]))))) | (((((-(arr_7 [i_0] [i_0 - 1] [i_1 - 4] [i_1] [i_0 - 1])))) ? (((arr_5 [i_0] [i_0] [i_0 + 1]) ? var_2 : (arr_7 [i_0] [i_1] [9] [i_4] [i_4]))) : (var_7 < 1233557915))))))));
                    var_16 = (min(var_16, (arr_4 [i_1 - 2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_16 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5] [i_5] = 41;
                                arr_17 [i_0 + 3] [i_1] [i_1 - 4] [i_1 - 4] [i_1] [i_0] [i_6] = (arr_1 [i_0] [i_0]);
                                var_17 = (~((11609151867371894588 ? (arr_8 [i_0 + 4] [i_0 + 3] [i_0] [i_1 - 2]) : (arr_8 [i_0 - 1] [i_0 + 2] [i_0] [i_1 - 3]))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_20 [i_7] [1] [i_7] [i_0] = ((~(arr_10 [i_0])));
                    arr_21 [i_0] [i_1] [i_0] = -30878;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_18 = (arr_18 [i_0] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_8] [i_0] = ((((((!(arr_28 [i_0 + 2] [i_0] [i_0 + 1] [i_1 + 1] [i_10 + 1] [i_10]))))) & (((((~(arr_25 [i_0] [i_8] [2] [i_10])))) & (arr_27 [i_10 - 3] [1] [i_1 + 1] [i_9] [i_0 + 2] [i_9])))));
                                var_19 = (max(((~(((arr_29 [i_0] [i_1] [i_1 - 3] [i_8] [i_8] [i_9] [i_0]) & var_7)))), ((-(max(-1059938962, 3556664109))))));
                                var_20 = (max(var_20, ((((arr_27 [i_0] [i_1 - 2] [i_10 - 3] [i_1 - 2] [i_0 - 1] [i_0]) ^ (arr_27 [i_1] [i_0 + 1] [i_10 - 2] [i_1 + 1] [i_0 + 4] [i_0]))))));
                            }
                        }
                    }
                    var_21 = ((((~(arr_7 [i_0] [i_0 - 1] [i_1] [i_1 - 1] [i_1 - 1])))) ? (((arr_22 [i_0] [i_1 + 1]) ? 1233557905 : (arr_7 [i_0] [i_0 - 1] [i_1 - 4] [i_1 + 1] [i_1 - 4]))) : (((10444451074711807784 ? (arr_22 [i_0] [i_1 - 4]) : 1059938960))));
                }
            }
        }
    }
    var_22 ^= ((((-40 ? var_10 : ((min(var_5, var_1))))) + (min(var_2, var_10))));
    #pragma endscop
}
