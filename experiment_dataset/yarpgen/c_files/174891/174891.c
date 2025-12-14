/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 32767;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 ^= (((~var_1) | ((~(arr_1 [i_0])))));
        var_12 = (((!var_3) || (var_6 && 32767)));
        arr_2 [i_0] = (((arr_0 [1]) * 1));
        var_13 = 28;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((((var_7 + 2147483647) << (var_4 - 2972883415)))) >= ((var_5 ? var_1 : var_6))));
        var_14 ^= 32765;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = (min(var_0, (min(37, 32759))));
        var_15 *= ((((((((arr_1 [i_2]) ? var_5 : var_4))) ? var_3 : (var_9 * var_8))) >= var_3));
        var_16 = (max(var_16, (((((((max(var_4, var_7)) * (!var_6)))) ? (min((min(var_7, (arr_0 [i_2]))), var_3)) : (((max((!var_7), (-32766 <= 32759))))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_17 += ((var_0 << (var_6 % 20)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_27 [i_4] [i_3] [i_4] [i_5] [i_5] [i_3] = -32746;
                                arr_28 [i_7] [i_4 - 1] [i_4] [i_5] [12] [i_7] &= (((((var_7 ? var_2 : (arr_25 [9] [i_4] [9] [i_5] [i_4] [i_6 + 1] [i_7])))) ? var_6 : (var_7 % var_9)));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_4] [i_5] = (((var_3 ? 240 : var_1)));
                        var_18 -= var_7;
                        arr_33 [i_3] [i_3] [i_4] [i_4 - 1] [i_3] = (~1);
                        arr_34 [i_4] [i_4] [i_5] [i_8] [i_4] [i_3] = (!var_9);
                        arr_35 [i_3] [i_3] [i_4] [i_4] [i_5] [i_8] = -32746;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_19 -= ((~(arr_18 [i_3] [i_9])));
                                arr_41 [i_5] [i_4] = (arr_31 [i_3] [i_4] [i_4]);
                                arr_42 [i_9] [i_9] [i_4] [8] [i_4] = ((!(arr_13 [i_4 - 1] [i_4 - 1])));
                                var_20 = (min(var_20, (((arr_24 [i_4] [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1]) >= var_4))));
                            }
                        }
                    }
                    var_21 -= 6679;
                }
            }
        }
        var_22 ^= ((((-32725 ? var_5 : (arr_17 [i_3] [i_3])))) ? (((var_0 ? 32753 : 32746))) : (var_5 | var_6));
        arr_43 [i_3] = -1;
        arr_44 [i_3] = ((4013853012383397573 | (arr_18 [i_3] [i_3])));
    }
    var_23 *= var_4;
    #pragma endscop
}
