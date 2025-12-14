/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((226539540 ? 28903 : 4))) ? (((var_10 & var_9) & (((var_8 ? var_8 : var_3))))) : (((min(var_13, var_8))))));
    var_16 = (max(4194272, -734867496));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] [10] = (max(9223372036854775807, 4194267));
                var_17 = min((min((((arr_3 [i_0] [10]) << (((arr_2 [7] [i_1 - 1]) + 16581)))), (((arr_1 [i_1 - 1] [i_0]) ? var_4 : (arr_1 [i_1 + 2] [0]))))), ((min(((((arr_3 [i_0] [i_0]) > var_5))), (min(var_13, (arr_3 [i_0] [i_1 + 1])))))));
                var_18 = (arr_3 [i_1 + 2] [i_1 - 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_19 = (~(((arr_8 [i_2] [i_3]) ? (arr_6 [i_2]) : (arr_6 [i_2]))));
                var_20 = min((((arr_8 [i_3] [i_3]) ? (max((arr_7 [i_2] [i_2]), (arr_5 [i_2]))) : (arr_8 [i_2] [i_3]))), (arr_8 [9] [i_3]));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_21 ^= (((~-120) ? (arr_11 [i_5] [i_4 + 1] [i_2] [i_2] [i_2]) : (arr_5 [i_3])));
                            var_22 = (((((arr_9 [i_4 - 2] [i_2] [i_2]) ? var_9 : (arr_9 [i_4 - 4] [i_4 - 3] [i_3]))) ^ (((((arr_9 [i_4 - 4] [i_3] [i_3]) != (arr_9 [i_4 + 1] [i_3] [i_2])))))));
                            var_23 = (min(var_23, ((+(((arr_12 [i_4 - 2] [i_5 + 1] [i_4] [3]) / ((-(arr_12 [i_2] [i_2] [i_2] [i_2])))))))));
                            var_24 = (min(734867494, 4294967273));
                            var_25 = (((246 > -734867490) || ((((arr_10 [i_4 - 2] [i_5 - 2] [i_4]) | (arr_9 [i_4 + 1] [i_5 - 1] [i_5 + 1]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_26 = (arr_8 [i_2] [i_3]);
                                arr_23 [i_2] [i_3] [i_3] [i_7] [i_6] = (arr_19 [i_2] [i_6] [i_6] [i_6] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = -var_11;
    #pragma endscop
}
