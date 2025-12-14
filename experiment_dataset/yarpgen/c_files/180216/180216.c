/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 += max((arr_3 [i_1]), (max((arr_4 [i_1 + 1]), 32763)));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 += ((var_9 ? 1 : ((var_5 ? (arr_2 [i_3]) : 87))));
                        arr_12 [i_0] [3] [7] [i_0] = (arr_1 [10]);
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [9] [i_1 + 1] [i_1] [0] [5] = (max((max(var_9, (25838 | var_4))), (max((((!(-127 - 1)))), (((arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4]) | var_7))))));
                        var_21 -= -110;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = (max(var_22, ((min(((-((-(arr_9 [i_0] [i_0] [i_0] [i_0]))))), ((~((max(var_8, (arr_16 [i_0])))))))))));
                        var_23 = (max(var_23, ((min(((((-7 ? 1 : var_1)) & -var_5)), 18891)))));
                        arr_18 [i_5] [i_2] [10] [i_5] = (((max(var_16, (((arr_1 [i_0]) <= var_9)))) ? 1 : var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 = (((arr_4 [i_6 + 2]) + var_15));
                                var_25 = (max(var_25, ((((arr_9 [i_6] [i_1] [i_6] [i_6 + 4]) ^ ((-(((((arr_1 [i_2]) + 2147483647)) >> (((arr_11 [i_0] [i_6] [i_2] [i_1] [6] [i_0]) - 18151)))))))))));
                                arr_23 [1] [i_6] [1] = ((((max(((((arr_1 [i_0]) != 1))), (min(var_18, var_0))))) >> (var_18 - 12993)));
                                var_26 -= -1;
                            }
                        }
                    }
                }
                var_27 ^= (min(((var_10 * (!31561))), (((((min((-32767 - 1), var_13))) != (((arr_19 [i_0] [i_1] [i_0] [i_0]) ? -64 : var_14)))))));
                var_28 *= 1;
            }
        }
    }
    var_29 = (max((((-1 == ((max(var_8, var_18)))))), var_0));
    var_30 &= (max(var_11, ((((var_9 ? var_9 : var_2)) + ((min(87, 16383)))))));

    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_31 += (arr_24 [1]);
        var_32 = ((-(((((!(arr_24 [i_8])))) - ((119 ? var_3 : 87))))));

        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_34 [i_8 - 1] [i_9] [i_9] [i_10] [i_10] [i_8] = (min(((max((arr_31 [5] [i_9] [5] [i_9]), (arr_29 [i_8] [i_8] [i_8] [i_8])))), (max(var_15, (min(var_11, 117))))));
                        var_33 += ((((!(arr_29 [i_8] [i_8 - 1] [i_10] [i_9]))) ? (((!(var_0 + -13621)))) : ((4 + ((var_6 ? (arr_24 [i_9]) : (arr_30 [i_8] [i_9])))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_34 = (arr_26 [i_10] [1] [i_12]);
                            var_35 = ((var_4 << (((!(arr_36 [i_8 - 1]))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_36 ^= (!-50);
                            var_37 = (max(var_37, -var_4));
                            arr_40 [i_9] [i_10] [0] [i_13] |= ((15063 | (arr_35 [i_8 - 1] [i_9] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }
                        var_38 = ((((1 ^ (((arr_38 [i_8] [i_8] [i_10] [i_11] [i_8]) ? -122 : var_10)))) - ((~(-16383 || 20128)))));
                        var_39 = (max(var_39, ((min(((-((-15068 ^ (arr_30 [i_8 - 1] [i_8 - 1]))))), (((arr_38 [16] [i_9] [16] [i_10] [16]) + (!var_17))))))));
                    }
                }
            }
            arr_41 [i_8] [12] [i_9] = (((min(1, (20119 != 1))) - (((arr_32 [i_8]) % (arr_24 [i_8])))));

            for (int i_14 = 2; i_14 < 15;i_14 += 1)
            {
                arr_44 [i_8] [i_8] = (((((((min(var_18, (arr_43 [i_8] [i_9] [i_14] [i_8])))) ^ ((min(var_4, -20121)))))) && (((1 ? ((max(12, (arr_24 [i_8])))) : ((min(var_10, (arr_30 [i_8] [i_8])))))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_40 = ((-var_14 ^ (((!var_2) * var_7))));
                            var_41 = var_13;
                        }
                    }
                }
                var_42 -= ((((!((max((arr_28 [i_8]), var_13))))) ? ((-15068 ^ ((var_7 ? (arr_47 [i_14] [i_9] [i_9] [i_14]) : 1)))) : (min((~-19427), (arr_47 [i_14] [i_9] [i_9] [i_8])))));
                arr_50 [i_8] [i_8] = ((!((min(-24, (max(6994, var_5)))))));
            }
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
        {
            arr_55 [i_8] [i_17] |= (max(25753, (max((((arr_36 [i_8]) | 1)), var_14))));
            arr_56 [i_17] [i_17] [i_8] = (min(53, 1));
            arr_57 [i_8] [i_8] [4] = (arr_25 [i_8] [i_8 - 1]);
        }
        for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
        {
            var_43 -= arr_33 [i_18];
            var_44 = (max(var_44, ((min(((((min((arr_28 [i_18]), -26))) - var_13)), (!var_1))))));
            arr_60 [i_8] [i_18] &= ((((~((max(var_2, 1))))) + ((max(var_7, (arr_29 [i_8 - 1] [i_18] [i_18] [i_18]))))));
            var_45 *= (((arr_37 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_18]) != (arr_37 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_18])));
        }
        var_46 = (max((((30766 && 1) ? 1 : (((arr_27 [i_8]) * var_13)))), (((((-124 ? 1 : (arr_51 [i_8] [13])))) ? ((((arr_46 [i_8] [i_8 - 1] [i_8]) <= var_14))) : -31404))));
        var_47 = 1;
    }
    for (int i_19 = 2; i_19 < 10;i_19 += 1)
    {
        var_48 = (max(var_48, 48));
        var_49 ^= (!((((arr_28 [i_19]) ? 1 : ((max((arr_38 [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [1]), 1)))))));

        for (int i_20 = 1; i_20 < 1;i_20 += 1)
        {

            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                var_50 |= (((arr_54 [i_21 - 1] [i_20 - 1]) | ((-(arr_39 [1] [i_20] [2] [i_21])))));
                var_51 = ((!(2420 * var_16)));
                var_52 = arr_36 [i_19];
            }
            arr_69 [i_19] = 0;
            var_53 += ((var_8 == ((-(arr_68 [i_19 - 1] [i_20 - 1] [i_20 - 1])))));
            var_54 = ((((1 ? ((max((arr_30 [i_19] [i_20]), -66))) : (((arr_32 [i_19]) ^ 8618)))) | var_2));
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            arr_73 [i_22] [i_19] |= (max((arr_39 [i_19 + 1] [i_19 + 1] [i_22] [i_22]), (((!(~6972))))));
            /* LoopNest 3 */
            for (int i_23 = 1; i_23 < 10;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        {
                            var_55 &= (max((min(var_9, (((arr_29 [i_19] [10] [i_19] [i_19]) + 70)))), (min((((-20106 + 2147483647) >> var_3)), ((max(0, (arr_26 [i_19] [i_22] [i_23 + 1]))))))));
                            arr_83 [0] [i_23] [i_24] [i_23] [i_23] [i_19] = (arr_81 [i_22] [i_22]);
                            var_56 += (arr_42 [i_19 - 2] [i_19 - 2] [i_19]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 0;i_26 += 1)
    {
        for (int i_27 = 1; i_27 < 20;i_27 += 1)
        {
            {
                var_57 = ((var_14 / (((arr_87 [i_26 + 1] [i_27] [i_27 - 1]) ? 1 : ((-(arr_87 [i_26 + 1] [i_27] [i_27])))))));
                var_58 = ((-(arr_85 [i_26 + 1])));
            }
        }
    }
    #pragma endscop
}
