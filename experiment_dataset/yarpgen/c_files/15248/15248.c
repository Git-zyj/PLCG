/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-894819105 && ((min(-72, var_1)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((var_11 >= -72) > (((arr_1 [i_0] [i_0]) ? ((var_13 ? (arr_0 [i_0]) : (arr_0 [1]))) : (((arr_0 [i_0]) >> (1704514331 - 1704514283)))))));
        arr_3 [i_0] = (((-3 + 2147483647) << (((((0 <= (arr_1 [i_0] [i_0])))) - 1))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_19 = 2590452965;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 = (((max(((1704514332 ? 81 : var_14)), (arr_9 [i_3] [1]))) + ((((arr_0 [i_1]) <= (!var_5))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_21 = (((arr_11 [i_2] [i_3 + 1] [3]) <= -72));
                        var_22 = ((-(!var_4)));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] = -30;
                        arr_16 [i_2] = (!-127);
                    }
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
