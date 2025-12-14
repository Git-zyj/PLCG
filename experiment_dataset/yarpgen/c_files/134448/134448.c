/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 ? (max((max(-869550811, var_0)), (var_10 / 5151591515375217666))) : var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = (max((max(1591886016, 2703081280)), (((!((max(65535, 2703081279))))))));
                                arr_12 [i_0] [i_3] [i_2] [i_2] [i_1 - 2] [i_0] [i_0] = (arr_0 [i_1] [i_0]);
                                arr_13 [i_4] [i_3 + 2] [i_4] = -var_9;
                                arr_14 [i_3] [i_1] [i_1] [i_0] = (arr_0 [i_1 - 3] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_5] [i_2] [i_1] [i_0] = (1591886016 ? 65535 : 1591886014);
                                arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = ((~(~2703081280)));
                                arr_23 [i_6] [i_1] [i_2] = 68719476608;
                                arr_24 [i_5] [i_5] [i_6] = (~0);
                                arr_25 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [i_6] = (-(min(-556307664, 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
