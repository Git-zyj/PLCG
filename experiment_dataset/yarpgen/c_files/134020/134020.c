/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((((max(var_9, var_5)))), (((152 <= (var_0 ^ var_6)))))))));
    var_14 = var_2;
    var_15 = ((max(var_5, (max(var_1, var_7)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 += (max(((((arr_1 [i_0]) - (arr_0 [10])))), (max(var_6, (arr_1 [i_0])))));
        var_17 = ((max((max(97, (arr_2 [i_0]))), 381638136)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [6] = ((((var_5 ? (arr_6 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 - 1] [1]))) << (((arr_2 [i_0]) - 8748526441125514744))));
            var_18 -= ((((arr_6 [i_0] [i_1 - 1]) ? (arr_0 [0]) : (arr_4 [i_1 - 1] [2] [i_1 - 1]))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_19 = (max((((var_10 <= (arr_0 [i_0])))), ((var_11 ? (max((arr_2 [i_2]), var_3)) : (~107)))));
            var_20 = (min(var_20, ((((arr_8 [i_2 - 1] [i_2 - 1] [i_0]) ? var_8 : var_10)))));
        }
        arr_10 [i_0] = (arr_8 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_21 = (arr_4 [i_3] [8] [i_3]);
        arr_13 [i_3] = arr_9 [i_3] [i_3] [i_3];
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = (((arr_9 [i_3] [3] [i_5]) & (!-7216300362276373572)));
                    var_22 = ((var_11 ? (arr_9 [i_3] [i_4 + 1] [i_5]) : (((arr_5 [i_3] [i_4] [i_3]) / (arr_8 [i_3] [i_3] [i_3])))));
                    var_23 -= -var_2;
                    var_24 = ((!(arr_8 [i_4 + 1] [i_4 - 1] [10])));
                }
            }
        }
    }
    #pragma endscop
}
