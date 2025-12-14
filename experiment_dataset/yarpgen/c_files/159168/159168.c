/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0 - 3] [i_0 + 2] = (min((((!(arr_1 [i_0 + 2])))), (268435455 & 2147483647)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_4 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_16 = (((min(var_7, (max(62, 0)))) ^ (arr_5 [i_2 - 1])));

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] = (arr_13 [i_5 + 1] [i_2 + 1] [i_2 - 2] [i_2 + 1]);
                        arr_19 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_4] [i_2 - 1] [i_1] [i_3] = (((((2418797871 ? var_4 : 4294967295))) ? var_3 : (((arr_16 [i_1] [i_2 - 1] [i_3] [i_4] [i_5 + 1]) ? var_5 : (arr_14 [i_1] [i_2] [i_3] [i_4] [i_5])))));
                        arr_20 [i_2 - 1] [i_2 - 1] [i_1] = ((var_0 ? (arr_7 [i_2] [i_2 - 2]) : (arr_4 [i_2 + 1] [i_2 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] = ((var_10 == (arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1])));
                        arr_25 [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_6 + 1] = ((((((arr_7 [i_1] [i_1]) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_9 [i_1] [i_1] [i_3] [i_4])))) ? (arr_13 [i_6 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_10 [i_2 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        var_17 = (max(var_17, var_4));
                        var_18 &= (((arr_8 [i_2 - 1] [i_7 + 3]) && (4026531841 >= var_0)));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_19 = (((((arr_5 [i_1]) == 46)) ? (arr_31 [i_2] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 1]) : -73));
                        arr_32 [i_3] [i_3] [i_3] [i_3] = ((154 * 0) << (((arr_4 [i_2 - 1] [i_2]) - 96)));
                    }
                    var_20 = (((-50 - 262143) - (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    arr_37 [i_9] [i_2 - 1] [i_3] [i_3] = var_5;
                    var_21 = -var_0;

                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] = arr_16 [i_1] [i_2 - 2] [i_2 - 2] [i_1] [i_10 - 2];
                        var_22 = (max(var_22, (arr_22 [i_1] [i_2 - 1] [i_2 - 1] [i_9] [i_10 - 3] [i_9])));
                    }
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_23 = var_6;
                        var_24 = (arr_27 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_9]);
                    }
                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        arr_48 [i_1] [i_3] [i_12 - 4] &= ((-16791 ? var_9 : (arr_10 [i_1] [i_1] [i_2 - 2] [i_1])));
                        var_25 &= ((18396378137895237578 >= (arr_12 [i_12 + 1] [i_12] [i_12])));
                        arr_49 [i_1] [i_2 + 1] [i_3] [i_1] = (((arr_41 [i_1] [i_1] [i_1] [i_9] [i_12 - 4] [i_9] [i_2 - 2]) % 18258235111139072608));
                        arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_30 [i_1] [i_3] [i_1] [i_1] [i_12 - 2] [i_12 + 1]) | (arr_36 [i_1] [i_9] [i_1] [i_9] [i_1])));
                    }
                    arr_51 [i_1] [i_1] [i_1] [i_2 + 1] = ((-(arr_36 [i_9] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 2])));
                    arr_52 [i_1] [i_2] = ((-15 - ((var_13 ? var_13 : (arr_15 [i_1] [i_2 + 1] [i_3] [i_3] [i_9] [i_9])))));
                }
                var_26 = (max(((((59 >= var_14) / var_0))), 4026531846));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
            {
                var_27 = ((var_10 ? 155 : var_7));
                var_28 = ((var_5 ? (arr_31 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 2]) : (arr_31 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                var_29 = (!-4248);
            }
            arr_55 [i_2 + 1] [i_2 - 1] [i_2] = (arr_22 [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1]);
            arr_56 [i_2 + 1] [i_1] = ((((max(35656, 1))) ? -var_9 : (((-(arr_26 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))));
        }
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        arr_60 [i_14] = (min(((min(var_1, var_8))), ((~(arr_5 [i_14])))));
        arr_61 [i_14] = (max(var_2, (max((arr_4 [i_14] [i_14]), ((-441443895 ? -1084972922 : 240))))));
        arr_62 [i_14] = ((-(((arr_8 [i_14] [i_14]) ? (max(4, -33)) : (arr_22 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))));
        var_30 = (min(65524, 2048));
    }
    var_31 &= ((((((var_2 ? 533684777 : var_11)))) ? (min((var_6 - var_5), (28553 + 112))) : 24665));
    var_32 = 0;
    #pragma endscop
}
