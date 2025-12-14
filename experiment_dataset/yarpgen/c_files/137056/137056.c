/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_2] [7] [7] [i_3] = (((-var_2 ? (arr_11 [i_0] [i_1] [i_1] [12] [i_2] [i_3] [i_3]) : var_9)));
                                var_11 = var_5;
                                var_12 = (((min((arr_10 [i_0 - 3] [i_1] [i_3] [i_4]), (arr_2 [i_4])))));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, (((~((+(((arr_2 [i_0]) ? var_3 : (arr_11 [i_0] [6] [6] [6] [i_1] [i_1] [i_1]))))))))));
            }
        }
    }
    var_14 = (max(var_14, var_9));
    #pragma endscop
}
