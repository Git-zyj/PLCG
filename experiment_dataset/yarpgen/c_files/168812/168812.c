/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((var_4 % var_10), 1)));
    var_18 = (max(var_18, 1));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (((min((((!(arr_1 [i_0])))), (max(1354118900, 1354118900)))) ^ ((-(arr_1 [9])))));
        var_20 = (min(var_20, ((((((var_9 ? (arr_0 [i_0 - 1] [i_0]) : ((1 >> (((arr_2 [i_0]) - 1474963847))))))) ? ((-((1354118926 ? 127 : (arr_1 [i_0 - 1]))))) : var_9)))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 = ((-1354118901 ? -1354118900 : 822056343));
                        var_22 = (!0);
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_23 = ((((1 ? 17749425468260158866 : 1354118918)) & (arr_9 [2] [i_5] [2])));
                        var_24 = 1;
                        var_25 = (((((arr_1 [i_5 - 1]) <= (arr_1 [i_5 - 1]))) ? (arr_1 [i_5 - 1]) : (max((arr_13 [i_4 - 1]), -1039590163))));
                    }
                }
            }
        }
        arr_22 [8] &= (arr_10 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    var_26 = (max(var_26, ((max((((1 * (((arr_20 [i_4 - 1] [i_8 + 1] [i_9] [i_8]) / var_6))))), (min(((max(var_12, -31873))), (-1354118950 / var_10))))))));
                    var_27 = (arr_7 [i_4]);
                    var_28 = ((!((max(-2, (arr_24 [i_4] [i_4]))))));
                    var_29 = ((((((arr_26 [i_4] [21] [i_4 - 1] [i_9 - 1]) / (arr_2 [i_4])))) ? (((-852861943 ? (((var_15 == (arr_6 [i_4])))) : (arr_9 [i_9] [i_8] [13])))) : ((-(arr_9 [i_4 - 1] [i_8] [i_4 - 1])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_30 = (min(var_30, (((1 * (arr_29 [i_10] [6]))))));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_31 = (arr_15 [i_10] [1]);

            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    var_32 = (((arr_21 [i_10] [i_11] [i_12 + 1] [i_13] [i_12 + 1] [i_13]) ? (arr_18 [22] [i_12 + 1] [i_12 - 1] [i_12 - 1]) : 33554431));

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_33 = ((-(arr_2 [1])));
                        arr_42 [i_10] [0] [2] [i_10] = (arr_4 [i_12 + 1] [i_12] [i_12 - 2]);
                        var_34 = (((((arr_19 [i_13] [12] [21]) || var_10)) ? 0 : 0));
                        var_35 = (min(var_35, ((((arr_40 [i_12 - 1] [i_11] [i_12] [i_11] [11] [i_13] [i_11]) ? var_12 : (arr_21 [i_10] [i_12 - 3] [i_13] [i_13] [21] [i_13]))))));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_36 = (1043422367 ? 1 : 33554431);
                        var_37 = (min(var_37, var_0));
                    }
                    var_38 = ((var_8 * (((1 ? var_2 : var_7)))));
                    var_39 = (max(var_39, var_11));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                {
                    var_40 = ((!(((4294967295 ? -822056343 : 0)))));

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_41 = (31873 <= 1);
                        var_42 = (arr_16 [i_12 - 3]);
                        var_43 = ((arr_37 [6] [0] [i_16] [i_17]) ^ (var_15 % 1));
                        var_44 ^= (((arr_20 [i_17] [i_12] [i_11] [i_10]) > (((-(arr_24 [i_16] [i_11]))))));
                    }
                    var_45 = var_0;
                }
                for (int i_18 = 0; i_18 < 0;i_18 += 1)
                {
                    var_46 = -86;
                    var_47 = (max(var_47, (~var_15)));
                    arr_56 [i_10] [0] [11] [i_18 + 1] [i_11] [i_11] = ((var_8 ? 196 : var_2));
                }
                arr_57 [i_10] [0] = (arr_9 [i_10] [i_12 - 1] [1]);
                var_48 = ((~(!1)));
                var_49 = (((arr_33 [i_10] [i_11] [i_12 - 1]) ? var_16 : (arr_33 [i_10] [i_11] [i_12 - 2])));
            }
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                var_50 = ((1 >> (((arr_1 [i_19]) - 216))));
                arr_60 [3] [i_10] [1] [7] = (arr_29 [i_10] [i_10]);
                var_51 = ((((4294967295 ? 4478620320686714586 : (arr_0 [i_19] [i_19]))) > (-129000511 * 1)));
            }
        }
        arr_61 [i_10] = 3381194078204468239;
    }

    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_52 = (1354118883 > 0);
        var_53 = (max(var_53, ((((arr_33 [1] [i_20] [i_20]) ? (((-9223372036854775807 - 1) ? 255 : (arr_11 [6]))) : 0)))));
    }
    #pragma endscop
}
