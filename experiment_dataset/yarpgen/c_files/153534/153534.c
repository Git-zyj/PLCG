/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = -370809156309345690;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = (((arr_6 [i_0] [i_0] [i_0]) ? (801298967 && var_5) : ((801298967 ? 0 : -1496626150632883774))));
                    var_11 -= (((arr_6 [i_0] [i_2 - 4] [i_2 - 4]) >= 7));
                    arr_10 [i_0] = ((((((arr_3 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0])))) ? 64790 : (arr_7 [13] [i_1] [i_1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (min(745, (arr_8 [i_3] [5])));
        var_12 = var_9;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = min((max((-2147483647 - 1), ((3493668329 ? var_8 : var_7)))), ((max(var_1, ((((arr_12 [2]) != var_9)))))));
        var_13 = (arr_7 [i_4] [i_4] [i_4]);
        var_14 = (((!(arr_11 [i_4] [i_4]))));
        var_15 = (arr_0 [i_4]);
    }
    var_16 |= var_10;
    var_17 = 1;
    #pragma endscop
}
