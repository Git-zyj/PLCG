/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [4] [i_1 + 1] [3] = 85247545509298063;
                    var_19 = (max(var_19, (((-((-(arr_3 [i_0] [i_1 - 2]))))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((-(((!((min((arr_3 [i_0] [i_3]), (arr_6 [i_0] [i_1 - 1] [i_4] [i_4]))))))))))));
                            arr_14 [i_4] [i_1] [i_1] [i_0 + 1] &= ((((min(4011443881, 183))) ? 1250989709245249479 : ((((~57664) ? 283523397 : (((min(var_16, 0)))))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_21 = (min((((arr_5 [i_0] [i_0] [i_0] [i_5]) ? (arr_5 [i_0] [i_0] [12] [i_5]) : var_0)), ((7917 ? var_14 : (arr_16 [i_1 - 2] [i_1] [0] [i_1 + 1])))));
                    var_22 = (arr_6 [i_5] [i_5] [i_5] [i_0 + 1]);
                    arr_17 [i_1] [i_1 - 2] [i_1] [12] &= ((113 ? (((1740229082512042897 == var_11) ? (min(3892028992266160342, -32763)) : (((-(arr_10 [i_1] [i_1 - 1] [i_5])))))) : 10));
                    var_23 = (min(var_23, (((~((~((-62 ? 57619 : var_10)))))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_24 &= ((arr_1 [3] [1]) ? (arr_1 [i_5] [i_7 + 1]) : var_9);
                            arr_24 [i_0] [i_0] [i_5] [i_6] = ((arr_21 [i_0] [i_7 + 3] [i_5] [i_1 - 1]) ? 31257 : 14);
                            var_25 = (arr_1 [i_7 + 1] [i_1]);
                        }
                        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_8] [i_8 - 1] [i_8] [i_6] [i_5] [i_1 - 2] [12] = ((var_10 ? (arr_11 [i_0] [i_0] [i_0 - 1] [i_8 - 1]) : (arr_18 [i_0 - 1] [7] [i_0 - 1])));
                            var_26 = (min(var_26, ((((arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? ((-9223372036854775785 ? 1845896432 : 42)) : var_0)))));
                            var_27 = (min(var_27, -9223372036854775787));
                            var_28 ^= 34253;
                        }
                        for (int i_9 = 4; i_9 < 11;i_9 += 1)
                        {
                            var_29 = (max(var_29, var_0));
                            arr_31 [i_1] [i_1 - 1] [i_1] [8] [2] [i_1] = 49060;
                        }
                        arr_32 [i_5] [i_5] = var_13;
                        var_30 *= (((arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [5]) ? var_10 : var_3));
                    }
                }
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    var_31 = (max(var_31, ((min((!7), -6605)))));
                    var_32 ^= (min((min((min(var_9, 0)), (var_11 || 0))), (var_4 >= -14087)));
                    var_33 |= (((arr_6 [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 - 1]) ? ((min((min(31282, var_1)), (arr_12 [12] [i_1] [i_10 + 1] [i_0])))) : (arr_28 [i_10] [i_0] [i_0] [5] [i_0 - 1] [i_1])));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_34 ^= var_5;
                    var_35 = var_13;
                    var_36 = (min(3, ((((!var_14) ? -1073741824 : -28907)))));
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_42 [i_12] [i_1] [i_0] [i_0] &= (max((arr_35 [i_0] [i_12]), 6469));
                    arr_43 [4] = (((min((arr_4 [i_1 + 1] [i_12] [i_12]), 14209)) / (4011443886 * var_9)));
                    arr_44 [i_0] = 4075340094;
                }
            }
        }
    }
    var_37 = ((((min((min(29676, 12500167714923397990)), (-30485 ^ 127)))) ? var_5 : var_2));
    var_38 &= (min(((-2861914690 ? -27379 : (max(57842, 18446744073709551608)))), ((min(var_3, 34252)))));
    var_39 ^= (min(var_6, var_16));
    #pragma endscop
}
