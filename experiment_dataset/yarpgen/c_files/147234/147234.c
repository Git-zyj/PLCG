/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 = (min((max(18, (arr_4 [i_0 - 1]))), (((!(arr_13 [i_0] [i_1] [i_0]))))));
                        var_18 |= (arr_8 [i_3] [i_2] [i_1] [i_0]);
                    }
                }
            }
        }
        arr_14 [i_0] = var_3;
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((arr_16 [i_4 - 1]) ? (min(-2809578321429709088, var_7)) : (arr_20 [i_5] [12] [i_6] [6]))) < (arr_22 [3] [i_5] [0]))))));

                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_20 = (max(var_20, (((((-(min(var_13, 2809578321429709088)))) << ((((max(18660, -11))) ? (828826658 < 1) : (arr_19 [i_4 - 3] [i_5] [i_6]))))))));
                        var_21 = (max(var_21, ((max((((((arr_18 [i_4 - 1]) ? (arr_22 [i_4 - 2] [i_4] [i_4 - 2]) : 18446744073709551611)))), var_10)))));
                        var_22 = (-(((20 * var_14) ? (!2809578321429709076) : 621132913253253163)));
                        var_23 = ((((max((~var_13), (((28 / (arr_21 [i_6] [i_5]))))))) ? ((((68 ? 18446744073709551614 : (arr_19 [6] [i_5] [i_4 - 2]))) + ((((!(arr_23 [i_4] [10] [i_6] [i_7]))))))) : (((((arr_23 [i_7] [1] [i_7 - 2] [i_7]) && var_2))))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_24 = 17825611160456298453;
                        arr_28 [i_4] [i_6] [i_5] [i_6] [5] [11] = (((var_15 ? (arr_24 [i_6] [1] [i_6]) : (arr_24 [i_6] [i_4] [i_6]))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_25 = (+((5 ? (arr_27 [i_4] [i_6] [i_6]) : 1)));
                        var_26 = (max(var_26, (~15421788935848003201)));
                        var_27 = -var_16;
                        var_28 = var_0;
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_29 += (max(((((var_15 / (arr_34 [i_4 - 1] [i_5] [10] [i_6] [i_6] [10]))) / 111)), (+-72)));
                        arr_36 [i_6] [0] [i_6] = (((-(((!(arr_29 [i_6])))))));
                    }
                }
            }
        }
        arr_37 [i_4] = (min((arr_31 [i_4]), (((max((arr_25 [6] [i_4 + 2] [10]), var_0))))));
        var_30 = var_15;
    }
    var_31 = var_9;
    var_32 = (((((max(38979, 65535)) ? (var_16 != var_1) : var_0))));
    var_33 = ((var_7 ? ((min(var_2, var_6))) : var_9));
    #pragma endscop
}
