/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_10 = ((max(var_7, var_3)));
                        var_11 |= ((((arr_7 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3]) * 1)));
                        arr_9 [i_0] [i_3] [i_2] [i_3] = (((((arr_6 [i_0] [i_1] [i_0] [i_3]) != (arr_3 [i_0] [i_1] [i_2]))) && ((!(arr_6 [i_0] [i_0] [i_0] [i_0])))));
                        var_12 = -0;
                        var_13 = (max(var_13, (min(1933356343, (~13462)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_14 = (4267 ? (arr_11 [i_4] [i_0]) : ((var_4 ? var_4 : var_1)));
                        arr_12 [i_0] [i_1] [5] [i_4] = var_3;
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_15 = (max(12582912, ((min(var_8, var_2)))));
                        var_16 = (arr_0 [i_5 - 1]);
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_6] = ((((4294967295 ? (min(var_7, (arr_4 [i_1] [i_2] [i_6]))) : (((max((arr_0 [i_0]), 216))))))) ? (arr_0 [i_0]) : ((((!(arr_11 [i_0] [i_0]))) ? (arr_6 [1] [i_1] [i_2] [i_2]) : ((max(var_2, 2))))));
                        arr_18 [i_0] [i_0] [10] [3] [i_0] [i_0] &= ((arr_10 [i_6] [12] [8] [2] [i_0]) > (arr_16 [i_0] [8] [i_2] [i_6] [i_6]));
                        var_17 = ((-(((min((arr_3 [1] [i_2] [i_6]), var_3))))));
                    }
                    var_18 = (max((arr_5 [i_0] [i_1] [i_1]), (arr_13 [i_0] [i_1] [7] [i_2] [i_2] [i_2])));
                    var_19 = (((((arr_11 [i_0] [i_2]) ? (arr_3 [i_2] [i_1] [i_0]) : var_3))) ? (((arr_1 [i_0] [i_2]) ? (max((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [1]), var_5)) : (!var_9))) : var_6);
                }
            }
        }
    }
    var_20 = (max(var_6, (!-var_1)));
    #pragma endscop
}
