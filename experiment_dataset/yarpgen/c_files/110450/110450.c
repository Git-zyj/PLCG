/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= min(var_10, var_12);
    var_17 = ((var_12 ? (max(var_4, (max(1152921504606846975, var_2)))) : var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (min((min((var_14 >= var_12), 1922665825779865727)), 58));
        var_20 = var_0;
        var_21 = (max(var_21, (((((min(var_4, 40)) / var_3)) << (((((((var_14 ? var_15 : var_14))) ? var_1 : (arr_1 [i_0]))) - 3535267151011718652))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [12] [i_1] = (max(var_1, (((-110 ? -127 : -58)))));
        var_22 = (min(var_22, (((var_2 ? (min((arr_2 [i_1]), (var_13 & var_2))) : var_12)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_23 = (min(((var_15 ? (arr_8 [i_3] [i_2] [i_3] [i_2]) : var_12)), (((!var_12) * (arr_9 [i_1] [i_3] [i_3] [i_3])))));
                var_24 = (max((((min(1, 1)))), ((-(arr_9 [i_3] [i_3] [i_3] [3])))));
                var_25 += ((-(arr_7 [i_1])));
            }
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_26 ^= (((((var_15 || ((((arr_10 [i_1] [i_1] [i_1]) ? var_10 : var_8)))))) >> ((((var_8 / (1 <= 45))) - 198155442495059864))));
                var_27 = (max(var_27, (((var_6 ? (arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 2]) : var_11)))));
                arr_12 [i_1] [i_4] = (((((((9223372036854775807 ? 0 : 1))))) ^ (min((-9223372036854775807 - 1), 102))));
            }
            arr_13 [i_1] [i_2] [i_2] = min(((-(arr_11 [i_1]))), (((var_2 ? var_6 : var_6))));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_17 [i_5] [i_5] = (~-38);
                arr_18 [i_1] [i_1] [i_1] = ((~(min(((1 ? var_2 : var_0)), 1))));
            }
        }

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_24 [i_7] [i_7] [i_7] = ((((min((arr_23 [i_6 + 1] [i_6 + 1] [i_6] [i_6]), (arr_9 [i_6 - 2] [i_1] [i_6 - 2] [i_6 - 2])))) ? var_10 : (arr_23 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6 - 3])));
                var_28 = var_7;
                var_29 = (((arr_10 [i_1] [i_1] [i_1]) | var_7));
            }
            arr_25 [i_1] [i_6] [i_6 - 3] = (min((arr_6 [i_6 - 3] [i_6 - 3] [15]), (min(((var_2 ? var_13 : var_7)), 127))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_30 = -68;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_35 [i_1] [i_8] [i_10] [i_11 + 1] [i_8] = min(var_1, (((((max(var_9, var_14))) && var_5))));
                            var_31 = min((min(var_8, (arr_22 [i_1] [i_1] [i_1]))), var_6);
                            var_32 = ((((arr_11 [i_10]) <= 0)) ? (((min(40, 50)))) : ((var_9 ? 9 : var_8)));
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_33 = var_2;
                            var_34 = ((var_9 ? (arr_3 [i_13]) : ((max(var_15, var_4)))));
                            var_35 ^= var_11;
                        }
                    }
                }
                arr_44 [i_8] [i_12] [i_8] [i_8] = -var_12;
                var_36 *= ((((0 || (((1 ? 52 : 0))))) ? ((3 >> (3862925118382589671 - 3862925118382589641))) : ((~(arr_9 [i_1] [i_1] [i_1] [i_1])))));
            }
            var_37 = ((var_6 | var_2) ? (min((arr_15 [i_1] [i_1] [i_1] [i_8]), var_10)) : (max(var_9, (arr_15 [i_1] [i_1] [i_1] [i_8]))));
            arr_45 [i_8] = (((((arr_15 [i_1] [i_1] [i_8] [i_8]) ? var_0 : var_1))) ? (min((arr_15 [i_1] [1] [4] [i_1]), -18)) : (var_10 >= var_11));
            var_38 = max((((arr_26 [i_8] [i_8] [i_1]) ? -7587245915261506390 : 126)), (arr_37 [i_1] [i_8] [i_1] [i_1]));
        }
    }
    for (int i_15 = 4; i_15 < 9;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 12;i_18 += 1)
                {
                    {
                        var_39 = (((0 ? var_11 : var_2)));
                        var_40 = (max(((((min(var_11, (arr_37 [i_18] [i_17] [i_16] [i_18])))) ? 7039957193926732402 : (arr_57 [i_15 + 1] [i_15 + 2] [i_18] [i_18]))), ((min((1 ^ 1), (arr_46 [i_15 + 3] [i_16]))))));
                        arr_58 [i_18] [i_18] = (min(((min((arr_33 [i_15] [i_15] [i_18] [i_18] [i_16]), (arr_33 [i_15] [i_15 - 4] [i_15 + 4] [i_15 - 4] [1])))), ((var_6 ? var_15 : (arr_33 [i_17] [i_17] [i_17] [i_17] [i_17])))));
                        var_41 -= ((((min((min(-9223372036854775795, -40)), ((var_15 ? (arr_40 [i_15 - 1] [i_16] [i_17] [i_16] [i_15 - 1]) : -38))))) ? ((((((arr_26 [i_15 - 2] [i_16] [i_18]) % 1))) ? -1 : var_0)) : (min((min(-40, var_8)), (arr_48 [i_17])))));
                    }
                }
            }
            var_42 ^= (((((var_13 ? (arr_19 [i_15]) : 30))) & (arr_22 [i_15] [i_15] [1])));
        }
        var_43 = (min((var_6 ^ var_14), ((min(127, var_15)))));
    }
    var_44 = ((~(!var_9)));
    #pragma endscop
}
