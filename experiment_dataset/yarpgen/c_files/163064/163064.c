/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = var_10;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))) >> (((arr_8 [i_3] [i_2 + 1] [i_0] [i_0]) - 3178276842)))))));
                        arr_11 [i_0] [i_0] [2] [i_0] = (((((!(arr_7 [i_0] [i_1] [i_0] [i_0]))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_14 = (~-var_4);
            arr_14 [i_0] = (arr_0 [i_0] [i_0]);
            var_15 = (((arr_6 [i_0] [i_0]) / (arr_13 [i_0] [i_0])));
            var_16 = (min(var_16, (~3652745999)));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_17 [i_0] = (((((((arr_7 [1] [i_5] [i_5] [i_0]) ? (arr_9 [0]) : (arr_16 [i_0] [i_0]))) >> (var_4 - 59010))) * (((~((max(var_11, -78))))))));
            var_17 = (min(((!((max((arr_15 [i_0] [i_0]), var_2))))), (((arr_6 [i_0] [i_0]) && ((max(432345564227567616, -8128586805966698822)))))));
            arr_18 [i_0] [1] [i_5] = (max(((((((arr_8 [i_0] [i_5] [18] [i_5]) ? (arr_9 [i_5 + 1]) : (arr_8 [i_0] [i_0] [15] [i_5]))) <= (max(var_3, var_10))))), (arr_15 [i_0] [i_0])));
        }
    }
    var_18 = (min(var_18, ((max((max(((var_2 ? var_3 : var_1)), ((max(var_5, var_6))))), ((max(var_4, var_6))))))));
    #pragma endscop
}
