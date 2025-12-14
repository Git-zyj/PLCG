/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 ? (min((min(var_5, var_9)), ((var_6 ? var_5 : var_14)))) : ((min(-var_16, (((1552565942 ? var_18 : var_14))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_20 = (arr_11 [i_0] [i_0] [i_1 + 3] [i_0]);
                        var_21 = ((!(arr_2 [i_3 + 1] [i_2 - 2] [i_0])));
                        arr_12 [i_3] = (~-1552565942);
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_16 [i_2 - 1] = (-(((arr_10 [i_1 + 1] [i_2] [i_1 + 1] [i_2]) ? (arr_10 [i_1 + 3] [6] [i_2 - 2] [4]) : (arr_10 [i_1 - 1] [7] [1] [i_1 + 2]))));
                        var_22 = (min(var_22, ((max((((!83) ? (min(11098500051005395165, 51630)) : (arr_3 [i_4 - 1] [i_2 - 2]))), ((min((arr_2 [7] [i_1] [i_0]), (arr_9 [i_1 + 3] [i_2 - 2] [i_4 + 4] [i_4])))))))));
                        var_23 = (((arr_9 [i_0] [8] [i_0] [8]) ? (((((max((arr_5 [i_0]), (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2])))) ? ((min((arr_2 [i_0] [9] [9]), (arr_15 [12] [i_0] [i_2] [i_4])))) : -27369))) : (min(35184372088831, (arr_7 [i_1 + 1] [i_2 - 2])))));
                    }
                    arr_17 [i_0] [i_0] [i_0] = (max((((1 ? 32767 : var_18))), (((84 ? (arr_9 [i_0] [8] [i_2] [i_0]) : var_11)))));
                }
            }
        }
    }
    var_24 &= ((var_2 - ((max(17179869152, -104)))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_25 = ((-83 ? 35184372088809 : (arr_19 [i_5] [i_5])));
        var_26 = (((arr_19 [i_5] [i_5]) - (arr_19 [i_5] [i_5])));
    }
    #pragma endscop
}
