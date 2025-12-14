/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = ((+(max((-8 == var_4), ((var_2 ? var_1 : 536854528))))));
                                var_12 = (((max((max((arr_5 [i_0] [5]), (-2147483647 - 1))), (arr_6 [i_0])))) % ((~(arr_2 [i_0]))));
                            }
                        }
                    }
                    var_13 *= (max((((var_10 ? (max((arr_1 [i_0] [i_0]), -8)) : (arr_13 [i_0] [i_1] [i_2 + 2] [i_2] [i_1])))), (min(18446744073709551611, 10006837187765495340))));
                    var_14 ^= (((arr_2 [i_0 + 1]) == var_5));
                }
            }
        }
    }
    var_15 = ((0 ? 58221 : var_8));

    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_16 = ((((max((arr_16 [i_5 + 1] [i_5 - 1]), 243772235)) & (((arr_16 [i_5 - 1] [i_5 + 1]) << 11)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_17 = ((~var_8) ? (((min((arr_24 [i_6 + 1]), (arr_21 [i_5 + 1] [i_6 + 1] [10]))))) : var_1);
                                arr_33 [i_5] [i_6] [i_6] [i_6] [i_5] = var_1;
                                var_18 = (max(((((arr_16 [i_6 + 1] [i_5 - 2]) && (((var_4 - (arr_29 [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5]))))))), ((-(var_0 + 18446744073709551611)))));
                            }
                        }
                    }
                    var_19 = -8127529683472665086;
                }
            }
        }
        var_20 = (max(var_20, (arr_19 [8] [i_5])));
    }
    var_21 = var_1;
    #pragma endscop
}
