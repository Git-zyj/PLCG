/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((arr_2 [2] [i_1]) ? var_11 : (arr_4 [i_0] [5] [7])))) ? var_13 : ((~((var_1 ? var_9 : (arr_4 [i_0] [i_0] [i_0])))))));
                var_14 *= max((arr_1 [i_0 - 1] [1]), var_5);
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (arr_7 [i_2])));
        arr_9 [i_2] = 66;

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_20 [2] [2] [i_2] [i_6] [i_6] [2] [i_6] &= ((!(arr_12 [i_5 - 1] [i_5 + 2] [i_5 - 1])));
                            arr_21 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] [i_2] = (arr_16 [i_3] [i_5 + 1] [i_3] [i_5]);
                            var_16 -= var_4;
                            var_17 = (max(var_17, ((((arr_0 [i_5 + 1]) < 71)))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_5] [i_5] [i_4] [i_4] [i_3] [i_5] = (~(max((arr_14 [i_2] [i_3]), (arr_11 [i_5]))));
                            var_18 = (arr_15 [i_5] [i_5 + 1] [i_5 + 2] [i_5 - 1]);
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_19 -= ((max(65, var_12)));
                            arr_30 [i_8] [i_5] [6] [i_5] [0] = ((~((((((var_12 ? var_9 : -17))) < var_12)))));
                            arr_31 [i_8] [i_5] [i_5 - 1] [i_4] [i_5] [i_2] = (((((arr_26 [i_2] [i_8] [i_2] [0] [i_8] [i_5 + 2] [i_3]) ? (((9 << (var_9 - 923860370)))) : var_8)) ^ 3336252659246533499));
                            var_20 = (min(var_20, var_12));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_21 = ((((((((1 << (28368 - 28351)))) ? (((arr_15 [i_5] [i_3] [i_4] [i_5]) ? var_1 : 512)) : (arr_16 [i_2] [i_2] [i_2] [i_2])))) ? (((-512 | 3792944452) ? ((~(arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] [i_2]))) : (arr_15 [i_5] [i_3] [i_4] [i_5 + 1]))) : (arr_4 [i_4] [i_4] [i_4])));
                            arr_34 [i_5] [i_3] [i_4] = (max(44206, (66 && 48706)));
                        }
                        var_22 = ((!(~1414845168)));
                        var_23 += (arr_19 [i_5] [i_5] [i_5 + 2] [i_5 + 1] [i_5 - 1]);
                    }
                }
            }
            var_24 = var_3;
            var_25 = (((arr_2 [i_2] [0]) ? ((252 ? 4139281586 : 1)) : (arr_18 [i_2] [i_3] [i_3] [i_2] [i_3])));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_26 += (((((max(66, 44224))) * (arr_28 [i_2] [i_2] [i_2] [i_2] [i_10] [i_11]))));
                var_27 = (max(var_27, ((max(((((arr_7 [i_10]) == var_0))), (arr_33 [i_11] [i_11] [i_10] [8] [i_10] [i_2] [1]))))));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_41 [i_12] [i_2] [i_12] = ((((max((arr_23 [i_12] [i_12] [i_10] [i_10] [i_10] [i_12] [i_2]), (arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))) ? ((max(((-17 ? var_10 : (arr_24 [i_2] [i_10] [i_2] [i_10] [i_2] [i_12]))), ((254 ? var_1 : (arr_12 [i_12] [i_10] [i_12])))))) : var_5));
                arr_42 [i_2] [i_10] [i_10] [i_10] |= (max(200, (arr_32 [5] [5] [i_12] [i_12] [2])));
                var_28 *= (((var_2 || var_6) ? (((+((((arr_8 [i_10] [i_10]) == 24)))))) : var_8));
            }
            var_29 |= ((-((+(max((arr_29 [i_2] [i_2] [i_2] [i_2]), var_6))))));
            arr_43 [i_2] [i_2] = ((((arr_13 [i_2] [i_2] [i_2] [i_10]) ? (arr_13 [i_2] [7] [i_10] [i_10]) : 53)));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_30 = arr_45 [i_13];
        arr_47 [i_13] [i_13] = (((((((arr_33 [i_13] [i_13] [1] [2] [i_13] [i_13] [i_13]) != 8950505464649236332)))) > (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13])));
        var_31 = ((25 ? (arr_18 [i_13] [8] [i_13] [i_13] [i_13]) : (((-7803479963936043575 ? 1 : (arr_0 [i_13]))))));
        arr_48 [i_13] [i_13] = 18;
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                {
                    arr_57 [i_14] [i_15] [i_15] [5] = ((~((12535 ? 151533403 : (((21330 ? var_12 : (arr_49 [i_16]))))))));
                    arr_58 [i_14] [i_15] = var_6;
                }
            }
        }
        var_32 = (max(var_32, (((var_1 | (arr_54 [i_14] [i_14]))))));
        var_33 = max(-3802730925593050470, ((~(min(72, 4398046511103)))));
    }
    var_34 = ((!(((-((44206 ? 1 : var_12)))))));
    var_35 = (max(-var_10, ((max(var_12, var_7)))));
    #pragma endscop
}
