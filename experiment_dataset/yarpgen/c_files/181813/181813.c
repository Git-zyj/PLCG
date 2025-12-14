/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_16 = (min((arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 3]), ((min((arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 2]), (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_17 = (arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]);
                arr_8 [i_0] [i_2] [i_0] = ((~(arr_3 [i_1] [i_1 + 1] [i_1 + 1])));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_18 *= var_5;
                var_19 |= ((((!(arr_3 [i_1] [i_1] [i_1 - 1]))) ? (arr_3 [i_1] [i_1] [i_1 - 1]) : -var_9));
                arr_11 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                var_20 = (~var_10);
            }
            var_21 *= var_6;

            /* vectorizable */
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_1] [i_4] |= (arr_6 [i_5] [i_5 + 2] [i_5] [i_5]);

                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (((arr_0 [i_1 - 3]) ? var_11 : (arr_2 [i_0] [i_1 - 1] [10])))));
                        arr_19 [i_0] [i_1] [i_4] [i_6] = 7168;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_23 = var_10;
                        var_24 = -var_11;
                        arr_24 [i_0] [i_1] [i_5] [i_7] = arr_7 [i_4] [i_4] [i_5 - 2] [i_1 - 1];
                    }
                    var_25 = (max(var_25, (arr_9 [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (arr_26 [i_1] [i_8 + 2])));
                    var_27 = (min(var_27, ((-((-(arr_14 [i_0] [i_1] [i_4])))))));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_1] [i_9] = (arr_21 [i_1 - 1] [i_1] [i_4] [i_8 - 1] [i_1]);
                        var_28 = ((!(arr_26 [i_8 - 2] [i_1 + 1])));
                        var_29 = ((!(arr_20 [i_8] [i_1 - 3] [i_4] [i_8 - 2] [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_30 |= (arr_12 [i_0] [i_1 + 1] [i_8] [i_10]);
                        arr_35 [i_10] [i_10] [i_1 - 1] [i_0] [i_1 - 1] [i_0] [i_0] = (arr_31 [i_0] [i_1 + 1]);
                        arr_36 [i_0] [i_0] [i_4] [1] [i_4] [i_1] = var_2;
                    }
                }
                for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_31 = (max(var_31, ((((arr_15 [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 1]) ? var_12 : (arr_15 [i_0] [i_1 - 1] [i_4] [i_11]))))));
                    var_32 -= ((var_1 ? (arr_29 [i_1] [i_1 + 1] [i_1]) : -var_5));
                }
                for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_33 = var_4;
                    var_34 = (max(var_34, (arr_33 [i_1 - 3] [i_1 - 3] [i_12 - 2])));
                    var_35 *= (arr_26 [i_1 - 1] [i_12 - 2]);
                    var_36 = (min(var_36, var_4));
                }
                arr_44 [i_0] [i_1] [i_4] = var_14;
                var_37 = (max(var_37, ((((arr_38 [i_4] [i_1] [i_0] [i_4] [i_4] [i_0]) ? var_12 : (arr_6 [i_4] [i_4] [i_4] [i_4]))))));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_0] [i_0] [i_0] = var_14;
                arr_49 [i_0] [i_1 - 2] [i_13] [i_13] = (arr_13 [i_0] [i_1] [i_13]);
                var_38 = (min(3968, 141));
                var_39 = (min(var_39, ((min((arr_41 [i_1 - 3] [i_1 - 2] [i_1 - 1]), (arr_41 [i_1 - 2] [i_1 - 2] [i_1 + 1]))))));
            }

            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                arr_52 [i_0] [i_1] [i_14] [i_1] = (max((min(((var_6 ? var_14 : (arr_38 [i_0] [i_0] [15] [i_1 + 1] [i_1 + 1] [i_14]))), var_4)), var_10));
                var_40 = (min(var_40, (arr_26 [i_14] [i_1])));
                arr_53 [i_14] [i_14] = var_8;
                arr_54 [i_14] = (max(((min((arr_22 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]), (arr_22 [i_14 + 3] [i_14 + 3] [i_14] [i_14 + 2])))), (min((arr_45 [i_1 - 2] [i_14 + 3]), (arr_50 [i_14 + 1] [i_1] [i_14])))));
                var_41 = (arr_17 [i_14 + 1] [i_14 + 3]);
            }
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                var_42 = (arr_21 [i_0] [2] [i_0] [i_1] [16]);
                var_43 *= (arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_15 + 2]);

                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    var_44 *= (arr_33 [i_0] [i_1 + 1] [i_16]);
                    var_45 = ((-(arr_43 [i_0] [i_1] [i_15 + 2] [i_16 + 1])));
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    var_46 += (min((max(var_2, (arr_29 [i_0] [i_0] [i_15 + 2]))), (arr_29 [i_0] [i_15 + 4] [i_15])));
                    arr_64 [i_0] = (arr_0 [i_1 + 1]);

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_47 = (max((max((arr_62 [i_15 + 2] [i_1 - 2] [i_15] [i_17]), (!var_8))), (arr_58 [i_1 - 1] [i_1 - 3] [i_15 + 2])));
                        var_48 |= (min((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_18] [i_15 + 3]))), (arr_5 [i_0] [8] [i_0])));
                        arr_67 [i_0] [i_1 - 1] [i_15] [i_1 - 1] [19] = ((+(min((arr_43 [i_0] [i_1 - 1] [i_0] [i_1 - 1]), var_1))));
                    }
                }
                var_49 = (arr_10 [i_0] [i_15 + 4]);
                var_50 = max((arr_46 [i_0] [i_15]), ((-(max((arr_28 [i_0] [i_0] [i_1] [i_1 + 1] [i_15] [i_15]), (arr_26 [i_0] [i_1 - 3]))))));
            }
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            var_51 = (min(var_51, ((min((min(((max(var_13, (arr_14 [i_0] [i_0] [i_19])))), (min(var_10, var_11)))), var_6)))));
            var_52 *= (((-(arr_46 [i_0] [i_19]))));
            var_53 ^= (max((arr_61 [i_0] [i_19] [i_19]), (arr_61 [i_19] [i_0] [i_0])));
        }
        var_54 = (max(var_54, var_6));

        for (int i_20 = 2; i_20 < 21;i_20 += 1)
        {
            arr_73 [i_0] = (max((max(((max((arr_9 [i_0] [i_20 - 1] [i_0] [i_0]), var_8))), (arr_15 [i_20] [i_20] [i_0] [i_20 + 1]))), var_3));
            arr_74 [i_20] = ((-(((arr_55 [i_0]) ? (arr_22 [i_0] [i_0] [i_0] [i_20]) : (arr_7 [i_20] [i_20] [i_20] [i_20])))));
            arr_75 [i_0] [i_20] |= (max((((arr_71 [i_20 + 1]) ? (arr_71 [i_20 - 1]) : (arr_71 [i_20 + 1]))), (arr_71 [i_20 - 2])));

            for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
            {
                var_55 = ((-(min((arr_6 [i_21] [i_20 - 1] [i_20 + 1] [i_21]), (arr_4 [i_20] [i_20] [i_21])))));
                var_56 = (min(var_56, ((max((((~(arr_34 [i_0] [i_0] [i_20 - 2] [i_21])))), ((~(arr_6 [i_20] [i_20 - 1] [i_20 - 1] [i_20]))))))));
                arr_78 [i_21] = (max((min((arr_72 [i_20] [i_20]), ((var_0 ? (arr_45 [i_0] [i_21]) : (arr_71 [i_0]))))), var_1));
                var_57 = (arr_51 [i_21] [i_20 - 1] [i_21]);

                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    arr_82 [i_21] = (max(9197764745014440807, 1023));

                    for (int i_23 = 2; i_23 < 21;i_23 += 1)
                    {
                        arr_85 [i_0] [i_20] [i_20] [i_0] |= (min((max((min((arr_14 [i_20 - 1] [i_21] [i_22]), (arr_21 [i_0] [i_20 - 2] [i_20 - 2] [i_20 - 2] [13]))), (arr_77 [i_20 - 2] [i_21]))), var_3));
                        var_58 &= (min((max(-4257098439196918850, 10553)), (min(((max((arr_39 [i_23] [i_20] [i_21] [i_22]), var_3))), (((arr_51 [i_23] [i_21] [i_22]) ? (arr_76 [i_0] [i_20] [i_21] [i_23 - 2]) : (arr_3 [i_0] [i_0] [i_23 - 2])))))));
                    }

                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        var_59 += ((!((max((arr_87 [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1]), (arr_87 [i_20 - 1] [i_20] [i_20] [i_20 + 1] [i_20 - 1]))))));
                        var_60 |= (-((max((arr_13 [i_20 - 1] [i_20 - 1] [i_20 + 1]), (arr_13 [i_20 - 2] [i_20 - 2] [i_20 - 1])))));
                        var_61 = ((((((arr_70 [i_20 + 1] [i_20 - 1]) ? var_13 : var_0))) ? (arr_70 [i_20 - 2] [i_20 + 1]) : (max((arr_70 [i_20 - 1] [i_20 - 2]), (arr_70 [i_20 + 1] [i_20 - 2])))));
                    }

                    for (int i_25 = 0; i_25 < 22;i_25 += 1) /* same iter space */
                    {
                        var_62 = (min(var_62, (max((min(((max(var_8, (arr_0 [i_21])))), (arr_71 [i_20 - 2]))), var_9))));
                        var_63 = (min(var_63, (arr_72 [i_20 - 1] [i_20 - 1])));
                        arr_90 [i_0] [i_25] [i_21] [i_22] [i_25] &= (arr_87 [i_0] [i_20 + 1] [i_20] [i_22] [i_25]);
                        arr_91 [i_20] [i_20] &= ((!(((~(arr_42 [i_0] [i_20] [i_20] [i_0]))))));
                    }
                    for (int i_26 = 0; i_26 < 22;i_26 += 1) /* same iter space */
                    {
                        var_64 -= (min(((min((arr_34 [i_0] [i_0] [i_0] [i_20 - 1]), var_10))), (max(var_6, (arr_71 [i_20 - 1])))));
                        var_65 = (max(var_65, ((max((min((arr_27 [i_22] [i_20 + 1] [i_20 + 1]), (arr_27 [i_0] [i_0] [i_0]))), var_8)))));
                    }
                }
            }
            for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
            {
                var_66 = (min(var_66, var_4));

                for (int i_28 = 0; i_28 < 22;i_28 += 1)
                {
                    var_67 *= (min((min(1053, 248)), ((max((arr_84 [i_28] [i_20 - 2] [i_20 + 1] [i_20] [i_20] [i_27]), (arr_84 [i_0] [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 - 2] [i_28]))))));
                    var_68 &= (arr_21 [i_28] [i_27] [i_20] [i_0] [i_0]);
                }
                var_69 -= (min(((-(arr_68 [i_20 + 1] [i_20 + 1] [i_27]))), (arr_80 [i_0] [i_20] [i_20] [i_27] [i_27])));
                arr_100 [i_0] [i_20] = (arr_94 [i_0] [i_0] [i_27] [i_0] [i_0]);
            }
        }
        var_70 = (min(var_70, (((+((max((arr_66 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_66 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        arr_101 [i_0] [i_0] &= min(-74, 9007199254740991);
    }
    var_71 = (~var_5);
    #pragma endscop
}
