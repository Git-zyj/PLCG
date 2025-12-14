/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? var_4 : ((var_2 ? ((var_12 ? 11922 : var_11)) : var_8))));
    var_17 = (max(((var_4 ? (~var_0) : (min(0, var_13)))), (((1638973036 / (-127 - 1))))));
    var_18 = (32740 <= var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 ^= ((((((arr_6 [i_0 - 1] [i_4 + 2] [i_2] [i_4 + 2]) ^ (arr_9 [15] [i_3] [i_1] [i_0 - 1])))) ? (arr_6 [i_3] [i_2] [i_1] [i_0]) : (arr_6 [i_4 - 2] [i_2] [i_1] [i_0 - 1])));
                                arr_12 [6] [0] [12] [0] [i_3] |= ((((!(arr_1 [i_0] [i_0 - 1]))) ? ((max((((arr_11 [i_1] [14] [16] [i_3]) ? -6574088745145765469 : var_10)), 32740))) : (max((((arr_5 [i_0]) << (((arr_0 [9]) + 1403033526920462267)))), -5521846388373384680))));
                            }
                        }
                    }
                }
                var_20 = (((((arr_3 [i_0 - 1]) != -7059232879913738757)) ? ((((arr_3 [i_0 - 1]) >= -1))) : ((-(arr_3 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
