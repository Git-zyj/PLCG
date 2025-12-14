/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 ^= ((!((!(arr_2 [i_0] [i_0])))));
        arr_3 [1] &= ((~(arr_1 [i_0 + 1] [2])));
        arr_4 [i_0] [i_0] = (((-(arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 &= ((!((!(arr_5 [i_0] [i_2])))));
                    var_17 &= ((-(arr_8 [i_0 - 2] [i_0 - 1])));
                    arr_10 [i_0] [i_0] = ((~((~(arr_9 [i_0] [17] [i_1] [i_0])))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3 - 2] &= (arr_12 [i_3 - 3] [i_3]);
        arr_14 [i_3] = (((arr_7 [1] [i_3] [i_3 + 1] [i_3 + 1]) ? (arr_12 [i_3] [i_3]) : ((-(arr_5 [i_3] [1])))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_18 = arr_8 [i_4] [i_4 + 1];
        arr_18 [i_4] = (((arr_1 [i_4 - 3] [i_4]) ? (arr_1 [i_4] [i_4]) : (arr_1 [i_4] [i_4])));
        arr_19 [i_4] = (((~(arr_17 [i_4]))));
    }
    var_19 = (~var_11);
    var_20 = (~var_6);
    #pragma endscop
}
