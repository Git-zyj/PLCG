/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = max(-1996, -29714);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 3] = (arr_1 [i_0 - 1]);
        var_22 = (arr_2 [i_0 + 2]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0 - 1] = -29232;
            arr_9 [i_0] [i_1] = var_17;
            var_23 = 29218;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_3] = var_11;
                        arr_17 [i_2] [i_3] = (((arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_2] [i_0 - 1]) : (arr_11 [i_1] [i_1] [i_0 + 1] [i_0 - 1])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_20 [i_4] [i_4] [i_0] = ((((((arr_18 [i_0] [i_4]) ? var_12 : (arr_15 [i_0] [i_0] [i_4] [8])))) ? ((-1003183412 ? var_7 : -32749)) : ((29213 ? (arr_6 [i_0] [i_0]) : -3704))));
            arr_21 [i_4] = (((((((arr_13 [i_0] [i_4]) ? -29226 : (arr_18 [i_4] [i_0]))) + 2147483647)) >> (((arr_15 [i_0] [i_4] [i_0] [i_4]) + 2043463233))));

            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                arr_25 [i_5] [i_4] [i_5] = (!-16971);
                arr_26 [i_0 - 1] [i_0 - 1] [i_5] = (158 >= -29235);
            }
            arr_27 [i_0] = (((arr_24 [i_4] [i_4] [i_4]) ? (arr_22 [i_0] [i_0 - 1]) : (arr_24 [i_0 - 1] [i_0 - 1] [i_4])));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_31 [7] [9] = ((102 ? (var_2 >= -3081) : (11 > var_10)));
            arr_32 [i_6] [7] = ((var_1 ? 65519 : ((227 / (arr_18 [i_6] [i_6])))));
        }
        var_24 = 1649267441664;
    }
    #pragma endscop
}
