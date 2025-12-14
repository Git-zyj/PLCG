/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(((((1593389878 ? (arr_0 [i_0] [14]) : 0)))), ((~(arr_1 [i_0])))));
        var_19 = (max((((arr_0 [i_0] [i_0]) & 50222)), ((max((arr_0 [6] [i_0]), 65509)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_9 [i_1] = (arr_2 [i_2 - 2]);
                    var_20 |= ((!(var_12 - var_14)));
                    var_21 = (max(var_21, ((((arr_8 [i_2 - 3] [8]) ? (arr_5 [3] [i_2 + 2] [i_2 + 1]) : -786761188)))));
                    var_22 = ((var_1 ? (arr_6 [i_1] [i_3]) : (arr_8 [i_2 + 1] [i_2 - 3])));
                    arr_10 [22] [4] [i_3] [14] &= ((-(arr_5 [14] [i_2 - 1] [i_2 - 2])));
                }
            }
        }
        var_23 = (arr_8 [20] [i_1]);
        var_24 += (arr_2 [i_1]);
        var_25 = (((arr_2 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
    }
    var_26 += ((~((var_11 & (min(65535, var_5))))));
    #pragma endscop
}
