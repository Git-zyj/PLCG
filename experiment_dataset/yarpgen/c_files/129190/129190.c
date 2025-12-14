/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_12 = var_4;
                            var_13 = (arr_4 [i_0 - 1]);
                            arr_13 [i_2] = -1;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [6] [i_0] = ((((((arr_7 [i_0] [i_0 + 1] [i_2 + 2]) ^ var_3))) ? ((~(arr_2 [i_0 - 1] [i_2 + 3] [i_2]))) : var_4));
                            var_14 = ((min(-14064, var_2)));
                            var_15 -= (((arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]) ? (-508958682393947626 == 0) : (min(((~(arr_1 [i_5]))), ((-(arr_3 [i_0 + 1] [i_0])))))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_16 = (max(var_16, var_10));
                            var_17 = (max(var_17, ((max((max(((((arr_19 [i_1] [i_3] [6] [i_1] [12] [i_1]) ? (arr_4 [19]) : var_4))), -var_0)), (((-(arr_14 [i_0 - 1] [1] [i_0] [i_1] [i_2 + 3] [i_2 + 4])))))))));
                            var_18 = (arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1]);
                            arr_22 [i_0] [i_2] [i_2] [i_3] [i_0 - 1] [i_2 + 3] = (~-508);
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_26 [i_0 - 1] [i_1] [i_2] [i_3] [i_7] = var_0;
                            arr_27 [i_0 + 1] [i_2] [i_2] [i_0 + 1] [i_7 + 2] = var_8;
                            var_19 = var_4;
                            var_20 = var_6;
                        }
                        var_21 = (min(var_21, (((~(arr_7 [i_1] [i_2 + 2] [i_3]))))));
                    }
                }
            }
        }
        var_22 = ((var_8 ? (max(((var_9 ? var_10 : (arr_24 [9] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))), (-1827722549 == 2228382759))) : var_9));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_23 = (arr_3 [i_10 - 2] [i_0 - 1]);
                        arr_35 [i_0] [i_8] [i_0] [i_8] [i_8] [15] = 629;
                    }
                    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (arr_24 [i_0 - 1] [i_8] [10] [i_11 + 2] [1])));
                        var_25 = var_3;
                        var_26 = -1184399209;
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_27 = var_7;
                        arr_41 [i_8] = (arr_21 [i_0 + 1] [i_8] [1] [i_8] [i_8] [19]);
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_44 [i_8] = (((arr_28 [i_0] [i_8] [i_13 - 1]) ? 128 : (arr_31 [i_0 - 1] [i_0 - 1] [i_13 - 1])));
                        var_28 = (arr_20 [i_0] [i_8] [i_8] [i_9] [i_9] [i_13]);
                        var_29 = (min(var_29, (((var_3 << (((arr_5 [i_13 - 2]) - 20595)))))));
                        var_30 = var_9;
                    }

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_31 = ((((((min(var_10, (arr_18 [14] [i_8] [i_9] [18] [i_9] [12] [3])))) ? (((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : 1)) >> -0));
                        var_32 = (0 | -10142);
                    }
                }
            }
        }
        var_33 = (max(var_33, (min(((min((arr_6 [i_0 - 1]), var_6))), ((~(arr_29 [12] [i_0])))))));
    }
    var_34 = -71;

    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_35 = (min((((((var_1 << (285309050 - 285309042)))) ? ((min(var_6, var_3))) : var_4)), (arr_47 [2] [i_15])));
        var_36 = ((((min((max(65027, var_10)), (-127 - 1)))) ? (((-14064 + 2147483647) >> (3302501339 - 3302501321))) : 65408));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    {
                        arr_61 [i_15] [i_15] [i_16] [21] [i_18] [i_18] = (min(((min((arr_51 [i_18]), (arr_51 [i_18])))), -17));

                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                        {
                            var_37 = 0;
                            var_38 = (min(var_38, (((!((var_5 >= (arr_58 [i_16]))))))));
                        }
                        for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                        {
                            arr_69 [i_18] [i_16] [i_20] = 1;
                            var_39 += ((var_6 & ((~(arr_64 [i_15] [i_16] [i_17] [i_18] [i_20])))));
                            arr_70 [19] [i_16] [i_16] [i_18] [i_15] [i_15] = var_2;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_21 = 3; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 3; i_22 < 23;i_22 += 1)
            {
                {
                    var_40 = (min(((1827722544 >> (25606 - 25586))), var_8));
                    arr_75 [i_15] [21] [i_22] = var_7;
                }
            }
        }
    }
    var_41 = var_1;
    var_42 ^= 15956306697686137768;
    #pragma endscop
}
