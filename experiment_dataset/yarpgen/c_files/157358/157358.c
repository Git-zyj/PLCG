/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, var_10));
                                arr_14 [i_2] [i_2] [i_2] |= var_14;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_0] [0] [i_0] [i_0] [i_0] [i_0] |= var_0;

                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [1] = max((min((arr_11 [i_6 - 2] [i_6 - 2] [8] [i_5] [10] [i_0] [i_0]), (arr_18 [i_0] [i_1] [i_6 - 3] [i_1] [i_6 - 2] [i_1] [i_6 - 4]))), ((min(136, (arr_1 [i_6 - 2])))));
                            var_19 = ((((((arr_10 [i_6 - 2]) ? ((var_6 ? var_3 : (arr_3 [4]))) : (arr_4 [i_0] [i_1] [i_2])))) ? (arr_1 [i_1]) : 119));
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_20 |= (min(-var_14, 3554312830288852861));
                        var_21 = (min(var_0, -3554312830288852862));
                        var_22 ^= ((-((min(var_9, 1)))));
                        arr_23 [i_1] [2] [i_1] [i_1] = (((var_6 ? (arr_11 [i_0] [i_1] [i_2] [i_7] [i_2] [i_0] [i_0]) : (arr_11 [i_0] [8] [11] [i_7] [7] [i_0] [i_7]))));
                    }
                    arr_24 [i_0] [i_1] [i_1] = var_6;
                }
                arr_25 [i_0] [i_0] [i_1] &= (((+-3554312830288852844) ? var_9 : ((-140737488355328 ? 1 : 1))));
            }
        }
    }
    #pragma endscop
}
