/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 ^= (min((max(((4070773613 ? (arr_4 [i_0] [i_0]) : (arr_6 [i_0 + 3] [6] [1]))), ((~(arr_2 [i_1] [i_0]))))), (((arr_3 [i_0 + 1]) & (arr_5 [i_0] [i_0 - 1])))));
                var_17 = (max(var_17, (arr_6 [i_0 + 3] [i_0 + 3] [5])));
                arr_7 [i_0] [i_0] |= (arr_6 [i_0] [i_0 - 4] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    var_18 = (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_6 - 1] [i_4] = (max(((-(arr_13 [i_2] [i_4] [i_5 - 1]))), ((-(arr_11 [i_2] [i_2] [i_4 + 1])))));
                                var_19 = (max(var_19, ((((((1 ? 1 : var_6)) + (arr_17 [i_2] [i_3] [i_4] [1] [1] [i_3])))))));
                                var_20 = ((((((arr_11 [i_4 + 1] [i_6] [i_6 - 1]) > (arr_11 [i_4 + 1] [i_6 - 1] [i_6 - 1])))) != 1));
                                var_21 = (((((arr_12 [i_4]) - (arr_13 [i_2] [i_4] [i_6]))) + ((1 + ((1 / (arr_13 [i_2] [i_4] [i_4])))))));
                                var_22 = 64;
                            }
                        }
                    }
                    var_23 = (max(var_23, ((min(((-(arr_14 [20] [i_2] [i_3 - 1]))), (arr_8 [i_2] [15]))))));
                }
            }
        }
    }
    #pragma endscop
}
