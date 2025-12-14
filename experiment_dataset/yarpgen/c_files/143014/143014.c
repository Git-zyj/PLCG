/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((var_12 >= -3) | ((max(var_5, var_15)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = ((((((arr_4 [i_0] [i_1] [i_1]) ? var_7 : (arr_2 [i_0] [i_0])))) * var_6));
            arr_5 [i_0] [i_1] = ((!(arr_2 [i_1] [i_0])));
        }
        var_22 = ((46095 / (arr_3 [i_0] [i_0] [i_0])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_10 [i_3] [8] [i_3] = (arr_0 [i_3]);
            arr_11 [i_2] [i_2] [i_3] = 46093;
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 = (((arr_16 [i_2] [i_2] [i_4 + 1] [i_4 - 1]) << (((arr_21 [i_4] [i_4 - 1] [2] [i_4] [i_4 + 1] [i_4 + 1]) - 2108361345106432293))));
                            arr_22 [i_2] [12] [i_5] [i_6] [i_6] |= (((arr_19 [i_2] [i_4 + 1] [i_5] [i_6]) / ((var_12 - (arr_21 [i_2] [i_2] [i_5] [i_6] [i_2] [i_7])))));
                        }
                    }
                }
            }
            arr_23 [i_2] [i_4] = ((((((arr_6 [i_2]) ? 46093 : 46090))) ? (((arr_1 [i_4] [i_2]) ? (arr_21 [i_2] [i_2] [i_2] [i_4 + 1] [i_2] [i_4 + 1]) : 19446)) : (arr_12 [i_2])));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_24 = var_8;

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    var_25 |= var_13;
                    var_26 = -1;
                    var_27 = (min(var_27, (arr_25 [i_9] [i_9] [i_9 - 1] [i_9 - 1])));
                    arr_29 [i_2] [i_4] [i_8] [i_4] = (arr_13 [i_2]);
                }
            }
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                var_28 = (((arr_0 [i_10 + 1]) || (var_12 || var_1)));
                var_29 -= ((77 ? (arr_8 [i_4 + 1] [i_4 - 1]) : 19445));
            }
        }
        for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_30 = (arr_28 [i_2] [i_12] [i_12] [14]);
                            arr_42 [i_13] [i_11] [i_11] [i_12 - 1] [i_11] = (((max(46093, (arr_20 [i_13]))) / (max((((arr_30 [i_12] [i_12]) * var_1)), (arr_20 [i_11 + 1])))));
                        }
                    }
                }
            }
            var_31 = ((arr_38 [i_2] [i_2] [i_11 + 1] [i_11]) - ((-((-(arr_27 [i_2] [i_2] [i_2] [i_11] [i_11]))))));
            arr_43 [i_2] [i_11] = (arr_33 [i_11] [i_11]);
        }
        for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
        {
            arr_48 [i_2] = (((arr_33 [i_2] [i_15 + 1]) >= (arr_33 [i_2] [i_15])));
            var_32 += arr_24 [i_2] [i_2];

            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_52 [i_2] [i_16] = 4105751877606288788;
                arr_53 [i_2] [i_2] = (arr_44 [i_2] [i_15] [i_16]);
                arr_54 [i_2] [i_15 - 1] [i_16] = (((arr_32 [i_15] [i_16]) ? (arr_17 [i_16] [i_16] [i_15 + 1] [i_15 + 1] [12] [i_15 + 1]) : ((((((arr_50 [i_2] [i_16]) | (arr_2 [i_2] [i_2])))) ? (((arr_17 [i_16] [i_16] [15] [i_2] [i_2] [i_2]) ? (arr_50 [i_2] [i_16]) : (arr_35 [i_2] [i_15 + 1] [i_16]))) : ((max((arr_15 [i_2] [i_16]), (arr_2 [i_2] [i_2]))))))));
            }
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                var_33 = var_5;
                arr_59 [i_2] [9] [i_17] = (max((((~(arr_50 [4] [i_2])))), (max(((max(var_7, (arr_32 [i_2] [i_2])))), (max((arr_6 [i_2]), (arr_46 [i_2] [i_15] [i_17])))))));
            }
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                arr_63 [1] [1] [i_18] = ((((((-5317793182411567762 ? 1 : 17))) ? (arr_17 [i_2] [i_2] [i_2] [i_15 + 1] [i_2] [i_18]) : (((arr_1 [i_18] [0]) / (arr_38 [i_2] [i_15] [i_18] [i_18]))))));
                var_34 = 19465;
                arr_64 [i_2] [i_15] [i_2] = -5317793182411567752;
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_35 += (max(((((max(var_1, (arr_3 [i_18] [10] [i_20]))) >> (((((arr_61 [i_2] [i_2]) | (arr_36 [7] [i_15]))) - 15839041753835335522))))), (min(((((arr_7 [i_15]) && (arr_30 [i_2] [i_2])))), 5317793182411567749))));
                            arr_70 [i_2] [i_20] [i_18] [i_19] [i_20] = 4105751877606288788;
                        }
                    }
                }
            }
        }
        arr_71 [i_2] [i_2] = ((!((min(1, (arr_41 [i_2] [i_2] [i_2] [i_2] [2]))))));
    }
    for (int i_21 = 0; i_21 < 12;i_21 += 1)
    {
        arr_74 [i_21] = ((!((5094 && (arr_37 [i_21] [i_21] [i_21] [i_21])))));
        var_36 = max(((max((arr_15 [i_21] [1]), (arr_15 [10] [12])))), (min(1, var_8)));
    }
    var_37 = var_17;
    #pragma endscop
}
