/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-88 ? 87 : 32464))) * ((var_1 * (((var_0 ? var_3 : 87)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((((~var_9) / (var_9 ^ 98))) <= (((min(var_0, 0))))));
        var_12 = (max(var_12, -408));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (((min((arr_8 [i_0 - 1]), 10879346725606468453)) > (((~(arr_7 [i_0] [i_0]))))));
                    var_13 = ((0 ? 0 : -26));
                    var_14 = (((arr_1 [i_0]) >= ((-(arr_1 [i_0])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_15 = (min(((126 ? -105 : 1)), (12968686642631304096 | var_6)));
                        arr_12 [i_0] [i_0] [i_2 - 2] [i_2 - 1] [i_0] [i_3] = 55548;
                        arr_13 [i_0] [i_1] [i_0] [i_2 + 1] [i_0] = 1658567175;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0 - 1] [i_1] [0] [i_0] = 0;
                        arr_17 [5] [i_0] [1] [i_4] = (var_3 - var_3);
                        var_16 = (min(var_16, (arr_7 [i_0] [i_0])));
                    }
                }
            }
        }
        arr_18 [i_0] = (((min(1, ((~(arr_2 [i_0]))))) & (((~(~var_9))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    {
                        var_17 = (1 | var_10);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_18 = (((arr_15 [2] [i_5] [2] [i_0] [i_5]) ? (((65 >> 25) >> (47726 == var_6))) : (0 / 14659)));
                            var_19 = (arr_8 [i_0]);
                        }
                        var_20 = (((max(1, var_8))));
                    }
                }
            }
            arr_30 [i_0] [i_0] [12] = ((!(((-126 ^ 1414918172) < ((-88 ? var_5 : (arr_8 [i_0 - 1])))))));
        }
    }
    for (int i_9 = 3; i_9 < 16;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            arr_36 [i_9] [i_10] = arr_35 [i_10 + 1] [i_9 - 3];

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                var_21 = (max(var_21, (((49 ? (arr_32 [i_10 - 1] [i_10]) : ((((arr_34 [14] [8] [i_9]) ? -26 : 3000))))))));
                var_22 = (((904118276 / -88) << (((((arr_34 [i_9 - 2] [i_10] [i_9 - 2]) ? (arr_38 [i_9] [i_9]) : 126)) - 362496167))));
            }
        }
        var_23 = (arr_31 [i_9] [i_9]);
        arr_39 [i_9] = (~10723);

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_43 [i_12] [12] = (arr_34 [i_9 + 1] [i_9 + 1] [i_12]);
            var_24 += (!18446744073709551615);
            arr_44 [i_9] = -71;
            var_25 = (max(var_25, (arr_35 [i_9] [16])));
            arr_45 [i_9] = ((-(arr_42 [i_9 + 2] [i_12])));
        }
        for (int i_13 = 3; i_13 < 16;i_13 += 1)
        {
            var_26 = ((2147483647 ? -2147483647 : 16));

            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                arr_52 [i_9] [i_13] [i_13] [i_9] = ((((min((arr_42 [i_14 + 1] [i_13 + 1]), (arr_42 [i_9] [i_13 + 2])))) ? var_6 : -2147483647));
                arr_53 [i_14 + 1] [i_9] [i_9] = var_0;
                arr_54 [i_9] [i_13 + 2] [i_9] = (arr_47 [i_9 - 2] [i_13 - 3] [i_13 - 1]);
            }
        }
        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            var_27 = ((-(arr_47 [i_9] [i_9 + 2] [i_15 - 1])));
            arr_57 [i_15] = -800094550;
        }
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            var_28 = ((((((max((arr_38 [i_16] [i_9]), var_4)) + -var_8))) ? ((-1922501297 ? (arr_50 [i_9 - 1] [i_9 - 1] [i_16 + 1] [i_9 - 1]) : (arr_50 [i_9 + 1] [i_9 - 2] [i_16 - 1] [i_16]))) : var_4));
            arr_61 [i_9] [i_16 + 2] [i_9 + 1] = (arr_37 [i_9] [i_16] [i_9 + 1]);
        }
    }
    for (int i_17 = 0; i_17 < 0;i_17 += 1)
    {
        var_29 = (max(var_29, ((max(((min((arr_63 [i_17 + 1] [i_17 + 1]), (arr_63 [i_17 + 1] [i_17 + 1])))), (min(1, 6729928849583053936)))))));
        arr_64 [i_17] = ((((((((arr_62 [i_17]) - var_5))) ? (arr_63 [i_17] [i_17]) : var_7)) | ((((((arr_63 [i_17] [i_17]) | 57747))) ? ((1308050350 ? var_6 : (arr_63 [i_17] [i_17]))) : (arr_62 [i_17])))));
    }
    for (int i_18 = 2; i_18 < 7;i_18 += 1)
    {
        var_30 = (min((!var_2), (!31)));
        arr_69 [9] [i_18] = ((-(arr_20 [i_18 + 2])));
        var_31 = (min(var_31, (min((((arr_15 [i_18 - 1] [8] [i_18] [8] [14]) ? 33 : (arr_58 [i_18 - 1] [i_18]))), (~127)))));
    }
    var_32 = (min((((1 < (var_4 | var_0)))), (min(var_4, (min(var_6, 1922501321))))));
    var_33 = var_9;
    var_34 = -var_8;
    #pragma endscop
}
