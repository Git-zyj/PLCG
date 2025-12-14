/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = min((var_9 > var_0), (max(((var_0 >> (var_6 - 218))), (max(var_7, var_1)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [12]) % (max((arr_0 [i_0]), (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_12 -= ((arr_6 [i_1 - 1]) / (arr_6 [i_1 - 1]));
            var_13 -= (arr_1 [i_1 + 1] [i_1 - 1]);
            var_14 = ((var_1 / (arr_5 [i_1 + 1] [i_1 - 1] [i_1])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_15 = (((max((arr_8 [i_2] [i_3] [i_4]), (arr_7 [i_0] [13]))) <= (arr_2 [i_2])));
                        var_16 = (min((max(var_0, var_8)), (((((max(var_9, (arr_8 [i_0] [i_3] [i_0])))) < (arr_0 [i_4 - 1]))))));
                    }
                }
            }
            var_17 = ((max((arr_9 [i_2] [i_0] [i_0]), (arr_6 [i_0]))) / (arr_5 [14] [i_2] [i_2]));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_15 [i_5 + 2] [i_0] = (max((((var_6 > (arr_5 [i_0] [i_0] [i_0])))), (((arr_14 [i_5 + 2]) * (arr_14 [i_5 + 2])))));
            arr_16 [i_0] [i_5] = (min((arr_8 [i_0] [i_5] [i_5 + 2]), (arr_8 [18] [2] [i_5])));
            arr_17 [i_0] = (((min((arr_3 [i_5 + 2] [i_5]), var_7)) - (((max((arr_10 [i_5 + 1] [i_5 - 1]), (arr_10 [i_5 + 2] [i_5 + 1])))))));
            arr_18 [i_0] [i_5] [i_5] = var_7;
        }
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            var_18 = (arr_6 [i_6 + 1]);
            var_19 = (min((arr_5 [i_0] [i_6] [1]), (((((arr_21 [i_0]) + (arr_14 [i_0]))) + (arr_10 [i_6 + 2] [i_6 - 1])))));
            arr_23 [5] [5] = (max(((((arr_1 [i_6 + 2] [i_6 - 1]) % var_5))), (min(var_0, (arr_3 [i_6 - 2] [i_6 - 2])))));
        }
        arr_24 [i_0] = var_3;
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_20 = var_0;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_21 += (min((max((arr_38 [i_11] [18] [i_9] [18] [i_7]), (arr_31 [i_7] [i_7] [i_7]))), (((var_7 != (arr_27 [i_9] [12]))))));
                                var_22 = var_8;
                            }
                        }
                    }
                    arr_39 [i_9] [i_8] [i_9] = (((arr_38 [i_7] [11] [i_7] [i_7] [i_7]) - (((((max((arr_26 [i_8]), (arr_25 [i_9])))) + var_8)))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            var_23 += (arr_29 [i_12] [i_13] [i_13]);
            var_24 = (arr_2 [i_12]);
            arr_44 [i_12] [i_12] = min((arr_6 [i_13]), (arr_12 [i_13] [i_13] [i_13] [i_13] [i_12] [i_12]));
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_25 = (min(((((min(536870911, 536870925)) ^ ((((var_7 && (arr_19 [i_12] [2] [i_12])))))))), (max(((var_0 + (arr_9 [i_12] [i_12] [i_12]))), (min(var_5, var_0))))));
            var_26 = ((var_9 ^ (arr_19 [i_14] [i_12] [i_12])));
            var_27 = arr_22 [i_12] [i_14];
            var_28 = (min((235 == 208), (arr_11 [i_12] [i_14] [i_14] [i_12])));
            arr_47 [i_14] [8] [i_14] = (min((arr_11 [i_12] [i_12] [i_12] [i_14]), var_8));
        }
        arr_48 [i_12] = (max(var_1, (arr_42 [8] [8] [i_12])));
        arr_49 [i_12] = (max(var_3, var_3));
    }
    var_29 = var_1;
    #pragma endscop
}
