/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = ((var_2 ? (((0 ? 1 : 1))) : (((arr_6 [i_0] [i_0] [i_0]) ? (arr_5 [5] [i_0]) : 1))));
                    var_11 = ((!(arr_2 [i_0] [i_2] [i_2])));
                    var_12 = ((0 ? 0 : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [2] = (((arr_0 [i_0]) < (arr_0 [i_0])));
                                var_13 = (((!var_0) == (((!(arr_8 [i_0] [6] [i_2] [i_2]))))));
                                arr_13 [i_4] [i_4] [0] [i_4] &= ((4 ? ((1 + (arr_5 [i_0] [i_2]))) : var_4));
                                var_14 &= 2651045044764322559;
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_15 = (((arr_2 [i_5] [i_5] [i_5]) ? ((4166550932 ? var_0 : (arr_9 [i_0] [i_0] [i_0] [11] [i_0]))) : (((var_7 ? 15 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            arr_18 [i_0] [i_0] = ((arr_5 [i_0] [i_0]) ? (((arr_3 [i_0]) / -1)) : ((((arr_6 [i_0] [i_5] [i_0]) % (arr_7 [i_0] [i_0] [i_0] [13])))));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] = var_0;
            var_16 = ((((arr_8 [i_0] [i_6] [i_6] [i_6]) ? 1 : 0)));
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_17 = (arr_11 [i_7] [i_7] [i_7]);
        var_18 = (min(((((var_1 >= 31) <= var_5))), (~-1)));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = ((!(((arr_26 [i_8]) <= (arr_26 [i_8])))));
        var_19 = (((arr_26 [i_8]) ? var_5 : (!var_3)));
        var_20 = (((var_9 ? (arr_26 [i_8]) : (arr_26 [i_8]))) < (((1 ? 5 : var_7))));
    }
    var_21 &= ((-((-65535 ? var_7 : var_4))));
    var_22 = (min(var_8, (((var_8 ? 142 : var_9)))));
    #pragma endscop
}
