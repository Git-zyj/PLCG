/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_10);
    var_16 = (~var_6);
    var_17 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((((9223372036854775807 | 64512) ? ((64520 & (arr_5 [i_2]))) : (12 | 115)))) ? 255 : var_5);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (((((((64517 ? 1043 : 140))) ? var_7 : var_2)) * (((var_7 ? 158 : (arr_6 [i_1 - 2] [i_2 - 1] [i_3]))))));
                        var_20 -= ((+((((-1 != 2106684549) || ((min(var_0, 2106684544))))))));
                    }
                    var_21 = ((((max((max((arr_3 [i_1]), 1)), (((~(arr_7 [i_0 + 1] [i_1]))))))) || (~var_9)));
                    var_22 *= -8009695232093990034;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_23 = (((((((~var_2) != (((115 ? 1028 : var_9))))))) | -1));
                                arr_23 [i_4] [i_7 + 1] = var_0;
                                var_24 = (min(var_24, (((((((-2147483647 - 1) ^ 2147483647))) ? 11682 : ((min(var_3, (arr_22 [i_4] [i_4] [i_7] [i_7] [i_5] [i_7] [i_4])))))))));
                                var_25 = (((~1) | ((~(~var_1)))));
                                var_26 *= (1 || var_1);
                            }
                        }
                    }
                    var_27 = (max(-1442672593, var_12));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((min(var_8, ((2147483641 ? 130 : 255)))))));
                                var_29 += (~1);
                                var_30 *= ((var_5 ^ ((min(var_4, (max(52373, 1)))))));
                            }
                        }
                    }
                    var_31 = (min(var_31, (((((((64521 + -1) ? 65534 : 36))) == ((-118033774 ? 1008 : -5405952044009366926)))))));
                }
            }
        }
    }
    #pragma endscop
}
