/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(var_5, ((var_3 ? var_6 : 3151717703444869676)))), var_5));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 -= (arr_1 [i_0]);
        var_12 = var_1;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_13 += (((arr_0 [1]) & ((var_0 * (arr_1 [i_1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (arr_1 [i_1]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 = (arr_0 [i_4 - 2]);
                            var_16 = (((arr_5 [i_4 + 1] [i_4 + 1]) ? (arr_3 [i_4 - 1] [i_4 + 1]) : 48));
                            var_17 = ((((var_9 | (arr_2 [i_5]))) << (((arr_10 [i_1] [i_4 - 2] [i_1]) - 1069463246))));
                            var_18 = arr_4 [i_1] [i_1];
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_19 *= (~((((1351201733 ? 2943765545 : 54043195528445952)) / var_5)));
                    var_20 ^= ((~((var_9 * (arr_7 [i_8] [i_7] [i_1] [i_1])))));
                    var_21 = (max(((~(arr_10 [i_1] [i_7] [i_8]))), (max((arr_10 [i_1] [i_6] [i_7]), (arr_10 [i_1] [i_6] [i_8])))));
                    var_22 = (max(var_22, (arr_15 [i_1] [i_1] [i_1] [10])));
                    arr_21 [i_1] [i_6] [i_7] [i_8] = (arr_19 [i_1] [i_1] [i_1] [i_1] [i_8]);
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, ((max(-1351201725, (((var_1 & var_5) * (((((arr_4 [i_9] [i_6]) > var_8)))))))))));
                    arr_26 [i_1] [i_1] [i_6] [i_6] [i_7] [i_9] = var_0;
                }
                var_24 = (~54043195528445970);
                var_25 = ((+((((arr_4 [i_1] [i_1]) && (arr_4 [i_6] [i_7]))))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_26 |= (((~-17268) ^ (((arr_18 [i_10] [i_10] [i_10]) ? (arr_18 [i_1] [i_1] [i_1]) : (arr_18 [i_1] [i_6] [i_6])))));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_27 = ((arr_5 [i_1] [i_6]) >= (arr_5 [i_11] [i_10]));
                        arr_34 [i_6] [i_6] [i_11] [i_12] = (arr_28 [i_10]);
                    }
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        var_28 = (((var_1 >= var_0) && (arr_35 [i_13] [i_13 - 1] [i_6] [i_13] [i_6] [i_13 - 1] [3])));
                        var_29 |= -17262;
                        arr_37 [i_1] [i_6] [0] = (((arr_4 [i_1] [i_1]) - -var_3));
                    }
                    arr_38 [i_6] [i_6] [5] [i_6] = (((0 ^ var_0) != var_2));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_30 = ((~(arr_5 [i_1] [i_10])));
                    var_31 ^= arr_35 [i_1] [i_6] [i_1] [i_14] [i_14] [i_1] [i_14];
                }
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    var_32 = (arr_5 [i_10] [4]);
                    arr_45 [1] [i_6] [i_6] [3] [i_15] [i_15] = ((((-(arr_3 [i_15 + 1] [i_15 + 1]))) != ((max(var_6, (arr_30 [i_1] [i_1] [i_10] [i_1] [i_15 + 1]))))));

                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        var_33 = (((((-(((arr_39 [i_1] [i_1] [i_6]) / 54043195528445952))))) ? (((((max(var_0, (arr_1 [i_10]))) != var_4)))) : (((arr_8 [i_1] [i_1] [i_1] [i_1]) ? var_1 : (arr_43 [i_1] [i_6] [i_10] [i_15])))));
                        var_34 += var_5;
                        var_35 = (min((min(var_8, (arr_46 [i_15 - 1] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 2]))), ((((arr_44 [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 2] [i_15] [i_15 + 1]) == 17267)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_36 = 25994;
                            arr_57 [i_6] [1] [i_17 - 3] [i_17] [i_17 - 2] = (max((arr_19 [9] [i_18] [i_17 - 3] [1] [i_1]), var_3));
                        }
                    }
                }
            }
        }
        for (int i_20 = 1; i_20 < 8;i_20 += 1)
        {
            var_37 = ((((((-(arr_27 [i_20] [i_20] [i_1]))))) * (min(((~(arr_29 [1] [i_20] [i_20]))), (-368105230866638087 && 8)))));
            var_38 = (max(((((arr_54 [i_1] [i_20 + 2] [i_20] [8]) > 2726452494))), -8783));
        }
        arr_60 [i_1] = ((1568514804 * var_7) ? ((~(arr_11 [i_1] [i_1]))) : ((-(arr_33 [i_1] [i_1] [i_1] [5] [i_1] [i_1] [i_1]))));
    }
    for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
    {
        var_39 = ((((((arr_23 [10] [i_21] [i_21] [10] [10]) / (arr_52 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))) | (arr_22 [i_21] [i_21] [i_21] [i_21] [i_21])));
        var_40 = (min(var_40, 1));
        arr_64 [3] [i_21] = 25994;
    }
    var_41 = ((((min(-2297476020900625678, 255))) && 11));
    var_42 = (((min(var_2, -var_4)) | var_2));
    #pragma endscop
}
