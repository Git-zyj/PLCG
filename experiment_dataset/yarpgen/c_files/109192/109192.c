/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, 1));
        var_14 |= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((((arr_0 [i_1] [i_1]) ? (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))) : var_2))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_16 = (((var_0 ? ((-2147483643 ? 0 : var_1)) : (arr_0 [i_1] [i_1]))));
                    var_17 = ((var_1 ? var_8 : var_9));
                    var_18 = var_2;
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((((((((arr_8 [i_1] [i_2] [i_2] [i_1]) % var_9))) ? ((0 ? var_0 : var_4)) : (1 == var_0)))) ? 3823714185 : (max((arr_2 [i_1] [i_2]), var_11)));
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = (arr_10 [i_1] [i_1] [i_4]);

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_20 = ((((!(arr_13 [i_4] [i_1])))) + (((33554431 && (((var_6 >> (var_7 - 1355518952))))))));
                arr_18 [i_1] [8] &= -631452120;
                var_21 *= (min(((206 << (arr_17 [i_1] [i_1] [i_5]))), ((var_5 ? (arr_17 [i_1] [i_1] [i_1]) : var_5))));
            }
            arr_19 [i_1] = 9223372036854775807;
            var_22 = 1613309371;
        }
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_1] [i_1] = var_7;
            var_23 = var_1;
            arr_23 [14] [i_1] [14] &= 32761;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_24 -= ((((min(var_5, var_0))) ? (var_2 | var_8) : var_8));
                var_25 = (((var_4 / var_8) ? var_0 : (((((((arr_13 [i_1] [i_1]) | 23539))) ? 471253110 : (((max(61607, 140)))))))));
            }
            var_26 = (max(var_26, (((12 ? 4213458918 : 18)))));
            arr_28 [i_1] [i_1] = -1490302655;
            var_27 -= var_6;
        }
        var_28 = (((((~((var_0 ? (arr_10 [i_1] [i_1] [i_1]) : var_1))))) ? (max((arr_13 [i_1] [i_1]), (arr_13 [i_1] [i_1]))) : var_2));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_36 [i_10] [i_10] [14] &= 77;
            var_29 -= (arr_0 [i_9] [i_10]);
            var_30 = (((((-1613309372 ? (arr_4 [i_10] [i_10] [i_10]) : var_5))) ? ((var_10 ? 1138632679526093614 : var_7)) : 187));
            arr_37 [i_10] = (((((var_2 ? (arr_12 [i_9] [i_10]) : (arr_24 [i_9])))) ? var_9 : 33554431));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        arr_42 [i_9] [i_10] [i_10] [i_11] [i_12] [i_11] = (!var_3);
                        arr_43 [i_9] [i_10] [i_11] [i_10] [i_12] [i_9] = -var_1;
                        arr_44 [i_11] [i_11] [i_10] [i_10] [i_9] [i_9] = (arr_16 [i_9] [i_9]);
                        var_31 = ((var_1 + (arr_1 [i_12])));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_47 [i_9] = (((arr_9 [i_9] [i_13] [i_13] [i_13]) ? (((arr_4 [8] [i_9] [8]) ? 1459065918 : 7822011082970151418)) : var_5));
            var_32 = ((var_3 ? var_5 : var_9));
            var_33 += ((1138632679526093614 ? (arr_17 [i_9] [i_9] [i_13]) : var_7));
        }
        var_34 = -1613435320;
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        arr_56 [i_9] [i_14] [i_15] [i_14] = ((!(((6972918896911345085 ? 1 : 0)))));
                        arr_57 [i_9] [i_14] [i_14] [i_15] [i_14] = (((((var_0 <= (arr_32 [i_9] [i_14] [i_9])))) | var_2));
                    }
                }
            }
        }
    }
    var_35 *= (((var_0 ? var_1 : ((var_2 ? var_11 : var_11)))) | var_6);
    var_36 = var_0;
    #pragma endscop
}
