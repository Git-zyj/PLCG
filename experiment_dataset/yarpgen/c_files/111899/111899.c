/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 << (max(var_0, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_11 = var_8;
                    var_12 = (max(var_12, (arr_0 [i_1])));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_13 = ((-(arr_4 [i_0 + 2] [i_3 - 1])));
                    var_14 = (max((arr_3 [i_0]), (((arr_6 [i_0] [i_1]) >> ((((arr_4 [i_0 + 2] [i_0 + 2]) == (arr_0 [i_3]))))))));
                    var_15 -= (arr_13 [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_16 = (min((arr_13 [i_0]), (((arr_0 [i_1]) ? (min((arr_2 [i_5 - 2]), (arr_14 [i_0 + 2] [i_1] [10] [i_3] [11] [10]))) : (((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : var_3))))));
                                var_17 = ((+(((arr_12 [i_0 + 1] [i_3 - 1] [i_4]) << (((var_6 == (arr_9 [i_1] [i_3 + 1] [i_4]))))))));
                                arr_19 [i_0] = (((((((((arr_5 [i_0] [i_4] [i_5]) == var_9))) % (arr_9 [i_0] [i_3] [i_4])))) > (arr_17 [11] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                    var_18 ^= (-((((arr_10 [i_0 + 2] [2] [i_3 - 1]) > (arr_10 [i_0 - 1] [i_1] [i_3 + 1])))));
                }
                var_19 = (max((arr_12 [i_0 - 1] [i_0] [i_0 + 2]), (min(((2110569547515194476 ? (arr_7 [i_1] [5] [i_1] [i_1]) : (arr_12 [i_0] [i_0 - 1] [i_1]))), (arr_8 [i_0])))));

                /* vectorizable */
                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_6] = (var_1 / var_2);
                    arr_23 [i_1] [4] [i_6] = (((arr_14 [i_6 + 1] [i_6] [3] [i_6] [i_1] [i_0 - 1]) ? (arr_14 [i_6 - 1] [i_6] [i_6] [i_0] [i_0] [i_0 + 1]) : (arr_14 [i_6 - 2] [i_6 - 3] [i_6 - 4] [i_6] [i_0] [i_0 - 1])));
                    var_20 = (arr_0 [i_6]);
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = var_8;
    #pragma endscop
}
