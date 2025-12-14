/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((-((min(18203, 240)))));
    var_20 += min((var_18 >= -24424), var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((arr_1 [i_0]) - ((-110 ? 240 : (arr_1 [i_0])))))));
        arr_4 [2] [2] = 16383;
        var_21 ^= ((1 << ((((min(24434, var_13))) ? (((arr_0 [5] [4]) ? 8 : -74)) : 1))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (arr_0 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_23 = 49149;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_24 = 246;
                        var_25 = (min((((-23089 != 65532) ? (10718098255228078563 / -24435) : (max(25, (arr_11 [i_1] [6] [i_3] [i_4]))))), (1149012734 ^ 1048575)));
                        arr_14 [i_1] [i_1] [i_3] [i_4 - 3] [5] [i_3] = ((max((min(134201344, 65527), (-24438 != 11674516756230032095)))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_22 [i_7] [18] [19] [18] |= (-2147483647 - 1);
                    var_26 |= var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_27 -= (-(~24405));
                                var_28 = (min(var_28, ((-2147483642 ? 238 : 65535))));
                                var_29 = ((((3291914007 ? (2147483647 >> 31) : ((0 >> (2101640102 - 2101640102))))) << (((((~23822) & -908774185)) + 908779313))));
                                var_30 = (((((((max((arr_17 [i_8]), -2101640113))) ? 49036 : (-2147483636 != 30)))) ? (((-2147483647 - 1) + 234)) : 15360));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                {
                    var_31 = 551529765;
                    var_32 ^= ((~(((21178 > (-24437 < 1048572))))));
                    var_33 *= 1;
                }
            }
        }
    }
    #pragma endscop
}
