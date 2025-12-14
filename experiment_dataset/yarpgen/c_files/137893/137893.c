/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((!((min(-var_4, (min(var_0, 511)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, (min(-7174701004632756690, ((var_6 ? 201326592 : (((arr_0 [4] [i_0]) + var_7))))))));
        var_13 = max(var_5, (max((min(var_6, var_3)), 7174701004632756688)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (max(var_8, ((~(arr_2 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_2] = (arr_7 [i_2]);
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_1] = (arr_8 [i_3]);
                        var_14 = (max(var_14, var_6));
                        arr_18 [i_2] = 7174701004632756695;
                    }
                    var_15 = (((arr_14 [i_2 + 1] [i_2 + 1] [i_3] [i_3 + 1]) ? (max(4684971457161613421, (arr_14 [i_1] [i_2 + 1] [i_3 - 1] [i_3]))) : ((-(arr_14 [i_1] [9] [i_1] [6])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        var_16 = ((~(arr_15 [i_6] [7] [i_6 + 2])));
                        var_17 = ((((((min(-31977, -31962))) && ((((arr_4 [i_1]) ? var_1 : 65408))))) ? ((((var_8 < (arr_6 [i_1]))) ? (arr_20 [i_1] [i_1] [i_1]) : var_4)) : var_2));
                        arr_28 [i_1] [i_1] [i_1] [i_5] [i_6 + 3] [i_5] = (!134217727);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_18 = (arr_29 [i_8]);
        arr_31 [i_8] [i_8] = var_9;
    }
    #pragma endscop
}
