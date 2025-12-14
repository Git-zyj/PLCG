/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1 - 1] = (8 * var_9);
                var_11 = ((((max(4294967295, var_9))) ? ((((((arr_5 [17] [i_1]) ? 0 : 239))) ? ((~(arr_2 [i_0]))) : var_8)) : (max((arr_2 [i_1 + 1]), (max((arr_2 [i_0]), -82))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = ((((((arr_9 [i_1 + 2] [i_1 + 4] [i_0]) ? (arr_9 [i_2] [i_1 + 1] [i_1 - 1]) : 0))) ? ((1 ? (arr_9 [i_3] [i_1 + 3] [i_0]) : (arr_9 [i_1] [i_1 + 4] [i_0]))) : (((arr_9 [i_3] [i_1 + 2] [i_1 - 1]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_0]) : (arr_9 [i_1] [i_1 + 3] [i_0])))));
                            var_13 *= (min(((!(((var_9 ? (arr_12 [i_2] [9]) : (arr_1 [i_0])))))), ((!((((arr_6 [i_0] [18] [i_3]) ? var_9 : 16)))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((((((((0 ? 19586 : var_0))) ? ((((var_9 || (arr_3 [i_0]))))) : (max((arr_3 [4]), (arr_2 [i_0])))))) ? (max(((max(519527071, (arr_5 [i_1] [i_1 - 1])))), 1291626947)) : (!-79)));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 = (!-3672516540482372584);
                                var_15 = (min(var_15, (arr_0 [i_1 + 2] [i_1 + 4])));
                                var_16 = (max(var_16, ((((!239) - (1 ^ 4294967288))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 += (((((~(~0)))) ? (max(((var_7 ? var_9 : var_2)), (var_0 / var_10))) : (((!(!3033370772))))));
    #pragma endscop
}
