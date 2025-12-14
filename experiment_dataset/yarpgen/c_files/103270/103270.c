/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+(((var_6 < 75) ? var_11 : var_18))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_15;
                    var_20 = var_14;

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_21 = (((arr_10 [i_0] [i_0]) ? (max(((((arr_9 [i_0] [i_0] [i_1] [i_2] [12] [i_3]) / (arr_0 [i_0] [11])))), ((var_12 ? var_12 : -76)))) : (((min(-67, 75))))));
                        var_22 &= ((1 ? 2040438087 : -84));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_23 = (((-78 / var_15) ? var_8 : (((var_6 - (arr_1 [i_0] [i_0]))))));
                        var_24 = var_9;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_25 = (((min((-2147483647 - 1), (-85 / -1))) != 72));
                        var_26 *= ((~(((arr_12 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]) & (var_1 & var_18)))));
                        var_27 = ((!((!(arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])))));
                        var_28 = (max(-68, ((~((min(65535, 85)))))));
                    }
                    var_29 = (max(var_29, (((((max((((~(arr_9 [i_2] [17] [i_0] [12] [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) * (arr_5 [14] [14] [0])))))) == (((arr_5 [i_0] [i_0] [i_0]) | -4801254951030638112)))))));
                }
            }
        }
        var_30 = (((84 ? 124 : (3 & 93))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_27 [i_7] [i_7] = (~9223372036854775797);
                        var_31 = ((+(min((~var_17), (32767 | var_4)))));
                        var_32 = ((~(~-109)));
                    }
                }
            }
        }
        var_33 = (((min((((!(arr_18 [i_0] [i_0])))), ((var_10 ? var_0 : var_9)))) | ((84 ? 57818 : 32767))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        var_34 |= ((-(511 == -1)));
        arr_31 [i_9] = -26;
        var_35 = (((!var_1) / 26));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_36 = (~-var_16);
                    var_37 = (~var_10);
                }
            }
        }
        arr_36 [i_9] = ((((((arr_30 [i_9 + 2] [i_9 - 2]) ? var_14 : var_14))) | var_8));
    }
    #pragma endscop
}
