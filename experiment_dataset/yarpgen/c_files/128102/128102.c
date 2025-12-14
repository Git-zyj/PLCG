/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_5, -var_13));
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = ((63 ? 6703941152904109608 : 226));
                            arr_10 [i_3] [i_2] [i_0] [i_0] = (((arr_4 [i_0 - 2]) ? var_1 : (min(((min(var_11, (arr_3 [i_0])))), (arr_4 [1])))));
                            arr_11 [14] [i_0] [14] [3] [i_1] [i_0] = (min(((((((var_12 ? var_8 : (arr_8 [i_0] [i_0] [i_2] [i_3])))) ? var_5 : (arr_1 [i_2 - 1])))), (((~var_13) ? ((63 ? var_6 : var_10)) : (((min(var_2, var_4))))))));
                            arr_12 [i_0] [12] [i_0] [8] [9] [i_3] = var_1;
                        }
                    }
                }
                arr_13 [i_1] [1] = var_5;
                arr_14 [i_0] [12] [i_1] = var_4;
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_17 [1] = (((min(16, 11742802920805441982))) ? ((min(-56, 1))) : 106);
        var_22 = arr_15 [3];
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] [1] = (min(-var_16, ((var_13 << ((((var_8 ? var_4 : var_2)) + 10645))))));
        var_23 = (arr_16 [i_5]);
        arr_22 [2] = (min(((min((arr_16 [i_5 - 3]), (arr_16 [i_5 - 2])))), (arr_16 [i_5 - 1])));

        for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    {
                        arr_34 [0] [i_8] = (13385 > 100);
                        var_24 = (22 ? (((!(arr_32 [i_6 + 2] [11] [i_6 - 3] [i_6 + 2])))) : (((min((arr_4 [2]), var_14)))));
                    }
                }
            }
            arr_35 [i_5] [8] = (min(-125, (((var_13 ? (var_0 + var_3) : -var_2)))));
            var_25 = ((((((((~1) + 2147483647)) >> (((((arr_25 [i_6] [i_5] [1]) ? (arr_31 [i_5]) : var_9)) - 34))))) || (((-((var_3 ? (arr_24 [2]) : 1)))))));
        }
        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
        {
            arr_40 [1] [10] [i_5] = ((((((!(var_9 - var_1))))) < (min((arr_36 [9] [9]), ((((arr_2 [i_5]) == (arr_25 [i_5] [i_5] [i_9]))))))));
            var_26 = ((~((65535 / ((-360566515354530866 ? (arr_31 [6]) : var_17))))));
        }
        for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
        {
            arr_44 [2] [2] [i_10] = (min(((((var_3 + var_17) <= (((arr_41 [i_10]) ? (arr_0 [9]) : var_10))))), (arr_30 [i_5] [6] [8] [4] [10] [i_10])));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_27 = (((!var_8) ? (min((var_3 | var_0), (min(var_17, var_1)))) : (((var_12 == -1) ? (min(var_18, var_9)) : (arr_38 [i_10 - 3] [i_11 - 1])))));
                            var_28 = var_2;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_29 = (((((((var_1 ? var_7 : var_10)) * var_5))) ? (min((~16777215), ((var_1 - (arr_39 [8] [8]))))) : ((((arr_52 [i_17 - 1] [i_17 - 1]) % var_15)))));
                            arr_64 [i_5] [i_15] [i_16] = (min(((var_1 ? var_5 : (arr_37 [2] [i_15 + 2] [7]))), ((((((arr_50 [i_5] [i_14] [11]) ? var_4 : 1))) ? ((min(var_16, (arr_61 [i_16] [11] [i_14] [i_16])))) : ((((arr_49 [1] [5]) || 4294967271)))))));
                        }
                    }
                }
            }
            var_30 = ((min(614439945, 13396)));
            var_31 = ((((((((arr_48 [i_5]) ? (arr_60 [i_14]) : (arr_36 [i_5] [i_5])))) ? ((((var_9 <= (arr_49 [i_14] [i_5]))))) : (var_14 - var_18))) >> ((var_13 % (var_8 > var_3)))));
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    {
                        arr_72 [1] [i_18] = var_6;
                        arr_73 [13] [1] [i_19] [i_18] = ((((((-30 ^ var_10) ? ((var_15 ? var_3 : var_12)) : (min(125, 1108779449))))) <= var_9));
                    }
                }
            }
            arr_74 [i_5] = (min((((((387 ? 1 : 174))) * (min(0, (arr_36 [11] [i_5]))))), ((-98 ? (min(var_10, 1698)) : (~-46)))));
        }

        for (int i_20 = 2; i_20 < 12;i_20 += 1) /* same iter space */
        {
            var_32 -= (min((((min(54916, var_13)))), (min((!var_12), ((var_0 ? 1774560744 : 233))))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 11;i_22 += 1)
                {
                    {
                        var_33 ^= (min((arr_27 [i_5 + 1] [i_20 + 3] [i_22 - 1]), (((var_13 && (((1 ? 1643960902233578728 : 6914892595503470523))))))));
                        var_34 = ((((((arr_15 [i_5 + 1]) < (arr_15 [i_5 - 2])))) - ((var_16 >> (((arr_15 [i_5 - 1]) + 52))))));
                        arr_82 [1] [8] = (((((min(31, 1)))) - (min((arr_49 [i_5] [i_20]), ((var_11 ? var_18 : var_10))))));
                        arr_83 [12] = (min((min((~var_12), (arr_19 [i_20 - 1]))), ((((min(var_13, var_8))) ? 1830377324591148641 : var_16))));
                    }
                }
            }
        }
        for (int i_23 = 2; i_23 < 12;i_23 += 1) /* same iter space */
        {
            var_35 = ((~(arr_57 [i_5] [i_5] [i_5])));
            var_36 |= (min(var_7, var_18));
        }
    }
    #pragma endscop
}
