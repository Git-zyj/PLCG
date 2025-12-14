/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = ((+((((arr_12 [i_0] [i_2] [i_2] [i_3]) <= var_2)))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 1] = (((((((!(arr_12 [i_0] [i_2] [7] [i_3 - 2])))))) ? (((!(((var_8 ? (arr_6 [i_2] [i_3]) : (arr_1 [i_1] [i_3]))))))) : ((~(arr_11 [i_2] [10] [i_2])))));
                            var_19 = var_6;
                            var_20 = (11 ? (min(((min(var_6, 63))), (arr_14 [i_0] [i_0] [i_0]))) : ((((min(var_9, 31))) ? (((arr_1 [i_0] [i_2]) ? -63 : (arr_5 [i_0]))) : (((var_5 + 2147483647) >> (((arr_10 [i_2] [i_2]) - 39)))))));
                        }
                    }
                }
                arr_16 [i_0] [i_1] = max(var_6, ((((((63 ? -47 : -1382525435))) == ((var_15 / (arr_10 [2] [i_0])))))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        arr_21 [i_4] = (((((~((~(arr_20 [18] [i_4 + 1])))))) ? (min((arr_17 [21]), (18446744073709551585 & var_2))) : ((((!((((arr_20 [i_4 + 2] [i_4]) ? var_13 : var_6)))))))));
        var_21 = ((1 < (-9223372036854775807 - 1)));
        var_22 = (arr_20 [i_4] [i_4]);
        var_23 = (min(18446744073709551584, ((((~var_7) & ((var_10 ? var_17 : var_0)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_24 = var_12;
        var_25 ^= var_15;
        var_26 = (((arr_22 [i_5] [i_5]) + (((!(arr_17 [i_5]))))));
        arr_25 [i_5] [i_5] = (!1);
        arr_26 [i_5] = ((-(((!(arr_18 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = (arr_24 [1] [i_6]);
        var_28 = (arr_9 [i_6] [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_29 = ((!12) ? (max(((max((arr_7 [4]), (arr_1 [i_6] [i_7])))), (var_12 | var_9))) : 1);
                    var_30 = (max(var_30, (arr_5 [i_6])));
                }
            }
        }
        arr_35 [i_6] = ((-(max(((min(var_1, -4456))), (var_13 >> var_8)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_31 = 29;
                    arr_43 [i_6] [i_6] [i_6] [i_6] = ((((((max((arr_36 [4]), var_17))) ? (var_11 - -2554153429243475487) : (arr_20 [i_6] [i_9]))) - (((((max((arr_31 [i_6] [i_9] [i_6] [0]), -1))) % ((~(arr_22 [i_6] [i_6]))))))));
                    arr_44 [i_6] [i_9] [10] = var_5;
                    var_32 = ((((((max(var_9, var_9))) ? (max((arr_30 [i_6] [9] [i_6]), 18446744073709551598)) : (arr_31 [0] [i_9] [i_6] [i_10]))) - (arr_19 [i_6] [i_10])));
                }
            }
        }
    }
    var_33 = (max((max(((var_10 ? var_0 : var_10)), ((-1 ? var_9 : var_13)))), var_7));
    var_34 = (min((var_6 < var_2), (min(var_3, (((var_6 ? var_8 : var_10)))))));
    var_35 = ((((max(-6638800383327535870, var_16))) >> ((var_8 + (var_8 % var_4)))));
    #pragma endscop
}
