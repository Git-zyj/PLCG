/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (~var_14);
    var_17 |= (var_0 && -var_3);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [8] [i_0] [i_1] = min((((~(arr_3 [i_0] [i_0] [11])))), (arr_6 [i_0] [i_1] [i_0]));
            var_18 = (!var_9);
            arr_8 [i_0] [i_0] [i_0] = (~var_13);
            arr_9 [9] [i_1] |= var_14;

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_19 = -var_0;
                arr_14 [4] [i_0] [i_2] [i_2] = var_5;
                var_20 = (max(var_20, (arr_11 [7] [i_0] [i_0] [i_0])));
                arr_15 [i_0] [i_1] [0] = ((-(arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                var_21 = (max(var_21, ((((((arr_10 [i_0] [i_2 + 1] [1] [1]) ^ (arr_10 [i_0] [i_2 + 1] [i_0] [i_0]))) != var_8)))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_22 = var_12;
                arr_18 [i_0] [i_1] [i_3] = var_3;
            }
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_24 [2] [11] [i_4] [11] = var_9;
                arr_25 [i_0] [i_0] [i_0] [i_0] |= (((arr_2 [i_0]) && (!var_2)));
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_28 [i_0] [i_4 + 4] [i_6] [i_4 + 4] |= ((-((var_6 ^ ((min((arr_2 [i_4 - 1]), var_5)))))));
                var_23 = var_10;

                for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, var_11));

                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        arr_33 [i_0] [i_4] [i_4] [0] [i_4] = var_7;
                        arr_34 [i_0] [3] [i_4 + 2] [3] [i_7 - 1] [i_8] |= (max((arr_27 [i_6] [i_7 - 1] [i_8]), (!var_2)));
                        arr_35 [i_0] [i_4] [8] [i_7] [i_7] = ((~(~var_6)));
                    }
                    var_25 = var_5;
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_4] [i_6] [0] = (arr_17 [i_6] [i_9 - 1]);
                    arr_39 [i_9] [i_9] [i_9] [i_9] = -var_7;
                    arr_40 [i_0] [i_4] [i_6] [i_9] [i_4 - 1] = (((~var_4) & 1));
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] = var_8;
                    arr_46 [i_10 - 2] [i_6] [i_4] [i_4] [i_0] = var_4;
                }
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    arr_50 [i_0] [i_4 - 1] [i_4] [i_11] [i_4 - 1] |= (arr_2 [i_0]);
                    arr_51 [i_0] [i_0] [i_6] [i_0] = var_4;

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_26 = (max(var_26, (arr_10 [i_0] [i_6] [i_6] [i_6])));
                        var_27 = (max(var_27, -1));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_28 = var_4;
                        var_29 = (max(var_29, (arr_6 [i_4 + 4] [i_11 + 1] [i_11 - 1])));
                    }
                    arr_57 [i_0] [2] [i_6] [i_6] [i_11 - 1] |= var_8;
                    arr_58 [i_6] [i_6] [i_6] [i_6] = var_9;
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_62 [i_0] = -var_8;
                arr_63 [i_14] [i_14] [i_4] [i_0] = var_4;
                var_30 = (min(var_30, var_8));
            }
            var_31 = (max(var_31, (arr_61 [i_0] [1] [i_4 + 3] [i_4 + 3])));
            arr_64 [9] [i_4] [9] = ((var_10 != (arr_52 [i_0] [i_0] [i_0] [i_4 + 1] [i_0])));
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            arr_67 [i_0] [i_15] [0] = (max(((~(arr_66 [i_0] [i_15] [i_0]))), (arr_59 [i_15] [6])));

            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {

                /* vectorizable */
                for (int i_17 = 4; i_17 < 11;i_17 += 1)
                {
                    arr_72 [i_15] [i_15] [i_16 - 1] [0] [i_16 - 1] |= (((!(arr_66 [i_0] [i_16] [i_17 - 2]))));
                    arr_73 [i_16] [i_16] [i_15] [i_16] = -var_8;
                }
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    arr_76 [i_16] = var_7;
                    arr_77 [i_16 + 1] [i_15] |= var_13;
                    arr_78 [i_0] [i_0] [i_16] [i_18] = (((((!(arr_60 [i_15] [i_15] [i_16])))) ^ (var_12 - var_12)));
                }
                arr_79 [i_16] [i_16] [i_16 + 2] = var_6;
            }
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                var_32 = (!1);
                var_33 |= ((~(arr_82 [i_0] [i_15] [i_19] [i_19])));
                arr_84 [i_15] = var_8;
            }
            for (int i_20 = 3; i_20 < 9;i_20 += 1)
            {
                arr_87 [0] [i_0] [i_15] [i_20] = -var_1;
                arr_88 [9] [i_15] [i_20] [i_20 - 3] = var_10;
                arr_89 [i_0] [i_15] [i_0] [i_15] = var_5;
            }
            arr_90 [i_0] [i_0] = var_8;
            var_34 = (((arr_20 [i_0] [i_0]) - var_5));
        }
        arr_91 [0] = (arr_69 [i_0] [i_0]);
    }

    for (int i_21 = 0; i_21 < 15;i_21 += 1)
    {

        for (int i_22 = 4; i_22 < 12;i_22 += 1)
        {
            arr_97 [i_21] [i_21] = (var_1 ^ var_14);
            arr_98 [i_21] |= var_8;
        }
        var_35 = (min((arr_92 [i_21] [i_21]), (max(var_5, var_11))));
        arr_99 [i_21] = ((-(arr_92 [i_21] [i_21])));
    }
    #pragma endscop
}
