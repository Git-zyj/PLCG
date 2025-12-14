/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_1 [i_0 - 2]), (~2121578282012603726)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [9] = (arr_1 [i_0 - 3]);
                        arr_12 [i_1] = (arr_10 [i_0] [i_0] [i_0] [7] [i_0] [13]);
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((min(-1, (arr_1 [i_0 - 1]))));
        arr_14 [i_0] = ((min((min(16181886574881899170, (arr_8 [i_0]))), -var_15)));
        arr_15 [i_0] = (min((arr_7 [i_0] [i_0] [i_0] [i_0]), ((~(arr_2 [i_0 - 3])))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_29 [i_6] [i_7] = (min(((var_2 ? (var_5 == var_12) : var_7)), (arr_17 [i_7])));
                        arr_30 [i_4] [i_4] [i_4] = ((min(var_9, var_14)) | (~var_7));
                    }
                }
            }
            arr_31 [i_4] [i_5 - 1] = ((-(((18446744073709551595 >= (arr_19 [i_5 - 1] [i_5 - 1]))))));
        }

        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                arr_39 [i_9] [i_8] [i_9] = (((arr_28 [i_8 + 4] [i_8 + 2] [i_8 + 4] [i_8] [i_8] [i_9 - 1]) != (arr_16 [i_8 + 4] [i_8])));
                arr_40 [i_4] [i_4] = min(((-(~16181886574881899170))), (arr_16 [i_4] [i_9 + 1]));
            }
            arr_41 [i_8] = (arr_25 [i_4] [i_8] [i_8 + 1] [i_8]);
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_48 [i_4] [i_10] [1] [i_10] [i_12] = var_6;
                            arr_49 [i_10] [i_10] [i_10] [i_8] [i_10] = (((min(var_3, (arr_37 [i_8])))));
                        }
                    }
                }
            }
            arr_50 [i_8] = (-(((var_3 > ((min((arr_20 [i_8]), (arr_35 [i_4]))))))));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_55 [i_4] [i_4] [i_4] = ((~(((6265844517776230171 % (arr_25 [i_4] [i_13] [i_13] [i_13]))))));
            arr_56 [i_4] = ((+((7557815384548307618 ? (arr_20 [i_4]) : (arr_20 [i_4])))));
            arr_57 [i_13] [i_13] = ((~(((min(var_9, (arr_36 [i_4] [i_13] [i_13])))))));
        }
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    arr_63 [i_15] [i_15] = (((min((arr_52 [i_4] [i_14] [i_15]), ((~(arr_28 [i_4] [i_4] [i_4] [i_4] [i_14 - 1] [5]))))) / ((-(arr_43 [i_15])))));

                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        arr_68 [i_4] [i_14 - 1] [i_15] [i_15] [21] = (((~var_9) + 2121578282012603751));
                        arr_69 [i_15] [23] [i_16 - 1] = (arr_16 [i_15] [8]);
                    }
                    arr_70 [i_15] [i_14] [i_15] = 16181886574881899161;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_17 = 4; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        arr_78 [i_4] [i_4] [i_4] = (arr_47 [i_4] [i_4] [i_18] [i_18] [i_17 - 1] [i_19] [i_18 + 1]);
                        arr_79 [i_19] [i_18] [i_17 + 1] [i_4] = (((arr_77 [i_4] [i_17] [i_18] [i_18 - 3] [i_17 + 3]) ? (~3145710175369076974) : (~16325165791696947897)));
                    }
                }
            }
        }
    }
    var_17 = var_16;
    var_18 = var_7;
    #pragma endscop
}
