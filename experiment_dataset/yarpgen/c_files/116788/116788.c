/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((144115188075855871 ? var_9 : (max((((-18458 ? var_3 : 1))), (8793602923918906229 * 1)))));
    var_11 = (min(var_6, (((var_9 * 9653141149790645386) / (1 * var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (max((((arr_3 [i_0] [i_1] [i_1]) ? 65535 : var_6)), (arr_2 [i_0])));
                var_13 = (max(var_13, (((min(((var_4 ? 0 : (arr_0 [i_0])), ((min(65535, 0))))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((((!(arr_4 [i_0] [i_0] [i_0]))) ? (max(153385262, var_1)) : 53)))));
                                arr_12 [i_4] [6] [6] [i_1] [i_0] |= ((!(((14137 ? (arr_10 [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2] [i_2 + 2] [i_2]) : var_4)))));
                                var_15 = max((((0 ? (18457 / 2101343090) : (((arr_3 [i_0] [i_2] [23]) ? 60 : var_6))))), (min(((~(arr_6 [i_0] [i_1] [i_2] [i_3] [i_4]))), var_9)));
                                arr_13 [i_0] [i_2 + 1] [i_2 + 1] [i_3] [i_0] = ((-2101343095 ? -18491 : 105744172));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_5] = (((((((min(907839421534225869, -1)) + 9223372036854775807)) >> ((((15 ? 837702848448281480 : (arr_15 [i_1]))) - 837702848448281471)))) | (arr_11 [i_0] [i_0])));
                            arr_21 [i_0] [i_1] [18] [i_1] &= 23;
                            var_16 = -28749;
                        }
                    }
                }
                var_17 = -5030817638884388267;
            }
        }
    }
    #pragma endscop
}
