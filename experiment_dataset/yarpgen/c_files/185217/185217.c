/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((1 ? -72 : var_2)), -48));
    var_14 += (max((((!(var_3 * var_12)))), var_2));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_15 = ((~((((var_9 ? var_9 : (arr_1 [i_0]))) | ((var_2 ? -111 : (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = var_11;
            arr_5 [i_0] [i_1] = ((((var_3 ? var_5 : 23)) / -23909));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_16 = ((var_4 ? (~var_9) : (arr_11 [i_4] [i_1] [i_0])));
                            var_17 = (0 + 23908);
                            var_18 = (arr_10 [i_0] [i_0] [i_0] [i_0 + 1]);
                            var_19 = ((var_7 % ((2474 ? 1 : 1))));
                        }
                    }
                }
            }
            arr_16 [i_0] = (((arr_13 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) || (arr_13 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_20 = ((var_0 ? (max((((arr_9 [i_0] [i_5] [i_0]) / 43047)), var_8)) : ((1 ? var_3 : 43047))));
            var_21 += var_9;
            arr_20 [i_0] [i_5] [i_5] = (~59);
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_7] [i_6] = var_2;
                            arr_34 [i_7] [i_6] = ((0 | (arr_23 [i_10] [i_8])));
                            var_22 = ((~((((arr_27 [i_10] [i_9] [i_8] [i_8] [i_7] [i_6]) || 0)))));
                            arr_35 [i_6] [i_7] |= (((min(1, ((-23909 ? -23918 : 2226)))) <= (~1)));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_23 |= var_9;
                            var_24 = -23911;
                            var_25 = (min(var_25, (arr_7 [i_9])));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_26 &= var_10;
                            var_27 = ((!(min((((arr_26 [i_6] [i_6] [i_6]) && var_5)), (((arr_2 [i_7]) || 24))))));
                            var_28 -= -48;
                        }
                        arr_42 [i_6] = (arr_37 [i_9] [i_9] [i_9]);
                    }
                }
            }
        }
        var_29 = (((((-(arr_28 [i_6 + 1] [i_6 + 1] [i_6] [i_6])))) ? ((-47 ? (arr_28 [i_6 + 1] [i_6] [i_6 + 1] [i_6]) : (arr_1 [i_6 + 1]))) : ((1 + (arr_1 [i_6 + 1])))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
    {
        var_30 = 80;
        var_31 = ((!(arr_3 [i_13])));
    }
    var_32 = var_2;
    #pragma endscop
}
