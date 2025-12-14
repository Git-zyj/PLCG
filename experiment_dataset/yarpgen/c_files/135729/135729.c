/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_18;
                var_19 = var_14;
            }
        }
    }
    var_20 = ((-59 ? (((((var_7 ? var_5 : var_18))) ? ((max(53947, var_12))) : (98 | 51988))) : ((var_9 ? (var_17 || var_13) : var_7))));

    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2 + 1] [i_2] = (((((((((arr_9 [4] [i_2]) != var_11))) >> ((((min((arr_3 [15]), (arr_3 [i_2 + 4])))) + 21591))))) ? ((0 ? (arr_0 [i_2 - 3]) : ((max(0, 6090))))) : (min((((arr_3 [i_2 + 1]) ? (arr_0 [i_2]) : var_2)), -var_1))));
        arr_12 [i_2] = (((((-(arr_0 [i_2 + 1])))) ? ((((max((arr_0 [i_2]), var_18))) >> 3283)) : var_18));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    arr_19 [i_2] [i_3] [i_2] [i_2] = ((((((arr_7 [i_2 - 2]) + ((max(48020, var_0)))))) ? ((max((arr_13 [i_2] [i_3] [1]), (arr_13 [i_3] [i_3] [i_3])))) : ((((-(arr_0 [i_3]))) / var_3))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_24 [i_2] [6] [i_4 + 1] [i_4] [i_2] = ((var_10 | (arr_22 [i_2])));
                        arr_25 [i_2] [i_3] [i_4] [i_5 + 2] = (arr_5 [i_4 + 1]);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_21 = (arr_9 [i_2] [i_2]);
                        arr_28 [i_2 + 3] [i_2] [i_4 + 2] [i_4] [i_6] [i_3] = arr_2 [i_2];
                        var_22 = (arr_1 [i_3] [i_4]);
                    }
                    var_23 = (((((-(arr_5 [i_2 + 2])))) ? ((-(arr_0 [i_2 + 2]))) : ((((arr_3 [i_2 + 2]) >= (arr_0 [i_2 + 2]))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_31 [i_7] = 1;
        var_24 = (arr_0 [i_7]);
    }
    var_25 &= (((((((min(158, 51988))) ? ((max(var_0, var_18))) : 114))) ? ((max((max(var_15, var_0)), var_9))) : -99));
    #pragma endscop
}
