/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!var_16);
        arr_5 [i_0] [i_0] = ((((((arr_0 [14]) ? var_7 : var_13))) ? var_9 : var_11));

        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] &= (~8);
            arr_9 [i_1] = var_15;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_17 = var_7;
            arr_13 [i_0] [i_2] [i_2] = var_10;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_19 [i_2 - 1] [i_0] |= var_13;
                        var_18 = (((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_18 [i_2 + 2] [i_3] [i_3]) : 51));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                arr_22 [i_0] [10] [i_5] |= 0;
                arr_23 [i_0] [i_2] [i_0] [i_5] = ((((-51 > (arr_14 [i_5] [0] [i_0]))) ? ((((arr_0 [i_2]) == var_15))) : ((var_13 ? var_7 : var_5))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_19 = (((var_6 ? 152 : (arr_7 [i_0] [i_2 + 2] [i_6]))));
                var_20 = (arr_3 [i_2 + 1]);
                var_21 = ((-244 <= (((arr_3 [i_0]) ? (arr_10 [i_0]) : var_6))));
            }
            var_22 = (max(var_22, (arr_10 [i_0])));
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_23 = (~var_14);
            arr_28 [i_7] &= var_14;
            var_24 = ((-51 ? (arr_17 [i_7 - 1]) : var_11));
            var_25 = (103 || var_3);
            arr_29 [1] = (arr_6 [i_0] [i_0] [i_7]);
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_26 &= ((-1948498770 ? ((var_8 << (((((arr_30 [i_8]) + 69)) - 33)))) : 1));
        var_27 = (max(var_27, ((((~var_3) ? var_13 : 1948498769)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_9] [i_8] = (1948498754 && var_14);
                        arr_40 [i_8] [i_9] [i_10] [i_11] = (arr_36 [i_8] [i_9] [i_10] [i_11]);

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_44 [i_12] [i_11] [i_10] [i_8] [i_8] &= ((((arr_42 [i_8]) ? -21428 : 218)));
                            var_28 &= (((arr_33 [i_10]) ? (arr_33 [i_12]) : (arr_31 [i_11])));
                            var_29 = ((~(arr_42 [i_11])));
                            var_30 = (max(var_30, (arr_37 [i_8] [i_8] [i_8])));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_31 = (min(var_31, var_5));
                            var_32 = (min(var_32, 241));
                            var_33 = ((var_12 ? (922027197 > var_6) : (arr_34 [i_8])));
                            var_34 |= (arr_37 [i_13] [i_11] [i_10]);
                        }
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        var_35 = var_3;
                        arr_51 [i_8] [i_9] [i_9] [i_9] [i_14] |= var_3;
                        arr_52 [i_14] [i_14] [i_10] &= ((var_6 ? var_15 : (arr_34 [i_14])));
                    }
                    var_36 = var_6;
                    var_37 = var_16;
                }
            }
        }
        arr_53 [i_8] = (((0 - 1) ? var_11 : ((-1948498770 ? 10425450602809821473 : var_15))));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                {
                    arr_59 [i_16] [i_8] = (((-1948498774 != 4153611148) | (((arr_31 [i_8]) | var_11))));
                    var_38 = ((var_15 > (var_16 / var_1)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        var_39 |= (arr_61 [i_17]);
        var_40 = var_11;
    }
    var_41 = (min(var_41, ((((var_4 ? ((var_3 ? var_1 : var_5)) : (~198)))))));
    var_42 = ((-68 ? 1 : -13));
    var_43 = -3372940093;
    #pragma endscop
}
