/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = (min((((!(arr_0 [i_0 + 2])))), (((!(arr_1 [i_0]))))));
        arr_2 [i_0] |= (((((((min(var_4, var_5))) | (arr_0 [i_0])))) || ((((!var_11) ? var_7 : ((-7 ? var_3 : 110)))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_17 = (arr_9 [i_2] [i_1] [16]);
                var_18 -= (max(((((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2]) >= (var_7 / var_6)))), ((((~(arr_4 [i_0 - 1] [i_1]))) * (-120 > var_2)))));

                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_19 = (-33554432 ? (arr_9 [i_3 + 2] [i_0 + 2] [i_2]) : (((arr_7 [i_0 + 2] [i_1]) ? ((var_1 ? var_1 : var_15)) : (65523 || var_7))));
                    arr_15 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_0 + 1] = (((((var_8 & var_0) ? (arr_5 [i_0 + 2] [i_1]) : (arr_6 [i_0] [i_1] [i_2]))) ^ (max((arr_0 [i_0]), ((var_6 - (arr_4 [i_0] [i_2])))))));
                    arr_16 [1] [4] = (-(-var_11 >= -111));
                    var_20 = 82;
                    arr_17 [3] [16] [i_1] [i_0] = min((((var_2 >= 1) ? (var_1 / var_6) : (((max(var_12, (arr_4 [4] [i_1]))))))), ((((arr_3 [i_3 - 1] [i_1] [i_2]) / (((arr_8 [i_0 + 2] [i_2]) ^ var_13))))));
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_23 [1] [i_4] [i_2] [i_5] [1] [i_5 + 2] = (arr_5 [i_1] [i_0 - 1]);
                        var_21 = (((arr_0 [i_4 - 1]) ? ((-var_11 & (!var_13))) : (((var_0 ^ (arr_10 [i_0 + 2]))))));
                        var_22 = var_8;
                        var_23 = (max(var_23, var_15));
                    }
                    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_4] = -var_5;
                        var_24 = (min(var_24, var_8));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_31 [5] [i_4] = (((var_1 >= var_7) >= (arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_0 - 1])));
                        arr_32 [9] [i_4] = ((9223372036854775807 ? -var_7 : var_6));
                        var_25 = ((!(arr_14 [i_1])));
                    }
                    var_26 = (min((max(var_7, (arr_9 [i_0 + 2] [i_1] [i_2]))), ((max(var_0, (arr_28 [i_0 + 1] [i_2] [i_4] [i_1] [i_4]))))));
                }
                for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, (((((((max((arr_14 [i_0]), (arr_10 [i_8])))) && var_11)) ? ((min((-7 >= 1), -var_5))) : (max((!1076752853), (arr_13 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))))));
                    arr_35 [i_0] [i_8] [i_2] [1] = ((-(((min(var_5, var_0))))));
                }
                var_28 = (((((-((var_4 ? 38 : (arr_25 [i_0] [i_0] [i_2] [i_0] [i_1])))))) || ((min(((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (((arr_3 [i_0] [i_1] [i_2]) - 105076921))))), (((arr_20 [i_0 + 2] [9]) % var_11)))))));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {
                var_29 = (((min((var_11 % 38), -563499663)) * (((var_6 || 38) ? (0 & 426051039) : var_11))));
                var_30 = (((((((var_9 ? var_12 : var_3)) * (((min(var_9, var_15))))))) ? (min(var_9, var_3)) : 1));
            }
            arr_38 [0] [i_0] [i_0] = var_2;
        }

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    {
                        var_31 = (max(((((arr_39 [i_0 - 1] [i_11 + 1]) >= var_15))), (arr_14 [i_11 - 1])));
                        var_32 *= var_12;
                    }
                }
            }
            var_33 &= (max((arr_4 [i_0 + 2] [i_0 - 1]), (((2147483647 && (65523 / 20794))))));
        }
    }
    var_34 = var_5;
    #pragma endscop
}
