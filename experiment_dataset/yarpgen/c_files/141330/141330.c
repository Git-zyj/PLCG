/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min((min(0, (max((arr_1 [i_0]), -6245799586890067074)))), (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = (((arr_6 [i_0] [i_1] [i_1] [i_3]) / (((25304 ? (arr_7 [i_3] [i_2] [6] [i_0]) : (arr_5 [i_0] [i_2 + 2] [i_0]))))));
                        var_14 = ((~(arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2])));
                        arr_11 [i_1] [i_1] [i_2] [i_2] [i_3] [6] = 6326970411725028236;
                        var_15 = 20107;
                    }
                }
            }
            var_16 |= (arr_0 [i_1]);
            var_17 = (arr_4 [15]);
        }
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            arr_14 [i_0] [i_0] [i_4] = var_10;
            arr_15 [i_4] = ((arr_0 [i_4 - 1]) ? -var_11 : (arr_0 [i_4 - 3]));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_18 = 8;
            var_19 = 4294967294;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (arr_19 [i_0] [i_6])));
            arr_20 [12] [i_0] = (min((((arr_8 [i_6] [14] [i_0] [i_0]) ? (27632 <= 402825020) : -1954659275)), (((25304 <= ((((arr_13 [i_0] [i_0] [i_0]) >= -27633))))))));
        }
        arr_21 [14] [14] = (((arr_16 [i_0]) > ((-((4753183862898403672 ? 7184855426626224394 : 17979391757908276821))))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_7] = (((!4) > ((var_9 ? var_13 : (((arr_12 [i_7] [i_7]) ? var_0 : 1954659267))))));
            var_21 += (arr_8 [i_0] [i_0] [i_0] [0]);

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_22 = (max(var_22, (((((26020 | (var_10 / 1148562396))) | -5533181430465658853)))));
                var_23 = (max(var_23, (((~(max(357422320, -11919558154277507759)))))));
            }
            var_24 += (((((max(-23155, var_9))) ? ((var_9 ? 402825034 : var_13)) : 95)));
        }
        var_25 = 10181;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        var_26 ^= ((+(((arr_33 [i_11] [i_10 + 1]) / -95))));
                        arr_39 [i_9] [3] = (((max(3162323096, (arr_9 [12] [i_10] [i_11] [i_10])))) ? (((((arr_27 [i_9] [i_10] [i_12]) >> (((arr_26 [i_9] [i_9]) - 76)))) >> (var_8 + 1280029542))) : ((((((13012347374358072215 ? -27622 : 13693560210811147944)) >= (max(var_11, (arr_18 [i_9] [i_9] [i_9]))))))));
                        arr_40 [i_9] [i_10 - 3] [i_9] [i_11] [i_12] [i_12] = (((var_6 ? (arr_25 [i_9] [15] [i_9]) : 43)));
                    }
                }
            }
        }
        arr_41 [i_9] = (((arr_38 [i_9] [i_9] [i_9] [i_9]) ? (((!(((1012685022 ? 67 : 1)))))) : (arr_12 [i_9] [i_9])));
        var_27 = 19486;
    }
    var_28 = var_9;
    #pragma endscop
}
