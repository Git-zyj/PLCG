/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((((arr_1 [i_0]) ? var_8 : (arr_1 [1])))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_1] = (min(574460741, 0));
            arr_7 [i_1] = (!96);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = ((((var_13 ? (arr_11 [i_2] [i_2] [i_2]) : var_3)) | -1));
            var_21 = (min(var_21, 31));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_19 [18] [i_4] [i_5] [i_5] = var_18;
                arr_20 [i_2] [i_5] = var_17;
                arr_21 [i_2] [i_2] [i_5] [4] = ((var_1 - (arr_13 [i_4 + 1])));
            }
            var_22 = ((13889 ? (((arr_11 [i_2] [11] [i_4]) ? var_14 : var_13)) : (~var_8)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_23 = ((~(arr_15 [i_4 - 1] [i_4 - 1])));
                            arr_29 [i_2] [i_2] [i_2] [i_2] [7] = (arr_14 [i_7 - 2]);
                            var_24 = (((arr_11 [i_7 - 2] [i_4 + 3] [i_2]) == (((arr_28 [i_4] [i_4] [i_6] [i_4] [i_2]) ? var_1 : var_13))));
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_34 [i_9] = (~((-(arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));

            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_25 += ((-((((arr_32 [i_2] [i_2] [i_2]) == (arr_8 [i_9]))))));
                            arr_41 [i_2] [i_2] [i_9] [5] [2] [i_9] = var_4;
                        }
                    }
                }
                arr_42 [i_2] [i_2] [i_2] [i_2] = ((-(arr_36 [i_10 + 1] [i_9] [i_10])));
            }
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                var_26 = ((~(!160)));

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        var_27 = ((~(arr_14 [i_13 - 2])));
                        arr_52 [i_14] [i_14] [i_13 - 1] [i_9] [i_14] = var_14;
                        arr_53 [i_2] [i_2] [i_9] [i_13] [i_14] [i_15 - 1] [i_14] = (arr_24 [13] [i_9] [i_13 - 1] [i_14] [6] [i_15 - 1]);
                    }
                    for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
                    {
                        var_28 = ((var_9 ? (arr_45 [1] [1] [i_13 - 1] [1] [i_16 + 1]) : (arr_45 [i_2] [1] [i_13] [i_14] [i_16])));
                        arr_58 [i_14] [i_14] [i_14] [i_13] [i_13 + 1] [i_13] = ((-(arr_35 [i_13 - 1] [i_16 + 1] [2] [i_16])));
                        arr_59 [5] [5] [i_14] [i_14] [1] = ((var_4 ? var_6 : (arr_48 [i_13 + 1])));
                    }
                    var_29 = ((~(arr_33 [i_13 + 1])));
                }

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_64 [4] [4] [4] [i_13 - 1] = (((((-623040417 ? 2058 : 32767))) == (arr_50 [i_17] [i_13] [i_13] [i_13 - 1] [i_13] [i_13] [i_13])));
                    arr_65 [i_2] [i_2] [i_2] [i_2] = (((arr_38 [i_9] [i_13 + 1] [i_13 - 2] [i_13] [i_9] [i_13 + 1]) >= (~var_9)));
                    arr_66 [i_2] [i_2] [i_2] = (!var_16);
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    arr_70 [7] [i_9] [i_13 + 1] [i_13 + 1] [i_9] = (!(arr_37 [i_13 + 1] [i_13] [i_18] [1]));
                    arr_71 [i_18] [i_13] [i_9] [i_9] [18] [i_2] = (((arr_10 [i_2]) / (arr_10 [i_13 - 2])));
                }
                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    var_30 = (((arr_17 [i_13 - 1] [i_13 + 1] [i_19 + 1]) ? (arr_17 [i_13 - 2] [i_13 - 1] [i_19 + 1]) : (arr_17 [i_13 - 2] [i_13 - 1] [i_19 + 1])));
                    arr_76 [i_2] [i_9] [i_2] [i_19 - 1] = ((1073741808 ? 10 : 32767));
                    var_31 = (max(var_31, (((~(arr_73 [3] [i_13 + 1] [i_19 + 1] [i_13] [i_19 + 1]))))));
                    var_32 = (arr_62 [i_2] [i_2] [i_9] [i_13] [i_2]);
                }
            }
        }
        arr_77 [i_2] [i_2] = var_4;
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 12;i_20 += 1)
    {
        arr_81 [i_20] [i_20] = ((var_0 == (arr_18 [1] [i_20 + 2] [1])));
        var_33 = (!(arr_33 [i_20 + 1]));
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 13;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    {
                        arr_91 [6] = ((-(arr_86 [i_20 + 2])));
                        arr_92 [i_20] [13] [i_21] [i_20] [12] [3] = (var_9 ? (arr_54 [i_20 - 1] [i_20 + 2] [i_21 - 1] [1] [i_22 - 1] [i_23]) : (arr_54 [i_20 - 1] [i_20 - 1] [i_21] [i_22] [i_23] [i_23]));
                        arr_93 [i_20] [1] [i_20 + 1] [0] = 32;
                        var_34 = ((-28 && (var_5 == var_17)));
                    }
                }
            }
        }
        arr_94 [i_20] = var_18;
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 0;i_24 += 1)
    {
        arr_97 [i_24] [i_24] = (var_4 > var_9);
        arr_98 [i_24] = var_13;
        arr_99 [i_24 + 1] = ((!(!0)));
    }
    var_35 = ((max(((min(6, 3742350157))), -1)));
    var_36 = var_4;
    #pragma endscop
}
