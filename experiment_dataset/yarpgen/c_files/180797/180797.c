/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = (((!1) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (((arr_2 [13] [i_0 - 1]) ? var_13 : 23719))));
        arr_3 [i_0 - 1] [i_0 - 1] = arr_0 [i_0 + 1] [i_0];
        var_17 = (arr_2 [i_0 + 1] [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_0 + 1] [i_1 - 3] [i_1] = (min(var_7, ((-(arr_2 [i_3 - 1] [i_3 - 1])))));
                        arr_14 [i_3 - 1] [i_1] [i_1] [i_0] [i_1] [i_0] = (max((~0), -15812));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4] = (arr_1 [i_4 + 1]);
        arr_19 [6] [1] = (arr_12 [i_4] [i_4 - 1] [i_4] [i_4] [10]);
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        arr_23 [i_5 + 1] [i_5 + 1] = min((((!(arr_10 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [0])))), (((arr_1 [i_5 + 2]) ? (arr_1 [i_5 + 2]) : (arr_1 [i_5 - 1]))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_26 [1] [i_6] [i_5] &= (max((((arr_0 [i_5 - 1] [i_5 - 1]) / (arr_5 [i_5 + 2] [i_5 + 1]))), ((-(arr_0 [i_5 - 1] [i_5 + 1])))));
            arr_27 [i_5 + 2] [0] &= (((var_14 ? (arr_8 [i_5 + 1] [i_5 + 1]) : (arr_8 [i_5 + 1] [i_5]))) + ((-(min((arr_12 [i_6] [i_6] [i_6] [14] [1]), (arr_10 [i_5] [i_5] [i_5 - 1] [i_5] [16]))))));
            var_18 *= var_3;
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_19 = (arr_2 [i_7 + 1] [i_7]);
            var_20 = (min(var_20, (arr_25 [1] [i_7] [1])));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_40 [i_10] [i_7] [i_9 + 1] [8] = (((((max(1, (arr_4 [i_5] [i_8 - 1] [i_10]))))) << ((((-(((arr_20 [i_10] [i_9 + 1]) / (arr_33 [i_8 - 2] [i_10]))))) + 9))));
                            var_21 = (max(var_21, var_7));
                            var_22 = (min(var_22, (arr_24 [i_7] [2] [i_10])));
                        }
                    }
                }
            }
            var_23 = (arr_32 [i_5 - 1] [i_5 + 1] [i_7] [i_5 - 1]);
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_48 [i_13] [i_13] [i_12] [i_11] [i_11 + 1] [i_7] [8] = var_8;
                            var_24 = (((((((-(arr_1 [i_5]))) << (32015 - 32000)))) ? ((+(max((arr_12 [8] [9] [9] [i_12 - 1] [i_11]), var_11)))) : ((max(-22763, 32767)))));
                        }
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            var_25 *= (arr_22 [i_5 + 1]);
            var_26 = (arr_38 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1] [i_14 + 1] [i_14]);
            var_27 = (arr_43 [i_5 + 2] [i_5 - 1] [i_5] [i_14 - 1]);
            arr_52 [i_14] [i_14] [i_14] = 1;
            arr_53 [i_5 + 1] [8] &= ((-1207297934 << (((((min((arr_24 [i_14 + 1] [2] [i_14]), (!-1207297957))) + 557369842)) - 6))));
        }
        var_28 = (max(var_28, ((((((21444 ? ((-6680 ? var_13 : 1)) : ((((arr_30 [i_5 + 1] [i_5 + 2]) == -15799)))))) ? ((min(1, (arr_33 [i_5 + 1] [i_5])))) : var_10)))));
    }
    var_29 = var_5;
    #pragma endscop
}
