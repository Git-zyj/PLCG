/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((12172453429628749222 ? var_11 : 761964202))) ? 97 : (((!var_11) ? -var_15 : var_1))));
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = 81;
                                arr_13 [i_0] [5] [i_2] [i_3] [i_2] = (((arr_4 [i_4]) | (arr_11 [i_0] [i_1] [i_1] [5] [i_3] [5] [6])));
                                var_20 = (arr_2 [i_2] [15]);
                                var_21 = (max(var_21, (((9223372036854775807 ? ((~(arr_5 [i_0] [i_2] [i_0]))) : ((max((arr_5 [i_0] [i_0] [6]), (((!(arr_7 [i_0] [i_1] [i_2]))))))))))));
                                var_22 *= ((((min((arr_9 [i_2] [i_1] [i_2] [i_2 - 2]), (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_2 + 1])))) * (arr_9 [i_2 - 1] [i_4] [i_4] [i_2 - 2])));
                            }
                        }
                    }
                    var_23 = arr_9 [15] [i_2] [15] [i_0];
                }
            }
        }
    }
    #pragma endscop
}
