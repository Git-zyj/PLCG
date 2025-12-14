/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_5 ? 18446744073709551615 : var_6))), (((((var_1 ? 0 : var_5)) & (~var_6))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max((max(331589897, (arr_2 [i_0]))), (arr_1 [i_0 + 1])))));
        var_14 = (((max((max((arr_2 [i_0]), (arr_2 [i_0]))), (arr_1 [i_0]))) << (((max((max(331589904, var_6)), 3963377387)) - 331589899))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 = 331589921;

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_16 = (min(var_16, (((max((max(var_2, (arr_9 [i_1] [i_2] [i_2])), (arr_7 [i_1 - 1]))))))));
                        var_17 ^= (max((((!((max(var_2, var_10)))))), var_0));
                    }
                }
            }
            var_18 = (max(var_18, -25575));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            arr_16 [i_5] [5] [i_5] = ((-(min((185 - 3963377398), (~-550471627)))));
            var_19 = (((((3963377398 ? 3963377373 : (-9223372036854775807 - 1)))) ? -25588 : ((min((var_1 > var_3), (arr_6 [i_1]))))));
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_20 &= (arr_14 [i_1] [i_6 - 2] [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            arr_26 [i_1 - 1] [i_6] [i_7 + 1] [i_8] [i_7] = (((~(arr_13 [i_1 + 1] [i_6 - 2] [1] [i_8] [i_9 - 1]))));
                            var_21 = ((((550471603 == ((25587 ? 331589908 : 67))))));
                            arr_27 [19] [i_6] [i_7] [i_8] [i_7] = var_11;
                        }
                        var_22 += 4769273289760634021;
                        var_23 = var_10;
                        var_24 += (((~(arr_19 [i_1] [i_6 - 3] [i_6 - 1] [i_7 + 1]))) ^ (((((var_9 ? var_4 : (arr_11 [i_1 + 1] [i_6] [i_6] [2] [i_8] [11]))) > (arr_9 [i_8] [19] [3])))));
                        var_25 = ((!(((((max(25594, -25603))) ? (6 | -25576) : 25598)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_26 -= ((!(((+(((arr_34 [i_1]) - var_8)))))));
                            arr_36 [i_6] [i_10 + 3] [i_11] [i_11] = (arr_14 [i_11 + 3] [i_12] [i_11 + 3]);
                        }
                    }
                }
            }
        }
        for (int i_13 = 3; i_13 < 20;i_13 += 1) /* same iter space */
        {
            var_27 -= (max(((-(var_9 / var_2))), (arr_11 [i_1] [i_1] [i_13] [i_13 + 1] [i_13] [i_13 - 1])));
            arr_40 [i_13] = (((max(((((arr_34 [i_13]) || (arr_8 [i_1] [i_13] [i_13])))), (((arr_33 [i_13] [i_13 - 1] [i_13] [i_13] [10]) + var_10)))) > 8));
            arr_41 [i_13] = (arr_4 [i_13]);
            var_28 = (((((((arr_31 [i_13] [i_1] [i_1]) ? 39 : 1)))) ? (((26 ? -12 : -124))) : (max((~1), -var_1))));
            var_29 = (max(var_29, (((((!(!1))) ? -25573 : (~var_1))))));
        }
        var_30 |= ((~(((5595480665392685749 ^ 0) ? (arr_7 [i_1]) : var_0))));
        var_31 = (min(var_31, ((((((~-var_3) + 2147483647)) << ((((((((1 && (arr_12 [13] [i_1] [i_1 - 2] [i_1])))) < (arr_18 [i_1 + 1] [i_1 - 1])))) - 1)))))));
        var_32 |= -1973380731;
    }
    for (int i_14 = 2; i_14 < 20;i_14 += 1) /* same iter space */
    {
        var_33 = (max((max((max(var_4, 9223372036854775807)), (arr_29 [i_14]))), (((((min((arr_34 [i_14]), 25603))) ? (arr_28 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 1]) : (max(var_10, var_7)))))));
        var_34 = ((-(max(var_12, (arr_13 [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14])))));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 13;i_15 += 1)
    {
        var_35 -= (!(var_6 | var_12));
        arr_48 [i_15] [i_15] = (((-9223372036854775807 - 1) ^ 1));
    }
    var_36 = var_7;

    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        var_37 = (max(var_37, var_5));

        for (int i_17 = 3; i_17 < 23;i_17 += 1)
        {
            arr_55 [i_16] [i_17] = (max(((-10805 ? 1 : ((1 ? (arr_51 [i_16] [i_16]) : 15755455354989406669)))), ((max(var_0, (arr_54 [i_16] [i_17 + 1] [i_17]))))));
            var_38 = (((((min(-10802, (arr_52 [i_17 - 1]))) + 9223372036854775807)) << (105 - 105)));
        }
        arr_56 [i_16] [i_16] |= (min((((var_9 / 230) ? ((var_8 / (arr_53 [i_16] [i_16]))) : (var_8 | 160))), ((max(((max((arr_51 [i_16] [i_16]), 79))), ((var_11 ? (arr_50 [i_16]) : var_1)))))));
    }
    #pragma endscop
}
