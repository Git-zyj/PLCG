/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_17 = (~var_13);
            var_18 = var_9;
        }
        arr_5 [i_0] = arr_4 [i_0] [i_0];
        var_19 -= (arr_0 [2]);
    }
    var_20 = (((((var_2 && var_15) || var_5)) || var_11));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_21 = (min(var_21, var_4));
                arr_13 [i_2] [i_2] = ((!(~var_11)));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    arr_21 [i_3] [i_2] [9] [i_5] [i_2] [i_2] = (arr_0 [i_2]);
                    var_22 = (((!65) * (!var_5)));
                }

                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_23 = (arr_11 [i_3 + 1]);
                    var_24 = arr_18 [i_3 - 1] [i_2] [i_7 - 1];
                }
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    var_25 = var_11;
                    var_26 = (arr_23 [i_2] [i_2] [0] [i_8 - 1] [1]);
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_27 = var_8;
                    var_28 = var_7;
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    arr_33 [i_2] [i_3] [i_2] [i_2] = var_1;
                    var_29 ^= (arr_20 [5] [i_10] [i_2] [i_3] [i_2]);
                    arr_34 [i_2] [i_2] [i_2] [i_5] = (!var_1);
                    var_30 = ((((((~(arr_11 [i_5]))) + 9223372036854775807)) >> (((arr_16 [i_10] [i_2] [i_2] [i_2]) - 53113))));
                }
            }
            var_31 = (max(var_31, (((~(((arr_19 [1] [i_3] [7] [2] [1] [i_3 - 1]) | var_13)))))));

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_39 [i_2] = (arr_25 [3] [i_3 - 1]);
                    var_32 = (min(var_32, (arr_30 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])));
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    var_33 += (((arr_8 [i_3 + 1]) || (arr_40 [i_3 + 1] [i_2])));
                    var_34 = (arr_6 [i_13 + 3] [i_3 - 1]);
                    var_35 = (max(var_35, (arr_28 [4] [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                    arr_43 [i_13 + 2] [i_2] [i_3] = (255 && 540617027288140678);
                }

                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    var_36 -= var_10;
                    var_37 = ((~(17304111962686544845 * 2689843448716158513)));
                    arr_46 [i_2] [i_2] = var_15;
                    var_38 = var_6;
                    var_39 = (((arr_40 [i_3] [i_14 - 1]) << (((arr_40 [i_2] [i_14 - 1]) ^ (arr_40 [i_2] [i_14 - 1])))));
                }
                var_40 ^= (((arr_26 [i_2] [i_3 - 1] [i_3 + 1] [i_11] [i_3 - 1]) ^ (((~(arr_42 [i_3 - 1] [5] [i_3] [i_3 + 1]))))));
            }
            for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
            {
                var_41 = (((arr_22 [i_3] [i_2] [i_2]) || (arr_3 [i_3] [i_15])));
                var_42 = (min(var_42, (arr_22 [i_15] [10] [i_2])));
                var_43 = (min(var_43, (((+((((arr_32 [i_3 + 1] [i_3 + 1]) <= (arr_20 [i_15] [i_15] [i_15] [i_15] [i_3 - 1])))))))));
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {
                var_44 = var_0;
                var_45 = (min(var_45, (arr_12 [i_3 + 1] [i_3] [i_2])));
            }
            var_46 = (min(var_46, (arr_49 [i_3] [i_2] [i_2] [i_2])));
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {

                for (int i_19 = 1; i_19 < 10;i_19 += 1)
                {
                    var_47 = (arr_38 [i_19 + 1] [i_17] [i_17]);
                    var_48 = ((~(arr_10 [i_19] [1] [0])));
                    var_49 -= var_2;
                    var_50 = (arr_7 [i_2]);
                }
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    var_51 = ((((~(arr_24 [i_2] [i_17]))) << (var_9 + 1137224652)));
                    var_52 = (max(var_52, var_15));
                    var_53 = (var_5 * var_1);

                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        var_54 = (max(var_54, (arr_16 [i_21] [5] [i_17] [i_2])));
                        arr_67 [i_2] [i_17] [i_2] [i_20] [i_21] = (arr_59 [i_2] [7] [7] [i_2]);
                        var_55 &= var_15;
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        var_56 = (arr_31 [i_22] [2] [i_18] [i_17] [i_2]);
                        arr_72 [i_2] [i_2] [i_17] [i_2] [i_18] [i_2] [i_2] = var_12;
                        var_57 = (min(var_57, (!540617027288140678)));
                        var_58 = arr_65 [i_22] [i_22] [i_20] [i_18] [i_17] [i_2] [i_2];
                        arr_73 [i_2] [i_2] [0] [i_20] [i_2] = arr_1 [i_2];
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        arr_76 [6] [i_2] [i_17] [i_18] [i_20] [6] [i_23] = var_2;
                        var_59 *= (arr_9 [6] [i_17] [i_2]);
                        var_60 -= var_8;
                    }
                    var_61 |= var_12;
                }
                var_62 = (min(var_62, (((((var_10 ^ (arr_40 [i_18] [i_18]))) > (((((arr_4 [8] [i_17]) == (arr_4 [i_18] [i_2]))))))))));

                /* vectorizable */
                for (int i_24 = 1; i_24 < 9;i_24 += 1)
                {
                    arr_81 [10] [6] [i_18] [i_2] [1] = var_7;
                    var_63 = (~var_14);
                    arr_82 [i_2] [i_2] [i_17] [i_2] [i_24] [i_24] = (((arr_28 [i_2] [i_17] [i_24 - 1] [i_17]) >> (((arr_28 [i_2] [i_17] [i_24 - 1] [2]) - 3437193081))));
                    arr_83 [0] [i_17] [i_17] [i_2] [0] [0] = (((arr_26 [i_24 - 1] [i_17] [i_18] [i_18] [i_2]) ^ (arr_26 [i_2] [i_17] [i_18] [i_18] [i_24 + 2])));
                }
            }
            arr_84 [i_2] [i_2] = (((((arr_78 [i_2] [i_2] [i_2] [i_17] [i_17]) + (arr_6 [i_2] [i_2]))) + (arr_6 [7] [i_17])));
            var_64 = var_8;
            var_65 |= ((((var_10 * (arr_71 [i_17] [i_17]))) / (arr_71 [i_17] [i_17])));
        }

        for (int i_25 = 1; i_25 < 9;i_25 += 1)
        {
            var_66 = (var_6 * var_12);
            arr_87 [i_2] = ((var_7 < (((!(arr_17 [i_2] [i_25 + 1]))))));
        }
        var_67 = var_1;
    }
    #pragma endscop
}
