/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = 53223;

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_10 = (arr_0 [i_0 + 1] [i_0 + 1]);
            var_11 = ((min((((~(arr_3 [8] [i_1] [8]))), (max(18446744073709551610, var_3))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_12 = var_3;
            var_13 = (max(((((((arr_6 [15] [i_2]) ? (arr_0 [3] [i_2]) : (arr_6 [i_0] [11])))) ? (((arr_5 [i_2] [1]) & (arr_1 [i_0 + 1] [i_2]))) : (arr_1 [i_0] [i_2]))), ((((arr_6 [i_0] [i_0 + 1]) - (arr_6 [i_0] [i_0 + 1]))))));
            var_14 |= (arr_4 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_15 = (!-132206620);
            arr_11 [i_0] [i_3] = ((236 ? (arr_1 [i_0] [i_0 - 1]) : (max((arr_1 [i_3] [i_0 - 1]), (arr_1 [i_0] [i_0 - 1])))));
            arr_12 [1] = (((var_2 + (arr_8 [i_0 + 1] [i_3] [i_3]))));
        }
        arr_13 [12] = (((arr_5 [7] [i_0 - 1]) ? ((((arr_6 [i_0 + 1] [i_0 + 1]) + (arr_6 [i_0 - 1] [i_0 - 1])))) : (((((arr_6 [2] [i_0]) ? 10 : (arr_8 [i_0] [16] [i_0 - 1]))) + (arr_10 [i_0] [i_0 - 1])))));
    }
    var_16 = (min(var_16, var_1));
    var_17 = max(var_6, 132206620);
    #pragma endscop
}
