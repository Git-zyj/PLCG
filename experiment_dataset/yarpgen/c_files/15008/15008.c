/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((var_0 ? (arr_5 [i_0] [6] [i_1 - 1]) : (((arr_2 [1] [1] [i_1 + 1]) * (arr_2 [2] [i_0] [i_1 - 1])))))));
                var_14 = (~(arr_5 [i_0 + 3] [i_0] [i_0 + 3]));
                arr_6 [16] [16] |= (arr_5 [i_0] [10] [i_1]);
                arr_7 [i_0] [i_0] = (-(arr_2 [i_0] [i_1] [i_0]));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_15 = (min(var_15, ((max(11, (arr_9 [4]))))));
        var_16 = (((((+(((arr_8 [i_2]) ? 41808 : (arr_9 [i_2])))))) ? ((var_4 ? (((arr_8 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]))) : ((min((arr_9 [i_2]), 23730))))) : (arr_9 [i_2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_17 = arr_1 [i_5];
                    var_18 |= (((arr_13 [i_3] [i_3]) ? (arr_9 [i_5]) : (arr_13 [i_4] [i_3])));
                }
            }
        }
        var_19 = (arr_10 [i_3] [i_3]);
        arr_18 [i_3] = 425200063950969896;
        var_20 = (-64 || 17530536712256649544);
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_21 [i_6] = ((((arr_19 [i_6] [2]) ? (arr_20 [i_6]) : -64)));
        var_21 = var_6;
        arr_22 [i_6] = (max(17530536712256649544, (~23731)));
        var_22 |= (((arr_19 [i_6] [i_6]) | (((156 ? (arr_20 [i_6]) : 171)))));
    }
    #pragma endscop
}
