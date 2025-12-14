/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((((min(var_7, var_0))) ? ((1 ? var_5 : -28027)) : 1));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_2] [10] [10] [i_3 + 2] = 2398;
                        arr_12 [8] [i_2] [i_1] [i_1] [i_1] [10] = var_0;
                        var_16 = (arr_7 [i_2] [i_2] [i_2]);
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_1] [i_1] [i_2] [i_1] = ((((min((arr_15 [i_4] [i_4 + 1] [i_2] [1]), 0))) <= (arr_15 [i_0] [i_4 + 1] [i_0] [i_4])));
                        arr_17 [i_2] = var_7;
                        var_17 = (min(var_17, (arr_6 [i_0] [i_0] [i_0] [10])));
                        arr_18 [i_2] [i_1] [i_2] = (max(0, 19));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [2] [10] = (((arr_21 [i_5 - 1] [13] [i_2] [i_2] [i_2]) != (arr_15 [i_5 - 1] [i_1] [i_1] [i_1])));
                        var_18 = (min(var_18, (((-((var_8 ? (arr_9 [i_5] [i_0] [i_0]) : var_6)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_19 *= 16777215;
                            var_20 = var_9;
                            var_21 = (max(var_21, (arr_25 [i_0] [i_0] [i_0] [i_0] [6])));
                            var_22 = ((arr_7 [i_2] [i_2] [i_6 + 3]) | 1351715667);
                        }
                        for (int i_8 = 4; i_8 < 14;i_8 += 1)
                        {
                            var_23 = (min(var_23, -var_1));
                            arr_32 [i_0] [i_1] [i_2] [i_6] [1] [i_0] [i_0] = (arr_7 [i_2] [i_6] [i_8]);
                        }
                        var_24 -= (arr_30 [i_0] [2]);

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_25 = (((((var_1 ? (arr_13 [i_6] [i_2] [14]) : 3))) ? 1 : var_3));
                            arr_35 [i_0] [i_0] [i_0] [i_2] [i_0] = ((133169152 ? var_3 : -var_7));
                            arr_36 [i_2] [i_2] [i_2] = (~var_13);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = ((var_12 + (((!(arr_34 [i_2]))))));
                            arr_41 [i_0] [i_1] [i_2] [i_6] [i_2] [i_10] [i_10] = arr_26 [i_0] [i_1];
                            arr_42 [i_1] [i_2] [i_2] = ((var_13 ? (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) : (arr_24 [i_6 - 1] [i_2] [i_6 - 1] [i_6] [1] [i_6])));
                        }
                    }
                    var_26 *= (min(((((min(10558, 4032944836))) ? ((var_11 - (arr_30 [i_1] [1]))) : (arr_23 [i_2] [i_2] [1]))), var_7));
                }
            }
        }
    }
    var_27 = (var_12 | 1678543763);
    #pragma endscop
}
