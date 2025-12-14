/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = (~-3895401051);
        var_15 = (~var_12);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                arr_8 [i_1] [5] = (((10881 - 10855) ? (max(var_13, (arr_0 [i_0 + 1]))) : var_9));

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 -= (var_10 != var_3);
                        var_17 = var_3;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_18 = var_5;
                        arr_18 [i_1] [8] [8] = (arr_3 [i_1]);
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [5] = ((-(arr_11 [i_2 - 1] [i_1] [i_0 + 1] [i_1])));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_19 *= (arr_11 [i_0] [2] [i_3] [2]);
                        arr_23 [i_1] [i_1] [2] [9] [i_6] = var_9;
                        var_20 += var_1;
                        var_21 -= ((11724246189137401711 ? (arr_15 [2] [i_1] [i_2] [i_3] [i_2] [i_6] [i_1]) : ((((2824027607748675783 ? 3477753668994449906 : 2824027607748675786))))));
                        var_22 = (-(arr_2 [6]));
                    }
                    for (int i_7 = 1; i_7 < 6;i_7 += 1)
                    {
                        var_23 *= ((((((arr_21 [i_0] [0] [i_0] [i_0] [8] [i_2 + 1]) ? 10882 : (arr_21 [i_0] [i_0] [2] [8] [4] [i_2 - 1])))) ? 10881 : (max((((-8017981545327706549 + 9223372036854775807) << (var_4 - 1063338117))), var_0))));
                        var_24 = -var_4;
                    }
                    var_25 = (((arr_1 [i_2] [i_2]) ? ((-2824027607748675783 + (~107))) : var_3));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, var_5));
                    arr_30 [i_1] [i_1] [i_1] [i_8] [i_1] [7] = (var_11 - -var_13);
                    var_27 = (min(var_27, ((((((arr_16 [i_2 - 1] [i_8] [i_8] [i_8] [i_8]) ? (arr_26 [i_2 + 1] [0] [i_2 + 1] [i_8] [i_8]) : (arr_16 [i_2 + 1] [6] [i_8] [i_8] [6]))) == (((arr_26 [i_2 + 1] [8] [i_2] [i_8] [2]) ? var_6 : 127471623)))))));
                }
            }
            arr_31 [i_1] [i_1] = (var_6 | 4005729631);

            for (int i_9 = 3; i_9 < 6;i_9 += 1)
            {
                arr_34 [i_0] [i_0] [1] [i_1] = ((((!(arr_7 [i_0 - 1] [i_1] [i_0 + 1] [i_9 - 1]))) ? ((((((-(arr_6 [i_0 + 2])))) ? ((var_0 ? var_4 : var_6)) : (!16)))) : (max(((((arr_12 [i_1] [3] [3] [2]) ? var_9 : 2824027607748675786))), var_12))));
                var_28 = (max(2725988212, 3611764685));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_41 [i_0] [4] [i_1] [i_9 + 2] [1] [i_11] = max(var_4, -28523);
                            arr_42 [i_1] = ((((((!2824027607748675782) ? var_5 : var_5))) % var_8));
                            arr_43 [i_0] [i_1] [5] [i_1] [0] = (!var_2);
                        }
                    }
                }
            }
        }
        arr_44 [i_0] = (((var_9 ? (((arr_3 [2]) & var_6)) : var_6)) & (max(-2097123638, 1093357333)));
    }
    var_29 = var_11;
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    var_30 = 2417721487;
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 15;i_16 += 1)
                        {
                            {
                                arr_58 [i_12] [i_12 + 1] [i_15] [i_12] [0] = (arr_52 [i_12 - 1] [i_12 - 1] [i_16]);
                                arr_59 [i_12] [i_15] [i_12] [6] [i_12] [i_12] [i_12 - 1] = var_0;
                                var_31 ^= -274870753;
                            }
                        }
                    }
                    var_32 = ((-((706703562 ? (arr_50 [i_12 - 1] [12] [i_12]) : (arr_50 [i_12 - 1] [i_12 + 1] [1])))));
                    arr_60 [i_12] [i_13] [i_14] &= (((arr_57 [i_12] [i_12]) < (arr_48 [i_12 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
