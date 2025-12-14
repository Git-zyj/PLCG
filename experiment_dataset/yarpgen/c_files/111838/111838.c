/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [21] = ((var_14 != (arr_0 [i_0 - 1])));
        var_19 -= (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
        arr_3 [i_0] |= (~0);
        arr_4 [i_0] [i_0] = ((0 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (((((var_10 ? 127 : var_7))) ? ((((arr_5 [i_1]) < (arr_1 [i_1])))) : -var_5));
        var_21 = (arr_0 [i_1]);

        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_22 = (arr_7 [4]);
                    arr_15 [i_1] [i_3] [8] [i_3] [i_2] = ((0 ? (arr_14 [i_4 - 1]) : (arr_9 [i_2] [i_1])));
                    var_23 = (arr_14 [i_3]);
                }

                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_2] [i_1] [i_3] [i_5] [2] = (~var_9);
                        arr_24 [i_6] [i_6] [i_6] [i_3] [i_6] [i_6] = (arr_14 [i_5 - 1]);
                        var_24 = (arr_16 [i_1] [i_2] [i_3] [i_6]);
                        arr_25 [i_1] [i_1] [i_1] [i_3] [i_1] = arr_21 [i_5 - 3] [i_6] [i_3] [i_6] [i_6];
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = 1;
                        arr_28 [i_3] [i_2 + 1] [i_3] [i_2] [i_2 + 1] = var_6;
                        var_26 = ((0 != (arr_16 [12] [i_1] [i_2 - 1] [i_7])));
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        arr_31 [9] [i_3] [i_3] [i_3] [i_8] = 4294967295;
                        arr_32 [i_1] [i_1] [i_1] [i_3] [i_1] [2] [1] = ((~(arr_11 [i_3])));
                        arr_33 [i_3] [9] [i_3] = ((~(arr_30 [i_1] [10] [0] [i_1] [i_3] [5] [2])));
                    }
                    arr_34 [i_3] = (arr_8 [i_1] [i_1]);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [i_1] [i_1] [i_3] [i_5] = 2147483647;
                        var_27 = (min(var_27, (arr_7 [i_2 - 1])));
                        var_28 = (min(var_28, ((((arr_22 [i_1] [i_2 - 1] [i_3]) >= (arr_22 [8] [i_3] [i_5 + 1]))))));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_41 [10] [i_2 + 1] [i_3] [12] [i_2 + 1] &= (arr_35 [1] [i_2] [i_3] [i_5] [i_10]);
                        arr_42 [i_3] = 4294967290;
                        arr_43 [9] [i_5] [i_3] [i_2] [i_1] = 432345564227567616;
                    }

                    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_1] [0] [i_2] [0] [4] [i_5] [i_11 + 1] |= (arr_7 [i_2 - 1]);
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_3] = ((+(((-2147483647 - 1) ? (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_12))));
                        var_29 |= (arr_13 [8]);
                        var_30 = (arr_39 [i_1] [1] [i_3] [i_1] [i_3]);
                    }
                    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        var_31 *= (((arr_14 [i_2 - 1]) ? ((var_4 ? 31 : var_5)) : (arr_26 [i_1] [3] [i_1] [i_1] [i_1])));
                        arr_50 [i_1] [i_3] [4] [i_1] [4] = (((arr_20 [12] [i_5 - 3] [i_5] [i_12 + 2] [i_12] [i_3]) ? (arr_20 [i_5] [i_5 + 2] [i_12] [i_12 - 1] [i_12] [i_3]) : 1));
                        var_32 = (((arr_22 [i_1] [i_3] [9]) >> (((arr_22 [i_1] [i_5 - 3] [i_12]) - 6465))));
                        var_33 = (2 ? ((-(arr_22 [i_5] [i_3] [i_2 - 1]))) : ((var_16 ? (-2147483647 - 1) : var_16)));
                    }
                    arr_51 [i_3] [i_3] [i_2] [0] [i_3] = 0;
                }
                var_34 = ((((!(-2147483647 - 1))) ? (!var_9) : (((arr_38 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]) >> 0))));
                var_35 -= ((var_8 || (arr_10 [i_1] [i_1] [i_2] [5])));
            }
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                var_36 = (max(var_36, -20));
                var_37 = (((arr_18 [i_13 - 1] [i_13 - 1]) & var_7));
                arr_54 [i_2 - 1] [0] [i_13] [i_2] &= (arr_45 [i_1] [4] [i_2] [12] [i_13]);
            }
            arr_55 [i_1] = 0;
            var_38 = (((arr_44 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1]) ? var_17 : (arr_44 [i_1] [i_1] [i_1] [i_1] [i_2 - 1])));
        }
        for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_39 = (arr_18 [i_1] [i_1]);
            var_40 = var_14;
            var_41 = -65515;
            var_42 = ((~(arr_8 [i_14 + 1] [i_14 - 1])));
        }
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
    {
        var_43 = (max((((35184372086784 ? 511 : (arr_59 [i_15])))), ((max(-2147483636, (((9223372036854775807 && (arr_1 [1])))))))));
        var_44 = (min(var_44, (((!(((arr_59 [20]) || (arr_0 [20]))))))));
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
    {
        var_45 = var_4;
        arr_64 [i_16] = ((-var_7 ? (~var_11) : -2147483647));
        var_46 = (max(var_46, var_18));
        arr_65 [i_16] = (min(9, -1));
        var_47 += ((~((0 * ((var_10 / (arr_62 [i_16] [3])))))));
    }
    var_48 = var_8;
    #pragma endscop
}
