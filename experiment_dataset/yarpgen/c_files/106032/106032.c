/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(-var_11, (!var_13))));
    var_19 = (max(var_14, ((((-8850 + 2147483647) << (var_16 - 56055))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = ((59 ? 1304569285878596467 : 1781258817));
        var_21 = ((~(min(-1781258818, (max(var_0, var_5))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_22 = (((4137 ? ((33292288 ? -2 : -1781258818)) : (1781258817 == var_10))));
                                arr_14 [i_1] [i_3] = (((var_1 + -31294) ? (arr_9 [i_1] [i_2 + 1] [i_3] [i_4]) : (((~(arr_8 [8]))))));
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] = (arr_1 [i_5]);
                                arr_16 [i_1] [i_2 + 1] [i_3] [i_4] [i_3] = (((~var_2) ? (((-var_13 ? var_7 : ((3484171307 ? (arr_4 [i_1]) : var_10))))) : 571144168532729067));
                                var_23 ^= ((((((max(37680, var_10))) * (arr_3 [i_2 + 1])))) ? ((((arr_1 [i_2 + 1]) ? ((min(-1781258838, (arr_0 [i_4])))) : (max(var_3, (arr_10 [i_1] [i_2 + 1] [i_4] [2])))))) : (max((arr_3 [i_2 + 1]), (min(4611686018427387904, (arr_5 [i_1]))))));
                            }
                        }
                    }
                    var_24 = ((((~(arr_12 [i_2 + 1] [i_3] [i_2] [i_2 + 1])))) ? ((((max((arr_8 [i_3]), 4067805300))) ? (((var_10 ? -1519430077 : (arr_6 [i_1] [i_2 + 1] [i_3])))) : (arr_10 [i_2] [i_2 + 1] [i_3] [i_3]))) : (((-(~var_13)))));
                    var_25 = (arr_11 [i_1] [i_3] [i_1]);
                }
            }
        }
        arr_17 [i_1] = ((+(((arr_8 [i_1]) ? (arr_2 [i_1] [i_1]) : (max(468379837, var_6))))));
        var_26 = ((-(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_27 = (min(var_27, (((((((-5613273065586884950 ? (arr_8 [i_6]) : var_11))) ? (arr_19 [i_6] [i_6]) : (arr_18 [i_6])))))));
        var_28 -= min(-var_6, 1781258814);
        var_29 *= (max((3840 | 0), (min((max((arr_7 [i_6] [i_6] [i_6]), (arr_4 [i_6]))), ((((-35271701 + 2147483647) >> (var_0 - 45070560))))))));
        arr_20 [i_6] [i_6] = var_9;
        var_30 -= (~(((((1 / (arr_1 [0])))) + -2465956428999122111)));
    }
    #pragma endscop
}
