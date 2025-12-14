/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_14, ((max((arr_1 [i_0]), 1)))));
        var_15 *= (min(1, 1));
        var_16 = (((arr_0 [i_0]) ? ((max((arr_1 [i_0]), (arr_1 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_17 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_4 [i_0] [i_0] [i_4]) ? (((arr_12 [i_0] [i_2] [i_2] [i_1] [i_0]) ? (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4]) : (min(1, (arr_0 [i_4]))))) : (arr_1 [i_2])));
                                var_19 = ((((((arr_12 [i_0] [i_1] [i_2] [i_1] [i_4]) ? ((max(1, 1))) : (((arr_0 [i_3]) ? (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_4]) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4])))))) ? ((((max((arr_9 [i_0] [i_1] [i_0] [i_1]), (arr_0 [i_3])))) ? (((1 ? 1 : 1))) : (min((arr_9 [i_0] [i_1] [i_3] [i_1]), (arr_3 [i_0] [i_1] [i_4]))))) : (((arr_6 [i_4] [i_3] [i_1]) ? (arr_1 [i_1]) : (((arr_1 [i_1]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_4]) : (arr_3 [i_0] [i_0] [i_3])))))));
                                arr_14 [i_4] [i_2 + 3] [i_1] [i_2 + 3] [i_1] [i_4] |= (arr_4 [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                    var_20 = (min(((((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) ? (min((arr_7 [i_0] [i_1] [i_2] [i_0]), (arr_6 [i_0] [i_0] [i_0]))) : (((arr_0 [i_1]) ? (arr_11 [i_0] [i_0] [i_0] [i_2] [i_2 - 2]) : (arr_6 [i_2 + 1] [i_1] [i_0])))))), ((((max((arr_2 [i_0] [i_1] [i_2 + 1]), (arr_0 [i_0])))) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (min((arr_0 [i_1]), (arr_0 [i_1])))))));
                    var_21 |= ((((max((arr_0 [i_2 + 4]), (arr_1 [i_0])))) ? (((arr_0 [i_1]) ? ((((arr_5 [i_0] [i_1] [1] [1]) ? (arr_9 [i_0] [i_1] [i_1] [i_2]) : (arr_6 [i_0] [i_1] [i_2 + 3])))) : (arr_3 [4] [i_2 + 4] [i_2 + 4]))) : (arr_8 [i_2 + 2] [i_2 + 3] [12] [i_2 + 2])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_19 [i_5] = (((arr_18 [i_5] [i_5]) ? (arr_15 [i_5] [i_5]) : (arr_17 [i_5] [i_5])));
        var_22 = (((arr_15 [i_5] [i_5]) ? (((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_18 [i_5] [i_5]))) : ((((arr_15 [i_5] [i_5]) ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))))));
    }
    #pragma endscop
}
