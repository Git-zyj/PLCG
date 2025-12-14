/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (min((min((((1166903144 ? -991221893 : var_12))), (arr_2 [i_0] [i_1]))), var_13));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = (32767 ? 45766 : 19770);
                            var_20 = max(((~(arr_11 [i_0] [i_1 - 1] [i_1 + 2] [i_3] [i_1] [i_3]))), 58138);
                            var_21 = var_11;
                            var_22 = arr_7 [i_0] [i_0] [i_1];
                        }
                    }
                }
                var_23 = (max(((((arr_2 [i_1 - 1] [i_1]) < ((var_4 ? (arr_6 [i_0] [i_0] [i_1]) : var_4))))), 127));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                var_24 *= (arr_4 [i_4] [i_4] [i_5]);
                var_25 = (min((arr_15 [i_5] [i_5 + 1]), 126));
            }
        }
    }
    #pragma endscop
}
