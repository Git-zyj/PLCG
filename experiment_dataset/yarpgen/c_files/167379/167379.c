/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((!(!18446744073709551612))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = var_3;
                var_14 = ((!((((-127 - 1) & (max(1, var_9)))))));
                var_15 = (max((var_9 & 31), (((-10 + ((var_5 - (arr_2 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            {
                var_16 = -112;
                var_17 = (((((var_5 / var_6) ? ((1 ? 465463546224313715 : var_3)) : ((min((arr_6 [1]), 1))))) - (((min((arr_7 [i_3 - 1] [i_3 - 2] [i_3 - 1]), 1396269482))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_18 = (var_8 - 199);
                            var_19 = -25;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
