/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (min((max((min(var_5, 60579)), ((min(1, 1))))), ((max(((max(var_12, var_15))), (max(1, 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = 65526;
        var_20 *= 1;
    }
    var_21 = (max(((max(49382, 1))), (min(((max(var_0, var_8))), (min(9471143372964367799, 8205403440235865385))))));

    for (int i_1 = 4; i_1 < 6;i_1 += 1)
    {
        var_22 = (min((min(((max(56585, 1))), (min(var_15, 576179277326712832)))), ((max((min(65520, 60579)), ((max(1, (arr_4 [i_1])))))))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_23 += (min(2801530194, 1));
            var_24 |= (min((min(((max((arr_2 [i_1] [i_2]), (arr_4 [i_2])))), (min((arr_6 [i_1 - 4]), 877903227)))), ((max(((max(4971, 211))), (min((arr_1 [3] [i_2]), var_8)))))));
            arr_8 [2] [i_2] = (min((min(((min(20353, (arr_5 [i_1 + 4] [6])))), (min(var_4, var_0)))), ((max(51022, (max(1, 9710)))))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_15 [i_1] [i_1] [5] [i_3] = 877903255;
                arr_16 [i_3] [i_1 - 3] [8] [i_3] = 1;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_25 |= 1;
                arr_19 [i_3] = 234;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_26 = 1929371712;
                            arr_27 [i_1 + 2] [i_3] [4] [i_1] [i_1] [6] [i_3] = 38;
                        }
                    }
                }
            }
            var_27 ^= 1;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_30 [i_8] = max((max((min(var_4, (arr_3 [i_1 + 4]))), ((max(127, (arr_0 [i_1] [i_1])))))), ((min((min((arr_22 [i_1] [i_8] [i_1 + 3] [8] [i_8] [i_1]), var_17)), ((min(65535, var_10)))))));
            arr_31 [6] [4] = (min((max((max((arr_13 [i_1] [i_8] [i_1] [8]), (arr_1 [i_1] [i_1 + 2]))), ((max(23562, 81))))), (max(-986620541, 56585))));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_28 *= (min((max((max(var_14, var_16)), ((min(1, (arr_7 [i_1 - 2] [i_1 - 2])))))), (max((min((arr_6 [i_1]), 255)), ((min(var_7, (arr_14 [9] [i_9]))))))));
            var_29 = (max(42326, 234));

            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                var_30 &= min(((min((max(9712, var_2)), (max(1, (arr_7 [i_1] [i_10])))))), (min((max(var_10, (arr_32 [i_1 - 3] [i_9] [i_10]))), ((max(var_8, 1))))));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 7;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_31 = (min(((max(129, 234))), (min(((min((arr_13 [i_12] [i_11] [6] [i_9]), var_10))), (min((arr_17 [i_10] [i_11 - 3]), (arr_6 [i_11 - 1])))))));
                            var_32 |= (min((max((max(877903270, 29051)), ((max((arr_26 [9] [i_12]), (arr_23 [i_1 + 4] [i_9] [i_10] [i_11] [i_12])))))), ((min((max(25, 243)), (min((arr_11 [2] [8] [1] [i_1]), var_9)))))));
                            arr_42 [i_1] [i_10] = (max((min((max(var_11, var_3)), (max(0, (arr_6 [i_9]))))), (max((max(2147483647, 2802256643)), ((max(-29056, -203325806)))))));
                        }
                    }
                }
                var_33 = (min(1, 2802256643));
                arr_43 [i_10] = (max((min(((max((arr_40 [i_9] [i_9] [i_10 - 1] [i_1 + 4] [i_10] [9]), 255))), (max(var_5, (arr_10 [i_10] [i_9]))))), ((min(((min(48, (arr_2 [i_1] [i_9])))), (min(var_10, 2147483630)))))));
            }
            for (int i_13 = 3; i_13 < 8;i_13 += 1)
            {
                arr_46 [i_1] [i_9] [i_13 + 2] [i_9] = (min((max(((max(var_7, var_13))), (max(var_9, var_4)))), ((min(2147483641, 2802256657)))));

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_34 = max((max(((max(143, 1))), (max(29051, 14899131231795619883)))), ((min(((min(1, (arr_35 [i_1 - 2] [i_9] [i_1 - 2] [5])))), (min(47528, 175))))));
                    arr_50 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1 + 2] |= (max(((max(((min((arr_47 [4] [4]), 255))), (max((arr_13 [i_1 + 3] [9] [0] [9]), 1))))), (min(((max((arr_21 [2] [i_9] [1] [9] [i_14]), var_16))), (min(var_14, (arr_28 [i_1 - 3] [i_9] [i_14])))))));
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 7;i_15 += 1) /* same iter space */
                {
                    var_35 = 4544357880648225189;
                    var_36 |= 1;
                    var_37 = 1;
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 7;i_16 += 1) /* same iter space */
                {
                    arr_58 [i_9] [i_16] = 1;
                    var_38 ^= 1;
                    var_39 *= 37049;
                    var_40 = 2802256643;
                }
                for (int i_17 = 1; i_17 < 7;i_17 += 1) /* same iter space */
                {
                    var_41 ^= (max((max((max(37049, var_9)), (max(var_1, 19325)))), (max((max(49445, var_12)), ((min((arr_40 [i_17 + 1] [i_9] [i_13] [i_9] [i_9] [i_1 - 3]), 0)))))));
                    arr_63 [i_1 - 4] [i_9] [i_13 - 1] [i_17] = (min((min(((min(0, (arr_20 [i_1 + 4] [i_9] [i_13] [4])))), (max(var_17, var_14)))), ((max((max(37045, 29052)), ((max(124, 64))))))));
                    var_42 = (max((max(((max((arr_3 [i_1 - 4]), (arr_3 [i_13 + 1])))), (min(var_2, var_5)))), ((min(117, 28)))));
                }
                arr_64 [i_9] &= (min(((max((max(var_12, (arr_55 [i_1] [i_1] [i_1 - 4] [i_1 - 3]))), (min(108, (arr_59 [i_1] [i_9] [7])))))), (max((max(var_0, (arr_45 [i_1] [i_9] [i_13 - 3]))), ((max((arr_35 [3] [i_9] [i_9] [i_9]), (arr_51 [i_9] [i_9] [3] [i_9]))))))));
                arr_65 [i_1 - 4] [i_9] [2] [6] = (max((max(((min(35151, 64))), (max(var_5, var_4)))), ((max((max((arr_0 [i_1] [7]), 64)), ((max((arr_59 [7] [i_9] [4]), var_13))))))));
                var_43 = (max(((max((max((arr_13 [i_9] [i_9] [i_1 + 4] [9]), 15872)), ((min(10, (arr_2 [i_13 - 1] [i_9]))))))), (min(((max(65535, -1))), (max(1324309340, var_5))))));
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                var_44 *= (min((min((max(127, var_17)), ((min(4650, var_8))))), (max(((max(var_5, (arr_59 [i_1 + 4] [i_9] [i_1 + 4])))), (max((arr_20 [3] [i_9] [i_18] [3]), var_14))))));

                for (int i_19 = 1; i_19 < 7;i_19 += 1)
                {
                    arr_71 [i_1 - 4] [0] [7] [i_18] [i_19] [i_19 + 2] = (min((min((min(var_9, (arr_41 [i_1] [i_9] [i_18] [i_18] [i_18]))), ((max(var_2, 1))))), ((max(((max(230, (arr_34 [i_1 + 4] [7] [i_18] [i_19 + 3])))), (max(var_10, (arr_13 [i_1 + 3] [8] [i_18] [i_18]))))))));
                    var_45 = (max((min((min(var_8, (arr_9 [i_18] [i_19 + 3]))), ((max((arr_6 [i_1]), (arr_24 [i_1] [i_9] [i_18] [i_18] [2])))))), ((max((max(var_16, 2)), ((min(var_12, (arr_61 [i_1] [i_1] [i_18] [i_19])))))))));
                    arr_72 [i_1] [i_9] [7] [i_18] [i_19 - 1] [i_19 + 2] = (max(((max(((min(245, (arr_47 [i_9] [i_19])))), (min(94, 54725))))), (min((max(73, 17913961494693852332)), ((max(35151, 1)))))));
                }
            }
            var_46 *= (max(((max((max(29293, (arr_70 [9] [9] [4] [i_1 - 4]))), ((max(1, 1)))))), (min(((min(var_7, var_14))), (min((arr_54 [3] [i_9] [i_1 - 2]), 18446744073709551615))))));
        }
    }
    #pragma endscop
}
