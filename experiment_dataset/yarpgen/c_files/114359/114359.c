/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 19074;
    var_20 -= (max(var_13, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = var_12;
                                arr_14 [i_0] [i_1] [i_1] [i_3] = (((!(arr_2 [i_0]))));
                                var_22 = (((257698037760 || 9223372036854775807) + (-9223372036854775807 - 1)));
                            }
                        }
                    }
                }
                var_23 = -var_2;
                var_24 -= var_0;
            }
        }
    }
    #pragma endscop
}
