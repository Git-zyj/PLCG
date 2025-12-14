/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-(min(var_4, var_8)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((((var_9 * (arr_2 [i_0] [i_0]))) - (arr_2 [i_0] [i_0])));
        var_20 = (arr_0 [i_0]);
        arr_4 [i_0] = (i_0 % 2 == 0) ? ((max(((((((arr_3 [i_0]) >> (((arr_1 [i_0] [i_0]) - 95)))) ^ (((arr_1 [i_0] [i_0]) >> (((arr_0 [i_0]) - 166))))))), (max(var_17, (arr_1 [i_0] [i_0])))))) : ((max(((((((arr_3 [i_0]) >> (((((arr_1 [i_0] [i_0]) - 95)) + 179)))) ^ (((((arr_1 [i_0] [i_0]) + 2147483647)) >> (((((arr_0 [i_0]) - 166)) + 122))))))), (max(var_17, (arr_1 [i_0] [i_0]))))));
        arr_5 [i_0] = (((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = ((-var_12 ? (arr_8 [i_1] [i_1]) : (arr_7 [i_1] [i_1])));
        arr_9 [4] [i_1] = (arr_0 [i_1]);

        /* vectorizable */
        for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 = ((!(arr_15 [i_1] [i_2 - 4] [i_3] [i_4])));
                            arr_20 [i_4] [i_2] [i_1] [i_5] [i_5] [i_1] = ((((((arr_11 [i_5] [i_2] [2]) >= 1441880299))) ^ -var_13));
                            arr_21 [i_1] [i_1] [i_2] [i_3 - 2] [i_1] [i_2] [11] = (((arr_13 [i_4] [i_2] [i_3 + 1] [i_4]) < (arr_13 [3] [i_2] [i_3 - 1] [i_3 - 1])));
                            arr_22 [9] [i_1] [i_1] [i_2] [i_1] [i_1] = ((-(arr_15 [i_3 - 2] [i_3] [4] [i_3])));
                        }
                    }
                }
            }
            var_23 = (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])));
            arr_23 [i_1] [10] [i_1] = ((var_13 || (arr_6 [i_2 - 4] [i_2])));
        }
        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_24 = (((12884901888 % (-32767 - 1))));
            var_25 = var_12;
        }
        arr_26 [i_1] [i_1] = ((((max(32748, 30711))) / (-2147483647 - 1)));
    }
    #pragma endscop
}
