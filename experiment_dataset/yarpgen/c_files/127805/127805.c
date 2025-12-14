/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] &= (arr_8 [i_0] [i_0] [i_2]);
                    arr_10 [i_0] = (!0);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_0] [i_0] = ((((((arr_12 [i_1] [i_0]) ? 1627616748 : var_2))) ? 1627616748 : ((((arr_2 [i_0] [i_0]) && (arr_11 [i_0] [i_1] [i_1] [i_3 - 2]))))));

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_17 = (max(var_17, (arr_8 [i_0 - 3] [i_1 - 2] [i_3 - 3])));
                        arr_18 [i_0] [i_3] [i_1] [i_0] = (arr_12 [i_3] [i_0]);
                        arr_19 [i_0 + 1] [7] [i_3] [i_3] [i_3] [i_0] = ((32 ? (arr_0 [i_0]) : ((var_14 ? (arr_15 [i_4]) : (arr_16 [i_1])))));
                    }
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1] [12] [i_0] = (arr_1 [i_0]);

                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] = (((arr_11 [i_3] [i_3 - 2] [i_3 - 3] [i_3 - 1]) ? (((arr_23 [i_6 - 1] [i_5] [i_3] [i_1] [i_0]) ? (arr_11 [9] [12] [6] [12]) : 42)) : var_6));
                            arr_26 [i_1] [2] [i_5] [i_3] [i_1] [i_1] [i_1] |= (arr_11 [5] [i_1 + 1] [i_5 - 1] [i_6]);
                            var_18 = -35;
                            var_19 = (min(var_19, var_12));
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_0] = var_2;
                            arr_32 [i_1 - 2] [i_1] [i_0] [11] [i_1] [7] = 1627616748;
                        }
                        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] = ((~(!var_7)));
                            var_20 = (max(var_20, (((!(!-452686356))))));
                        }
                        var_21 = 219;
                    }

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_38 [i_0] [i_1 + 1] [i_3 + 1] [i_3 + 1] [i_0] = (((arr_1 [i_0 + 2]) & -340935682055905869));
                        var_22 |= (arr_1 [i_1 - 1]);
                    }
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        arr_41 [i_0] [i_0] = (((arr_11 [0] [i_1 + 1] [i_3] [i_3]) ? (~var_12) : var_10));
                        var_23 = ((~(arr_30 [i_0 + 2] [i_1 - 1] [i_3 - 1])));

                        for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            arr_44 [i_11] [i_0] [i_0] [i_1] = (arr_11 [i_1] [i_1] [i_3 - 2] [i_10]);
                            var_24 = arr_17 [6] [6] [6] [i_10];
                            var_25 = (min(var_25, (!17328)));
                        }
                        for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, 0));
                            arr_48 [i_12] [i_0] [i_3] [i_1] [i_0] [i_0] = (((((var_10 ? (arr_6 [1]) : -1))) ? (-2147483647 - 1) : var_8));
                        }
                        for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_0 + 3] [i_0] [i_0 - 3] [i_1 - 2] [i_3] [i_0] [i_13] = ((((((arr_23 [i_0] [i_1] [i_1] [i_10] [0]) - -4408147987203925593))) ? (arr_2 [i_0] [i_1]) : 205));
                            arr_52 [8] [8] [i_3] [i_0] [i_13 + 1] = ((var_7 % ((193 | (arr_1 [i_3])))));
                        }
                    }

                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, ((((var_9 ? -9223372036854775798 : var_13))))));
                        var_28 |= ((42852 ^ (arr_2 [i_1] [i_1])));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [i_0] [i_3] [i_3 + 1] [1] = (((var_0 != var_7) ? 466803603 : (((arr_6 [i_0]) ? var_9 : 452686356))));
                        arr_59 [i_0] [i_0] = (var_0 ? ((var_5 ? var_9 : (arr_37 [i_0] [i_0] [i_1] [i_0] [1]))) : 1627616764);
                    }
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        var_29 = 524287;
                        arr_63 [i_0] [i_0] [i_0] [i_0] = (-9223372036854775807 - 1);
                        var_30 = (max(var_30, (arr_40 [i_0 + 2] [i_1 - 2] [i_3] [i_16 - 1])));
                        arr_64 [i_0] [i_0] [i_0] [i_0] = (((arr_30 [1] [i_0 + 2] [i_0 - 2]) ? (arr_30 [i_0] [i_0 + 2] [i_0 - 1]) : (arr_30 [6] [i_0 - 2] [i_0 + 1])));
                    }
                }
                var_31 = ((!((((var_8 ? 4408147987203925593 : (arr_12 [i_0] [i_0]))) == -4408147987203925573))));
                var_32 = ((~(((((var_5 ? 39508 : var_2))) ? (arr_61 [i_1]) : 153))));
                var_33 = (max(var_33, (((42417 ? 3796460640 : 255)))));
            }
        }
    }
    var_34 -= var_8;
    #pragma endscop
}
