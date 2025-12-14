/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (min((arr_2 [i_0]), ((((arr_4 [i_0] [i_1] [i_1 + 2]) ? ((max((arr_0 [i_1] [i_1]), (arr_0 [i_1 - 2] [i_1])))) : (((arr_1 [i_0]) - (arr_4 [i_1] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [8] [i_1] [4] [i_3 + 1] [i_3] = ((((((arr_8 [i_1 + 2] [i_1 + 2] [i_2] [i_2] [i_3] [i_3 + 1]) ? (arr_8 [i_1 - 1] [i_1] [7] [i_3 - 2] [7] [i_3 - 2]) : (arr_8 [i_1 + 3] [i_1] [i_3 - 1] [i_3] [i_1] [i_3 + 1])))) >= (min((max(4291718290143958569, (arr_3 [i_1] [i_2] [i_3]))), ((((arr_5 [6]) <= var_8)))))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_19 ^= (max((((arr_4 [i_1 + 4] [i_1 - 3] [i_1 + 2]) ? (arr_10 [i_2] [i_2] [i_1 + 4] [i_1] [i_0]) : (arr_7 [i_1 - 3] [i_0]))), (min((arr_4 [i_1 + 4] [i_1] [i_1]), (arr_7 [i_1 - 1] [i_1])))));
                                arr_12 [0] [i_4] [6] [0] &= (min(((max(((max((arr_1 [i_1 - 1]), var_11))), (arr_6 [i_4] [i_1])))), (arr_7 [i_4] [i_4])));
                                var_20 = (((min((arr_8 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [3]))) != (((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) ? (arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [10] [i_3]) : (arr_8 [i_3 - 1] [0] [i_3 - 1] [i_3 - 1] [i_3 + 1] [0])))));
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                arr_16 [i_0] [1] [i_1] = arr_3 [i_0] [i_0] [i_0];
                                arr_17 [i_0] [i_0] [i_2] [i_1] [i_2] = (arr_5 [i_0]);
                                var_21 = (arr_5 [i_3]);
                            }
                            var_22 *= (((arr_13 [4] [i_1] [2] [i_1 + 1] [i_1]) == (((~(arr_1 [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_23 |= 4048300129;
    #pragma endscop
}
