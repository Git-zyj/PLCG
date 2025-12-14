/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_2 ? var_10 : var_12) - (var_18 != var_13)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_21 = (((arr_3 [i_0 - 1]) >= 30));
        arr_4 [22] [i_0] = (arr_0 [i_0] [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((!(((-26 | (arr_5 [i_0])))))))));

                    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_23 = (arr_5 [i_0 + 2]);
                        var_24 = (((~-369376080) ^ (((!(arr_1 [i_0 - 1] [i_2]))))));
                        arr_13 [i_0] [i_0] [i_2] = var_18;
                        var_25 += (((arr_3 [i_1]) < (arr_3 [i_2])));
                        var_26 = 17;
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_27 += (arr_16 [i_1 - 1] [i_0 + 2] [i_0 + 2]);
                        var_28 += ((-(arr_14 [i_0] [i_1] [i_4] [i_4])));
                    }
                    var_29 += ((((((!(arr_16 [i_0] [i_1 + 2] [i_2]))))) <= (((arr_1 [5] [i_0 - 1]) ? (arr_5 [3]) : (arr_2 [i_0] [i_1])))));
                }
            }
        }
        var_30 = ((-var_3 ? (arr_0 [i_0] [i_0 - 1]) : (arr_14 [i_0] [i_0] [6] [i_0 + 2])));
        arr_17 [i_0] = (((arr_1 [i_0 + 2] [i_0 + 2]) || (arr_1 [i_0 - 1] [i_0 + 1])));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_28 [i_8] [i_7] [i_7] [i_6] [i_8] = (arr_23 [i_8 - 3]);
                            var_31 = (i_8 % 2 == 0) ? ((((((arr_24 [i_8 + 1] [i_8] [i_7] [i_8]) + 2147483647)) << (((arr_15 [i_8 - 2] [i_6] [i_8] [i_8] [6] [i_8]) - 70))))) : ((((((arr_24 [i_8 + 1] [i_8] [i_7] [i_8]) + 2147483647)) << (((((((arr_15 [i_8 - 2] [i_6] [i_8] [i_8] [6] [i_8]) - 70)) + 177)) - 24)))));
                            var_32 += (min(((((arr_26 [24] [i_5] [i_5] [i_5] [i_5] [24]) > (((arr_11 [i_6]) & var_10))))), (((arr_3 [i_8]) ? var_6 : var_18))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((-(max(var_7, ((((arr_15 [i_5] [i_6] [i_6] [i_5] [i_6] [i_10]) >= (arr_26 [i_5] [i_6] [i_5] [i_5] [i_5] [i_6])))))))))));
                            arr_34 [i_5] [i_10] [i_10] = ((((arr_6 [i_5] [i_5]) & (arr_6 [i_6] [i_5]))));
                            var_34 = ((-(((((arr_8 [i_6]) / (arr_27 [i_5] [i_6] [i_9] [i_10])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
