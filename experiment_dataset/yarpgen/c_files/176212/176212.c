/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((arr_1 [i_0] [i_0]) * 109);
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        var_13 = -var_2;
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1 + 2] [i_1] = var_7;
        arr_8 [2] = (arr_6 [15]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_14 *= ((3907034483 >> (32809 - 32807)));
            var_15 = ((((((arr_13 [i_3]) ? (arr_4 [14]) : var_1))) ? (arr_0 [i_2]) : 32832));
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_16 = var_6;
            arr_16 [i_2] [i_2] [i_4] = (((arr_15 [i_2] [i_4 + 2] [i_4]) ^ var_4));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_17 = (arr_5 [i_2]);
                            arr_23 [i_2] [i_4] [6] [0] [i_6] [i_5] [i_7] |= arr_22 [1] [i_4 + 1] [i_4] [7] [i_4] [1] [i_4];
                            var_18 -= (1561929433 % 86);
                            var_19 = (min(var_19, ((((arr_9 [i_2] [i_4 + 2]) ^ (arr_9 [i_2] [i_4 + 3]))))));
                            arr_24 [i_6] [i_6 + 1] [i_5] [i_4] [i_6] = (arr_10 [i_4 - 1]);
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {
                var_20 -= (((((var_1 ? var_5 : (arr_15 [i_9] [i_8] [i_2])))) ? (((var_6 < (arr_0 [i_9])))) : (((arr_14 [i_2]) ? (arr_0 [i_9]) : (arr_29 [6] [i_8] [0] [1])))));
                var_21 = ((~((var_5 ? (arr_0 [i_2]) : 387932812))));
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
            {
                var_22 |= (arr_25 [i_2] [i_10]);
                arr_32 [5] [i_10] [4] [5] |= ((13 ? -1098693974839601528 : (arr_19 [i_8 + 3] [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_10])));
                var_23 = (max(var_23, (((((-4647585622017576953 ? var_5 : var_8)) / -1561929412)))));
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
            {
                var_24 = var_6;
                var_25 = 27803;
                arr_35 [i_11] [i_11] [i_8] [i_2] = (~3754011896);
                arr_36 [i_11] [5] [i_8 + 2] [i_2] = ((~(arr_4 [i_2])));
            }
            arr_37 [i_2] [1] = (((var_0 < var_9) | (((-1098693974839601525 && (arr_33 [i_8] [i_8 - 1] [i_2]))))));
        }
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        var_26 += 42750;
                        var_27 = (min(var_27, (~var_3)));
                        arr_45 [i_2] [i_12 - 1] [i_12 - 2] [5] [i_13] |= (!var_3);
                    }
                }
            }
        }
    }
    var_28 = (var_6 >= 248);
    #pragma endscop
}
