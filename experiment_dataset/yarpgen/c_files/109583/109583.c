/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((var_5 ? var_2 : var_11)), var_9))) ? (((((var_5 ? var_13 : var_7))) ? ((var_13 ? var_13 : var_6)) : var_12)) : var_13));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] = var_14;
                        var_21 = (min(var_21, ((min((((arr_2 [i_1 - 1]) ? var_4 : (arr_2 [i_1 + 2]))), (arr_2 [i_1 + 2]))))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((((((var_17 ? (arr_7 [i_0] [i_4]) : var_2))) ? (((var_17 ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1] [i_4])))) : (arr_5 [i_0]))));
                        var_23 = (arr_10 [i_0] [i_1] [i_4] [i_4]);

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_24 = var_14;
                            arr_15 [1] [i_4] [i_0] = (1 ^ 254);
                            var_25 = min(((var_19 ? (((arr_4 [i_0] [i_2] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_0]))) : (((arr_14 [i_0] [i_0] [i_4] [i_4] [i_5]) ? (arr_3 [i_0] [2] [i_0]) : (arr_8 [4] [i_4] [i_2] [i_4]))))), ((((min((arr_7 [i_1] [8]), var_16))) ? var_9 : (arr_8 [i_5] [i_4] [i_0] [i_0]))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, (((((max(161, 254))) ? (((arr_12 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 4] [i_1 + 3] [i_1 + 4]) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : ((max((arr_10 [i_0] [i_1] [i_0] [i_6]), var_18))))) : (arr_3 [i_0] [i_0] [i_0]))))));
                        var_27 = (min(var_27, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_6])));
                        var_28 = (min(((min((max((arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6]), (arr_2 [i_2]))), (arr_4 [13] [i_1] [i_1])))), ((2053809143 ? 17 : -10267))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_7] = (max((min((arr_7 [i_0] [i_0]), (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_1 + 1] [i_7]))))), (arr_21 [i_1 + 3] [i_7])));
                        var_29 = (min(var_29, ((((((arr_18 [i_0] [i_1 + 4] [4] [i_0] [i_1 + 4] [i_0]) / var_2))) ? (((((arr_20 [i_2] [i_0]) >= (arr_20 [i_0] [i_0]))))) : (arr_20 [i_0] [i_0])))));
                        var_30 = (arr_21 [i_1] [i_7]);
                    }
                    arr_23 [i_2] = min((arr_14 [i_0] [i_1 + 1] [i_0] [i_1] [i_2]), var_14);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_31 += (((((arr_19 [i_0]) ? var_2 : (((arr_10 [i_9] [i_0] [i_0] [i_0]) ? (arr_11 [i_8]) : (arr_19 [i_8]))))) | ((((((var_4 == (arr_28 [i_0] [i_1] [i_2] [i_9] [i_9] [i_0] [i_9])))) | (arr_26 [i_0] [i_0] [i_0]))))));
                                arr_30 [i_0] [i_0] [i_2] [i_8] [i_0] [i_8] = ((min((arr_19 [i_0]), (arr_8 [7] [i_1] [i_2] [14]))));
                            }
                        }
                    }
                    arr_31 [1] [i_1 + 2] [i_2] &= arr_14 [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_32 = ((((min((min(var_8, var_2)), (min((arr_19 [i_2]), (arr_12 [i_0] [i_1 + 4] [i_0] [3] [1] [0] [i_1 + 4])))))) ? ((min(var_3, (max(var_16, var_12))))) : (((((var_0 ? var_10 : (arr_11 [9])))) ? (arr_21 [2] [i_1 + 2]) : (arr_16 [i_0] [2] [i_2])))));
                }
            }
        }
        var_33 = (max(var_33, (min((((((var_17 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((var_8 ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))))), ((min((arr_26 [i_0] [i_0] [i_0]), (arr_26 [i_0] [i_0] [i_0]))))))));
        var_34 = (max((((((2884868909 ? 254 : 3217411473275250249))) ? (arr_26 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))), ((((((arr_28 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_2 [i_0])))) ? (((arr_6 [9] [8] [i_0] [i_0] [i_0] [9]) ? (arr_7 [8] [i_0]) : (arr_28 [i_0] [i_0] [1] [1] [8] [12] [1]))) : (arr_26 [i_0] [i_0] [i_0])))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_34 [i_10] = ((((((arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]) ? (max((arr_5 [i_10]), (arr_33 [11]))) : var_14))) ? (arr_3 [i_10] [i_10] [14]) : (min((((arr_3 [16] [16] [i_10]) ? (arr_17 [i_10] [i_10] [i_10] [i_10]) : (arr_11 [7]))), (((14 ? 1 : 4879417440063610424)))))));
        arr_35 [i_10] = (((arr_11 [i_10]) << ((min(255, 1)))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 19;i_14 += 1)
                {
                    {
                        var_35 = (arr_42 [i_11 - 1] [i_12] [i_14 - 3]);
                        var_36 = var_15;
                        var_37 = (((arr_37 [i_11 - 1]) ? (arr_40 [2] [2] [2]) : (arr_40 [i_11 + 1] [i_13] [i_14])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    var_38 += (arr_51 [i_16]);
                    var_39 = ((var_4 ? (arr_43 [i_11 - 1] [i_15 + 1] [i_11] [i_15]) : (arr_38 [i_11])));
                }
            }
        }
        var_40 = (((arr_37 [i_11]) ? (arr_37 [i_11 + 1]) : (arr_44 [i_11] [i_11 - 1] [10] [i_11 - 1])));
    }
    #pragma endscop
}
