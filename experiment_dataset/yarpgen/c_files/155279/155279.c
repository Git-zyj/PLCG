/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 |= (+(((arr_1 [i_0] [i_0]) ? var_6 : var_5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (arr_9 [i_2 - 1]);
                        arr_10 [i_0] [i_3] [i_0] [i_0] = var_9;
                        arr_11 [i_0] [i_1] [i_2] [i_2 - 2] [i_3] [i_3] |= (arr_1 [i_2 - 1] [i_3 + 2]);
                    }
                    var_17 = (max((((109 && 47936) ? -3977770712563064122 : -1359426184)), (arr_9 [i_0])));
                    var_18 = (min(var_18, -var_10));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_19 = ((~((((!(arr_5 [i_5] [i_4] [i_1])))))));
                                var_20 = ((((((arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_4]) << (arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2] [i_5] [i_5])))) ? (((arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_5] [i_5]) & (arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_5] [i_5]))) : ((~(arr_8 [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_5] [i_2 - 1])))));
                                var_21 *= ((3977770712563064136 + ((-26142 ? var_12 : (arr_12 [i_2 + 1] [i_1] [i_1] [i_1])))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2 - 2] = (max((((min(-3977770712563064132, var_14)) & (arr_17 [i_2 + 1]))), ((((!(arr_9 [i_0])))))));
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
