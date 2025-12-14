/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_1;
    var_11 = ((var_5 ? (min(((min(var_8, var_5))), ((var_9 ? var_1 : 5935)))) : var_2));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0 - 2]), ((min((arr_0 [i_0 + 3]), (arr_1 [i_0 + 3]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_3] [i_2] [i_3] [i_2 + 1] [i_2] = var_8;
                        var_12 = ((((min((arr_8 [i_0] [i_1 + 2] [i_2 + 1] [i_3 + 3]), (arr_8 [i_0] [i_0] [i_2] [i_3 - 2])))) ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_3 + 1]) : (arr_8 [i_0 + 1] [i_1 + 3] [i_2 + 1] [i_2 + 1])));
                        arr_10 [i_2] = (min(-84, (1008 + var_4)));
                        arr_11 [i_2] = (min((((arr_8 [i_0] [i_1 + 1] [i_2] [i_2]) ? (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 + 3]) : (arr_8 [i_0 - 2] [i_1 - 1] [i_2] [i_3 + 1]))), (arr_8 [i_3 - 2] [i_3] [i_3 + 1] [i_3 + 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_14 [i_4 - 1] = var_9;
        arr_15 [i_4 - 1] [i_4 - 1] |= (arr_12 [i_4 - 1]);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_13 += ((!(arr_24 [i_4 - 1] [i_5 - 2] [i_5 - 3] [i_6 - 1] [i_6 + 3] [i_7 - 2])));
                                var_14 = ((~(arr_19 [i_6 + 2])));
                                var_15 += (arr_12 [i_5]);
                            }
                        }
                    }
                    var_16 = (max(var_16, (1008 + 64540)));
                }
            }
        }
        arr_27 [i_4] [i_4] = arr_23 [i_4] [i_4 - 1] [16] [i_4 - 1] [i_4 - 1] [i_4 + 1];
        arr_28 [i_4] = (arr_19 [i_4]);
    }
    #pragma endscop
}
