/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = ((arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2]) & -14549);
                        arr_10 [i_0] [i_0] [i_0] = (arr_9 [i_0 - 2] [i_2 + 3] [i_2 + 2] [i_2 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 = ((-(((((1 * (arr_5 [i_4] [i_4])))) ? ((~(arr_2 [i_0] [i_1] [i_2]))) : ((max((arr_1 [i_0 - 1]), 63488)))))));
                        arr_14 [i_0 - 2] [i_0] [i_0] [i_4] = (((max((((arr_13 [i_1] [i_2 + 3]) ? (arr_6 [i_0] [i_1] [i_2]) : var_14)), (arr_2 [i_2 + 2] [i_2 + 1] [i_2 + 2]))) | (arr_13 [i_0 + 1] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2 + 1] [23] = (!1);
                                arr_22 [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] = ((((max((1 / 1), ((max(1, -59)))))) ? (((!(~-2)))) : (arr_13 [i_0 - 2] [i_0 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_12;
    #pragma endscop
}
