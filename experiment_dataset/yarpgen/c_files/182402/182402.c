/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(var_11, (((-((((135 * 18) >= (85 * -34)))))))));
        var_12 ^= ((58 ? (var_7 + -100) : (var_7 - -34)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (max(var_13, 13));
        var_14 = (var_0 >= var_7);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_15 += var_2;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((min(((((129 >> (-4273250281763668764 + 4273250281763668791))) << (var_9 - 202))), ((min((170 == 0), (min(6, 125))))))))));
                                var_17 ^= ((((var_7 > ((max(var_0, 0)))))));
                                var_18 = (max(var_18, var_10));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (min(((-20567 ? ((8120121641352338978 ? -32 : 1)) : 126)), 13));
    }
    var_20 = (((3710970561 ? -32767 : -4273250281763668775)));
    #pragma endscop
}
