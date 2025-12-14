/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 62));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = var_10;
                    var_16 = 3833530176;
                    var_17 = (((((arr_1 [i_2]) + var_3))) ? (max(223, 284065185)) : (arr_1 [i_0]));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_18 = ((-((((arr_7 [i_3]) == 209)))));
        var_19 = (max(var_19, (((64 ? 15 : 254)))));
        var_20 = arr_7 [12];
        var_21 = (((arr_8 [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : (var_3 || var_1)));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = ((((max(var_1, 16))) ? (arr_9 [i_4]) : (max(0, (arr_9 [i_4])))));
        var_22 -= (max((((arr_10 [i_4]) ? 6 : var_2)), (((var_9 ? var_3 : (arr_11 [i_4]))))));
    }
    var_23 = var_4;

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_24 = (((arr_12 [i_5] [i_5]) && var_7));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_20 [i_6] = (((((((arr_18 [i_5]) ? (arr_1 [i_6]) : (arr_14 [4]))))) < 48));
            arr_21 [i_5] [i_6] = ((-((((-(arr_7 [1])))))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            var_25 = (max(var_25, ((((arr_10 [i_7 + 2]) - (!1457904644))))));

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_26 ^= (((~var_6) ? (arr_12 [i_5] [i_7 - 1]) : (arr_17 [i_7 + 2])));
                arr_27 [i_8] [i_7 + 1] [i_5] = (arr_19 [i_7] [i_8]);

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_27 = (max(var_27, ((((arr_23 [i_7 - 2]) ? (arr_23 [i_7 - 2]) : var_8)))));
                    arr_30 [i_5] [13] [8] [i_9] [i_5] = ((+(((arr_3 [i_5] [14]) + 0))));
                    var_28 = (min(var_28, (arr_26 [i_7 - 2] [i_7 - 1] [i_7])));
                    var_29 = var_3;
                }
                for (int i_10 = 4; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, (var_5 / 63)));
                    var_31 = (min(var_31, ((((arr_15 [i_7 + 1]) <= (arr_31 [10] [i_10 - 4] [i_10 - 4] [i_10 - 4]))))));
                    arr_34 [i_7] [6] &= ((!(arr_16 [i_10 + 3])));
                    var_32 = (arr_25 [i_10 + 1] [6] [i_10 + 1] [i_7 + 1]);
                    var_33 = 0;
                }
                for (int i_11 = 4; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_34 = ((!(((var_4 ? (arr_3 [i_5] [i_5]) : 3802077980)))));
                    var_35 = 24;
                    var_36 = var_10;
                    var_37 = (min(var_37, 251));
                }
                for (int i_12 = 4; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    var_38 += (((var_6 + 43) & -97));

                    for (int i_13 = 2; i_13 < 10;i_13 += 1)
                    {
                        var_39 = (((arr_40 [i_5] [i_7]) ^ (arr_40 [i_13 + 1] [i_5])));
                        var_40 = ((~(arr_33 [i_12 - 1] [i_13 + 3] [i_8] [i_7 + 1])));
                        var_41 = (((arr_38 [i_7 + 2]) + (arr_38 [i_7 + 1])));
                        var_42 &= (((arr_10 [i_12 - 3]) >> ((((var_11 >> (((arr_38 [7]) - 126)))) - 2811965))));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_43 [i_5] [i_5] [i_5] [i_14] [i_5] = var_3;
                        var_43 = var_6;
                        arr_44 [i_5] [i_7] [i_8] [i_12] [i_12] = (((arr_33 [i_7 + 1] [i_12 - 4] [i_12 + 2] [8]) ? (arr_33 [i_7 + 1] [i_12 - 1] [i_12 - 1] [i_14]) : var_9));
                        var_44 = (195 & 4205649054);
                        var_45 ^= (((arr_12 [i_7] [i_12 - 4]) >= (arr_4 [i_5] [i_5] [i_8])));
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        arr_49 [i_5] [i_7] [i_8] [i_5] [i_12] [9] [i_15] = (((arr_12 [i_8] [i_7]) >= ((60 ? (arr_11 [i_5]) : (arr_41 [i_5] [i_7] [i_5])))));
                        var_46 = (arr_12 [i_7 - 1] [i_12 - 2]);
                        arr_50 [i_5] [i_15] [i_12] [i_8] [i_5] [i_5] = 2503072807;
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        arr_55 [i_8] = (!var_8);
                        var_47 = (((arr_15 [i_8]) > (arr_18 [i_7 + 1])));
                        arr_56 [i_5] [2] [i_8] [2] [i_16] = ((4205649065 || (arr_46 [i_5] [i_7 + 1] [i_12 - 3] [i_12 - 3] [i_12 - 3])));
                    }
                    var_48 = (7 == 3833530167);
                }
            }
            var_49 -= 92;

            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                var_50 = 461437122;
                var_51 = (min(var_51, ((((arr_3 [i_5] [i_7 + 1]) ? (arr_3 [i_5] [i_7 - 2]) : 87)))));
            }
        }
        arr_60 [i_5] = ((((min((arr_51 [i_5] [i_5] [i_5] [12]), (arr_51 [i_5] [i_5] [i_5] [i_5])))) ? (min(((8 ? 255 : 97)), -5)) : var_12));

        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_52 = (min(-50, (((arr_39 [i_5] [i_5] [i_5] [i_5] [i_18] [i_18]) - 103))));
            var_53 = (max(var_53, ((((arr_19 [i_5] [i_18]) ? (arr_15 [i_18]) : ((((arr_6 [i_5] [i_5] [i_5]) / 143))))))));
            arr_63 [i_5] [i_18] [i_5] = var_7;
        }
    }
    for (int i_19 = 0; i_19 < 10;i_19 += 1)
    {
        var_54 = (max((max(((-(arr_37 [i_19] [i_19] [i_19] [9] [i_19]))), ((((arr_35 [i_19] [i_19] [i_19] [4]) || var_8))))), (arr_57 [i_19] [i_19] [i_19])));
        var_55 = ((((((!(arr_9 [9]))))) ? var_1 : var_11));
    }
    /* vectorizable */
    for (int i_20 = 4; i_20 < 22;i_20 += 1)
    {

        for (int i_21 = 2; i_21 < 23;i_21 += 1)
        {
            arr_72 [i_21] = 101;
            var_56 += (arr_71 [15] [i_20 - 3]);
        }
        arr_73 [i_20 + 2] = 3948714139;
        var_57 = (max(var_57, 87));
    }
    #pragma endscop
}
