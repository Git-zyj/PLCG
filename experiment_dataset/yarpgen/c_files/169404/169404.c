/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 || ((((-1 && var_3) ? -241 : (var_1 && 1416181789))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0 - 1] [i_1] [i_0] = ((((!(arr_2 [i_2 - 2] [i_1 + 2])))));
                    arr_7 [i_1] = (-(arr_1 [i_2 - 2] [i_1 - 2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = 232;
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_2] [i_0] [i_1 - 3] = (max((((((((arr_11 [i_0] [i_1 - 3]) ? 115 : 2878785507))) && ((min((arr_5 [i_1] [i_2] [i_1]), 53655)))))), ((1416181802 ? (((33218 ? 1 : 32318))) : -1435459698))));
                            }
                        }
                    }
                    arr_14 [i_0] [8] |= ((((arr_4 [i_0 - 1] [i_1 - 3] [i_2 - 2]) >= (arr_4 [i_0 - 2] [i_1 - 3] [i_2 - 2]))));
                    var_21 = 130280684518038332;
                }
            }
        }
        var_22 += (((((-(~var_4)))) && ((var_14 && (var_3 || var_11)))));
        arr_15 [i_0] = (((((max(var_16, 53640))) ? (((arr_8 [i_0]) ? (-2147483647 - 1) : -30944)) : 72)));
        var_23 = ((-((var_13 ? -8271 : (((-444630766 == (arr_11 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_24 = 1416181789;
        arr_18 [i_5 - 2] [i_5] = (((938720521 ? -6462 : var_10)));
        var_25 = ((2878785499 + ((94614303 ? 1416181796 : 18446744073709551615))));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_26 -= ((var_18 % (((((6701886526182583894 ? 0 : -367285233))) ? (arr_20 [i_6]) : var_9))));
        var_27 ^= (min(((min(0, (arr_19 [i_6 + 1] [i_6 + 1])))), (max((arr_20 [i_6 + 1]), var_14))));
        arr_21 [i_6 + 1] |= ((((!(1416181796 || 59540))) && (arr_19 [i_6 + 1] [i_6 - 1])));
        var_28 = var_9;
        arr_22 [i_6] [i_6] = var_7;
    }
    #pragma endscop
}
