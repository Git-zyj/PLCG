/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((((8 ? -126 : 126))) ? var_8 : (-1 && 126)));
        arr_3 [i_0] = (~var_0);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (min(((-(max(18446744073709551608, 110)))), -var_10));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = (min(var_18, (((~(((arr_1 [i_1]) ? (arr_0 [i_1]) : 14284511454386596220)))))));
            arr_9 [i_1] [21] = -121;
            arr_10 [i_1 + 1] [18] [i_1 + 1] = (((arr_8 [i_1 - 1]) ^ (arr_8 [i_1 + 1])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_3] [i_3] = ((((((~(arr_7 [i_1]))) + 2147483647)) >> (((arr_0 [i_1 - 2]) ^ (arr_0 [i_1 + 2])))));
            arr_14 [i_3] = (arr_2 [i_1]);
            var_19 = (max(var_19, ((min(((~((~(arr_12 [i_1] [i_1]))))), (min(120, 1)))))));
            var_20 &= ((((((-(arr_12 [i_1] [i_3])))) ? (30407 + -1268363898) : ((120 ? 114 : 1644445456)))) - ((17999457720181384749 ? ((125 ? var_0 : (arr_12 [i_1] [i_3]))) : (arr_2 [i_1 + 1]))));
            var_21 ^= (((min(((var_9 ? var_15 : 111471615)), (arr_5 [i_1 + 2] [i_1 - 1])))) ? (arr_8 [i_1]) : (max((((var_9 && (arr_4 [i_1])))), (arr_2 [i_1]))));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 += (((((-(arr_16 [6] [i_4])) / (arr_16 [7] [7])))));
        var_23 = (!(--1644445457));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 &= (max(59489, 447286353528166867));
            arr_22 [i_5] = var_3;
            arr_23 [i_5] = ((((!((((arr_15 [i_5] [i_4]) ? 85 : var_14))))) ? (arr_19 [i_4] [i_5]) : (((((((arr_21 [i_5]) / var_13))) ? (-87 / -121855249) : (((arr_20 [i_4]) ? (arr_18 [i_5] [i_5]) : 0)))))));
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            var_25 *= ((((var_15 ? (((min((arr_24 [i_4] [i_4] [i_6]), var_0)))) : ((var_6 ? (arr_21 [i_4]) : var_8)))) != (673306201 ^ 2534783207804149860)));
            arr_27 [22] [i_6] [i_4] = ((18446744073709551614 ? (--749094893195813220) : (arr_19 [i_4] [i_6])));
        }
        var_26 = 59491;
    }
    var_27 = (((var_4 ? var_14 : var_6)) / ((((((14425288753582469907 ? var_4 : var_14))) ? ((var_2 ? var_4 : var_7)) : var_2))));
    var_28 = (-2147483647 - 1);
    #pragma endscop
}
