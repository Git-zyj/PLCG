/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 ^= ((!(((~(arr_7 [i_2]))))));
                                var_20 &= (max(36766, (59789 / 59758)));
                            }
                        }
                    }
                }
                var_21 = (-(max(28760, (max(-2936087365567884836, 28766)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        {
                            var_22 &= (((max((var_0 < var_6), ((var_6 ? 1 : (arr_8 [i_5] [i_5] [i_6] [i_7] [i_8]))))) % (1 + 241)));
                            var_23 *= ((-((((((-510551574 + 2147483647) << (1 - 1)))) ? ((max(5738, var_2))) : 1))));
                            var_24 = ((!(((max((arr_16 [i_5] [i_6 - 3] [i_6 - 3] [i_8 - 1]), 0)) > (((max(-2, 20863))))))));
                        }
                    }
                }
                var_25 += (!((((((var_17 ? var_17 : var_1))) ? 16288809894054438960 : (((~(arr_16 [i_6 - 3] [i_6 - 2] [i_6] [i_5]))))))));
            }
        }
    }
    var_26 += var_7;

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_27 = ((((((var_8 ? var_17 : var_3)))) ? (((arr_22 [i_9]) ? (arr_22 [i_9]) : (arr_22 [i_9]))) : (((max(var_3, var_8))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    arr_31 [i_9] [i_10] [i_11] [i_9] = (((((-(((arr_29 [i_9] [i_10] [i_10] [i_11 + 1]) % 4294967292))))) ? ((min(126, 1))) : (arr_21 [i_10])));
                    var_28 -= 19177;
                }
            }
        }
    }
    #pragma endscop
}
