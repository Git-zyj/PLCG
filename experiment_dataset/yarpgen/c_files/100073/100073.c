/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((max(1, var_9))) ? (min(var_10, var_0)) : var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_13 -= (((arr_1 [2] [i_0 + 1]) ? var_9 : 4));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_1 [i_0] [i_0 + 1])));
                    arr_9 [8] [i_2] [i_2] [i_0] = ((((!(arr_0 [i_0 - 1]))) ? var_10 : ((((arr_3 [i_0] [i_1]) ? var_0 : 1)))));
                }
            }
        }
        var_15 = (((arr_5 [1] [i_0] [i_0 - 1]) ? (arr_5 [i_0] [i_0] [i_0 - 2]) : -8785280351656077918));
        arr_10 [i_0 + 1] = (28508 ^ 18446744073709551611);
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3 + 1] [i_3 + 1] = var_3;
        arr_15 [i_3 - 1] [i_3 - 2] = ((((((((var_10 ? -701885801 : -6617401105174716897))) ? var_5 : (((arr_8 [i_3 - 2] [i_3] [i_3]) / var_0))))) ? ((((((var_11 ? (arr_13 [i_3] [i_3]) : 28508))) ? var_6 : (((arr_5 [i_3 + 1] [5] [5]) / 1))))) : (((var_5 | var_9) ^ (arr_0 [i_3 - 2])))));

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_16 = (arr_12 [9]);
            var_17 = (min(var_17, (arr_6 [4] [i_4 - 1])));
        }
    }
    var_18 = (max(-var_3, (((var_10 ? -24083 : var_7)))));
    #pragma endscop
}
