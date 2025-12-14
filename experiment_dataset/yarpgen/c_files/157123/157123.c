/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(arr_1 [i_0]))));
        var_16 = (!212);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [1] [i_1] = (arr_1 [i_0]);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_17 ^= (arr_3 [16] [i_1] [i_2]);
                var_18 = (min(var_18, (arr_1 [16])));
            }
            var_19 = (arr_1 [i_0]);
            var_20 &= ((!(arr_0 [2])));
        }
        arr_8 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] [0] &= (-(arr_10 [10]));
        var_21 = (((~(arr_9 [2] [i_3]))));
        arr_12 [i_3] [18] &= (arr_9 [i_3] [18]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_22 = ((-(arr_18 [i_5] [i_5] [i_6])));
                arr_22 [i_5] [i_5] [i_5] [i_5] = arr_13 [1] [11];
            }
            arr_23 [i_5] [i_5 + 1] = (arr_4 [i_4] [i_4]);
            var_23 = (arr_14 [i_4] [i_5]);
            arr_24 [i_4] [i_5] [i_5 + 1] = arr_15 [i_5];

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_24 |= (arr_3 [i_7] [i_4] [i_4]);
                var_25 = (max(var_25, (arr_9 [i_4] [i_7])));
                var_26 = (arr_13 [3] [3]);
            }
        }
        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_27 ^= (arr_30 [4] [0] [4]);
            var_28 = (min(var_28, (arr_27 [i_8] [0] [6])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_29 = (arr_17 [i_4] [i_8]);
                        arr_38 [i_8] [i_9] [i_10] = (arr_10 [i_8]);
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 4; i_12 < 12;i_12 += 1) /* same iter space */
            {
                var_30 = (arr_39 [i_4] [i_11]);
                var_31 = (min(var_31, (((~(arr_37 [i_12] [12]))))));
            }
            for (int i_13 = 4; i_13 < 12;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    var_32 *= (arr_36 [i_13] [i_13 - 4]);
                    var_33 = arr_48 [i_4];
                    var_34 = ((-((-(arr_0 [i_11])))));
                    arr_51 [i_4] [i_13] [i_4] |= ((~((-(arr_39 [i_11] [i_13])))));
                }
                arr_52 [i_11 - 1] [i_11] [i_11] [3] = ((!(arr_4 [i_4] [i_4])));
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_35 = (arr_47 [i_4] [i_11 - 1] [i_11]);
                var_36 = (arr_44 [i_15] [i_11] [i_4]);
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
            {

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    arr_60 [i_4] [i_4] [i_11 - 1] [i_11] [i_17] = (arr_18 [i_11] [i_11] [i_11]);
                    arr_61 [i_11] [i_11] = (arr_55 [i_17] [1] [0] [i_4]);
                    var_37 = arr_56 [i_17];
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    arr_65 [i_11] [i_11 - 1] [i_11] = (arr_9 [i_11] [i_11]);
                    var_38 = ((-((~(arr_58 [i_4] [i_4] [i_4])))));

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_39 = ((~(arr_25 [i_4] [i_4] [i_4])));
                        var_40 *= ((!(~45)));
                        arr_68 [i_4] [i_18] [i_16] [i_18] [i_4] [i_11] = (arr_49 [i_16] [i_11 + 1] [7] [i_18]);
                        var_41 = (min(var_41, (((~(((!(arr_47 [i_19] [i_18] [i_19])))))))));
                    }
                    for (int i_20 = 1; i_20 < 11;i_20 += 1)
                    {
                        arr_71 [i_4] [i_11] [i_18] [i_20 + 1] = ((-(arr_55 [i_11] [11] [i_18] [i_11])));
                        arr_72 [i_4] [i_4] [i_11] = (arr_35 [i_4] [8] [i_11]);
                        arr_73 [i_4] [i_11 + 1] [i_16] [i_18] [i_11] = (!(arr_25 [i_4] [i_11] [1]));
                        var_42 |= arr_34 [i_4] [10] [i_16] [i_16];
                        arr_74 [i_4] [i_11] [i_16] [i_4] = (-(arr_48 [i_16]));
                    }

                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        arr_77 [1] [i_11] [i_18] [i_18] [i_16] [i_16] [i_21] = (arr_0 [i_11]);
                        var_43 += (arr_69 [i_4] [i_11] [i_11] [i_11] [i_11 + 1] [i_16]);
                        var_44 = ((!(arr_32 [i_11] [i_11] [7] [8])));
                    }
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        var_45 = (arr_29 [i_22]);
                        arr_81 [3] [i_11] [i_11] [i_18] [i_22] = ((!(arr_6 [i_22])));
                    }
                }
                var_46 = (arr_10 [i_11]);
                var_47 = (max(var_47, (arr_10 [i_16])));
            }
            arr_82 [i_4] [i_11] = (arr_28 [i_4] [i_11] [i_11 + 1]);
        }
        for (int i_23 = 3; i_23 < 10;i_23 += 1)
        {
            arr_85 [i_4] [i_23 - 2] = (arr_78 [6] [6] [i_23 - 1] [i_23] [12]);
            arr_86 [i_4] [i_4] [i_4] = ((-((~(arr_46 [i_4] [i_23] [i_23 - 2])))));
        }
        var_48 = arr_53 [i_4] [i_4] [6] [i_4];
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        arr_90 [i_24] = (arr_9 [i_24] [1]);
        var_49 = (arr_89 [i_24] [i_24]);
        arr_91 [i_24] = 14340;
        var_50 = (arr_10 [12]);
    }
    var_51 = (!var_1);
    var_52 = (!var_0);
    var_53 = ((~(~var_12)));
    #pragma endscop
}
