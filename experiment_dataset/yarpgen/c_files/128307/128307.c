/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (var_12 ^ (((var_11 ? (!var_9) : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = var_14;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (((((((min(16, var_3))) >= var_1)))));
                                arr_13 [i_0 - 1] [i_1] [9] [22] [11] [1] = (((arr_9 [i_0 - 4] [i_0 - 4] [i_3] [i_4 - 1]) || (((var_7 ? var_9 : 13273)))));
                                var_18 -= (min((!0), var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
