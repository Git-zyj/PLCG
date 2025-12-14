/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : -1675040677)) * (var_5 + 0)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (((((!var_12) < (((arr_3 [i_0]) >> (arr_1 [i_1]))))) ? ((((((var_0 ? (arr_1 [i_1]) : var_2))) ? (((arr_0 [i_0] [i_1]) / var_9)) : (((arr_1 [i_0]) * (arr_0 [i_0] [i_0])))))) : (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (((arr_0 [i_0] [i_1]) ? (arr_3 [i_1]) : var_1))))));
            var_15 = ((((arr_1 [i_1]) || 49)));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 = 18446744073709551615;
            arr_6 [i_0] [i_0] [i_0] = (((((((12913951702587812882 + (arr_3 [i_0]))) / (((arr_3 [i_2]) - 13951006167890720170))))) ? ((min(0, (arr_2 [i_0] [i_2] [i_2])))) : (arr_2 [i_2] [i_0] [i_0])));
            arr_7 [i_0] = ((max((arr_4 [i_0]), (arr_5 [i_2] [i_2] [i_0]))));
        }
        arr_8 [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_17 = 15165519478409070184;
                        arr_18 [1] [1] |= var_1;
                        arr_19 [i_3] [i_4] [i_5] [i_3] = 6;
                        arr_20 [12] [i_3] [i_5] [i_6] [12] = (arr_17 [i_6] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]);
                    }
                }
            }
        }
        var_18 = var_9;
    }
    var_19 = (var_12 && var_2);
    #pragma endscop
}
