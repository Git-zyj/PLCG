/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = 24376;
            var_10 = 24387;
        }
        for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
        {
            var_11 = (max(var_11, ((min((max(41154, (arr_2 [0] [i_0] [0]))), ((((arr_3 [i_2 + 2] [1]) == (arr_3 [i_2 + 2] [i_2])))))))));
            arr_10 [i_0] [i_0] = (min((min((arr_2 [i_0] [i_2 + 2] [i_2 - 1]), -126)), (max((arr_2 [i_0] [i_2 + 2] [i_2 - 1]), (arr_2 [i_0] [i_2 + 2] [i_2 - 1])))));
        }
        for (int i_3 = 3; i_3 < 7;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] = 24382;
            var_12 = (min(((((arr_4 [i_3 + 1] [i_3]) ? (arr_7 [i_0] [i_3 - 1] [i_3]) : 41163))), (min((arr_9 [i_3] [i_3 - 3]), (arr_3 [i_0] [i_3 + 1])))));
            arr_15 [i_0] = 131064;
            arr_16 [9] [i_0] [i_3] = (arr_12 [i_0] [4]);
        }
        for (int i_4 = 3; i_4 < 7;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_13 = var_3;

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_14 *= (min((min((arr_12 [i_4 + 1] [i_4 - 1]), (arr_12 [i_4 + 1] [i_4 - 3]))), var_3));
                    var_15 = (max(((max(((((arr_1 [i_0]) && (arr_13 [i_5])))), ((24392 ? -683028141 : 41185))))), (arr_24 [i_4 + 2])));
                    var_16 = (arr_23 [i_4] [i_4] [i_0] [6]);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_17 = -var_1;
                    var_18 = 1;
                    var_19 ^= (((min(-15, (~474322299))) * (arr_18 [2])));
                }
            }
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_20 |= (min((min(3037887727305715098, (((var_2 < (arr_20 [i_4 + 2])))))), (arr_21 [i_9] [i_9] [0])));
                    var_21 |= (((arr_29 [2] [i_4]) ? (max((min(var_2, var_5)), var_0)) : (((((min((arr_22 [2] [i_4] [i_8] [i_9]), (arr_21 [i_4] [i_8] [6])))) ? var_6 : (min((arr_0 [i_9]), -126)))))));

                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_22 = 1149659639;
                        var_23 = var_3;
                        var_24 = (max(((min((arr_21 [i_0] [i_4] [i_0]), 24394))), (arr_31 [i_9 - 1] [i_4] [i_0] [i_8 + 1] [i_9 - 1])));
                        arr_33 [i_0] [i_0] [i_0] [i_10] [i_10] [i_0] |= ((max(36, (arr_23 [i_0] [2] [i_10] [i_0]))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_25 = var_4;
                        arr_36 [i_0] [i_4 + 3] [i_0] [i_8 - 1] [i_9] [i_11] = (min((((((24356 ? (arr_2 [i_0] [2] [i_0]) : 41138))) ? (max((arr_26 [i_4] [i_9 - 1] [i_4] [i_0]), var_8)) : (arr_4 [i_4 + 3] [i_8 - 1]))), ((max(24394, -15)))));
                    }
                    var_26 -= (~(arr_22 [2] [2] [6] [2]));
                }
                arr_37 [i_0] [i_0] = (min((arr_30 [i_4 - 3]), ((1 ? (arr_30 [i_4 + 2]) : (arr_30 [i_4 + 1])))));
                var_27 -= (min((((!(((0 ? var_9 : (arr_20 [i_0]))))))), ((-(!var_3)))));
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                var_28 += (arr_40 [0] [i_4 + 3] [i_12 + 1]);
                var_29 |= (min((((arr_7 [1] [i_12 + 1] [i_12 + 1]) ? (arr_27 [i_4 - 2] [1]) : (arr_7 [4] [i_12 + 1] [i_12 + 1]))), ((((((arr_17 [i_0] [i_4]) ^ (arr_9 [i_4] [i_12])))) ? ((max(24392, (arr_4 [i_12] [i_0])))) : -2595707439752181819))));
            }
            var_30 = (((arr_29 [i_0] [i_0]) & (((arr_29 [i_0] [i_0]) / var_1))));

            for (int i_13 = 1; i_13 < 6;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_31 = (min(((~(arr_3 [i_13 + 2] [i_4 - 1]))), ((max(var_1, ((1978242199 ? 10196 : 1)))))));
                    arr_46 [6] [i_0] = (arr_39 [i_4 - 2] [i_13 + 1] [i_4 - 2] [i_13 + 2]);
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_32 = (arr_35 [7] [7] [3] [i_0] [0] [i_13] [i_13 + 2]);
                    arr_49 [i_0] [i_15] [i_4] [i_4] [i_13] [i_15] |= (arr_39 [3] [i_4] [i_4] [i_4 - 2]);
                }
                arr_50 [i_4 - 2] [i_0] [i_13 + 1] = ((-118 ? (min((arr_2 [i_0] [i_4 - 3] [i_13]), (arr_2 [i_0] [i_4 - 3] [i_13]))) : var_4));
                var_33 = (min(-118, (((28672 > (arr_39 [i_0] [i_0] [i_0] [i_13 + 2]))))));
                arr_51 [i_0] [i_13] = (min(((max((arr_4 [i_4 + 3] [1]), (arr_35 [4] [i_4] [i_0] [i_0] [i_4] [3] [i_0])))), -1047323984));
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
            {
                var_34 = (min((min(var_8, (~-221201731))), (((~(arr_34 [i_16] [i_4] [i_16] [i_4] [i_0] [i_4]))))));
                var_35 = (arr_11 [i_0]);
            }
            for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
            {

                for (int i_18 = 3; i_18 < 8;i_18 += 1) /* same iter space */
                {
                    var_36 ^= 125;
                    arr_60 [i_0] [i_4] [i_18 - 1] [i_0] = arr_43 [i_18 + 1] [i_0] [i_0];
                }
                for (int i_19 = 3; i_19 < 8;i_19 += 1) /* same iter space */
                {
                    arr_63 [i_0] [i_0] [7] [i_17] [i_17] [i_19] = (((-9223372036854775807 - 1) | (((-28698 ? 4294836241 : 41148)))));
                    arr_64 [i_0] [i_4] = (arr_4 [i_17] [5]);
                    var_37 += 28686;
                }
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    var_38 ^= ((+(((arr_8 [i_17] [i_20]) ? ((min(24379, var_1))) : 1047323982))));

                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        arr_71 [i_0] [i_0] [i_0] [i_17] [i_20] [i_21] = (41143 ? (arr_4 [i_4 - 3] [i_4 + 2]) : (arr_4 [i_4 + 3] [i_4 - 1]));
                        arr_72 [2] [i_0] [i_17] [i_4 - 3] [i_0] [2] = min((((max((arr_12 [i_0] [i_0]), -474322295)))), (min((var_3 && var_4), -28698)));
                    }
                }
                arr_73 [i_0] [i_0] [i_4] [i_0] = (min(((-(arr_27 [i_4 - 2] [i_0]))), (((!(arr_2 [i_0] [i_4] [9]))))));
                var_39 = ((-(max((min(41143, (arr_39 [i_17] [i_4] [i_4] [7]))), ((min((arr_59 [i_0] [i_0] [i_0] [i_0]), (arr_57 [i_0]))))))));
                var_40 = (min(var_40, ((min((max(2423822642, 24382)), (((65535 ? -974 : 245))))))));
            }
        }
        arr_74 [i_0] [i_0] = (arr_0 [i_0]);
        var_41 = (~var_4);
        var_42 = (min(var_42, 24379));
    }
    for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
    {
        var_43 = (min(var_43, (((~(arr_8 [8] [i_22]))))));
        var_44 += (min(((min((arr_66 [i_22] [i_22] [i_22] [i_22]), (arr_66 [3] [i_22] [i_22] [i_22])))), ((var_5 ? var_7 : (arr_66 [i_22] [i_22] [i_22] [i_22])))));
    }
    for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
    {
        var_45 = (min((min(10, (arr_62 [i_23] [i_23]))), 9));
        arr_80 [i_23] = var_8;

        for (int i_24 = 0; i_24 < 10;i_24 += 1)
        {
            var_46 = ((min(2423822622, (arr_47 [7] [i_23] [8] [i_23]))));
            var_47 += ((((arr_25 [i_23] [i_24]) ? (arr_25 [i_23] [i_23]) : (arr_25 [i_23] [i_24]))));
            var_48 = var_0;
        }
        for (int i_25 = 0; i_25 < 10;i_25 += 1)
        {
            var_49 = (min((max((arr_59 [i_23] [i_25] [i_25] [i_25]), 41133)), 24404));
            var_50 = (max(var_50, ((((arr_47 [i_25] [7] [9] [i_23]) ? (min((arr_47 [i_23] [i_25] [i_25] [i_25]), (arr_47 [i_23] [i_23] [i_25] [i_25]))) : (((arr_47 [i_23] [i_23] [i_25] [i_25]) << (((arr_47 [i_23] [3] [i_23] [i_23]) - 490308638)))))))));
        }
        var_51 = ((!(arr_57 [6])));
    }
    var_52 = var_0;
    #pragma endscop
}
