/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -20;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (((((16812 ? (arr_5 [i_0] [i_0] [i_3] [i_4]) : (arr_10 [i_0] [i_1] [i_1] [5] [15] [i_3])))) ? (((arr_12 [i_0] [i_2] [i_2] [i_2] [i_3] [i_4]) ? 16812 : (arr_3 [i_2]))) : ((20131 ? (arr_1 [i_1]) : (arr_4 [i_2] [i_2] [i_4])))));
                                arr_14 [i_4] [i_4] [i_3] [i_2] [i_2] [1] [i_0] = ((((1 << (((arr_1 [i_1]) - 20))))) ? -16812 : (arr_2 [i_3 - 1] [i_2]));
                                arr_15 [i_0] [i_1] [0] [i_2] [i_3] [i_4] = ((arr_11 [i_2] [i_3 - 1] [i_2] [i_3] [i_3]) < (arr_11 [i_0] [i_3 - 1] [i_2] [i_3 - 1] [7]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_21 [i_5] [i_2] [i_5] [i_6 - 1] [i_6]) <= -21));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_5] = -20;
                                arr_24 [i_0] [i_0] [i_0] [i_5] [4] [i_0] [i_0] = 0;
                                arr_25 [i_0] [i_1] [i_5] [i_5] [i_6] [i_0] [i_2] = (arr_2 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] = (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((1 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : 21)) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        arr_29 [i_7] = ((!(arr_28 [i_7] [i_7])));
        arr_30 [i_7] = (((((arr_28 [i_7] [i_7]) + 2147483647)) << (((((arr_28 [i_7] [i_7 + 2]) + 990357048)) - 7))));
        arr_31 [i_7] = 1;
    }
    var_11 = ((((((min(var_2, 23634))) ? var_7 : ((min(125, 241))))) == -16812));
    var_12 = ((((min(var_9, var_0))) ? var_1 : (max(((301761940239157510 ? 983366794846632154 : 1)), ((min(var_0, 232)))))));
    #pragma endscop
}
