/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        var_19 *= (arr_0 [i_0 + 2]);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_20 = ((((+(((-751905236 + 2147483647) >> (((arr_0 [14]) + 81)))))) < (min(((max(var_5, (arr_10 [i_1 + 2] [i_2] [i_3])))), var_6))));
                    var_21 -= (arr_7 [i_1] [i_2] [i_1]);
                    arr_12 [i_1] |= (max((min((arr_4 [i_1]), ((((arr_7 [i_3] [i_2] [i_1]) * (arr_0 [i_3])))))), ((var_6 ? (arr_8 [i_1] [i_2]) : (arr_0 [i_1])))));
                    var_22 -= (arr_8 [i_2] [i_1]);
                }
            }
        }
        arr_13 [i_1 - 1] = (arr_8 [2] [2]);

        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            arr_17 [i_1] [i_4] = (min((((((9007627027510717541 ? 33 : -9007627027510717553)) > (var_1 / 76)))), 25));
            arr_18 [i_4] [i_1] [5] = (((((min(var_4, 24)))) || (((((var_14 ? -9007627027510717550 : var_5))) && (((var_2 ? 54 : 6034245850632548117)))))));
            var_23 = (max(var_23, (((2935763021 ? -1 : (((arr_8 [i_1 - 1] [7]) / (arr_8 [i_1 - 1] [i_1 - 1]))))))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_24 -= var_5;
                var_25 = (((arr_20 [1] [2] [i_5]) ? 32760 : (((arr_20 [2] [i_4] [2]) ? (arr_1 [i_4] [i_5]) : 1))));
            }
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                var_26 = (min((((arr_21 [i_4] [10] [i_4 - 1]) ? var_9 : (arr_20 [2] [2] [i_4 - 1]))), (arr_20 [8] [i_1] [i_4 - 1])));
                var_27 = (1359204274 || ((max((((2935763022 ? (arr_11 [i_6 + 3] [i_6] [i_4 - 3] [i_1 - 3]) : 1))), ((280925220896768 ? (arr_0 [i_1]) : 280925220896772))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_28 = (min(var_28, (((((max(((1359204282 ? var_6 : -32758)), (min(117, (arr_11 [i_8] [i_7] [i_6] [i_4])))))) != (max(751905236, (arr_4 [i_6 - 1]))))))));
                            var_29 *= ((2935763016 * ((-(arr_23 [i_7] [i_7] [i_7] [i_7])))));
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                var_30 = var_1;
                var_31 = var_11;
            }

            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                arr_37 [i_4] [2] [i_10] [i_1] = (min((((arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 3]) - -5646211788066544895)), (10111 == 138)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_32 -= ((((max(1, (arr_5 [i_1] [8] [i_11])))) & (~32764)));
                            var_33 *= ((-(18446744073709551612 | var_12)));
                            var_34 = (((!5728238151158009767) / (max(var_15, var_16))));
                            var_35 = var_1;
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_36 = (((!0) && ((((((0 >> (5646211788066544872 - 5646211788066544857)))) ? (max(var_4, 1)) : (arr_23 [i_1 + 2] [i_1 + 2] [i_13] [i_13]))))));
            var_37 = (min(var_37, var_16));

            for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
            {
                var_38 -= (max((((arr_1 [i_1] [i_1 + 1]) ? (arr_1 [i_1 + 2] [i_13]) : (arr_1 [i_14] [i_14]))), (max((arr_1 [i_1 - 3] [i_1]), (arr_1 [i_13] [i_14])))));
                var_39 ^= (+(((arr_35 [1] [i_1] [i_1 - 3] [i_1]) * (arr_35 [i_1] [i_1] [i_1 + 2] [i_1]))));
                var_40 = (((arr_4 [i_14]) - (arr_16 [i_1 + 2] [1] [i_14])));
                var_41 -= (arr_22 [i_1] [i_1] [i_1]);
            }
            for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
            {
                arr_48 [i_15] = (arr_39 [i_1] [i_13] [i_15]);
                var_42 -= (arr_1 [i_1] [i_1]);
                var_43 = (min(var_43, (arr_23 [i_1] [i_1] [i_15] [i_15])));
            }
        }
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_44 = (max(var_44, var_8));
        var_45 = (max(127, -14));
    }
    var_46 = 54;
    var_47 = (5885502936814376314 % 119);
    #pragma endscop
}
