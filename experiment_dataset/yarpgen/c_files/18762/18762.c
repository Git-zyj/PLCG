/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((55 - ((var_3 ? var_9 : var_3)))), (((var_7 > ((var_3 ? var_5 : var_0))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = max((!-850064444), (min((max(850064443, 850064461)), (var_9 - var_5))));
                    var_12 = -25942;
                    var_13 = (((((arr_6 [i_0 + 1]) == 850064443)) ? (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1]))) : ((101 ? (arr_6 [i_0 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                    arr_8 [i_0] [i_0] = var_9;
                }
            }
        }
        var_14 = (max((min(((min(var_4, -14401))), ((-850064444 ? -850064451 : 1434426860)))), (((101 ? -25942 : 850064425)))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_15 = (arr_1 [i_3] [i_3]);
        var_16 = (max(var_16, ((((arr_5 [7] [i_3]) ? ((0 ? (arr_5 [i_3 - 1] [i_3 - 1]) : -2385)) : (((min(((min((arr_4 [i_3] [i_3 - 1] [i_3 + 1]), var_6))), (arr_2 [i_3 + 1] [i_3 + 1]))))))))));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_16 [6] [i_4] [i_4] |= (arr_15 [i_4] [8]);
            arr_17 [i_3] = (((var_1 ? var_9 : (((arr_3 [i_3] [i_4]) ? var_6 : 60516)))));
            var_17 += ((((((max(-8490, (arr_4 [i_3] [i_3 - 1] [i_4])))) ? (arr_0 [i_4] [i_3]) : -var_0)) * var_8));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_18 = (arr_18 [i_5]);
        var_19 = (((arr_2 [i_5 - 1] [13]) / (arr_2 [i_5 - 1] [i_5 - 1])));
    }
    #pragma endscop
}
