/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_2, (max(var_3, var_5)));
    var_11 = ((((41 / 112) ? (min(var_2, var_6)) : var_9)));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [2] = ((var_9 ^ (arr_0 [i_0])));
        var_12 = (((arr_0 [i_0]) * 1));
        arr_3 [i_0] [i_0] = ((((min(var_3, 0))) + (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 - 2])))));
        var_13 = (min(var_13, (((((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : var_3))) ^ -5693691270055542866)))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (~(max((arr_4 [i_1]), ((var_3 ? var_9 : var_4)))));
        arr_7 [i_1] [i_1] = (-96193580948981660 | var_2);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_14 = (arr_8 [i_2] [i_2]);
                    var_15 &= 1;
                    var_16 = ((((min((arr_0 [i_3]), (arr_0 [i_2])))) & var_4));
                    var_17 = (((~(1 ^ 9223372036854775806))));
                }
            }
        }
        var_18 = (((37373 ? 3416129135668337598 : (arr_14 [i_2] [i_2] [1] [1]))));
        var_19 = 1;

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_20 = ((var_1 | (arr_11 [11] [i_2] [i_5 - 1])));
            var_21 = (((var_7 && var_1) - 17043332358384195782));
            arr_17 [i_5] = ((arr_5 [i_5 - 1] [i_5 - 1]) ^ var_2);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_22 = 1;

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_22 [3] [i_2] [i_6] [i_7] = (116 - var_4);
                var_23 = (min(var_23, (((~(((arr_15 [3]) ^ -27339)))))));
                var_24 = (39805754822773225 ? var_5 : var_1);
                var_25 = (max(var_25, var_5));
                var_26 = (((arr_1 [i_2]) ? (arr_1 [i_2]) : var_8));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_25 [i_2] [i_8] = var_1;
                arr_26 [12] [i_6] [i_8] = (1 > 1403411715325355833);
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_29 [i_2] = (((((var_7 ? (arr_8 [i_2] [i_2]) : var_0))) ? 2287 : var_2));
                arr_30 [i_2] [i_2] [i_9] [13] = (((arr_11 [10] [10] [4]) || (((var_3 ? 4502476531904974067 : var_5)))));
                var_27 = var_4;
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_37 [i_2] [13] [i_10] [i_11] = 168;
                    var_28 = (1 == 8500188492413179263);
                }
                var_29 = (((arr_5 [i_2] [i_2]) * (arr_34 [i_2] [i_6] [i_6] [i_10] [i_10] [i_2])));
            }
            arr_38 [i_2] = (((arr_31 [i_2] [i_2] [i_2] [i_2]) ? (((var_6 ? var_1 : var_8))) : (-2401408772882783727 | 16)));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_41 [14] [i_12] [i_12] = (((arr_23 [i_2] [i_2] [i_2] [i_2]) && var_8));
            arr_42 [i_12] [i_2] = var_5;
            var_30 = (min(var_30, 7452836028139841543));
        }
    }
    var_31 = (!31075);
    #pragma endscop
}
