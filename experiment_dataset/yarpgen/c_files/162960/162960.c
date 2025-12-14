/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(1935987823, (((!((min(var_15, 514207078)))))))))));
    var_20 = (~9223372036854775787);
    var_21 = (max(-6674835285663533374, -23565));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] = 0;
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = min(((max(var_16, (max(3, 514207078))))), (max((min(6674835285663533385, 6674835285663533385)), -6674835285663533373)));
                            arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_0] = (min(var_15, (max((!-6674835285663533369), var_4))));
                            var_22 = (max(var_22, var_6));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_23 = (min(var_23, var_13));
                            arr_16 [i_0] [i_0] [i_1 - 1] [i_0] [i_5] = -32748;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_23 [i_8] [i_7] [i_6] [i_0] [i_0] |= 1;
                                var_24 = (max(var_24, ((max(6674835285663533385, ((min((max(24, var_9)), var_12))))))));
                                arr_24 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] = var_5;
                                arr_25 [i_0] = ((~(~-4934526775892106671)));
                                arr_26 [i_0] [i_0] [11] [i_8] = (min(((min(-32, -29888))), 65517));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
