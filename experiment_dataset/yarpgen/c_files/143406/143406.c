/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((~(arr_3 [i_0] [i_0] [i_1 + 4]))) & (((arr_1 [i_1 + 1]) ? 161 : (arr_3 [i_0] [i_0] [i_0])))));
                arr_5 [i_0] [i_1] = arr_2 [i_1];
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_18 = (max(var_18, (arr_10 [i_3] [i_3])));
            arr_12 [i_2] = (((arr_6 [i_2] [3]) ? var_6 : (arr_11 [i_3] [i_2] [i_2])));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_2] [i_4] [i_4] = ((163 ? (!245) : (arr_14 [i_2])));
            arr_16 [11] [i_2] = arr_7 [i_2] [i_4 + 2];

            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_19 = ((((var_14 ? 160 : ((29 ? 26 : 153)))) != ((min(254, var_2)))));
                var_20 = arr_11 [i_2] [i_2] [i_5];
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_6] [i_6] &= 32;
                    arr_27 [i_2] [i_2] [0] [6] [i_2] [i_7] = -var_8;

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_2] [i_2] [i_4 - 2] [i_2] [i_7] [i_8] [i_8] = arr_22 [i_2] [i_2] [i_7];
                        arr_33 [i_2] [i_4 + 3] [10] [i_7] [i_2] = ((var_1 ? var_11 : var_13));
                        arr_34 [i_2] [7] [7] [i_2] [7] [i_7] [7] = ((-((var_14 ? 11 : (arr_28 [18] [5] [i_4] [5] [18])))));
                        var_21 = arr_18 [i_7];
                        var_22 = (min(var_22, (arr_30 [i_2] [i_2] [i_4] [i_6] [i_6] [i_8] [i_8])));
                    }
                    arr_35 [14] [i_4 - 2] [i_6] [i_2] [i_7] = var_11;
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_40 [9] [i_2] = ((-((var_14 >> (((arr_31 [i_4] [i_4 - 2] [0] [i_4] [i_6]) - 163))))));
                    arr_41 [i_2] [i_4 + 2] [i_6] [i_9] = (((((((var_13 ? 51 : 241))) ? (((arr_38 [12] [12] [i_6] [12]) ? 9 : 170)) : var_12)) | ((249 ^ ((max((arr_20 [i_2] [i_6] [i_9]), 98)))))));
                    arr_42 [i_2] [i_2] = min(61, 184);
                    arr_43 [i_2] = (((((180 ? (arr_23 [12] [i_4]) : (136 * var_16)))) ? (((arr_13 [i_4 + 2] [i_4 + 2]) / 73)) : ((-((var_11 ? (arr_36 [i_2] [i_2] [i_2] [13]) : 184))))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    arr_46 [i_6] [i_6] [i_6] [i_6] [i_2] = arr_24 [i_2] [i_4] [i_6] [i_2] [i_2];
                    arr_47 [i_2] = (var_15 ^ var_0);
                    var_23 = (min(var_23, ((((arr_23 [i_4 + 4] [i_4 + 3]) & (arr_23 [i_4 + 4] [i_4 + 3]))))));
                    var_24 -= (((arr_20 [i_2] [i_4 - 1] [i_6]) ? (((arr_28 [i_2] [i_2] [17] [i_2] [i_2]) ? var_15 : 92)) : 255));
                }
                arr_48 [i_2] [i_2] [i_4] [8] = (((arr_45 [i_2] [i_2] [i_2]) ? (arr_36 [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 1]) : 7));
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_25 = ((38 ? (((arr_45 [i_2] [i_2] [i_11]) ? 224 : var_9)) : ((238 ? ((max(55, var_13))) : 64))));
                arr_51 [18] [i_2] = (arr_37 [i_4] [11] [16] [i_4 - 2] [i_2] [i_2]);
                var_26 ^= ((!((((arr_49 [i_2]) ? (arr_11 [i_2] [i_11] [i_11]) : 7)))));
            }
            arr_52 [i_2] [i_2] = (((arr_39 [10] [10] [10] [i_4 + 4] [i_4] [10]) ? (var_15 - var_11) : ((((((arr_37 [i_2] [i_2] [i_2] [i_2] [13] [i_2]) ? 122 : 221)) >= (arr_9 [i_4]))))));
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_27 = (min(var_27, ((((((arr_36 [i_2] [i_2] [i_12] [i_12]) ? (arr_36 [i_2] [i_2] [i_12] [i_2]) : (arr_30 [i_2] [i_2] [i_2] [i_2] [15] [i_12] [i_12]))) | var_17)))));
            var_28 += ((!(arr_44 [i_2] [i_12] [i_12] [10])));
        }
        var_29 = (min((((arr_37 [i_2] [i_2] [i_2] [i_2] [10] [i_2]) + (arr_22 [i_2] [i_2] [i_2]))), ((-(arr_10 [i_2] [i_2])))));
    }
    var_30 ^= var_12;
    #pragma endscop
}
