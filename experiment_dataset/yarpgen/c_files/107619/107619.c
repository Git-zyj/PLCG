/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (arr_1 [i_0] [i_1]);
                    var_17 = (min(var_17, ((((((arr_4 [i_2] [i_0 + 1] [i_0 + 1]) && (arr_4 [i_2 + 3] [i_0] [i_0 - 1]))) ? ((max((arr_4 [i_0] [i_1 - 3] [i_2]), 1050570403))) : ((var_15 ? var_4 : 3353450621)))))));
                    var_18 = max((!3807), ((var_9 >> (var_6 - 548002062))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (min((((-((max(3818, 3818)))))), var_1));
                                var_20 = (min(var_20, ((max((((!(arr_1 [i_1 - 1] [i_0 + 2])))), ((var_2 & (arr_9 [i_4] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))))));
                                var_21 = (max(var_21, ((min((1 >> 1), var_10)))));
                                arr_12 [i_3] [3] [23] [i_1] [i_4] = (((!-563997472) >> (((~27161) + 27170))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((max((max(1, var_1)), var_8)) - var_6));
    #pragma endscop
}
