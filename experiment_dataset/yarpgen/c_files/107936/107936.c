/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [5] [i_1] [5] = ((var_1 || (arr_0 [i_0])));
            var_11 = (((((arr_1 [i_0]) + 2147483647)) << (((((arr_0 [i_1]) + 333179980)) - 19))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_12 = ((!(((~(arr_0 [4]))))));
                var_13 &= (arr_1 [i_2]);
            }
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                arr_11 [i_1] [i_1] [i_1] = (5821835207267388369 != var_7);
                arr_12 [i_1] [i_1] = (arr_5 [i_3 - 1] [i_3 + 2] [9]);
            }
        }
        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            var_14 = (max(var_14, ((((((arr_14 [i_4 + 2]) + 9223372036854775807)) << (((arr_15 [i_4 - 1]) - 253339021)))))));
            var_15 = var_6;
            arr_17 [i_0] = (arr_2 [i_4]);
            arr_18 [i_0] [i_4 + 4] = var_4;
            arr_19 [10] = (var_7 ? 133 : 127);
        }
        arr_20 [i_0] [i_0] = (~(arr_6 [i_0] [i_0]));
        var_16 += 1735184187;
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        var_17 = (min((min((arr_23 [i_5] [i_5 - 1]), (((arr_24 [i_5 + 1]) ? (arr_29 [i_5] [i_7] [i_7]) : -3407404041033946665)))), ((min(-103, 207)))));
                        var_18 = (max(var_18, (arr_25 [i_6])));
                        var_19 = (5572449581384219109 % 19270);
                        var_20 = ((((min((arr_27 [i_8 + 4] [i_8 - 1]), (arr_27 [i_8 - 1] [i_8 - 2])))) == (arr_28 [i_8 - 1] [i_8 - 1] [i_8])));
                    }
                }
            }
        }
        arr_33 [12] [12] &= (((arr_23 [18] [i_5 + 1]) ? (arr_23 [8] [i_5]) : (((arr_23 [8] [8]) * var_5))));
        var_21 = ((!((min(129, 94)))));
        var_22 -= ((!((((!15) ? ((-5572449581384219110 ? (arr_32 [i_5 + 1]) : var_2)) : (!var_0))))));
        var_23 = 0;
    }
    var_24 = var_9;
    var_25 = (min(var_25, var_2));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                var_26 ^= ((max((arr_34 [i_9 - 1]), (min(var_5, var_2)))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_27 = (max(var_27, ((min((-127 - 1), 3349067899825522388)))));
                            var_28 -= (min((arr_37 [i_9 + 2]), (min(30720, 125131427))));
                        }
                    }
                }
                var_29 = (((arr_37 [i_10]) ? (max(var_5, (max((arr_45 [i_10] [i_9]), 2043678745)))) : (((var_0 < (((arr_37 [i_9]) ? 5572449581384219109 : var_8)))))));
            }
        }
    }
    var_30 ^= var_6;
    #pragma endscop
}
