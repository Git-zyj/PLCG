/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((((~var_4) || 1099444518912)) ? ((255 - (0 - var_8))) : var_6));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_17 &= ((-var_9 % (((arr_1 [i_0] [i_1 + 4]) ? (arr_1 [i_0] [i_1 - 1]) : var_13))));
            var_18 -= var_1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 ^= max((((26077 ? -1 : 0))), 12753367724910186128);
                        var_20 &= 255;

                        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((1 ? ((((((arr_5 [i_0] [i_0]) / 1))) ? 1 : (arr_13 [i_0]))) : (((!((((arr_7 [0]) - var_12))))))));
                            var_21 = (((((((max((arr_4 [i_4] [i_2]), var_11))) ? (((!(arr_3 [i_4] [i_2])))) : var_10))) ? (((1 && var_10) + ((51522 ? 1 : (-127 - 1))))) : var_0));
                            var_22 ^= ((1 ^ ((-((max(var_5, var_14)))))));
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, 5410569109223709624));
                            var_24 = ((var_3 + (~1)));
                            var_25 = ((var_6 ? (((((var_6 ? -1 : var_4))) ? (max((arr_4 [i_0] [i_0]), 255)) : (arr_3 [i_2] [i_0]))) : -2048));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_26 = ((((min(0, (((arr_13 [i_0]) ? (arr_13 [i_0]) : var_13))))) ? (((!(((var_3 ? var_12 : 255)))))) : (!var_8)));
                            var_27 = ((!(((((arr_2 [i_3]) * var_9)) != -var_0))));
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_2] [i_0] [i_2] [4] [i_3 + 1] [i_7] [i_2] &= 494;
                            arr_23 [i_7] [i_1] [i_1] [i_3] [i_7] = (arr_8 [i_0]);
                            var_28 = var_13;
                        }
                        var_29 = -1;
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                {
                    var_30 = ((32767 ? (max((((var_1 == (arr_28 [i_10] [i_9] [i_8])))), (var_15 * 1))) : (~var_14)));
                    var_31 = (max(var_31, var_5));
                }
            }
        }
        var_32 = ((var_11 / var_8) ? (((arr_27 [i_8 - 1] [i_8]) ? var_12 : (arr_27 [i_8 - 1] [i_8]))) : ((var_5 ? (arr_27 [i_8 - 1] [i_8]) : var_7)));
        var_33 = ((~(arr_27 [i_8 - 1] [i_8])));
        var_34 = (min(var_34, (((!((var_13 || ((((arr_27 [i_8] [10]) | var_15))))))))));
    }
    var_35 &= 65;
    var_36 = (((((-0 - ((var_2 ? var_8 : var_5))))) ? var_11 : (((((87 ? -1 : var_3))) ? (((min(214, var_13)))) : (var_5 * var_12)))));
    #pragma endscop
}
