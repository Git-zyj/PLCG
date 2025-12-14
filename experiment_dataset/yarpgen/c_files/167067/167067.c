/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((((~(((var_7 + 2147483647) << (var_17 - 23411))))) + 2147483647)) >> ((((~((-275577161 ? -32760 : var_1)))) - 32741))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = 0;
        var_22 -= ((((min((arr_0 [i_0]), (!var_10)))) ? ((-255 ? (max(var_18, 128)) : (((arr_0 [i_0]) % 255)))) : (arr_1 [i_0])));
        var_23 = (min(var_23, (((var_2 / ((65523 ^ (arr_0 [i_0]))))))));
        var_24 = (max(var_24, (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_25 = (min(var_25, (min((((-9223372036854775807 - 1) ? var_7 : (min(var_19, var_18)))), (23 || -1)))));
            var_26 *= 25;
            var_27 &= (min(1023, (((!(((65525 ? (arr_0 [i_1]) : (arr_2 [i_1] [i_1])))))))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] = ((((var_19 ? ((var_5 ? var_4 : (-9223372036854775807 - 1))) : (((min(var_3, var_2)))))) < (~65526)));
            var_28 += (((105 ? 255 : 7359308184618859314)));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_29 = (min(var_29, ((min((min((arr_0 [i_4]), ((var_17 ? var_14 : var_11)))), (arr_14 [i_4]))))));
            var_30 = (((((0 ? (arr_9 [i_1] [i_1]) : (arr_8 [13])))) ? (((arr_1 [i_1]) ? (((!(arr_1 [i_4])))) : ((1073739776 ? 7680 : 48)))) : (arr_2 [i_1] [i_1])));
            var_31 = (min(var_31, ((((arr_12 [i_1] [i_1] [i_1]) ? (((255 >= (min(var_18, 3220958842376627352))))) : (arr_9 [6] [i_1]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                var_32 *= -7359308184618859319;

                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_33 = (max(var_33, ((((((var_7 ? (arr_12 [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_1] [i_1])))) ? -var_19 : var_1)))));
                    arr_23 [4] [8] [8] [i_5] [i_1] = var_9;
                    var_34 += var_17;
                    var_35 *= (var_11 ? (arr_8 [i_6 - 4]) : (arr_19 [i_1 - 2] [i_1 - 2] [i_6 - 2]));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_5] [i_6 - 4] [1] [1] [1] [i_5] = 63;
                    var_36 -= var_14;
                    var_37 = ((~(arr_21 [i_6 + 1] [9] [i_1 + 1] [i_8])));

                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_5] = (!var_19);
                        arr_31 [i_5] [i_8] [i_5] = (((((var_6 ? 2 : (arr_21 [i_1] [i_1] [1] [i_1])))) ? ((((arr_14 [i_5]) ? (arr_24 [i_1] [1] [1] [i_1] [i_8] [i_9]) : var_19))) : (arr_22 [12] [i_6 - 3] [i_5] [7] [7])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_38 = var_4;
                        arr_35 [i_5] [i_5] = ((-var_17 ? ((((var_9 == (arr_18 [i_5] [i_5]))))) : ((var_14 ? (arr_22 [i_1 - 1] [i_5] [i_6] [i_8] [14]) : (arr_21 [i_1] [i_1 - 1] [i_1 - 1] [i_1])))));
                        var_39 = ((var_12 ? (arr_12 [0] [i_1 - 2] [i_6 - 2]) : (arr_12 [i_1] [i_1 + 1] [i_6 - 1])));
                        var_40 = (min(var_40, var_12));
                        arr_36 [i_6] [i_5] [i_6] [i_5] [i_1] = (arr_34 [i_6] [i_6] [1] [i_6] [1] [i_5] [i_6]);
                    }
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_40 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5] [i_1 + 1] = (((arr_34 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1] [i_5] [i_5]) ? 2047 : var_18));
                    arr_41 [i_5] [i_5] [i_5] [i_5] [i_11] [i_11] = ((((var_8 ? (arr_33 [i_1] [i_1] [i_1] [i_5]) : var_13)) != 12));
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_41 += ((-31022 ? (((arr_24 [i_1] [i_5] [i_12] [i_13] [i_13] [i_14]) * 150)) : (arr_45 [i_14])));
                            var_42 = 2013265920;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 3; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    {
                        var_43 -= ((~(arr_33 [i_1] [2] [i_15] [i_1])));
                        var_44 = (((arr_13 [i_15 + 2] [i_16 + 1] [i_1 - 1]) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2])));
                    }
                }
            }
            var_45 = (max(var_45, var_4));
            arr_54 [i_1] [i_1] &= (((arr_15 [i_1] [i_1 - 2]) ? var_9 : 1));
        }
        var_46 *= (min(55728, ((((((arr_12 [i_1 + 1] [i_1 + 1] [4]) ? (arr_2 [i_1] [i_1 + 1]) : 151))) ? (min(-7359308184618859315, 151)) : (arr_24 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1])))));
    }
    #pragma endscop
}
