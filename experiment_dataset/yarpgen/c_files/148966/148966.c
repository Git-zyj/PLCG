/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = (min(-15726, -25));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] = (-var_1 ? var_18 : 64035);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1 - 1] = ((-(((var_12 != (arr_4 [i_1 - 1] [i_1]))))));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1 - 2] [i_2] = (((var_11 != var_19) ^ (max(var_19, (arr_8 [i_1] [i_2] [16])))));
            arr_11 [i_1 + 1] [i_2] = ((!(arr_7 [i_1] [i_2 - 2])));
            var_22 = ((((max(var_15, var_3))) ? -var_2 : (((((arr_7 [i_2 - 1] [i_2 + 1]) >= (arr_7 [i_2 - 2] [i_2 - 2])))))));
            var_23 = ((!((min((arr_7 [i_1 - 1] [i_2]), (65535 && var_16))))));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                var_24 = (arr_9 [i_3] [i_3]);
                arr_16 [i_3 + 1] = (((arr_7 [i_1 - 2] [i_3 + 2]) ? ((0 ? -var_10 : -2147483628)) : (!4294967284)));
                var_25 *= (arr_9 [i_3 + 1] [i_1 - 1]);
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] |= var_2;
                var_26 *= 39;
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_22 [i_6] [i_3] [i_1] &= ((((arr_12 [i_1 - 2]) ? var_5 : (((-74 ? 0 : var_13))))));
                var_27 = (max(var_27, (((-8723114568441839897 ? 17 : 16502)))));
                var_28 = var_5;
            }
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                var_29 = (~1);
                var_30 = ((!(((-var_19 / (max(var_6, (arr_4 [i_1] [i_1]))))))));
            }
            arr_25 [i_1 - 2] [i_3] = (min(((2147483621 * (arr_21 [i_3 - 1] [i_3 - 2] [i_1 - 2] [i_1]))), 0));
            var_31 = (min(var_31, var_18));
            arr_26 [i_1] [i_1] [i_3] = ((min((~var_18), 0)));
        }
        var_32 = var_2;
        var_33 &= ((arr_14 [i_1 - 2] [i_1 - 1] [i_1 + 1]) - (((var_1 + (arr_1 [i_1] [i_1 + 1])))));
        var_34 = var_2;
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_35 ^= var_11;

        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_36 *= (min(((min(((((arr_4 [i_8] [i_8]) ? var_13 : var_16))), (min(var_15, (arr_13 [i_8] [i_9])))))), ((((arr_17 [3] [i_8]) ? (arr_29 [i_9 - 1]) : var_14)))));
            var_37 &= ((-1 < (arr_30 [i_8] [i_8])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_36 [i_8] = (arr_13 [i_8] [i_10]);
            arr_37 [i_8] [i_8] [i_10] = (((arr_34 [i_8] [i_8]) ? (arr_31 [i_8]) : var_10));
            var_38 = (min(var_38, (((-(arr_17 [i_10] [i_8]))))));
        }
        var_39 &= ((-var_18 + (arr_28 [i_8])));
        var_40 = var_15;
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_41 = arr_38 [i_11];
        var_42 = -1058571228;
        arr_42 [i_11] = (min(((7 ? (arr_40 [i_11] [i_11]) : (arr_40 [i_11] [i_11]))), ((((arr_40 [i_11] [i_11]) != (arr_40 [i_11] [i_11]))))));
        arr_43 [i_11] [i_11] = ((var_0 && ((!((max(2147483628, 9223372036854775807)))))));
        arr_44 [i_11] [i_11] = (~var_18);
    }
    var_43 = var_15;
    #pragma endscop
}
