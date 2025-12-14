/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 = (max(var_18, (arr_0 [0])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_19 = (max((((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_3 [i_1 + 1]))), (((!(((~(arr_4 [i_1] [i_1] [i_1])))))))));
            var_20 = (min((max(((max((arr_4 [i_1] [i_1] [i_1]), (arr_5 [i_2] [i_1 - 1] [i_1])))), (max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))))), (arr_4 [i_1] [i_1] [i_1 + 1])));
            var_21 += (max((max(18446744073709551599, 114)), ((min(79, 32767)))));
            var_22 = (arr_6 [i_1 + 1] [i_1 + 1]);
            arr_7 [i_1] [i_1] = (min((max(0, 126)), (arr_4 [i_1] [i_2] [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                var_23 = ((-(arr_5 [i_4] [i_4 - 1] [i_4 - 3])));
                var_24 = (arr_6 [i_1] [i_1]);
                var_25 *= (arr_5 [i_1 - 2] [i_1 - 2] [i_4 + 3]);

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_26 = (arr_10 [i_1 + 2]);
                    var_27 = (((arr_4 [i_1] [i_4 - 3] [i_4]) ? (arr_4 [i_1] [i_4 - 1] [i_4]) : (arr_4 [i_1] [i_4 - 2] [15])));
                    var_28 = (max(var_28, (arr_2 [2] [i_3])));
                    arr_17 [i_1] [i_3] [i_1] [i_5] = (((arr_12 [i_1 - 2] [i_4 + 3] [i_1]) ? (arr_16 [i_1] [i_3] [i_4]) : (arr_8 [i_1 + 1] [i_1])));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, (arr_8 [i_1 + 2] [i_1 + 1])));
                        var_30 = (arr_2 [i_1] [i_1]);
                        var_31 = (arr_8 [i_4 - 2] [i_3]);
                        var_32 = ((-(((!(arr_19 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_33 ^= (arr_25 [i_1] [i_3] [i_4 + 3] [i_6]);
                        var_34 = (arr_14 [i_4 + 4] [i_4 + 4] [i_4 + 1] [i_4 - 1]);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_35 = (max(var_35, (arr_12 [i_1 - 1] [i_1] [4])));
                        var_36 = (arr_28 [17] [i_1] [i_1] [i_3] [i_4] [i_6] [0]);
                    }
                    arr_29 [i_1] [i_1] [i_1] [i_1] = (arr_26 [i_1] [i_4 - 1] [i_1]);
                    var_37 = (((arr_12 [i_1] [i_4] [i_1]) ? (arr_25 [i_1 - 1] [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_4] [15] [i_1])));
                }
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    var_38 = (min(var_38, (arr_12 [i_1] [2] [16])));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_34 [i_1 + 1] [i_1] [i_3] [7] = (arr_26 [i_3] [i_3] [i_10 + 1]);
                        var_39 ^= (arr_5 [i_3] [i_4 + 4] [i_3]);
                        var_40 = (arr_23 [i_4 - 2] [i_10 - 2] [i_11] [1] [i_11]);
                        var_41 = (arr_27 [i_1] [i_3] [i_4] [i_1] [i_10] [i_1 - 2] [i_1]);
                        var_42 = (((~-32756) ? (arr_2 [i_1] [i_4]) : (arr_27 [1] [i_11] [i_4 + 3] [i_4] [i_1 + 2] [i_1] [i_1])));
                    }
                }
                var_43 = (arr_3 [i_4 - 1]);
            }

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_44 ^= ((~(arr_24 [i_12] [i_1 + 1] [i_1 + 2])));
                arr_38 [i_1] [i_1] [i_12] = (arr_11 [i_1 - 2] [i_1 - 2]);
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_45 = (arr_19 [i_1 - 2] [i_3] [i_3] [i_13]);

                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    arr_46 [i_1] [10] &= (arr_25 [i_1] [i_1] [8] [i_1]);
                    arr_47 [i_1] [i_1] [i_1] [i_1] = (arr_42 [i_1]);
                    var_46 = (arr_13 [i_1 + 1] [i_3] [i_14] [i_14 + 1]);
                    var_47 -= (arr_31 [4] [i_3] [i_1 - 2] [i_14 + 1]);
                    var_48 *= arr_27 [i_14] [i_13] [i_13] [i_3] [i_3] [i_3] [i_1];
                }
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_49 = (arr_41 [15]);
                        var_50 = arr_30 [i_1];
                        var_51 ^= (arr_49 [i_1 - 2] [i_1 - 2] [i_15] [i_16]);
                        var_52 *= (((!690085239) ? 32764 : 122));
                    }
                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {
                        var_53 = ((((((arr_19 [i_3] [i_13] [i_13] [i_17]) ? (arr_53 [i_1] [10] [i_1] [i_1] [9]) : (arr_20 [i_1] [i_3] [i_13] [i_1] [3] [i_17] [i_1])))) ? (arr_27 [i_1] [i_1] [i_1 - 1] [i_1 - 2] [i_17] [i_17 - 1] [i_17 - 1]) : (arr_2 [i_1] [i_1])));
                        var_54 = (arr_25 [i_1] [i_3] [i_15] [i_15]);
                        var_55 = ((-(arr_6 [i_1 - 1] [i_17 + 2])));
                        var_56 = (arr_3 [i_1]);
                    }
                    var_57 = (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]);
                    var_58 = (arr_41 [i_1 + 2]);
                    var_59 *= ((arr_39 [i_1 + 1] [i_1 - 1] [i_13]) ? (arr_39 [i_1 + 1] [i_1 - 2] [i_1 + 1]) : (arr_39 [i_1 + 2] [i_1 - 2] [i_15]));
                    var_60 = ((arr_37 [i_1 + 1] [6] [i_1 + 2] [i_1 + 1]) ? (arr_44 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]) : (arr_36 [i_1] [3] [i_13] [i_15]));
                }

                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    var_61 |= (arr_12 [i_1 + 2] [i_1 + 2] [14]);
                    arr_59 [i_1] = (arr_36 [i_1] [i_1] [i_13] [i_1]);
                }
            }
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                var_62 = ((((((arr_28 [i_1 - 2] [i_1] [i_3] [i_3] [i_3] [i_3] [i_19]) ? (arr_11 [16] [i_19]) : (arr_13 [i_1] [i_3] [i_19] [i_19])))) ? (arr_27 [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_19] [i_19]) : (arr_32 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_63 = (arr_58 [i_1] [i_1] [i_1] [i_19]);
            }
            var_64 = (arr_19 [i_1 - 1] [13] [i_1 + 2] [i_1 - 1]);
            var_65 = (arr_60 [i_3] [i_3] [i_3] [i_1 + 1]);
        }
        var_66 &= (arr_51 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1]);
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 16;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            {
                var_67 ^= (max((max((arr_3 [i_20]), (arr_3 [i_21]))), (arr_19 [i_20] [i_20] [i_20] [i_21])));

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_68 -= (arr_10 [i_20]);
                    var_69 = (arr_24 [i_20] [i_21] [i_22]);
                    var_70 = arr_52 [i_20] [14] [i_21] [i_21] [i_21] [i_20];
                    var_71 = (min((arr_41 [i_20]), (arr_27 [i_20] [i_20] [i_20] [i_20] [i_21] [i_22] [i_22])));
                }
                arr_69 [i_20] [i_20] [i_21] |= min((((!((min(18446744073709551599, 1)))))), (arr_62 [6]));
            }
        }
    }
    #pragma endscop
}
