/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((-(((((arr_1 [i_0]) >> (-4460 + 4491)))))));
        var_19 = (max(var_19, ((((arr_0 [i_0]) * (max(24535, 8)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_20 = ((((-(((arr_3 [8]) & (arr_11 [i_1] [i_1] [i_3 - 1]))))) * (((!(((var_6 ? (arr_6 [i_1]) : -24536))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3 - 1] [i_1] [i_3] = (((arr_9 [i_1] [i_2]) - ((((arr_12 [i_1] [i_2] [i_4] [i_5]) && (arr_12 [i_1] [i_2] [1] [i_5]))))));
                                arr_17 [i_1] [i_2] [13] [i_4] = ((!((((arr_15 [i_3] [i_3 + 1] [i_3 - 1]) ? (arr_15 [i_2] [i_3 - 1] [i_3 - 1]) : (arr_15 [i_1] [i_3 - 1] [i_3 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((((((arr_3 [i_1]) | 15457))) && (arr_4 [i_1])))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 11;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_22 = ((-(arr_7 [i_9] [i_7] [i_7])));
                        var_23 = (((((-0 ? 24858 : 4716))) ? -1779205805470777979 : 5));
                        arr_28 [i_6] [i_6] [i_8] = ((((((((arr_5 [1] [1] [i_6]) ? var_4 : (arr_24 [i_6] [i_7] [i_9]))) ^ (~11978)))) ? ((((((arr_14 [13] [i_9]) ? (arr_25 [i_6] [i_6] [11] [i_8] [9]) : var_3))) ? (((~(arr_25 [i_6] [i_6] [2] [i_6] [i_6])))) : ((var_2 ^ (arr_12 [i_6] [i_7] [i_7] [12]))))) : (((((var_8 ? (arr_20 [i_6]) : var_16)))))));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_32 [i_6] [i_7] [12] [i_8 - 3] [i_6] = (arr_6 [i_6]);
                        var_24 = -122;
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_6] = (((((arr_22 [i_7] [i_7]) ? (arr_11 [i_6] [i_6] [i_8 + 4]) : ((var_1 ? (arr_19 [i_6] [i_7]) : var_10)))) != (arr_15 [i_6] [i_8 + 4] [i_8 + 4])));
                        var_25 = (((-288230376151711743 & (((var_12 ? var_2 : (arr_23 [i_6])))))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_26 = ((((((arr_20 [i_8 - 1]) ? (arr_20 [i_8 - 2]) : var_9))) ? (arr_20 [i_8 + 3]) : (0 + 36473)));
                        var_27 -= ((((((((~(arr_11 [i_12] [i_7] [i_7])))) ? (~var_15) : (-1664611386 | -6020061089430938378)))) ? (-30 * -1) : (arr_9 [2] [8])));
                        arr_39 [i_12] = var_4;
                        arr_40 [i_6] [i_7] [i_8] = ((((-1 ? var_10 : (arr_34 [6] [i_8] [i_8 - 2] [i_6]))) >= (((arr_34 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_6]) << (((arr_34 [i_12] [i_12] [i_8 - 2] [i_6]) - 7781115363755150174))))));
                        arr_41 [i_12] [0] [i_7] [i_6] = -4391141629522340138;
                    }
                    var_28 = (max(var_28, var_7));
                    var_29 += ((((min((~var_14), (arr_26 [i_6] [i_7] [i_8 + 1] [i_7])))) ? (((((-47 ? 9223372036854775807 : 1))) ? 2346 : 52193)) : var_13));
                }
            }
        }
    }
    #pragma endscop
}
