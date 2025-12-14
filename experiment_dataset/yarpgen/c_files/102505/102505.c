/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = ((!((var_17 && (((var_14 ? var_12 : var_13)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, (((+(((arr_0 [i_0]) | (arr_0 [i_0]))))))));
        var_22 = (min(var_22, 35237));
        var_23 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_24 = ((arr_3 [i_0] [i_0]) % (min((arr_0 [i_0]), (min(var_2, (arr_5 [i_1] [12] [13]))))));
            arr_6 [i_1] = (min((min((((arr_0 [8]) ? (arr_0 [i_0]) : (arr_5 [7] [i_0] [3]))), ((-(arr_0 [i_0]))))), var_18));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_25 = 99;
            var_26 = ((1 << (9223372036854775800 - 9223372036854775774)));
            var_27 = ((((arr_5 [i_0] [i_2] [i_0]) ? var_9 : var_17)) / 537903853742814334);
            arr_9 [i_2] [i_0] [i_0] = ((((arr_5 [i_0] [i_2] [5]) == var_5)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_28 = ((~(arr_0 [i_0])));
                        var_29 = (arr_12 [i_2] [i_2]);
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_19 [1] = ((-2995 != ((min((((arr_7 [i_5] [i_5] [i_5]) || (arr_18 [i_0] [i_0] [i_5]))), (!0))))));
            var_30 = (max(var_30, ((min((((arr_13 [i_0] [8] [i_5] [i_5]) * ((min((arr_3 [i_0] [i_0]), (arr_7 [i_5] [10] [i_5])))))), (arr_14 [i_0] [i_5] [i_5] [i_5]))))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((var_16 >= (min(((min(-9, var_18))), (arr_1 [i_6]))))))));
                            var_32 = (max(var_32, (((arr_22 [i_0] [i_5] [i_8]) || ((min((arr_22 [i_7] [i_5] [i_0]), (arr_22 [i_0] [i_7] [i_8]))))))));
                        }
                    }
                }
                arr_31 [i_6] [i_0] [i_0] = (((arr_24 [i_0] [i_5]) ^ 7));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_33 = (min((((((min(1, 3609527842493193919))) && (0 || 407299682577263141)))), ((4294967295 >> ((((-(arr_29 [i_0] [i_9]))) + 22531))))));
                var_34 = (arr_33 [i_0] [i_5] [i_5]);
                var_35 = (arr_4 [i_0] [i_0]);
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    var_36 = min((min((arr_2 [i_11]), (-9223372036854775807 - 1))), var_10);
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_37 = (min(((min((min(var_15, (arr_11 [i_0] [i_0] [i_10]))), (min(6, (arr_4 [i_0] [i_10])))))), (arr_23 [i_10] [i_10 - 1] [i_11] [i_12])));
                                arr_43 [4] [4] [0] [12] &= (min(2222398090, (-9223372036854775807 - 1)));
                                arr_44 [i_10] [i_10] [i_10 + 1] [i_10] [i_10 - 3] [i_10] = ((~(arr_12 [i_10] [i_12 - 1])));
                            }
                        }
                    }
                    var_38 = (min(var_38, (min(10561, 6))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_39 = (max(var_39, (((arr_7 [i_14] [i_14] [i_10 - 3]) && ((!(arr_21 [i_0] [i_10 + 1] [i_10 - 3])))))));
                                arr_50 [i_0] [i_10] [i_11] [i_0] [i_10] = ((((min(-121, ((2072569205 ? (arr_40 [i_14] [i_10] [i_14] [i_14]) : 32767))))) ? 8 : (min(((var_12 ? (arr_1 [i_0]) : 26037)), (arr_41 [i_10] [i_10])))));
                                var_40 = (((((min((arr_14 [i_0] [i_10] [i_0] [i_15]), var_6))) / ((min(var_12, 896))))));
                                var_41 = (min((min((arr_40 [i_0] [i_10] [i_10] [i_0]), (min((arr_8 [i_10] [i_10] [i_15]), var_8)))), (min((min((arr_1 [8]), (arr_22 [i_0] [i_0] [i_0]))), var_11))));
                                arr_51 [i_0] [i_0] [i_15] [i_14] [i_15] [i_10] = (min(((-((var_17 ? (arr_42 [i_0] [i_10]) : var_7)))), ((min((arr_7 [i_10] [i_10] [i_10]), ((min((arr_16 [i_10] [i_10]), 56))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_42 = (((min(var_7, var_10)) | (~var_4)));
    #pragma endscop
}
