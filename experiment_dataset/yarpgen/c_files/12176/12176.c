/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((~var_6), var_11));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [5] [3] = (arr_2 [i_0]);
        arr_4 [i_0] = ((!((min((((!(arr_2 [i_0])))), (((arr_0 [i_0] [i_0]) ? (arr_1 [0]) : 1)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    var_19 = (min(1818184880, 49152));
                    arr_12 [i_1] [i_2] [i_2 - 2] [i_2 - 2] = (arr_9 [i_1] [i_2] [i_3]);
                    var_20 &= (~-4876828506481572047);
                    var_21 = (arr_1 [i_1]);
                }
            }
        }

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_22 [i_5] = (arr_16 [i_6 - 1] [i_6 - 1]);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_22 = (arr_17 [i_6 - 2] [i_5 - 3]);
                            var_23 = 18446744073709551615;
                            var_24 = 19;
                            var_25 = (((-(arr_16 [i_4] [i_4]))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_26 = var_15;
                            var_27 = var_2;
                        }
                        var_28 = (min(12870908629540018371, (arr_27 [i_1] [i_4] [i_4] [i_5 - 1] [i_5] [i_4])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_29 += (arr_10 [0] [i_10]);
                        var_30 = ((~((((max((arr_16 [i_4] [i_10]), 36028797018832896))) ? ((((!(arr_1 [i_1]))))) : 8))));
                        var_31 = ((((((8 | (arr_5 [i_9] [i_10]))))) | ((~(arr_17 [i_1] [i_9])))));
                        var_32 ^= 7275279682943761970;
                    }
                }
            }
            var_33 = (min(((~(arr_25 [i_1] [i_4] [i_1] [i_4] [i_4]))), (arr_30 [i_1] [i_1] [i_1] [9])));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_34 = (arr_36 [i_11] [i_11]);

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_35 = (arr_35 [i_11]);
            arr_39 [i_11] [i_12] = (((((arr_38 [1] [i_12] [i_11]) ? var_11 : (arr_38 [i_11] [i_11] [i_11]))) / (arr_37 [i_11] [i_12])));
        }
        var_36 = (max(var_36, ((!(arr_34 [i_11])))));
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_37 = (((((arr_42 [i_13]) < (arr_42 [i_13]))) ? (((!(arr_42 [i_13])))) : (arr_42 [i_13])));
        var_38 += (((arr_41 [i_13]) ? (((arr_42 [i_13]) ? (arr_41 [i_13]) : (arr_41 [i_13]))) : 2675383451575402538));
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                {
                    var_39 = (min(var_15, (arr_43 [i_13])));
                    var_40 = (!-189336409);

                    for (int i_16 = 3; i_16 < 21;i_16 += 1)
                    {
                        var_41 = (arr_49 [i_13] [i_13] [i_14] [i_15] [i_16 + 1] [i_16]);
                        arr_50 [i_13] [i_14] [i_15] [i_16] [i_14] [i_16] = 62798;
                        var_42 = (arr_42 [i_14 + 1]);
                    }
                    var_43 = (min(var_43, (arr_47 [i_13] [i_13] [i_13])));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            {
                                var_44 = (((arr_47 [i_15 - 1] [i_15] [i_15 + 2]) ? (arr_45 [i_14] [i_18]) : (max((~36410), (arr_46 [i_15 + 2] [i_14 - 3])))));
                                var_45 = (max(var_45, (((((min(5632633333970873313, 154))) | ((((!(arr_46 [i_14] [i_18]))))))))));
                                var_46 = (min((arr_53 [i_15 + 1] [i_15 + 1] [i_14 - 1]), var_14));
                                var_47 = (8406948428328446881 ? 13449322936413284232 : 6313582760398614010);
                            }
                        }
                    }
                }
            }
        }
        var_48 = (min((((!(arr_45 [i_13] [i_13])))), (((arr_47 [5] [5] [i_13]) ? (arr_47 [i_13] [6] [i_13]) : (arr_47 [i_13] [i_13] [i_13])))));
    }
    var_49 = var_6;
    var_50 = (var_17 % 1243942595110455021);
    var_51 = (max(var_51, ((min(var_6, (((1 || 768) ? ((var_11 ? var_0 : -4)) : var_1)))))));
    #pragma endscop
}
