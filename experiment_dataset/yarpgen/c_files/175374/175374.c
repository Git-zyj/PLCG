/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? -var_16 : (min(var_7, var_14))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, -60467));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((((-(min((arr_2 [i_0] [8] [i_0]), 2106905721))))) ? (((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1]))) : (((arr_3 [i_1 - 1] [i_1]) ? ((7297632930089189664 ? (arr_0 [i_2]) : (arr_5 [i_0] [i_1] [i_1 - 1] [i_2]))) : (((((arr_0 [i_1]) >= 64)))))));
                    var_20 = (min(var_20, (((((min(18199, (arr_0 [i_2])))) ? (((max(var_12, (arr_3 [i_0] [i_1 - 1]))))) : (((arr_3 [i_1 - 1] [i_1 - 1]) ? var_11 : var_4)))))));
                    arr_7 [i_0] [4] = (min(((~(((arr_0 [i_0]) & (arr_1 [i_0]))))), 973345930322081368));
                    var_21 = (arr_0 [8]);
                    var_22 = (max((((!(((var_9 ? (arr_1 [4]) : (arr_3 [i_0] [i_2]))))))), ((min(var_1, 11149111143620361967)))));
                }
            }
        }
        arr_8 [i_0] = 1;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_3] [3] = (min((min((arr_5 [i_4] [i_4] [i_4] [i_4 - 4]), (arr_10 [i_0] [i_3 - 1]))), ((min((~var_5), var_14)))));
                    var_23 += var_14;
                    arr_15 [i_0] = var_6;
                }
            }
        }
        arr_16 [i_0] [i_0] = ((((min((max(3, (arr_2 [i_0] [i_0] [i_0]))), ((((arr_4 [6] [6] [i_0]) == 1)))))) || (((((((arr_3 [i_0] [i_0]) && (arr_11 [i_0] [11] [5])))) + (arr_3 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((!(1699293099 != var_11)))));
        var_25 = (((arr_2 [i_5] [i_5] [i_5]) ? 35465847065542656 : (arr_2 [i_5] [5] [i_5])));
    }
    #pragma endscop
}
