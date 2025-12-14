/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!-var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 |= var_12;
                        var_19 = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_5] = var_8;
                                arr_19 [i_0] [i_4] [i_4] [i_2] [i_1 + 1] [i_0] [i_0] = var_9;
                            }
                        }
                    }
                    var_20 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
