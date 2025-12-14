/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = ((!-4710252146434203432) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)) : 130);
        var_21 = -1;
        var_22 = ((-1 ? 23360 : (var_18 % var_17)));
        var_23 = ((22496 ? (var_9 > 1728076776) : ((255 ? var_18 : var_6))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_24 = var_1;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_25 -= ((36028797018963968 ? ((var_1 ? 34310 : 2552232882)) : (((2666805280 ? (arr_7 [6] [6] [i_2]) : (arr_7 [20] [i_2] [i_2]))))));
            var_26 = (max(var_26, ((((~var_7) ? -var_7 : -var_8)))));
            var_27 = (max(var_27, ((((arr_1 [2]) ? var_16 : (arr_1 [10]))))));
        }
        var_28 = -59;
        arr_10 [i_1] = var_13;
        var_29 = (max(var_29, 48));
    }
    var_30 = ((var_12 > ((10352 ? -var_18 : (((var_12 ? var_1 : 51301)))))));

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = var_5;
        var_31 = (((min(-var_14, (arr_13 [i_3] [i_3]))) / (((max(2147483647, 63285)) >> ((((~(arr_13 [i_3] [i_3]))) + 13406))))));
        var_32 = (min(var_32, (arr_12 [i_3] [i_3])));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_21 [i_4] = (((0 / 171206443) < ((var_12 ? 35408 : var_7))));
            var_33 = (var_11 & 255);
        }
        var_34 = max(var_17, ((-((125745185 ? (arr_18 [i_4 + 2] [i_4 + 2]) : var_18)))));
    }
    #pragma endscop
}
