/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (arr_4 [i_0] [13] [13]);
                                var_16 = ((var_4 > ((var_0 ? (((max(var_6, 32768)))) : 14862446692373928647))));
                                var_17 *= (((arr_9 [i_4]) - 1605702819));
                                var_18 = ((-(min(var_4, -53779376))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_19 = var_3;
                            var_20 = 0;
                        }
                    }
                }
                var_21 = ((var_10 >= (!1605702836)));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
