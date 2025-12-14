/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (0 / -11439)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((((!(arr_2 [20] [0] [i_1]))))) - (max((arr_4 [20]), (-1 / -3))))))));
                var_20 = (((arr_1 [8]) ^ (((!(arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] = ((~((-32751 ? (max(681451308, 5)) : (!-22516)))));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = (max((max((arr_2 [i_1] [i_2 + 1] [i_1]), (arr_2 [i_1] [i_2 + 1] [i_1]))), (arr_2 [i_1] [i_2 - 3] [i_1])));
                        }
                    }
                }
                var_21 = (max((((~((-13413 | (arr_8 [i_1] [i_1] [4] [i_0 + 4])))))), (((arr_2 [i_1] [10] [i_1]) ? (-22525 ^ 0) : -5319864900019143584))));
                arr_12 [i_1] [i_1] = -22525;
            }
        }
    }
    var_22 = (min((-22532 == 5319864900019143602), (!var_7)));
    #pragma endscop
}
