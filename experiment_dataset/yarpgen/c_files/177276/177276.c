/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(var_11, (max(1857698260, 536870911))));
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [0]);
        var_15 = ((((63231 ? -61 : (arr_0 [i_0] [10])))));
        arr_3 [i_0] [i_0] = max(((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))), (max((((2290320866 ? 2290320866 : -61))), (max((arr_0 [i_0] [7]), 7556533377633098075)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (!248140489);
        arr_9 [i_1] [i_1] = 4046826806;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_16 = max(1, ((255 ? 1 : 4294967040)));
                        arr_19 [14] [i_1] [i_4] [i_2] [i_3] [i_1] = (min(((max(((min(12385, 1))), ((var_2 ? var_3 : var_11))))), ((((max((arr_5 [1]), (arr_17 [14] [10] [i_3] [i_4] [14] [1])))) ? var_12 : (var_12 || var_3)))));
                        var_17 = (max(var_17, (((((max(var_7, (arr_5 [i_4])))) << (min(34215, (((arr_15 [i_1] [i_2]) ? 1 : 248140497)))))))));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_18 = (max(50918290, (max((min((arr_7 [i_5 + 1] [i_5 + 1]), (arr_6 [i_5] [i_8]))), var_3))));
                            var_19 = (min(var_19, (((!((((~1) ? 757684036 : (((max(-5313, (arr_5 [4])))))))))))));
                            var_20 = (((-1 + 2147483647) >> (3274402890 - 3274402866)));
                            arr_28 [i_5] [i_7] = (((max((1 % 2004646420), 1)) < (((min((1 || 1), 1))))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_1] [i_5] [i_7] = -61;
                            arr_34 [i_1] [12] [1] [14] [i_5] = arr_17 [i_9] [i_7] [i_5] [i_5] [i_1] [i_1];
                            arr_35 [i_5] [1] [i_5] = 2004646398;
                            var_21 = (min(var_21, (((1 ? (max(2004646407, 61)) : (arr_31 [i_7]))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_22 = (arr_1 [i_1]);
                            var_23 += 4046826826;
                            arr_38 [i_5] [1] [1] [i_5] [i_5] [i_1] [i_1] = 92;
                            var_24 &= 248140489;
                        }
                        var_25 = ((var_11 ? (arr_30 [i_1] [i_5 + 2] [i_6] [i_7] [i_1]) : (((5324 ? 1 : (arr_23 [i_5]))))));
                    }
                }
            }
            var_26 -= (arr_17 [i_5 + 1] [i_5] [14] [14] [i_5] [i_1]);
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        var_27 = (max(var_27, 1));

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_45 [i_11] = var_11;
            arr_46 [i_11] = ((-(((arr_18 [4] [4] [i_11] [i_12] [i_11 + 1] [i_12]) ? 1 : (arr_40 [i_11] [i_11])))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_49 [i_11] = (arr_18 [i_11 + 1] [i_13] [i_11] [i_11 + 1] [9] [13]);
            arr_50 [i_11 + 1] [i_11] [i_13] = (arr_24 [i_11]);

            for (int i_14 = 4; i_14 < 13;i_14 += 1)
            {
                arr_54 [4] [i_11] = var_8;

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {

                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        var_28 = ((var_12 ? ((2948974480 ? 1 : -89)) : (-127 - 1)));
                        var_29 = (max(var_29, 1));
                    }
                    var_30 = (min(var_30, 14));
                }
                for (int i_17 = 2; i_17 < 11;i_17 += 1)
                {
                    var_31 = 2290320897;
                    var_32 = (max(var_32, var_1));
                    arr_62 [i_11] [i_11] [i_11] [i_17] [i_17] = -var_8;
                }
            }
            for (int i_18 = 2; i_18 < 11;i_18 += 1)
            {
                arr_65 [i_11] [i_13] [i_11 - 1] [i_11] = (arr_6 [0] [i_13]);

                for (int i_19 = 2; i_19 < 13;i_19 += 1)
                {
                    var_33 = (((arr_31 [i_11]) ? 30870 : var_11));
                    arr_68 [6] [i_11] [5] [i_19] = (arr_36 [i_19] [i_18 + 3] [i_11 + 1] [i_11] [i_11]);
                }
                for (int i_20 = 3; i_20 < 12;i_20 += 1)
                {
                    var_34 = var_11;
                    var_35 = 2004646398;
                }
                arr_71 [i_11] [i_11] = ((-89 ? 2290320898 : (arr_61 [i_11 - 1] [i_11 - 1] [i_13] [i_11 - 1] [1] [i_11 - 1])));
                arr_72 [i_11] = ((1 ? (arr_42 [i_11]) : -86));
            }
            arr_73 [i_11] = ((var_11 ? (69 || 1) : 1));
            var_36 = 1;
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 25;i_21 += 1)
    {
        var_37 = ((((((var_7 ? (arr_74 [i_21]) : (arr_75 [i_21] [2]))) + 9223372036854775807)) >> (((arr_75 [i_21] [i_21]) - 3601126888))));
        var_38 = var_6;
    }
    #pragma endscop
}
