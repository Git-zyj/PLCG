/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = var_11;
                        var_16 = (max(var_16, ((((arr_6 [4]) ? var_2 : (min((var_4 | var_13), (min((arr_0 [i_0] [i_1]), var_14)))))))));
                        var_17 += ((+(((arr_8 [i_0] [i_1 - 1] [i_2 - 2] [i_3]) - ((min((arr_3 [17] [i_1]), var_0)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [1] [10] [8] [i_6] [i_6] = (((((((max(var_9, (arr_21 [i_0] [i_4] [i_5])))) ? (arr_7 [i_0] [19] [15]) : ((var_7 * (arr_21 [i_7] [i_4] [i_5])))))) & ((((min(-1589422462, (arr_20 [i_7] [1] [i_5] [i_5] [i_4] [1] [i_0])))) + (9137631517703866365 + var_11)))));
                                var_18 -= ((!(arr_0 [i_0] [i_0])));
                                arr_23 [19] [i_4] [i_7] [12] [8] [i_4] [18] = ((~(((((var_3 ? var_4 : var_14))) ? (~var_7) : (-1589422466 != 1589422465)))));
                            }
                        }
                    }
                    var_19 = (max(var_19, ((max(((-(arr_4 [i_0] [16] [1]))), ((((-1589422462 - var_3) ? -16760832 : 20545))))))));
                    var_20 = (((((arr_9 [i_0] [i_4] [i_5] [i_5] [i_5] [i_5]) + (var_10 || var_2))) != (min(((var_10 % (arr_0 [i_5] [i_0]))), ((var_0 >> (var_2 - 6476603204018648772)))))));
                    arr_24 [i_0] |= (var_3 >= var_9);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_21 *= (((arr_6 [i_5]) | (0 % var_10)));
                                arr_31 [i_0] [10] [i_5] [i_9] [i_5] [10] = (max(1, var_9));
                                var_22 = (max(35221, 2147483647));
                                var_23 = ((((((var_2 ? 939524096 : var_13)) == ((((arr_27 [i_9] [i_4]) / 1))))) ? (min((arr_12 [7] [i_4] [i_4]), (max(-1074705559, var_4)))) : var_14));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 19;i_11 += 1)
            {
                {
                    arr_38 [i_0] [i_10] [i_11] [0] = (max((var_11 * var_7), (max(((var_11 + (arr_34 [12]))), var_7))));
                    var_24 = (max(var_24, var_10));
                    var_25 = (max(var_25, var_2));
                }
            }
        }
        arr_39 [i_0] = (((min((((var_4 ? var_7 : var_1))), var_14)) <= (((var_13 ? var_14 : 3355443204)))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_42 [i_12] [i_12] |= ((~(min(-1074705559, 9787987018848670156))));
        arr_43 [i_12] [i_12] = var_9;
        var_26 -= (((((var_8 > var_7) ^ (min(var_6, var_13)))) | var_4));
    }
    for (int i_13 = 2; i_13 < 20;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            var_27 = (max(var_27, ((-(((var_13 - var_8) + (var_5 + var_3)))))));
            arr_48 [i_13] [i_14] = ((((((min(1, var_3))))) ? ((max((arr_44 [i_13]), (max(var_4, var_7))))) : (arr_44 [19])));
            var_28 = (((max(var_0, (max(var_4, (-9223372036854775807 - 1))))) / (arr_44 [i_13 + 2])));
            arr_49 [i_13 - 1] = (((((arr_45 [i_14 - 1]) ? 388645055 : (min((arr_45 [i_13]), var_1)))) >= ((max(var_5, (((arr_44 [i_14 + 2]) ? var_2 : var_12)))))));
            var_29 = (((max(((var_5 ? var_1 : var_10)), (arr_41 [i_14] [i_14 + 3]))) | (-var_4 * 0)));
        }
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            var_30 = (max(var_30, ((((-(((arr_50 [16] [i_13]) ? var_0 : var_4))))))));
            var_31 = -299737344;
            arr_53 [0] [1] [i_15] = ((arr_45 [i_13 - 2]) * var_14);
            arr_54 [i_13 + 2] [i_15 + 1] [i_15] = (arr_44 [i_13 - 1]);
            var_32 -= ((max(var_11, var_4)));
        }
        arr_55 [i_13] [i_13] = ((((-1074705536 ? (var_4 & 86) : (var_8 & var_11))) & var_11));
        var_33 = (max(var_33, var_2));
        var_34 = (min(var_34, (arr_45 [11])));
    }
    for (int i_16 = 1; i_16 < 18;i_16 += 1)
    {
        var_35 = (min(var_35, var_1));
        arr_58 [i_16] |= var_12;
        var_36 = (arr_33 [2]);
    }
    var_37 = (max(var_37, (((((-((89 ? 30027 : -1722403602202645886)))) + 0)))));
    #pragma endscop
}
