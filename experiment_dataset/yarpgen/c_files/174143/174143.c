/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((max(var_2, (var_9 * var_2))) * var_4));
    var_12 = ((var_5 << (((-21 + 49) - 20))));
    var_13 = (((((~(max(var_4, -780162261))))) ? (~-var_3) : var_0));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = ((max((arr_0 [i_0 - 1]), ((max(var_2, var_4))))));
        var_15 = (max(var_15, (-var_9 >= 32747)));
    }

    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_14 [i_1] [i_5] [9] [i_1] = (((min(((19221 >> (var_7 - 46))), var_1)) * 48548));
                                var_16 = ((+(((arr_5 [i_1]) ^ (arr_5 [i_1])))));
                                var_17 = -var_2;
                                var_18 = (min(255, -var_1));
                                var_19 += (arr_6 [i_1 + 1]);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_20 = 154;
                        var_21 = (((((max(74, 179))) ? 2822110418863353216 : 185)));
                        var_22 ^= arr_2 [17] [17];
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, (min(198, -1184394283))));
                                var_24 = (((((arr_16 [i_1 - 2] [i_1] [i_1 - 1] [i_7]) && (arr_16 [i_1 + 1] [i_1] [i_1 - 1] [i_3])))) ^ 255);
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_1] = ((!(((var_6 ? (arr_18 [i_1] [i_1] [19] [i_1]) : 2147483647)))));
    }
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        arr_26 [i_9] [i_9] = var_6;
        var_25 = (((-(arr_5 [i_9 + 1]))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_29 [11] [1] = (((!4294967274) >= (arr_11 [i_10] [i_10] [i_10] [i_10])));
        var_26 |= var_4;
    }
    #pragma endscop
}
