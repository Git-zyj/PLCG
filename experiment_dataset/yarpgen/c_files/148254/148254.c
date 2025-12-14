/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_16 = (min(var_16, (((!(arr_1 [14]))))));
            arr_4 [i_0] [i_0] = (arr_1 [i_0 + 2]);

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_17 = ((!(arr_6 [i_2])));
                var_18 = (max(var_18, (((~((~(arr_7 [i_1 + 1] [i_1 + 1] [i_0]))))))));
                var_19 = ((~(arr_0 [i_0] [15])));
                arr_8 [i_2 - 1] = (arr_3 [7]);
            }
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                var_20 = (arr_11 [i_3] [i_3] [i_3 - 2] [i_3]);
                var_21 = (arr_1 [i_3 + 1]);
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {

                        for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((~(arr_0 [i_4] [i_6 + 1])));
                            var_23 = (arr_18 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0]);
                            var_24 ^= (arr_7 [i_0] [i_0] [i_0 - 1]);
                            var_25 = ((!(arr_6 [i_4])));
                            arr_20 [i_0 + 2] [i_0 + 2] [i_4 + 2] [i_5] [i_4] [i_6] = ((~(arr_18 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_26 = (arr_24 [i_0 + 2] [i_1] [i_4] [i_0 + 2] [i_7 + 1]);
                            var_27 = ((~((~(arr_19 [i_7])))));
                        }
                        var_28 = (!(arr_7 [i_5] [i_5] [10]));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_29 = (min(var_29, (((~(arr_14 [i_0] [18]))))));
                var_30 = (arr_27 [i_0 + 1] [i_0] [i_0] [2]);
                arr_30 [i_9] [i_9] = ((!(arr_29 [i_0] [i_0])));
            }
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                arr_33 [i_10] = ((-(arr_7 [i_0] [i_8] [1])));

                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    var_31 = (max(var_31, (((~(arr_18 [i_0] [i_8] [i_8] [i_10 - 1] [i_11]))))));
                    var_32 += ((!(arr_7 [i_0] [i_0 - 2] [i_10])));
                    arr_37 [i_8] [i_8] [i_10] [i_10] = ((!(arr_2 [i_11])));
                    var_33 = (arr_32 [i_11 + 3] [i_11 + 3] [i_11 + 4] [i_10]);
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_34 += (arr_39 [i_0] [i_8] [i_0] [i_0] [i_8] [i_0]);
                    var_35 |= ((-(arr_3 [i_0])));
                    var_36 += ((-(arr_22 [i_12] [i_12] [i_10] [i_0 + 1] [i_0 + 1])));
                    var_37 = (arr_34 [i_0] [i_8]);
                    var_38 += (arr_21 [i_0]);
                }

                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_39 = (arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]);
                        arr_46 [i_0 - 2] [i_8] [i_10 - 1] [i_13 - 1] [i_10] = (arr_11 [i_0] [i_8] [i_10] [8]);
                        arr_47 [i_0] [i_10] [i_14] [i_13 - 1] [i_14 + 1] [i_13] = ((-(arr_38 [i_0] [i_8] [i_10 + 1] [i_13 + 1] [i_13] [i_8])));
                    }
                    var_40 = arr_44 [i_0 - 1] [i_10] [3] [3] [3] [i_0] [i_10];
                }
                var_41 = (arr_34 [i_0] [i_0 - 1]);
            }
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                var_42 += ((~((~((-(arr_15 [i_0] [i_0 - 2] [i_8] [i_0 - 2])))))));
                arr_51 [i_0 + 1] [i_0 + 1] [i_15 + 4] = ((~(((!(arr_39 [i_0] [18] [i_0] [i_15] [i_0] [i_0]))))));
                var_43 = (max(var_43, (((!(arr_7 [i_0] [i_8] [i_8]))))));
                var_44 |= ((!(arr_32 [6] [i_8] [i_8] [i_0])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_45 = ((-(arr_44 [i_0] [i_15] [i_15] [i_0] [i_15] [i_16] [i_17])));
                            var_46 |= ((~(arr_23 [i_0] [i_0] [9] [i_0] [i_15 + 2] [i_0] [i_17])));
                        }
                    }
                }
            }
            for (int i_18 = 1; i_18 < 18;i_18 += 1)
            {
                var_47 = ((!((!((!(arr_44 [i_0] [i_0] [i_8] [i_8] [i_8] [i_8] [i_0])))))));
                arr_61 [i_0] = (arr_38 [i_0] [7] [10] [8] [4] [i_8]);
                var_48 = (arr_7 [i_0] [9] [9]);
                arr_62 [i_0 - 2] [i_0] = (arr_40 [i_0]);
            }
            var_49 = ((~(arr_21 [i_0])));
            arr_63 [i_0 + 2] [i_8] |= ((~(arr_15 [i_0] [i_0] [i_0] [i_8])));
        }
        arr_64 [1] = ((-(arr_6 [i_0])));
        var_50 += (arr_19 [i_0]);
    }
    for (int i_19 = 1; i_19 < 19;i_19 += 1)
    {
        var_51 = (arr_68 [6] [i_19 + 2]);
        var_52 = (max(var_52, (arr_66 [i_19] [i_19])));
        var_53 = (arr_66 [i_19 - 1] [1]);
    }
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 16;i_22 += 1)
            {
                {
                    var_54 = (arr_55 [i_20] [i_21]);
                    arr_76 [i_22] [i_21] [i_20] = arr_34 [i_21] [i_21];
                }
            }
        }
        var_55 = (min(var_55, (arr_34 [i_20] [i_20])));
        var_56 = ((~((~(arr_2 [3])))));
    }
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        arr_79 [i_23] = (arr_77 [i_23] [8]);
        arr_80 [i_23] = ((~(((!(arr_44 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))))));
        arr_81 [i_23] = ((!(arr_72 [i_23] [1] [i_23])));
        var_57 += (arr_78 [i_23]);
    }
    var_58 = (((~(~var_7))));
    #pragma endscop
}
