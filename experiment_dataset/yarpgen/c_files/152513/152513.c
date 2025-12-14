/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (max(var_20, (var_18 | var_3)));
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((!((max(var_1, (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = var_8;
        var_23 = var_16;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1 + 3] = ((((!(arr_3 [i_1 - 2]))) ? (((arr_4 [i_1]) ? var_15 : 240)) : 1));
        var_24 += (((((1 ? (arr_4 [i_1]) : (arr_3 [i_1])))) ? 1 : (arr_3 [i_1])));
        var_25 = (min(var_25, var_1));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_26 = 2025940830;
        var_27 = (min(var_27, ((((((-22 ? (((arr_0 [i_2 + 1] [i_2]) | 0)) : ((((arr_1 [i_2] [i_2]) && (arr_8 [0]))))))) ? (max((arr_3 [6]), (arr_3 [i_2 + 1]))) : (((arr_0 [i_2 - 2] [i_2 + 1]) - (arr_4 [i_2 - 2]))))))));
        var_28 = (max(var_28, ((((arr_3 [i_2 - 1]) ? ((((arr_7 [12] [10]) + (arr_4 [3])))) : (((((380021834 % (arr_8 [i_2])))))))))));
        var_29 *= (~107);
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_30 |= ((-((-((2536243561943964973 ? var_0 : var_3))))));
        var_31 ^= min(((((((!(arr_9 [i_3])))) + (2633163643 && 14105251581764513133)))), (((arr_4 [i_3]) ? (arr_9 [i_3]) : (((arr_4 [i_3]) ? 0 : -2069533996)))));
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_21 [i_4 + 3] [8] [i_5] [i_7] = ((((((arr_14 [i_6 + 3] [i_6 - 1] [i_6 + 3]) ? (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (arr_14 [i_6 + 2] [i_6 + 1] [i_6 + 1])))) ? ((((!(~0))))) : ((18446744073709551615 ? var_7 : (max((arr_1 [i_5] [i_4]), 94))))));
                        var_32 = 1243825146;
                    }
                }
            }
        }
        var_33 = (max(var_33, ((((arr_13 [i_4 + 4]) % (arr_6 [i_4 + 1] [i_4 - 1]))))));
        var_34 = var_2;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_24 [i_8] = 1885974554;

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_29 [i_8] [i_8] = (min(4294967284, (max((((var_7 ? 98 : 1))), ((-8829 ? 0 : (arr_26 [i_8])))))));
            arr_30 [16] [16] &= -94;
            var_35 = ((~((~(arr_25 [i_8])))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_36 = (arr_27 [i_10] [i_8]);
            arr_33 [i_8] [18] &= -3051142149;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_39 [i_8] [i_8] = ((!(2147483647 == var_2)));
                        arr_40 [17] [i_8] [19] [i_12] = 9;
                    }
                }
            }
        }
        var_37 = (var_2 && ((((arr_22 [i_8] [i_8]) ? (min(2, (arr_22 [i_8] [i_8]))) : ((min(10328, (arr_34 [i_8] [15] [i_8]))))))));
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_38 &= (((arr_37 [16] [i_13 - 3] [i_13] [i_14] [i_14]) + (arr_46 [i_13] [15])));
                    var_39 = (max((((-(arr_32 [i_8] [i_13 + 1])))), (((arr_46 [i_8] [i_14]) ? (max((arr_28 [i_8] [19]), 4239115901024867104)) : (arr_26 [i_8])))));

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_40 *= (arr_48 [i_13] [i_13 - 3] [i_13 - 2] [i_13]);
                        var_41 &= ((+(((arr_42 [12] [12]) * ((((!(arr_22 [i_8] [10])))))))));
                        arr_51 [i_8] [i_13] [i_8] [i_14] [i_14] [i_15] = ((1 ? ((((((arr_38 [i_8] [i_13 + 1] [i_14] [i_13 + 1] [i_15]) ? 9612 : 1))) ? 1095216660480 : ((((!(arr_28 [i_15] [i_14]))))))) : var_11));
                    }
                }
            }
        }
    }
    #pragma endscop
}
