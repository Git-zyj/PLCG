/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 *= (arr_0 [i_0]);
        arr_2 [i_0] [1] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = ((((arr_4 [i_1]) ? (arr_0 [i_1]) : var_3)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_1] = (((arr_8 [i_1] [i_3] [i_3] [i_3 + 1]) + 10222));
                    var_17 ^= (arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1]);
                    arr_10 [i_1] [i_2] [i_1] = arr_7 [i_1];
                }
            }
        }
        var_18 -= (((arr_0 [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_4 [i_1])));
        var_19 += (arr_0 [i_1]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (max((arr_6 [5] [i_4] [5]), ((max((arr_0 [i_4]), 0)))));
        arr_15 [i_4] [i_4] = (((((!(((1 ? 0 : 1)))))) | (max(var_9, ((~(arr_4 [1])))))));
    }
    var_20 = (+-24872);
    #pragma endscop
}
