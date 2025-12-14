/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(-1, (min(1, var_8))))) ? (((var_2 ? var_1 : var_3))) : ((-var_10 % ((var_4 ? -7 : var_8))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (((arr_1 [i_0]) ? ((var_7 ? (arr_0 [i_0]) : (arr_2 [i_0]))) : (arr_0 [i_0])));
            var_15 = (max(var_15, ((((arr_1 [i_0]) % (arr_1 [i_0]))))));
            var_16 -= ((var_9 ? (arr_2 [i_0]) : (arr_0 [i_1])));
            var_17 = ((~(arr_2 [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 *= ((!(arr_8 [i_0] [i_2] [i_3] [i_2])));
                        arr_12 [i_2] [i_2] &= ((0 ? 1 : 8729512036850155574));
                    }
                }
            }
            arr_13 [i_2] [i_2] [i_2] = (((0 / (arr_5 [i_0] [i_0]))));

            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_19 = (arr_16 [i_5] [i_5] [i_6 + 2] [i_6]);
                    var_20 = (((arr_15 [i_6 - 1] [i_6] [i_6] [i_6 + 1]) & (arr_15 [i_6 + 2] [i_6] [i_6] [i_6 + 2])));
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_21 = (((arr_7 [i_2] [i_7 + 1] [i_7 - 1] [i_2]) | ((7 ? 16515072 : 10687755642514474797))));
                    var_22 |= ((-18926 / (arr_19 [i_0] [i_7 - 1] [i_7 + 2] [i_7 + 1])));
                    var_23 ^= ((-(arr_7 [i_2] [i_7 - 1] [i_7 + 2] [i_7 + 2])));
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_24 *= ((-18937 ? (arr_11 [i_0] [i_2] [i_5] [i_5] [i_8]) : (arr_0 [i_0])));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_27 [i_0] [i_2] [i_5] [i_8] [i_9] = (((((~(arr_3 [i_9] [i_5] [i_5])))) ? (((-32767 - 1) ? var_5 : (arr_19 [i_0] [i_0] [i_0] [i_0]))) : (arr_16 [i_0] [i_2] [i_8] [i_9])));
                        var_25 |= (((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_18 [i_0])));
                        arr_28 [i_8] = (((!var_9) ? (((arr_9 [i_2] [i_2] [i_8] [i_2]) ? (arr_5 [i_8] [i_8]) : -18926)) : (arr_22 [i_0] [i_2] [i_5] [i_8] [i_9])));
                        var_26 = (max(var_26, ((3319974637 <= (((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != -17887))))))));
                    }
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = (((arr_23 [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10] [i_10 - 1]) ? (arr_30 [i_0] [i_0] [i_0] [i_10] [i_0]) : (arr_14 [i_8] [i_8] [i_8] [i_8])));
                        var_27 = (arr_0 [i_10 + 1]);
                    }
                }
                var_28 = ((arr_26 [i_0]) >= (0 % 3652298904));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
            {
                var_29 = (((arr_18 [i_0]) * (arr_5 [i_0] [i_0])));

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_37 [i_0] [i_0] [i_0] = ((0 ? 15658 : 10140698763386266376));
                    arr_38 [i_11] [i_2] [i_11] [i_12] [i_11] = (((arr_9 [i_2] [i_2] [i_11] [i_12]) - (arr_9 [i_2] [i_2] [i_11] [i_12])));
                    var_30 = arr_21 [i_2] [i_2] [i_2] [i_2] [i_2];
                    var_31 = (((((arr_26 [i_0]) ? (arr_20 [i_0] [i_2] [i_2] [i_11] [i_12] [i_12]) : (arr_17 [i_0] [i_2] [i_11]))) / (((var_11 ? -3663 : var_3)))));
                    arr_39 [i_0] [i_0] [i_0] [i_0] = (((arr_11 [i_0] [i_2] [i_11] [i_11] [i_12]) - (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                var_32 = (((arr_34 [i_0] [i_0] [i_0]) <= (arr_34 [i_0] [i_0] [i_0])));
                var_33 &= arr_21 [i_13] [i_2] [i_2] [i_0] [i_0];
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_34 = (arr_43 [i_0] [i_2] [i_14] [i_15]);
                    arr_48 [i_0] [i_2] [i_14] [i_15] [i_15] = ((var_0 ? (arr_11 [i_0] [i_2] [i_14] [i_15] [i_15]) : ((-11394236 ? 0 : 1))));
                    arr_49 [i_14] [i_14] [i_2] [i_14] = (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_0] [i_14] [i_0])));
                    var_35 = (arr_7 [i_14] [i_2] [i_14] [i_15]);
                }
                var_36 += 17985939865582573695;
            }
        }
        var_37 = ((~(((-var_3 || ((min(1, (arr_9 [1] [i_0] [i_0] [i_0])))))))));
        var_38 = (arr_7 [4] [i_0] [4] [i_0]);
    }
    #pragma endscop
}
