/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = ((((-(arr_0 [i_0] [i_0])))) ^ (((arr_1 [i_0]) - var_6)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 *= var_13;
            var_17 = (arr_3 [i_0]);
            var_18 |= (arr_1 [i_0]);
        }
        for (int i_2 = 1; i_2 < 6;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = (arr_9 [i_4] [i_3] [i_2] [i_0]);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_14 [i_0] [i_2 + 2] [i_2] [i_3] [i_4 - 2] [i_5] [i_0] = (arr_3 [i_0]);
                            arr_15 [i_0] [i_4 - 1] [i_0] [i_0] [i_5] [i_3] [i_2] = var_4;
                            var_19 = (max(var_19, (((var_7 ? ((var_4 + (arr_8 [i_2] [i_2]))) : (~var_3))))));
                            var_20 |= ((((((arr_9 [i_0] [i_2 + 2] [i_2 + 2] [i_4 - 2]) ? -4968 : var_9))) == var_4));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_3] [i_0] = (var_12 + var_6);
                            var_21 = (((arr_2 [i_6]) <= ((~(arr_3 [i_0])))));
                            var_22 = (!var_7);
                            var_23 = var_4;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_24 = var_7;
                            var_25 &= ((-var_2 + ((-(arr_21 [i_7])))));
                            var_26 &= ((((arr_22 [i_0] [i_2] [0] [i_4] [i_7]) + 2147483647)) >> (((((arr_17 [i_0] [i_4] [i_2 + 1] [i_3] [i_2 + 1] [i_0]) ? var_6 : var_14)) - 101)));
                        }
                        var_27 *= (((arr_13 [i_4] [i_3] [i_2] [i_0] [i_0]) ^ ((var_6 | (arr_22 [i_2] [i_2] [i_3] [i_3] [i_3])))));
                    }
                }
            }
            var_28 = ((var_1 - (arr_5 [i_0] [i_2] [i_2 + 3])));

            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                var_29 = (arr_2 [i_2 + 1]);
                var_30 += ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_5 : (arr_9 [i_0] [i_2] [i_0] [i_0]))));
                var_31 = ((~((var_10 * (arr_1 [i_8])))));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_30 [i_0] = (((var_0 ? 38 : (arr_18 [i_9] [i_0]))));

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_32 = (((arr_18 [i_10] [i_9]) >> (~var_10)));
                var_33 |= (arr_10 [0] [i_10]);
            }
            var_34 = ((var_12 ? ((((arr_24 [2] [i_0] [i_0]) ? var_14 : var_9))) : (arr_2 [i_0])));
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_36 [i_0] = var_5;
            var_35 |= (((arr_12 [i_0] [3] [i_0] [i_0] [i_11]) << (var_6 - 111)));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_36 &= (((arr_7 [i_12 - 1] [i_13 - 2] [i_12 - 1] [i_13 - 1]) ? (arr_39 [i_12 + 1] [i_13 - 2] [i_12]) : var_0));
                            var_37 = ((((((arr_1 [i_13]) >> (((arr_7 [i_14] [i_13] [i_12] [i_11]) - 53))))) ? (((((arr_24 [i_0] [i_0] [i_14]) + 2147483647)) >> (((arr_7 [i_0] [i_11] [i_12 + 1] [i_13 - 2]) - 51)))) : ((var_13 * (arr_25 [i_0] [i_11])))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_38 = (((arr_8 [i_0] [i_12 + 1]) + (arr_8 [i_0] [i_12 + 1])));
                            var_39 -= var_13;
                            arr_48 [i_0] [i_0] [i_12 - 1] [9] [i_0] [i_0] = (((arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_22 [i_11] [i_12 + 1] [i_13 + 1] [i_13 - 1] [i_15]) : (arr_8 [i_0] [i_0])));
                            var_40 -= (((((var_2 >> (var_14 - 7384)))) ? (arr_0 [i_11] [i_13]) : (~var_9)));
                        }
                        var_41 = ((105 ? 213 : 28452));
                    }
                }
            }
            arr_49 [i_0] [i_0] = (arr_31 [i_0] [i_0]);
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_42 = ((((((((arr_52 [i_16]) + 2147483647)) >> (!1)))) ? ((var_7 ? (((arr_47 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) ? var_8 : 25806)) : ((((arr_28 [i_16]) > var_7))))) : var_14));
        var_43 &= (~(((arr_37 [i_16] [i_16] [i_16]) ? var_6 : (((arr_50 [i_16] [i_16]) ? var_4 : var_10)))));
    }
    var_44 = var_12;
    #pragma endscop
}
