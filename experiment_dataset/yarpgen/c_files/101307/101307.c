/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_13 *= ((!((!((max(var_9, -9081245690475319308)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 *= 61440;
                    var_15 = (~var_5);
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_16 = ((var_10 ? (~4106) : 4091));

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_17 = (((((min((!4091), -61438)) + 2147483647)) >> ((((max((arr_6 [i_3] [i_1] [i_0]), (arr_7 [i_0] [12] [1] [i_1]))) >= var_7)))));
                        var_18 = arr_8 [i_3] [i_1] [i_0];
                        var_19 = (min(((~(min(61445, 1932928026)))), ((((-1 ? 30 : var_4))))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_20 += (!2110518021632858357);
                        var_21 = ((~(max((79 ^ var_12), -64))));
                    }
                    arr_17 [i_1] [i_1] = (((max((max(var_4, -79), (max(var_3, 74)))))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_8] [i_7] [i_8] [i_8] = (((~var_10) ? var_11 : (28 | 32767)));
                                var_22 = (arr_26 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                                var_23 += (min(((var_11 ? ((var_11 ? (arr_6 [i_0] [i_7] [i_6]) : var_4)) : (((max(1, 157)))))), (!var_2)));
                            }
                        }
                    }
                    var_24 ^= (((max(61440, -6801807803702088518))) ? (((0 ? 32767 : 63))) : ((-12977 ? -64 : -2262079000405881822)));
                    arr_29 [i_0] [i_0] [i_1] = (arr_11 [i_1] [i_1]);
                }
                var_25 = (max(0, var_1));
            }
        }
    }
    var_26 |= -2914;
    #pragma endscop
}
