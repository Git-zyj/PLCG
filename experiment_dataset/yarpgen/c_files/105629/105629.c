/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((max((max(var_8, var_18)), var_16))), ((var_17 ? var_10 : ((max(var_14, var_8)))))));
    var_21 &= ((-(max((~1), 203))));
    var_22 += var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2 + 2] = ((~(arr_1 [i_0 + 1])));
                    arr_8 [i_1] = (((arr_0 [i_0 + 1] [i_0 - 1]) < (arr_3 [i_1])));
                    arr_9 [4] |= ((!(((-(arr_1 [i_2]))))));
                    arr_10 [i_2 - 1] [i_1] [i_1] [i_0] = ((!((((arr_6 [i_0]) - (arr_6 [i_1]))))));
                }
            }
        }
        arr_11 [i_0] = (((((-(arr_0 [i_0] [i_0])))) ? (arr_4 [i_0 - 1] [0]) : (arr_6 [i_0 + 1])));
        arr_12 [i_0 - 1] = (((arr_3 [2]) ? (arr_3 [4]) : (((!(arr_4 [i_0] [0]))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_23 = (arr_17 [i_0 + 1] [i_3 - 1] [i_3] [i_5 - 1]);
                        arr_19 [i_3] = (arr_0 [i_3] [i_3]);
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = (arr_4 [i_0] [8]);
    }
    #pragma endscop
}
