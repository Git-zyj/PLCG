/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((((min((((!(arr_1 [i_0 - 1] [i_0])))), (112 ^ var_0)))) ? var_1 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_0] = (((((arr_5 [i_0] [i_1] [i_0]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_1]) : (arr_5 [i_0] [i_0] [i_1]))) ^ (!142)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_11 [i_0] = 31370;
                var_11 = (arr_9 [i_0] [i_2]);
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_1] [i_3] |= var_9;
                arr_17 [i_0] [i_3] [i_0] [i_3] &= (arr_0 [i_3]);
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_1] [i_0] = var_7;

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_24 [i_0] [i_0 + 3] [i_0 + 3] [i_1] [i_0] = var_8;
                    arr_25 [i_0] = ((!(((~(arr_9 [i_0] [i_0]))))));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_12 *= var_1;
                    var_13 = (max(var_13, var_1));
                    var_14 = (min(var_14, (arr_15 [i_0 + 2] [i_1] [i_4] [i_6])));
                    arr_30 [i_0 - 2] [i_0] [i_4 - 2] = ((arr_19 [i_0] [i_0 + 2] [i_4 - 2]) << (((arr_8 [i_0 + 2] [i_0 + 2]) + 20666)));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_33 [i_0] [i_1] [i_0] [i_4 - 2] [i_1] [i_1] = (arr_10 [i_0] [i_0]);
                    var_15 = (max(var_15, (arr_18 [i_7] [i_7 - 1] [i_0 + 3])));
                    var_16 = (arr_31 [i_0 - 3] [6]);
                    arr_34 [i_0] [i_1] [9] [i_7] = (arr_19 [i_4] [i_4] [i_4 - 1]);
                }
                arr_35 [i_0] = (i_0 % 2 == zero) ? ((((arr_5 [i_0 + 2] [i_1] [i_4 + 1]) ? ((var_1 << (((arr_23 [i_0] [i_1] [i_0] [i_4]) - 3754345795858275237)))) : 11386876492901128946))) : ((((arr_5 [i_0 + 2] [i_1] [i_4 + 1]) ? ((var_1 << (((((arr_23 [i_0] [i_1] [i_0] [i_4]) - 3754345795858275237)) - 4455207656988603156)))) : 11386876492901128946)));
            }
            for (int i_8 = 4; i_8 < 20;i_8 += 1)
            {
                arr_40 [i_0 - 2] [i_0] = (((+(((arr_39 [i_0] [i_8]) * (arr_9 [i_0] [i_8 - 1]))))));
                var_17 = var_8;
                arr_41 [i_0] [i_0] [i_8] = min((arr_20 [i_0] [i_1] [i_8]), (arr_15 [i_0 - 1] [i_1] [i_0] [i_1]));
            }
            var_18 = var_3;
            arr_42 [i_0] [i_0] = ((32767 ^ 3067138556425296513) % (((~(arr_18 [i_0] [21] [i_1])))));
            arr_43 [i_0] [i_1] [i_1] = (i_0 % 2 == 0) ? ((((arr_10 [i_0] [i_0]) >> (((arr_36 [i_0] [i_0] [i_0]) - 1878261308))))) : ((((arr_10 [i_0] [i_0]) >> (((((arr_36 [i_0] [i_0] [i_0]) - 1878261308)) - 3439373734)))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_36 [6] [i_9] [i_9 + 2])));
            arr_46 [2] [i_0] [8] |= (var_9 && var_9);

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_20 = ((32754 ? -1409 : 108));
                var_21 = (min(var_21, (var_7 + var_9)));
            }
            for (int i_11 = 3; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_22 = var_0;
                var_23 = var_2;
                var_24 = (min(var_24, ((((((!(arr_39 [14] [14])))) % (arr_37 [2] [i_9] [2] [2]))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((var_1 ? var_8 : (arr_10 [i_12] [i_9 - 2]))))));
                            var_26 = (arr_51 [i_9 - 2] [i_0 + 1] [i_11 + 2]);
                            var_27 *= (!var_0);
                        }
                    }
                }
            }
            for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
            {
                var_28 = (max(var_28, var_6));

                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    var_29 = (min(var_29, (arr_44 [i_0] [i_15] [i_9 + 2])));

                    for (int i_16 = 3; i_16 < 21;i_16 += 1)
                    {
                        var_30 = ((((((arr_51 [i_15] [i_9] [i_14 - 2]) ? (arr_22 [i_0] [i_0] [i_14] [i_0]) : (arr_8 [i_0] [i_14 + 3])))) ? var_5 : (arr_14 [i_0] [i_0] [i_0])));
                        arr_62 [i_0 - 1] [i_0 - 1] [i_14 + 1] [i_15] [i_0] [i_14 + 1] [i_16 - 1] = var_4;
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        var_31 = (min(var_31, (((13090 ? 9223372036854775802 : 16532441241680272454)))));
                        arr_67 [i_0] [i_0] = (((arr_38 [i_0 + 1] [i_9] [i_0]) ? var_6 : (arr_38 [i_0 - 2] [i_0 - 2] [i_0])));
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        arr_70 [i_0 - 1] [i_0] [i_15] [i_18] = (arr_32 [i_0 + 2] [i_9] [i_9 - 2] [i_14 - 2]);
                        var_32 = (arr_22 [i_0] [i_9 + 2] [i_14 + 1] [i_9 - 1]);
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                    {
                        arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_7 ? var_6 : (arr_15 [i_0] [i_0] [i_0] [i_14 + 1]))));
                        arr_75 [i_0] [i_9] [i_14] [i_0] [i_19] = (((arr_23 [i_14 - 3] [i_0] [i_0] [i_0 + 2]) < (arr_23 [i_14 + 2] [i_0] [i_0] [i_0 - 2])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_20 = 2; i_20 < 20;i_20 += 1) /* same iter space */
        {
            var_33 = (((((1566605923854867703 ? var_1 : (arr_53 [i_0])))) ? var_0 : (((arr_55 [i_0] [i_20 + 1] [i_20] [i_20] [i_20]) ? var_9 : (arr_54 [i_0] [i_0] [i_0])))));
            arr_79 [i_0] [i_20 + 1] = var_6;
            arr_80 [i_0] [i_0] [i_20 - 1] = var_3;
            var_34 = var_9;
        }
    }
    for (int i_21 = 3; i_21 < 8;i_21 += 1)
    {
        arr_83 [i_21] = var_1;
        var_35 = -9223372036854775803;
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 14;i_22 += 1)
    {

        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {
            arr_89 [14] [i_22] = (((var_9 ? (arr_28 [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22 - 1]) : (arr_56 [i_22] [i_23]))));
            arr_90 [i_22] = (arr_65 [20] [i_22] [i_22 + 1]);
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 15;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 15;i_25 += 1)
            {
                {
                    var_36 = (var_4 ? (var_1 >= var_3) : ((var_4 ? (arr_69 [i_22] [12] [i_24] [12] [i_25] [i_25]) : var_0)));
                    arr_96 [i_24] |= (((arr_26 [i_22] [i_22 - 1] [i_22 + 1] [i_22]) ? var_3 : (arr_26 [9] [i_22 - 1] [i_22 + 1] [i_22])));

                    for (int i_26 = 3; i_26 < 14;i_26 += 1) /* same iter space */
                    {

                        for (int i_27 = 0; i_27 < 15;i_27 += 1)
                        {
                            arr_102 [i_22] [11] [9] [i_24] [i_22] = var_8;
                            arr_103 [i_22] = (arr_61 [i_22] [i_24] [i_24] [i_26] [i_27]);
                        }
                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            var_37 = (!-var_0);
                            var_38 = (arr_60 [i_22] [i_22 - 1] [i_22 - 1] [i_24] [i_26 - 2]);
                            var_39 *= ((var_4 ? var_8 : var_4));
                            arr_107 [i_22] [i_22] [i_25] [i_26 - 2] [i_28] = (((arr_87 [i_26 + 1]) % var_5));
                        }
                        var_40 &= (arr_5 [i_22 + 1] [i_24] [i_24]);
                        arr_108 [i_24] [i_24] [i_24] [0] [i_24] [i_22] = var_3;
                        var_41 = (((3897725966 ? 16375029281952874432 : 1774448605078303244)));
                    }
                    for (int i_29 = 3; i_29 < 14;i_29 += 1) /* same iter space */
                    {
                        var_42 |= ((var_6 ? (arr_56 [i_25] [i_29 - 1]) : ((var_0 ? var_9 : var_7))));
                        arr_111 [i_22] [i_24] [i_22] [i_22 - 1] = var_7;
                    }
                    arr_112 [i_22] [i_24] [i_24] [i_25] = (((((arr_95 [i_22 + 1]) + 2147483647)) << (((((arr_95 [i_22 + 1]) + 1638)) - 4))));
                }
            }
        }
        var_43 = (((134 ? 5 : 134)));
    }
    var_44 = (min(var_44, var_1));
    var_45 = var_7;
    #pragma endscop
}
