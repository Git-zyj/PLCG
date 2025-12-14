/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = ((var_15 / ((var_17 ? 206105593 : var_17))));
                        var_21 = var_9;
                        arr_13 [i_0] [i_1] [i_1] [i_3] = (((var_17 <= var_7) || (var_12 / var_5)));
                    }
                }
            }
        }
        arr_14 [i_0] = (!var_0);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_19 [1] = var_1;
        arr_20 [i_4] [i_4] = ((((9007199254740991 ? (((var_12 ? var_18 : 15111))) : var_19)) <= (min((~-15111), (var_1 ^ var_15)))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_30 [i_4] [i_5] [i_6 - 1] [i_4] [i_5] = var_13;
                        var_22 = ((((((max(18437736874454810625, var_15)) + var_7))) ? (((var_11 > var_10) ? (min(var_17, var_10)) : var_13)) : -var_8));
                        var_23 = ((((var_5 >= 18437736874454810625) ? (!var_19) : 18437736874454810616)));
                        var_24 = var_12;
                    }
                }
            }
        }
        var_25 = var_15;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] [12] = (((!var_12) ? var_14 : (min((max(var_19, var_13)), (var_9 >= var_12)))));
        arr_36 [i_8] [17] = (max(((min(var_14, (9943350034584802196 >= var_10)))), var_4));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_43 [i_9] = var_1;
            var_26 = ((var_10 ? var_0 : var_10));
        }
        var_27 = (min(var_27, var_6));
        var_28 += (min(var_8, (((((var_17 ? 1290186460 : var_12))) ? (max(var_14, var_4)) : (var_2 > var_1)))));
    }
    var_29 = (max(((((var_1 > 91) ? var_10 : (max(var_4, 109))))), (((((var_11 ? 0 : var_9))) ? var_19 : var_5))));
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 8;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            {
                arr_49 [i_11] = ((((((((max(-15111, var_13)))) / -var_18))) && 0));
                arr_50 [i_11] [i_11] [i_11] = (max((((var_0 >> (!1781943679)))), (min((~var_2), ((min(132134251, var_8)))))));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 7;i_14 += 1)
                    {
                        {
                            var_30 *= (max(((((var_9 ? 6575 : var_10)))), (max((6570 == var_6), var_6))));
                            var_31 *= (max(((((((var_9 ? var_9 : var_15))) || (var_8 == 115)))), (max((var_9 < var_14), ((3021282543 ? var_10 : var_3))))));
                            arr_55 [i_11 - 2] [i_11 - 2] [i_13] [i_13] [i_13 - 1] [i_14 + 4] = (max((((((max(var_10, var_10))) >= (var_13 <= -29321)))), (((var_1 / 1620361739) + var_5))));
                        }
                    }
                }
                var_32 = (min((max(175, var_1)), (~var_14)));
            }
        }
    }
    var_33 = (max(var_14, (min(var_2, ((1 ? var_1 : var_10))))));
    #pragma endscop
}
