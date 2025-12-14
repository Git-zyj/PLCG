/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_8, ((((max(var_10, var_0))) + -var_6)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = min(((~((var_7 ? var_5 : var_11)))), var_2);

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
            {
                var_14 *= ((!(max((!var_7), var_8))));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_15 = (min(var_15, var_2));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_16 = var_4;
                        var_17 = var_5;
                        var_18 = (min((min((max(var_0, var_7)), ((max(var_2, var_3))))), ((((max(var_1, var_6))) ? var_4 : ((var_7 ? var_9 : var_11))))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_19 |= (var_6 * var_4);
                        var_20 = (((((((var_10 ? var_4 : var_1))) && ((max(40, 215))))) && (min((var_9 || var_8), var_6))));
                        var_21 = ((((min(var_0, var_2))) <= var_3));
                        arr_16 [i_0] [i_1] [i_1] [7] [i_5 + 1] [i_0] = (min(var_10, ((var_4 / ((var_3 ? var_3 : var_1))))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_22 = ((max(-var_5, var_1)) - ((-((min(var_9, var_5))))));
                        var_23 = (((((var_5 ? ((var_9 ? var_4 : var_2)) : (var_2 + var_0)))) ? (((((min(var_4, var_8))) && (var_0 && var_8)))) : (((var_2 != var_0) ? var_6 : ((var_7 ? var_10 : var_7))))));
                        var_24 = ((!((max((var_6 + var_5), (var_8 + var_9))))));
                    }
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        var_25 *= (min(var_7, var_9));
                        var_26 ^= ((((max(var_10, var_4))) ^ ((-((var_2 ? var_4 : var_10))))));
                    }
                    var_27 = (min(var_27, var_9));
                    var_28 = (max(var_28, ((max(-var_11, ((~((max(var_1, var_5))))))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_29 = (min(var_29, var_6));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = var_7;
                    var_30 = (max(var_30, (((var_7 ? var_1 : var_7)))));
                }
                var_31 *= var_6;
            }
            /* vectorizable */
            for (int i_9 = 4; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_32 *= (var_7 ? var_0 : var_0);
                var_33 -= (((((var_0 ? var_0 : var_4))) ? (var_0 > var_3) : ((var_4 ? var_3 : var_4))));
                var_34 = (var_9 - var_6);
                arr_27 [i_0] [i_0] [i_9] = (var_5 == var_1);
                var_35 = var_7;
            }
            var_36 = var_5;
            var_37 = (min(((var_7 ? var_10 : var_10)), (max((var_1 / var_9), ((min(var_8, var_9)))))));
            var_38 = ((((max(var_1, var_10))) ? (min(var_7, var_8)) : var_10));
            var_39 = (~var_0);
        }
        for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_0] = (min((((!((max(var_0, var_3)))))), ((var_1 ? (((var_4 + 2147483647) >> (var_4 + 1176))) : ((var_11 ? var_2 : var_0))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_40 = (max(var_40, (((!((min(var_3, (var_8 % var_6)))))))));
                        var_41 = (min((max((var_0 - var_7), (var_7 - var_5))), (((!((max(var_2, var_8))))))));
                    }
                }
            }
        }
        var_42 = ((((min(var_1, var_8))) | ((min(var_3, var_6)))));
    }
    for (int i_13 = 1; i_13 < 14;i_13 += 1)
    {
        var_43 = (max(var_7, (!var_2)));
        arr_38 [i_13 + 3] = (((!var_11) < var_0));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_44 = (((max((var_0 * var_4), ((var_9 ? var_3 : var_0)))) <= var_0));
        arr_43 [i_14] [i_14] = (max((max(204, ((234 ? 1 : 33526)))), (min(var_7, ((var_2 ? var_5 : var_9))))));
    }
    var_45 = var_7;
    var_46 = (((var_3 ? ((min(var_9, var_1)) : var_4))));
    #pragma endscop
}
