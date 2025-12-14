/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 |= min(((((!173) >= var_3))), ((63032 ^ (176040812 & var_10))));
                            var_12 ^= (min(((((max(5164821256923650287, 0))) ? (65535 / 5164821256923650291) : var_8)), (min(var_8, ((13281922816785901329 ? 35 : 13281922816785901329))))));
                            var_13 = ((var_10 ? var_8 : (((var_0 & 11088) ? 5164821256923650308 : (((max(0, var_2))))))));
                            var_14 = ((var_9 ? (((-9223372036854775807 - 1) ? 0 : 5164821256923650286)) : (((2 ? 1 : 65525)))));
                        }
                    }
                }
                var_15 |= var_2;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_18 [1] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = -27781;
                                var_16 -= (~0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((9223372036854775807 ? (((~var_0) | ((var_2 ? 0 : 5164821256923650308)))) : ((((((0 ? var_1 : var_4))) ? (~var_3) : (var_7 || var_4))))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            {
                var_18 = ((-1246882275 ? 1 : 18446744073709551615));
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_28 [i_7] [i_7 + 1] [i_7] [i_7] [i_7] [i_7] = ((-((((min(0, var_3))) ? (max(var_7, 0)) : (max(13281922816785901329, 13281922816785901329))))));
                            var_19 = min(((var_0 ? ((16178954077984391968 ? 0 : 7847601164176150199)) : ((11828820563681926149 ? 9223372036854775807 : var_7)))), (((5164821256923650266 ? 1 : (-32767 - 1)))));
                        }
                    }
                }
                arr_29 [14] [i_8 - 3] |= 1272652607;
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
