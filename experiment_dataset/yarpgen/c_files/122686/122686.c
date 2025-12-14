/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (((!1) / ((0 ? 1 : 65535))));
                                var_20 = 1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_5] [i_1] = (((arr_8 [i_0] [i_1]) % (((1 ? (arr_13 [i_0] [10] [i_0]) : (arr_2 [i_0]))))));

                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_21 ^= ((arr_5 [1] [i_6]) ? var_5 : (arr_8 [i_6] [i_1]));
                            var_22 = (max(var_22, -12));
                            var_23 = (max(var_23, var_10));
                            var_24 = ((1 ? 2319243557395431238 : -2147483646));
                        }
                        var_25 &= ((var_1 ? 16776704 : (arr_18 [i_0] [i_0 - 2] [i_0 - 2] [1])));
                        var_26 = 2147483647;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_27 = (max(var_27, (((((max(16776704, 1099511627775)) + ((((arr_2 [6]) ? var_14 : -1)))))))));
                        arr_21 [i_0 + 2] [i_0] [i_0] [i_0 + 2] = min((min((min(6579113362876365140, 1099511627775)), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7]))), (arr_6 [i_0]));
                    }
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    arr_24 [i_0] [i_1] [i_0] = ((((min((arr_15 [i_8] [i_8] [i_8]), (arr_15 [i_0] [i_0] [i_0 - 2])))) ? (((167 - 1) - ((var_2 ? (arr_13 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0]))))) : 65535));
                    var_28 -= (~var_3);
                    arr_25 [i_0 + 1] [2] [0] &= ((max(4433230883192832, 105)));
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_29 = (arr_14 [i_0] [i_1] [i_9] [i_0]);
                    var_30 = var_17;

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_31 &= 4294967293;
                        var_32 = (((arr_27 [i_0] [i_1]) - (arr_5 [i_0 + 2] [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_9] [i_0] [i_0] = (((arr_33 [i_0] [i_0 + 1] [i_0 + 2]) % (arr_33 [i_0] [i_0 - 1] [i_0 + 2])));
                        var_33 = (min(var_33, (((((((arr_22 [7]) ? (arr_15 [i_0] [i_1] [1]) : (arr_9 [i_0] [i_1] [0] [i_11])))) ? (var_15 + 18442310842826358785) : (arr_10 [i_0] [i_0] [i_1] [i_1] [i_9] [i_1]))))));
                        var_34 &= (6869 ? ((var_17 ? (arr_28 [6] [14]) : (arr_13 [1] [i_1] [6]))) : (arr_29 [i_9] [i_9] [10] [i_9]));
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_35 = ((~(arr_9 [i_0] [i_1] [i_0] [i_12])));
                        var_36 = (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0 + 1]) : ((1 ? (arr_30 [i_12] [i_12] [i_0] [i_12] [i_12]) : 1))));
                        var_37 = (((arr_13 [i_0] [1] [i_0]) ? 844424930131968 : var_6));

                        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            arr_42 [i_9] [i_0] [i_0] = -1058614173;
                            var_38 = ((((((arr_14 [i_0] [i_1] [i_9] [i_12]) | (arr_39 [i_0] [i_0] [i_9] [i_12] [i_0] [i_13])))) ? (arr_17 [i_0] [i_0] [i_0]) : ((var_0 ? var_5 : var_13))));
                            var_39 &= ((-((var_2 ? 18446744073709551615 : 1))));
                            var_40 = var_10;
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                        {
                            var_41 = (((((arr_40 [i_0] [i_0] [i_0] [i_0] [i_14]) * (arr_5 [i_1] [i_0]))) / (((14789 ? -9223372036854775793 : (arr_28 [i_0] [i_14]))))));
                            var_42 -= var_5;
                        }
                    }
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_43 -= ((((((arr_7 [i_0] [i_0] [i_0]) ? (arr_2 [i_15]) : (arr_12 [14] [i_1] [i_9] [i_15] [i_1])))) ? (arr_12 [i_0] [i_1] [10] [i_15] [i_15]) : (arr_19 [i_15])));
                        arr_49 [1] [i_1] [i_1] [i_0] = (((((-(arr_15 [1] [1] [i_9])))) ? (arr_36 [i_1] [i_0] [i_1]) : (arr_39 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
                        var_44 = ((-(arr_27 [i_0] [i_1])));

                        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                        {
                            var_45 = (arr_8 [i_0] [i_0 - 1]);
                            var_46 ^= (arr_48 [i_0 - 1]);
                        }
                        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                        {
                            var_47 = ((-127 ? (var_7 / 4294967295) : var_1));
                            var_48 &= (((arr_19 [i_15]) ? (arr_19 [i_15]) : (arr_19 [i_15])));
                            arr_55 [i_0] = var_9;
                        }
                    }
                    var_49 = (18442310842826358788 ? (arr_34 [i_0] [i_0 - 2] [i_0] [i_0 - 1]) : -126);
                }
            }
        }
    }
    #pragma endscop
}
