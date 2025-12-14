/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2 + 1] [i_2] [i_3 + 3] = 25553;
                            var_13 = 0;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_14 -= 180182682;
                                var_15 = 34;
                                var_16 = (min(var_16, 9223372036854775807));
                                var_17 = -111;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 33;
    #pragma endscop
}
