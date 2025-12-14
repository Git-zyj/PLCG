/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((((var_10 ? 1 : var_11))), var_9))) ? 1 : var_1));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = ((1 ? (((arr_2 [i_0]) ? 1 : (arr_0 [i_0]))) : var_2));
        arr_4 [i_0] = (min((arr_2 [i_0]), (arr_2 [i_0])));
        var_20 = (((!(arr_3 [i_0 - 1] [i_0 - 1]))) ? ((min(1, 64868))) : ((((arr_2 [i_0]) <= 153))));
        var_21 = (max(var_21, (((var_0 ? (((((166 ? (arr_1 [i_0 + 1]) : 28))) ? (arr_1 [i_0 + 1]) : (arr_3 [1] [4]))) : 244)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_4] [i_2] [i_4] [i_2] [i_3] = ((((((arr_13 [i_4]) ? var_5 : var_6))) ? (64868 < var_0) : var_14));
                        arr_19 [i_3] [i_3 + 1] [i_3] = (var_16 - var_4);
                        arr_20 [i_3] [i_3 + 1] [i_4 - 3] = ((-(arr_15 [i_1] [11] [i_1] [i_1] [i_1] [i_4])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_27 [i_1] [i_6] [i_7] [i_7] [i_1] [i_7] = (((arr_11 [14] [i_5 - 1] [i_6] [i_7]) != (arr_11 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                        var_22 += var_13;
                    }
                }
            }
        }
        var_23 += (arr_21 [i_1] [i_1] [i_1]);
    }
    var_24 = 1;
    #pragma endscop
}
