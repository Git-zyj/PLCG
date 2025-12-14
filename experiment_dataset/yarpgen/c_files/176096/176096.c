/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 51718;
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = 209;

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_19 = (((51718 && (arr_5 [i_0] [i_1]))));

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_20 &= var_8;
                var_21 = (min(var_21, var_1));
                var_22 = 51746;
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_3] [i_4 + 1] [i_4] = arr_13 [i_5] [i_3] [0] [0];
                            var_23 = var_6;
                            arr_20 [i_4] [4] [4] [i_4 + 1] [i_5] [i_3] [i_4] = ((((arr_2 [i_1 - 2] [i_4 + 1]) / (arr_2 [i_1 - 2] [i_4 + 1]))));
                        }
                    }
                }
                var_24 = (((5305399786688629233 ? 16383 : 127)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_25 = ((-(((var_0 ? var_10 : (arr_8 [i_7] [i_7] [i_7]))))));
                            var_26 = arr_6 [i_6] [i_6] [i_6];
                            arr_26 [i_0] [i_6] [i_0] = (!3930538323);
                        }
                    }
                }
                var_27 = ((var_4 != (((((-116 > var_8) && ((max((arr_24 [i_0] [7] [i_0] [i_0] [i_0]), var_2)))))))));
            }
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_28 = 8826;
            arr_30 [i_8] = ((((min((arr_14 [i_8] [i_8] [1] [i_8 + 1]), (arr_3 [i_8] [i_8])))) >> (((arr_25 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 + 1]) - 32336))));
        }
        arr_31 [i_0] = ((((-(arr_1 [i_0] [i_0])))));

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_29 = var_14;
                            var_30 = ((45488 ? (!3054369237) : ((((!(arr_17 [i_12] [i_11] [i_10] [i_9] [i_9] [i_12]))) ? var_9 : (arr_28 [i_12] [i_11 + 1])))));
                            arr_43 [i_9] [i_9] [i_12] = ((((arr_35 [i_0] [i_9]) ? (arr_35 [i_9] [i_10]) : (arr_7 [i_9] [i_10] [i_11 + 3]))));
                            var_31 |= var_4;
                        }
                    }
                }
            }
            var_32 = var_8;
        }
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_33 = (max(var_33, (((!(((7 % ((65472 ? (arr_27 [i_13] [i_13] [i_13]) : var_5))))))))));
        var_34 |= (max(var_14, ((14336 ? var_8 : ((max(var_11, -16383)))))));
        var_35 = (max(var_35, ((((arr_44 [4] [i_13]) ? (((!4294967295) / var_11)) : ((max(var_3, 89))))))));
        arr_46 [i_13] = var_11;
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_36 = (arr_48 [i_14] [i_14]);
        arr_49 [i_14] = (17527 * 1774325530);
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 19;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 19;i_16 += 1)
        {
            {
                arr_56 [i_15 + 1] [4] &= (arr_54 [i_16]);
                arr_57 [i_15] [i_16] [i_15] = (arr_51 [i_16]);
                arr_58 [i_15] [8] [i_15 + 1] |= 14972;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 17;i_19 += 1)
            {
                {
                    arr_66 [i_17] [i_17] [i_17] = ((-(!65535)));
                    var_37 = var_1;
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 16;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 16;i_21 += 1)
                        {
                            {
                                var_38 = (max(var_38, (((-((((arr_71 [i_21 - 1] [i_21] [i_21] [i_21 - 1] [i_21 - 1] [12]) && var_13))))))));
                                var_39 = 4294967295;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
