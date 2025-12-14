/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [15] [i_0] [10] [i_0] = (((+-40483) ? ((-(arr_4 [i_4 + 2] [i_4 + 2] [i_4 + 1]))) : (arr_6 [i_0] [i_0 - 1])));
                                var_20 = (((((~(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_13 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4]) ? (((min((arr_6 [i_0 + 3] [i_0 + 3]), 65530)))) : var_2)) : (((arr_11 [i_4] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1]) ? (arr_5 [i_0]) : var_8))));
                            }
                        }
                    }
                }
                var_21 -= ((!(arr_13 [i_0 + 3] [i_0 - 2] [i_0] [17] [i_0])));
            }
        }
    }
    var_22 |= var_12;
    var_23 = (max((min(((max(var_8, var_14))), ((var_11 >> (var_0 - 155))))), (((max(var_12, var_6))))));
    #pragma endscop
}
