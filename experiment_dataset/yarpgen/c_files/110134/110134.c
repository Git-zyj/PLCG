/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (4294967295 > (((~(-2147483647 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (!var_10);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 2] [i_1] [i_1] [i_0] [i_4] = (max(((max((arr_8 [i_0 + 1] [i_3 - 1] [i_4 - 1] [i_2 + 4]), var_9))), (((50 != 93) << (((arr_12 [i_0] [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_4] [i_1]) + 100))))));
                                arr_15 [i_1] [i_1] [i_0] [i_2 + 2] [i_1] [i_0] &= var_6;
                                var_13 -= (!var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_9;
    var_15 = ((max(var_2, (~35))));
    #pragma endscop
}
