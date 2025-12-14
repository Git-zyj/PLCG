/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [12] |= ((~(max((arr_2 [i_0] [i_0]), -2127280834))));
        arr_4 [i_0] = (((((min((arr_0 [i_0]), (arr_0 [i_0]))))) <= (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, -19854));
                        var_19 -= (arr_9 [i_2] [i_3] [i_4]);
                    }
                }
            }
        }
        var_20 |= (arr_7 [11]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        var_21 += (min((((arr_12 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? (arr_12 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 + 2]) : (arr_12 [i_7 - 1] [i_7 + 2] [i_7 + 1] [i_7 - 1]))), ((592715410 ? (arr_12 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 1]) : (arr_12 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2])))));
                        var_22 = arr_13 [i_1] [i_5] [i_6] [12];
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_23 -= (((1 - 32023) || (var_15 * var_13)));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_24 = ((~(((arr_23 [i_8] [i_5] [i_5] [i_5]) ? (arr_23 [i_1] [i_1] [8] [i_1]) : (arr_6 [i_1] [i_1])))));
                            var_25 = (-42 != var_10);
                        }
                        var_26 = (max(var_3, (((0 ? var_12 : var_16)))));
                    }

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_27 = var_14;
                        arr_31 [i_1] [i_6] [i_1] [i_1] = (arr_28 [i_1] [i_5] [i_6] [i_1] [i_10]);
                        var_28 = (((((max((min(var_2, 223)), (arr_13 [i_1] [12] [0] [i_10]))))) | (((arr_14 [15] [i_1] [i_6] [i_10]) + (~4530288197847688612)))));
                        var_29 ^= (arr_29 [18]);
                        var_30 = ((~(((arr_17 [i_1] [i_5] [i_1]) ? (arr_26 [i_1] [i_10] [i_10] [i_10] [i_6]) : (arr_26 [i_1] [i_5] [i_6] [i_10] [i_6])))));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_35 [i_6] = var_3;
                        arr_36 [i_6] = (max((((var_9 ? ((-100 ? 0 : -111)) : var_16))), (((arr_5 [i_11]) * var_13))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_39 [i_6] = arr_20 [i_6] [i_12];

                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            arr_42 [i_6] [i_13] = var_2;
                            var_31 = (min(var_31, ((((arr_25 [i_1] [i_6] [i_12] [i_13]) ? (arr_30 [11] [i_5] [i_6] [i_12]) : var_2)))));
                            var_32 = (~((((arr_24 [i_1] [18] [i_12] [i_13]) <= -665512957))));
                            arr_43 [i_12] [i_6] [i_6] [i_12] [i_13] = var_0;
                            var_33 += (((!var_2) ? (arr_13 [i_13] [i_5] [i_6] [i_12]) : ((9511856404275474798 ? (arr_8 [i_1]) : (arr_18 [i_13] [i_5])))));
                        }
                    }
                    arr_44 [i_6] [i_5] [i_6] [i_1] = arr_37 [i_1] [i_5] [i_1] [i_6];
                }
            }
        }
        var_34 = (min(-2097356891, (((-(arr_34 [i_1]))))));
        arr_45 [15] &= ((((min((((arr_25 [i_1] [i_1] [i_1] [i_1]) | 0)), var_3))) ? (arr_33 [18] [i_1]) : (((((203 ? 1912763307 : (arr_27 [12] [i_1] [16] [1] [i_1])))) ? 12509528894514122623 : ((max((arr_33 [12] [12]), (arr_10 [i_1]))))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] [i_14] = (((130 != 1) ? (!var_6) : (arr_9 [i_14] [7] [i_14])));
        arr_51 [i_14] = ((!(arr_16 [i_14])));
    }
    var_35 = ((~((((((-5207 ? var_13 : var_9))) && ((max(2756247817353174722, 74))))))));
    #pragma endscop
}
