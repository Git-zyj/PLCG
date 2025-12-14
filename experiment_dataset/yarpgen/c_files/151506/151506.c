/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (var_5 <= -1439185691);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_13 = var_0;
                            arr_11 [i_0] [i_0] [i_0] [21] [i_0] [i_0] = (arr_4 [17] [i_0] [17]);
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = var_1;
                            var_14 = var_6;
                            var_15 = -1439185691;
                        }
                        var_16 = var_0;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_20 [i_6] [i_1] [i_1] [i_1] = ((var_9 < (((-1439185691 + 2147483647) >> 0))));
                        var_17 ^= 0;
                    }
                    var_18 = -7560452665094739812;

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_23 [i_7] [22] [i_2] [22] = 15;

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_19 = (max(var_19, (arr_5 [i_0])));
                            var_20 = 1653457779887857396;
                            var_21 = (max(var_21, var_6));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_22 -= -1439185666;
                            arr_30 [i_2] [i_7] [i_2] [i_9 - 1] [i_9] = 99;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_1] [i_0] |= var_5;
                            var_23 = (max(var_23, (var_5 && 1)));
                        }
                        var_24 = (max(var_24, (arr_4 [i_1] [i_1] [i_2])));
                    }
                    var_25 = 3320794305390505848;
                }
            }
        }
    }
    #pragma endscop
}
