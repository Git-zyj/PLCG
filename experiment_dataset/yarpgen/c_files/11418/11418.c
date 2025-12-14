/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0] [i_0 - 1]) ? 10382642 : 57868))) ? var_4 : ((max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0 + 1]))))));
        arr_3 [i_0] = (!18630);
        var_13 = var_0;
        arr_4 [i_0 + 1] [i_0 - 1] = (((var_6 ? (arr_1 [i_0 - 1] [i_0 - 1]) : ((var_6 ? 217 : 49)))) + (max(var_11, (arr_0 [i_0 + 1] [i_0 - 1]))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] = ((var_4 ? var_3 : 46905));

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_14 = ((~((203 ? -805472004 : 189))));
                            arr_17 [i_2] [i_3 - 1] [i_1] [i_2] = (((((var_2 ? ((min(18, var_0))) : (!var_4)))) ? (((((var_7 ? 23 : -14))) ? var_6 : var_4)) : (~var_5)));
                            var_15 = var_6;
                        }
                    }
                }
            }
            arr_18 [i_2] = var_0;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_23 [i_1] [i_6] [i_7] = (min((((var_9 ? 1838163963334172086 : 18633))), ((~(var_11 + var_3)))));
                arr_24 [i_7] [i_6] [i_1] [i_7] = (46903 % 637590960322509866);
                var_16 = ((-(arr_16 [i_1 - 1] [i_1 - 1] [i_6] [i_7] [i_7])));
                arr_25 [i_1 + 1] [i_1 + 2] [i_7] [i_7 - 1] = (((((arr_2 [13] [13]) ? (~var_0) : ((805471992 ? -1 : 135)))) <= (185 % -398947707)));
            }
            var_17 = (!18638);

            /* vectorizable */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_18 = 1;
                arr_29 [i_1 - 1] [i_1 - 1] [i_8] = (((arr_19 [i_1 + 1] [i_1 + 2] [i_1 + 1]) <= var_5));
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_19 -= ((((((arr_5 [i_1 + 2]) ? var_5 : (arr_5 [i_1 + 2])))) != ((var_5 ? (46902 * 18446744073709551615) : var_6))));
                arr_32 [i_1] [i_6] [i_9] [i_9] = (arr_22 [i_1] [i_1] [i_6] [i_9]);
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_20 = (((((-(((arr_14 [i_1 + 2] [i_10] [3] [3] [i_1 + 2]) ? (arr_10 [i_1] [0]) : -10014))))) - ((-(min((arr_6 [i_1]), var_6))))));
            arr_36 [i_1 + 1] = ((~((((var_10 ? var_8 : var_4))))));
            arr_37 [i_1] [i_10] [i_1] = (max(((-(var_2 / var_11))), (((~var_11) ? ((var_8 ? 255 : (arr_14 [5] [i_10] [5] [i_10] [i_10]))) : ((var_4 << (var_0 - 7330)))))));
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_21 = var_4;
            var_22 = ((((~(arr_33 [i_1 + 2])))) ? (((((var_2 ? var_10 : (arr_12 [i_1 + 2] [i_1] [i_11 + 1] [i_1]))) | ((-19 ? var_5 : var_5))))) : var_8);
        }

        for (int i_12 = 2; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_23 = (((((min(var_3, 165)) & ((min((arr_9 [i_12]), (arr_14 [i_1] [5] [i_1] [i_1] [i_1])))))) < 204));
            var_24 = ((18638 ? var_3 : ((65535 ? (((~(arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_12])))) : var_3))));
            var_25 = 1;
        }
        for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_26 = (((arr_28 [i_1 - 1] [i_1] [3] [i_13 + 1]) != (((((4833573844981568457 ? var_11 : 46902))) ? (20054 || var_4) : (var_4 != 16608580110375379529)))));
            var_27 = (max(var_27, 118));
            var_28 = (((min(919761554, var_2)) + (((var_2 || (arr_26 [i_1] [i_1 + 2] [i_1 - 1] [i_13 - 2]))))));
        }
        var_29 *= (max(-47, ((((((arr_5 [i_1 - 1]) ? var_0 : var_3))) ? (arr_33 [i_1 + 2]) : (((max((arr_38 [i_1 + 1]), var_4))))))));
        var_30 &= ((-(min(1, (arr_6 [i_1 - 1])))));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    arr_58 [i_14] [i_15] = (!var_8);
                    arr_59 [i_15] [2] = (var_8 - var_4);
                }
            }
        }
        arr_60 [i_14] [1] = (((((var_0 ? 65535 : var_3))) ? 1123228769 : (arr_11 [i_14])));
        arr_61 [i_14] = ((~(57131 && 8597304913539417289)));
        var_31 = (arr_16 [i_14] [i_14] [i_14 - 1] [0] [i_14 + 2]);
    }
    var_32 = var_11;
    var_33 = (min(-var_2, var_10));

    for (int i_17 = 1; i_17 < 12;i_17 += 1)
    {
        arr_64 [i_17 + 1] = ((+(((var_1 ? (arr_13 [i_17 + 1] [0]) : (arr_54 [10] [i_17 + 1] [10]))))));
        var_34 -= (max(((var_10 ? -var_1 : (arr_15 [i_17 + 1] [6] [i_17 - 1]))), (((!(((51044 ? var_3 : 8597304913539417288))))))));
    }
    #pragma endscop
}
