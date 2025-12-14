/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((min(((min(var_17, var_5))), 1947082287))), (max((((-102 & (-2147483647 - 1)))), (max(var_11, -619081258))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [0] = (max((max(((max(var_16, (arr_2 [i_0] [i_0])))), (max(101, (arr_0 [i_0]))))), (((~(arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (min(var_19, (((!(arr_2 [i_1] [5]))))));
            var_20 -= (!(arr_4 [i_1] [i_0]));
            arr_6 [6] [6] |= (max(var_16, (((!(((arr_1 [i_0]) != var_2)))))));
            arr_7 [i_1] [i_1] [i_1] = (!-471382660);

            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                arr_11 [i_0] [i_1] [i_1] = 65402;
                arr_12 [i_1] [i_1] [i_1] = ((min((max((arr_8 [i_0]), var_12)), ((min((arr_2 [i_0] [i_0]), (arr_5 [i_0] [i_1])))))));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = -4716494480570466822;
            arr_15 [i_0] [i_0] = ((((+(max((arr_0 [1]), var_7)))) == 16689));
        }
        arr_16 [i_0] = (arr_8 [i_0]);
        arr_17 [i_0] = var_13;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_22 = (max(((var_3 + (arr_9 [1] [i_4]))), (min((((65535 < (arr_10 [2] [2])))), ((var_5 ? var_15 : 495989811))))));
        var_23 = ((-((max(((((arr_2 [i_4] [i_4]) < var_7))), (arr_2 [i_4] [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = (arr_5 [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_26 [i_5] = ((-(arr_24 [i_5] [i_5])));
            arr_27 [i_5] = var_12;

            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                var_24 = (min(var_24, (arr_20 [7])));
                arr_30 [i_5] [i_5] [i_5] [0] = ((((!(!var_8))) ? ((~(arr_14 [i_7 + 1] [i_7] [i_7 - 2]))) : ((((!4267173183) - ((((arr_0 [i_6]) != (arr_0 [i_5])))))))));
                arr_31 [i_5] = (((min((arr_0 [i_5]), (arr_21 [i_5] [0]))) * ((((((3700520957 ? 1 : 65402))) ? var_3 : (arr_20 [i_5]))))));
                arr_32 [i_5] [i_6] [i_5] [i_5] = ((~((((max((arr_4 [i_5] [i_5]), (arr_10 [i_5] [i_5])))) ? (min((arr_10 [i_5] [i_5]), (arr_14 [i_7] [i_6] [i_5]))) : (arr_9 [i_5] [i_5])))));
            }
            var_25 = ((~(arr_21 [i_5] [i_5])));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_26 = (max(var_26, ((max(32742, (max((arr_33 [i_5]), 1091302844548839708)))))));

            /* vectorizable */
            for (int i_9 = 4; i_9 < 10;i_9 += 1)
            {
                var_27 = (arr_19 [i_5] [i_5]);
                var_28 = var_11;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_42 [i_5] [i_5] = (arr_40 [i_8] [i_5] [i_10]);
                arr_43 [i_5] [i_5] [i_10] [i_10] = ((~(arr_20 [i_10])));
                var_29 = (max(var_29, (((((arr_8 [i_5]) >> var_15))))));
            }
            var_30 = (max(var_30, (arr_9 [i_8] [i_5])));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_47 [i_5] [i_11] [i_5] = var_5;
            arr_48 [i_5] [i_11] = var_17;
        }
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    var_31 = (arr_49 [i_13]);
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                arr_64 [i_16] [i_14] = 594446360;
                                arr_65 [i_12] [i_12] [i_12] [4] [i_12] |= (arr_63 [i_14] [i_16] [i_14] [i_15] [i_14] [i_15] [i_16]);
                            }
                        }
                    }
                    var_32 = (var_11 != ((((max((arr_61 [i_14] [2] [7] [i_13 - 2] [i_12] [i_12] [i_12]), (arr_52 [i_12] [i_13])))) ? (min(var_13, (arr_50 [i_12]))) : (!18446744073709551615))));
                }
            }
        }
        arr_66 [i_12] = (arr_59 [i_12]);
        arr_67 [i_12] = (arr_62 [i_12] [i_12] [i_12] [i_12] [i_12]);
    }
    #pragma endscop
}
