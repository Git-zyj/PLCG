/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((!(((-(arr_5 [i_1] [i_1]))))));
                                var_15 ^= (min((max(235, 3837666284)), ((((arr_10 [i_2] [2] [i_1 + 1] [i_2] [i_2]) < (arr_10 [i_2] [i_2] [i_1 - 2] [i_1] [i_2]))))));
                                var_16 = ((((max((arr_2 [i_1 - 1]), (min((arr_8 [i_1 - 2]), (arr_10 [i_1] [i_3] [i_1] [i_1] [i_1])))))) == ((~(arr_5 [i_1 + 1] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = ((-(max((arr_1 [i_1 - 1] [i_5]), (arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [9])))));
                                var_18 = ((((min((arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_5]), (arr_15 [i_0] [i_0] [i_0] [i_0])))) / (max((arr_8 [i_1 - 2]), (arr_8 [i_1 + 1])))));
                                arr_20 [i_6] [i_6] [i_6] [i_6] [i_1] = (min(((min((arr_14 [i_1] [i_1 - 1]), (arr_14 [i_1] [i_1 - 2])))), (min((arr_0 [i_1 - 1]), ((max((arr_11 [i_1] [i_2] [i_5] [i_6]), (arr_12 [i_1] [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (max((arr_11 [i_0] [i_0] [i_0] [i_0]), (min(((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0])))), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_20 = (arr_23 [i_7]);
        var_21 = ((!(arr_23 [i_7 + 1])));
        arr_24 [i_7] &= (((arr_22 [i_7] [i_7 + 2]) - (arr_22 [i_7 - 1] [i_7 - 1])));
    }
    var_22 = (((min(var_13, var_5)) - 3646502933));
    #pragma endscop
}
