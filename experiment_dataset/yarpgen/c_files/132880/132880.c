/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_2 - 3] [i_1 + 1] [i_1] = (!var_4);

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 20;i_4 += 1)
                            {
                                var_11 = (((arr_5 [i_1 - 3] [i_1 + 2]) > (arr_5 [i_1 - 3] [i_1 + 2])));
                                arr_15 [i_1 - 3] [i_1] [i_2 + 3] [i_1] [i_4 - 2] [i_2 + 1] [i_2] = ((((((arr_7 [i_0] [i_0] [i_1]) + 2147483647)) >> (var_9 + 1832))));
                                var_12 = (max(var_12, (((~(((arr_14 [i_0] [i_1 - 2] [i_1] [i_2 + 2] [i_3 + 1] [i_3 + 2] [i_4]) ? (arr_2 [i_0]) : var_9)))))));
                            }
                            var_13 = (max(((min((arr_3 [i_1] [i_2 - 1]), (~var_8)))), (max((min(var_5, (arr_2 [i_0]))), ((((arr_6 [i_3 - 2] [i_1] [i_1] [i_0]) | var_0)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_14 = (max((arr_17 [i_1] [i_1 + 2] [i_5]), ((~(36028797018963967 && var_6)))));
                                var_15 = (min(var_15, var_9));
                            }
                        }
                    }
                }
                var_16 += ((((arr_19 [i_1 - 2] [i_1] [i_0 - 1] [i_0 + 3] [i_0]) ? var_9 : var_2)));
            }
        }
    }
    var_17 = ((var_3 == (var_0 | var_2)));
    var_18 += ((((var_5 ? 6980628011334439664 : var_0)) >= ((max(var_0, ((var_0 ? var_5 : var_2)))))));
    #pragma endscop
}
