/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (max(var_8, (var_12 ^ var_15)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((max((arr_3 [i_0]), (arr_3 [i_0]))));
        var_20 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = (((((var_3 + 2147483647) << (var_4 - 2820380442))) ^ (arr_2 [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 = ((((max((((arr_1 [5]) - (arr_3 [i_0]))), (((arr_8 [i_0]) / var_5))))) != var_11));
                            var_22 = (arr_3 [i_0]);
                            var_23 -= (((var_11 ^ var_6) != var_14));
                        }
                    }
                }
            }
            var_24 = ((((max((arr_3 [i_0]), (arr_3 [i_0])))) < (((arr_3 [i_1]) - (arr_3 [i_0])))));
            var_25 = (((min(((min(var_2, var_7))), var_10)) << var_6));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_24 [i_0] [i_0] [i_5] [i_6] = (arr_20 [i_0] [i_5] [i_6 - 1] [i_5]);
                var_26 *= (arr_15 [i_0] [i_5] [i_6 - 1] [i_5] [10] [4] [4]);

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_27 = (((arr_21 [i_0] [i_0] [i_0]) ^ (arr_21 [1] [i_5] [i_6 - 1])));
                    var_28 = (max(var_28, (arr_13 [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                    var_29 = (arr_8 [i_6 - 1]);
                    arr_27 [i_6] [i_6 - 1] [i_6] = ((arr_23 [i_0] [i_6 - 1] [i_6 - 1] [i_7]) > (arr_23 [i_0] [i_6 - 1] [i_6 - 1] [i_0]));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_30 = (var_16 > var_8);

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_31 = (((arr_10 [i_6 - 1] [i_6 - 1]) + (((var_3 + 2147483647) << (var_13 - 139)))));
                        arr_36 [i_6] [i_6] [16] [i_8] [3] = -16;
                        var_32 = (arr_0 [5]);
                    }
                    arr_37 [i_8] [i_6] [i_6] [i_0] = var_0;
                }
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        var_33 = (min(var_33, (((~(arr_25 [i_0] [i_11 - 2] [i_11] [i_10 - 2] [i_10 - 2]))))));
                        var_34 = (max(var_34, var_14));
                        arr_44 [4] [7] [1] [i_6] [i_11] = (((arr_8 [i_0]) > (var_3 != var_16)));
                    }

                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        var_35 |= ((~(arr_17 [1] [i_5] [i_5] [1] [i_12 - 1])));
                        var_36 = ((~(!var_0)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_52 [i_6] [i_5] [i_6] = ((arr_45 [i_0] [i_5] [i_6] [i_6] [i_13]) != (arr_42 [i_6 - 1] [i_6 - 1]));
                        arr_53 [i_6] [i_5] [11] [i_13] [i_13] [i_0] = (arr_28 [i_0] [i_6]);
                        var_37 = arr_13 [i_0] [i_5] [i_10 - 3];
                        var_38 = (arr_48 [i_0] [i_5] [i_6 - 1] [i_10] [i_10] [i_13] [i_13]);
                        arr_54 [i_6] [i_0] [i_5] [i_6] [i_10] [i_13] = (((!var_12) << (((arr_19 [i_6] [i_6] [i_6 - 1]) + 18961))));
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_58 [i_14] [i_5] [i_5] &= var_6;
                        arr_59 [i_14] [8] [i_6] [0] [i_0] = (~var_3);
                    }
                    var_39 = ((-(((!(arr_14 [10] [13] [i_5] [i_6] [i_10]))))));
                }
            }
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_40 = var_8;
                        var_41 = (max(var_41, ((((arr_28 [i_0] [i_17]) > (((((arr_4 [i_0] [8] [i_17]) != var_14)))))))));
                    }
                    for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                    {
                        var_42 = (~var_10);
                        var_43 = (--243);
                        var_44 = (var_10 - (arr_0 [i_0]));
                        var_45 = (var_4 << (arr_51 [i_0] [7] [3] [i_16] [i_18]));
                    }
                    for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
                    {
                        arr_73 [i_0] [i_0] [i_0] [2] [6] [i_16] = var_12;
                        var_46 = (min(var_46, var_7));
                        var_47 &= ((var_13 < (arr_13 [12] [i_16] [12])));
                    }
                    var_48 = (arr_35 [i_0] [i_0] [i_16] [i_16] [i_16]);
                    var_49 = (min(var_49, (arr_43 [4])));
                }
                for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        var_50 = (min(var_50, ((((arr_35 [i_0] [16] [i_21] [i_20] [i_21]) ^ (arr_35 [8] [8] [i_20] [4] [i_20]))))));
                        var_51 = var_9;
                        arr_80 [i_0] [i_0] [i_5] [1] [i_20] [i_21] [15] = (((arr_76 [i_20] [5] [10]) << ((((arr_77 [i_0] [i_5] [i_15] [i_20] [i_0] [1]) && var_8)))));
                    }

                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        arr_83 [10] [i_5] [i_5] = (arr_82 [i_0] [i_0] [1] [i_0] [i_22]);
                        var_52 = var_0;
                    }
                    arr_84 [i_0] [13] [13] [i_15] [i_20] = ((!((var_0 > (arr_71 [4] [4] [4] [4] [i_20] [i_20] [4])))));
                }
                for (int i_23 = 0; i_23 < 17;i_23 += 1) /* same iter space */
                {
                    arr_89 [i_15] [9] [i_15] [i_15] = ((var_4 ^ (arr_47 [i_23])));
                    var_53 = (min(var_53, var_8));
                }
                arr_90 [i_0] [i_5] = (((((((arr_46 [1] [i_5] [1] [i_15] [i_15]) + 2147483647)) << (((arr_86 [i_0] [i_5] [i_0] [i_5] [i_0]) - 1071568902)))) << (((arr_12 [i_15] [i_0] [i_0] [0]) - 6839740279149695169))));
                var_54 = (arr_10 [7] [7]);
            }
            arr_91 [i_0] [16] |= (!(arr_12 [i_0] [i_0] [i_5] [i_5]));
        }
    }
    var_55 = ((var_3 < var_4) < var_5);
    #pragma endscop
}
