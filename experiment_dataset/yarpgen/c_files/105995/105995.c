/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = min(((max((arr_1 [i_0]), var_2))), (((max(20, var_5)))));
        arr_2 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= var_11;
        var_18 |= (((arr_3 [i_1] [i_1]) / (arr_3 [i_1] [i_1])));
        var_19 = -8837231246895363176;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [12] |= (((arr_7 [i_2] [i_2]) & (arr_7 [i_2] [i_2])));
        var_20 = (1 >= var_9);
        var_21 |= ((var_4 ? var_13 : var_11));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_22 = ((15267936976004068153 ? (((arr_4 [i_3]) ? ((1 ? var_7 : var_5)) : var_5)) : ((max((var_1 || var_1), var_0)))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                arr_17 [i_4] [i_4] |= ((255 ? var_15 : var_3));
                var_23 = ((168 ? 9223371968135299072 : 1));
                var_24 = ((var_10 ? var_2 : (arr_14 [i_3] [i_5 - 1] [i_3])));
            }
            var_25 = (arr_10 [i_3]);
            var_26 = ((((((-9223372036854775807 - 1) ? 15267936976004068160 : var_1))) ? 1 : var_10));
            var_27 = ((var_12 ? (arr_7 [i_3] [14]) : ((89 ? var_10 : var_15))));
            var_28 = (((((25242 ? (arr_15 [i_3] [i_3] [i_4] [i_4]) : 8191))) | 551254485));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_20 [i_3] [i_6] = (min((!13), (max(57540, (arr_11 [i_3] [i_3])))));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_29 [i_3] = (min(((-2146 == (4 < var_8))), 1));
                            var_29 = ((var_3 ? ((((var_6 || (var_11 * var_5))))) : (((((-9223371968135299068 ? 361551686 : var_11))) ? (((max(208, var_7)))) : (arr_24 [i_3] [i_6] [1] [i_7])))));
                        }
                    }
                }
                arr_30 [i_3] = (max((max((((arr_14 [i_3] [i_6] [i_3]) / 4187848816636353369)), ((var_3 ? 17663357100496015377 : var_2)))), ((((7 ? var_8 : -9223371968135299073))))));
            }
            var_30 = (max(var_30, (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
            var_31 = (max((((((43687 ? var_2 : var_9))) ? (max(var_1, var_15)) : -2150286458465397722)), ((max(var_2, 0)))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_36 [i_3] [i_3] [13] [i_3] = ((!(((((max(159, 14258895257073198263))) ? var_7 : 46245133)))));

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_32 = (max(var_32, (arr_18 [i_3] [2])));
                            arr_39 [i_3] = ((((var_14 % var_10) ? (arr_26 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10] [i_10]) : (min((arr_34 [3] [14] [i_10 + 1] [1] [3]), var_9)))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            arr_43 [i_3] = (max(((57337 ? 88 : var_5)), (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3])));
            arr_44 [i_13] &= (min(((!(~44))), ((-82 > (var_6 == 21)))));
        }
    }
    var_33 = (min(var_33, ((((((((var_15 ? 4294967287 : -1119543880)) & var_15))) ? ((195 ? (max(15325174148899036228, 9223372036854775781)) : (min(113, var_6)))) : (((((4149251008971879192 ? var_1 : var_1)) / (3710183007 * 120)))))))));
    #pragma endscop
}
