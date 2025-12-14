/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) <= 53));
        var_14 = -8525719078072236542;
        arr_3 [i_0] = ((var_0 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = (max((~var_3), (max((arr_8 [i_1] [i_1]), -78))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_16 = (((((((max((arr_6 [i_2] [13]), 28867))) ? (((var_10 ? 1 : (arr_0 [i_3])))) : ((var_11 ? var_1 : var_12))))) && var_1));
                    var_17 = (max((((!(arr_13 [i_2 + 1] [i_2] [0])))), (arr_6 [i_2] [8])));
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    arr_22 [i_4] &= (max((((-(arr_21 [i_6] [i_6 + 1] [i_6 - 1])))), (max(var_0, (max(var_12, var_9))))));
                    arr_23 [i_4] [i_4] [i_6] = var_12;
                    var_20 = ((~(~28862)));
                    var_21 = ((-(arr_16 [i_4] [i_5] [i_6])));
                    arr_24 [i_4] [i_5] [i_6 - 1] = (-65534 ? ((var_11 ^ (arr_21 [i_6 + 1] [8] [i_6 - 1]))) : (arr_21 [i_6 + 1] [i_6 + 1] [i_6 - 1]));
                }
            }
        }
    }
    var_22 = (max(var_13, (var_9 < var_2)));
    #pragma endscop
}
