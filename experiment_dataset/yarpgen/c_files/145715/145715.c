/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = arr_2 [i_0 - 1] [i_0 + 2];
        var_16 = (arr_2 [i_0 + 1] [i_0 + 1]);
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0]) / (arr_1 [12] [15]))) - (arr_1 [14] [i_0 - 1])));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_17 = (min(var_8, ((var_11 ? (arr_6 [i_1] [8]) : (arr_6 [i_1] [i_1 - 2])))));
        var_18 = (((var_13 <= 5392656140464453362) <= 18446744073709551608));
        var_19 = ((24182 / (((((1 ? 2008338032 : var_9))) ? 8 : var_7))));
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = (((((((min((arr_0 [i_2]), 2903134722))) * var_11))) || (arr_0 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [5] [i_2] [i_5] [i_5] [9] = ((((((arr_2 [i_2] [i_4]) & 0)) < var_12)));
                        var_20 = (((((!var_3) ? (arr_19 [i_2]) : (!0))) * 360459853));
                        arr_22 [i_2] [i_2] [1] [1] [i_2] = max(var_7, (((((var_4 ? (arr_19 [i_3]) : 1))) & (arr_15 [i_2] [i_3] [i_4] [i_5]))));
                        arr_23 [i_2] [i_5] = (arr_18 [i_4] [i_4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
