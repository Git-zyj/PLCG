/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_3 / (((((var_3 ? 12398065529218684705 : var_13))) ? (~var_14) : (max(var_9, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = ((((arr_4 [i_1 - 3] [i_3 + 1]) ? (arr_4 [i_1 - 3] [i_3 + 1]) : (arr_4 [i_1 - 3] [i_3 + 1]))) - (max((arr_4 [i_1 - 3] [i_3 + 1]), (arr_4 [i_1 - 3] [i_3 + 1]))));
                            var_17 = ((max((!7997104806608109871), (!11388258152247981862))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [5] [i_2] [i_3 + 3] [i_3] [i_4] = max((((arr_11 [i_4] [i_3] [i_2] [9] [i_0]) ? 7058485921461569753 : 2147483647)), (max((arr_11 [6] [i_2] [i_2] [i_3 + 3] [i_4]), 7997104806608109871)));
                                var_18 = (((((~(arr_2 [i_0] [i_2] [i_4])))) ? ((-(arr_3 [9]))) : (arr_12 [i_2] [i_1 - 3] [i_0])));
                                var_19 += -1808534088;
                                arr_14 [i_0] [7] [i_2] [i_3] [i_4] = var_1;
                                arr_15 [i_0] [i_2] [i_3] [i_4] = ((((((((arr_8 [i_3 + 3] [i_1 - 3] [i_1 - 2]) + 2147483647)) >> (((~var_6) - 2011251822))))) > 7997104806608109871));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1 + 1] [0] = max(var_9, ((((max(10449639267101441745, (arr_9 [i_5] [4])))) ? (arr_7 [i_3 - 1] [i_3] [i_5] [i_3 - 1]) : var_12)));
                                var_20 += (11388258152247981862 || -1808534088);
                                var_21 = (((((var_13 ? (arr_17 [i_1 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_5]) : (arr_12 [i_1 + 2] [i_3 + 1] [i_3 + 3])))) ? (18446744073709551615 / var_12) : (arr_8 [i_1 - 3] [i_3 + 3] [i_3 + 1])));
                            }
                        }
                    }
                }
                var_22 -= (~(13260131793462758927 + -7058485921461569753));
                arr_19 [i_0] = (((11512423656701189347 | (arr_11 [i_0] [12] [i_0] [i_0] [i_1 - 2]))) ^ -8388592);
            }
        }
    }
    #pragma endscop
}
