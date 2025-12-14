/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (var_2 | var_6);
    var_11 |= (((-7181263451263669269 & var_1) <= var_4));
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = arr_2 [i_0] [i_0];

        for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_13 = (min(var_13, (min((max(var_3, var_0)), ((min(((min(var_4, var_6))), ((2621 + (arr_3 [i_1] [i_1]))))))))));

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_14 = ((!(arr_10 [i_0] [i_0] [i_0])));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_15 = (max(var_15, (((arr_14 [i_0] [i_1] [i_2] [i_1] [i_4]) << (((((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0]) & var_9)) - 1441))))));
                        var_16 = (min(var_16, var_1));
                        var_17 = ((+((((var_3 >> (((arr_11 [i_3] [i_0]) + 7403538416137368290)))) << (((((arr_11 [i_0] [i_1 - 2]) + 7403538416137368306)) - 21))))));
                        var_18 -= max((arr_5 [i_0]), (((62914 && (arr_8 [1] [8] [8])))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_19 = (min(var_19, (max(((((arr_5 [i_0]) ? (arr_5 [i_5]) : var_1))), (min((arr_13 [15] [i_3] [i_1 - 1] [15]), (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & var_0))))))));
                        var_20 = min((((arr_7 [i_0] [i_1] [i_0]) ? -5465829524267677698 : (arr_7 [i_0] [i_1 - 2] [0]))), (min(var_6, (arr_8 [i_0] [i_1 + 1] [i_0]))));
                        var_21 = var_0;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((~(!1012595904862967364)));
                        var_23 = (((((min(-1360292023902313970, (min((arr_0 [i_3]), var_0)))) + 9223372036854775807)) >> (((arr_19 [i_0] [i_0] [i_0] [i_2] [i_2] [4] [4]) - 45818))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_24 = arr_21 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 2] [i_3];
                        var_25 = max((((max((arr_21 [i_7] [i_1] [i_1] [i_1] [i_0]), var_7)) ^ 0)), (min(((max(18551, (arr_3 [i_0] [i_0])))), (max((arr_7 [i_0] [i_3] [i_3]), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_26 = var_0;
                            var_27 = ((((((arr_25 [i_0] [i_1 - 2] [i_8 + 1] [i_8]) | (min(var_9, (arr_16 [i_0] [i_8])))))) || var_4));
                        }
                    }
                }
            }

            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                var_28 = max((min((((arr_11 [i_0] [i_0]) ? (arr_22 [i_1 - 2] [i_10 + 3] [i_1 - 2] [i_0] [3]) : var_4)), ((var_8 ? var_4 : (arr_10 [i_0] [i_1] [i_1]))))), ((min((arr_3 [i_1 - 2] [i_1]), var_9))));
                var_29 = (max(var_29, ((max(57782, (min(((min((arr_30 [i_0] [i_0]), (arr_30 [1] [i_0])))), (~var_4))))))));
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_30 = arr_11 [i_0] [i_0];

                /* vectorizable */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_31 = 0;
                    arr_39 [i_11] [i_11] [i_11] [i_11] = (((var_2 != var_9) % ((~(arr_28 [i_0] [i_12] [i_11] [i_11])))));
                    arr_40 [i_0] [i_1 - 1] [i_1 - 1] [9] [i_11] = ((!(arr_33 [i_11] [i_1 + 2] [i_1 + 2])));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    var_32 |= (((arr_24 [i_1 - 1]) <= var_4));
                    arr_44 [i_11] [i_11] [i_13] = ((~(arr_28 [i_0] [i_0] [i_0] [i_1 + 2])));
                    var_33 = ((!(arr_26 [i_0] [i_0] [i_11] [i_1 - 2] [i_13])));
                }
                var_34 = (min(((max((arr_23 [i_0] [i_0] [i_0] [i_11] [i_0] [i_11] [i_1]), var_3))), 8177));
                var_35 = 8014907512449913805;
                var_36 = ((arr_25 [i_11] [i_0] [i_0] [i_0]) + (min((min((arr_7 [i_0] [i_0] [i_11]), -1012595904862967377)), (arr_32 [i_1 + 2] [i_0] [i_0]))));
            }
        }
        for (int i_14 = 2; i_14 < 14;i_14 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_15 = 4; i_15 < 14;i_15 += 1) /* same iter space */
            {
                var_37 = (((9223372036854775807 || (arr_10 [i_14] [i_14] [i_0]))));
                var_38 = ((var_7 ? (21377 && 0) : (arr_34 [i_0] [i_0])));
                var_39 = (max(var_39, (arr_41 [7] [9] [i_15 + 1])));
            }
            for (int i_16 = 4; i_16 < 14;i_16 += 1) /* same iter space */
            {
                arr_55 [i_0] [i_0] [i_0] [0] = (((arr_25 [i_0] [i_14] [11] [4]) != var_9));

                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    var_40 = (min(var_40, ((((5465829524267677687 / (min(var_2, (arr_48 [i_0] [7]))))) * (((((arr_14 [i_14 + 2] [i_14] [i_16 - 1] [9] [i_17 + 3]) <= (((min((arr_41 [i_0] [i_0] [i_0]), (arr_54 [i_17] [i_17] [3] [3])))))))))))));
                    var_41 = var_6;
                }
                for (int i_18 = 3; i_18 < 13;i_18 += 1)
                {

                    for (int i_19 = 1; i_19 < 13;i_19 += 1)
                    {
                        var_42 = ((~(min((min((arr_5 [i_18]), var_0)), (((arr_57 [i_0]) ? var_5 : (arr_8 [i_14] [i_14] [i_0])))))));
                        var_43 += (((arr_38 [i_19]) != var_6));
                        var_44 = (min(var_9, (((var_8 <= ((((var_3 <= (arr_31 [i_18 + 1]))))))))));
                    }
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        arr_65 [i_18] = (min(((!(arr_31 [i_18 + 1]))), ((!(arr_31 [i_18 - 1])))));
                        arr_66 [i_0] [i_18] [i_0] [i_0] [7] = (((((var_3 + var_0) - (min(var_0, var_9)))) - var_5));
                        var_45 -= (arr_36 [i_14]);
                        var_46 = max((max((arr_17 [i_0] [i_14 + 1] [i_0] [7] [i_16 + 2]), (arr_17 [i_0] [i_14 - 2] [i_16] [i_16] [i_16 - 1]))), (min((((!(arr_7 [i_0] [i_18 - 1] [i_20])))), (arr_16 [i_14 - 2] [i_14]))));
                    }
                    var_47 = ((min(((var_0 & (arr_2 [i_0] [i_0]))), ((((arr_33 [i_0] [i_14] [i_16]) == (arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    var_48 = min(((6736381145173131983 ? (min(15, (arr_48 [i_0] [i_14 + 2]))) : var_3)), (arr_13 [i_16 + 1] [i_16 + 1] [i_16 - 1] [9]));
                    var_49 -= (min(((((((arr_51 [i_16] [i_16] [i_16]) >> (((arr_47 [i_0] [i_14] [i_16]) - 50204)))) >> (((var_1 >> 0) - 608))))), (min((arr_33 [i_18 + 2] [i_18 + 3] [i_14 + 1]), (arr_51 [i_18 + 2] [i_18] [i_14 + 1])))));
                    var_50 = (max(var_50, ((max((arr_53 [i_14 + 1] [i_14] [i_18 + 1] [i_18]), var_1)))));
                }
            }

            for (int i_21 = 3; i_21 < 15;i_21 += 1)
            {
                var_51 = ((var_4 - (min(var_3, (arr_8 [i_14 - 1] [i_21] [i_14 - 1])))));
                var_52 &= (((max((!var_4), (~var_2))) ^ (((min((arr_47 [i_14 - 2] [i_14 + 1] [i_21 - 3]), var_3))))));
                var_53 = ((!((max(((~(arr_17 [i_0] [i_14] [i_21] [i_21] [i_21 - 1]))), -6)))));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 15;i_23 += 1)
                    {
                        {
                            var_54 -= min((min((arr_50 [i_23 + 1] [i_23 + 1] [i_23]), 29274)), (max((!var_5), (max(var_6, var_7)))));
                            var_55 = (min(9957, (min((arr_1 [i_14 + 2]), (arr_1 [i_14 - 1])))));
                            var_56 = max((((((max(13129, (arr_38 [i_21]))))) % (max((arr_54 [i_0] [i_0] [i_0] [5]), var_0)))), (max((arr_67 [i_21] [i_21 - 2] [i_21] [i_21 + 1]), var_4)));
                        }
                    }
                }
            }
        }
        var_57 = ((((~(arr_8 [i_0] [i_0] [i_0]))) <= var_2));
        var_58 = (max(((max(var_8, var_0))), (((var_1 && ((min(var_0, var_2))))))));
    }
    #pragma endscop
}
