/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        var_12 = ((-(arr_3 [i_0 + 2] [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_13 [i_2] [10] = (((-(arr_9 [i_3] [i_1] [i_1]))));
                        var_13 = ((arr_10 [1] [7] [7]) / (arr_6 [i_1 - 1]));
                        var_14 = -6569513648952530421;
                        var_15 = (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 2])));
                        var_16 = -3809383360111154927;
                    }
                }
            }
        }
        var_17 = (arr_8 [i_1 + 2] [i_1 + 2]);
        var_18 = (((arr_0 [i_1 + 2]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])));
        var_19 = (((arr_9 [i_1 - 1] [i_1 + 2] [i_1 + 1]) & ((var_6 ? (arr_1 [i_1]) : (arr_5 [i_1])))));
        arr_14 [i_1] = ((240 << (1740687708934779655 - 1740687708934779633)));
    }
    var_20 = ((~((var_4 ? var_5 : (((var_9 ? var_7 : 2729199750)))))));
    #pragma endscop
}
