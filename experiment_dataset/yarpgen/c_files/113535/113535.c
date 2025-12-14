/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max(((-(arr_3 [i_1] [i_0] [8]))), ((max(var_11, ((min(var_5, (arr_0 [i_1]))))))))))));
                var_15 = ((arr_3 [i_0] [i_0] [i_1]) ? ((-(min(var_0, (arr_3 [i_1] [i_0] [i_0]))))) : (arr_3 [i_0] [i_1] [i_0]));

                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_16 |= (((((var_9 ? (((min(5, var_3)))) : (max(var_12, -785571146260075307))))) ? 171 : (min(153, (min(var_13, var_0))))));
                    var_17 = var_4;
                    var_18 = ((~(arr_1 [i_1])));
                    arr_9 [i_0] [i_0] [i_0] = (min((((((arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]) + 9223372036854775807)) >> (4095 - 4074))), (32640 % 3250491825)));
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_19 *= (arr_6 [i_1] [i_0]);
                    arr_12 [i_0] [i_3 - 1] = (((((((992 ? 1346930778 : -2067628252)) + 3))) ? 157 : 3526504541));
                    var_20 = (((((arr_5 [i_0] [i_1] [i_0]) != -2377021636521594006)) ? ((-129740067 ? ((108238877 ? 110 : (arr_7 [i_0] [i_1] [i_0]))) : 1)) : 2353794772));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] = (((arr_14 [i_4]) ? (arr_14 [i_4]) : var_3));
        var_21 = var_0;
        var_22 *= ((var_7 >= (~var_1)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_28 [i_8] [i_8] [i_7] [i_7] [i_8] [i_8] = -var_8;
                        var_23 = ((-(arr_25 [i_8] [i_8] [i_8 - 1])));
                        var_24 = (max(var_24, (~var_2)));
                        var_25 = var_7;
                        arr_29 [i_8] [1] [5] [5] [1] = ((arr_27 [i_8 - 1] [i_8] [i_8] [i_8]) ? (arr_27 [i_8 - 1] [i_8] [i_8 - 1] [i_8]) : (arr_27 [i_8 - 1] [i_8] [i_8] [i_8]));
                    }
                }
            }
            var_26 = (arr_17 [i_5] [i_6]);
            arr_30 [i_6] [12] [i_5] = (arr_20 [i_5] [i_5]);
            var_27 = (((arr_17 [i_6] [i_6]) ? 3366 : 7));
        }
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_39 [i_5] [i_9] [i_10] [i_11] = ((3195202600 >> (var_12 + 108490137)));
                        arr_40 [i_10] = ((-var_13 > ((((-(arr_22 [i_11] [i_9]))) & ((var_8 ? (arr_38 [i_10]) : var_3))))));
                        var_28 ^= min((((~(275221340 > var_5)))), (min((arr_33 [i_5] [i_9 + 1] [i_10]), (arr_33 [i_5] [i_9 - 4] [18]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_29 = -3307683054;
        var_30 = (min(var_30, (arr_41 [i_12] [i_12])));
        arr_45 [i_12] [17] = var_6;
        var_31 = (min(var_31, (arr_43 [i_12])));
        var_32 = ((4186728418 ? (arr_42 [i_12] [i_12]) : (arr_43 [i_12])));
    }
    for (int i_13 = 3; i_13 < 12;i_13 += 1)
    {
        var_33 = -4186728412;
        var_34 = ((var_9 ? var_1 : (((arr_33 [i_13] [i_13] [i_13]) + (((min(var_1, (arr_25 [i_13] [i_13 + 3] [i_13])))))))));
    }
    #pragma endscop
}
