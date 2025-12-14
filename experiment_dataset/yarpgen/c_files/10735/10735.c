/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (((58 ? 38 : 71)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 += (max(((((65280 ? 2160240701750426116 : 63)))), (max((max(var_6, (arr_3 [i_0] [i_0] [i_1]))), var_3))));

            /* vectorizable */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                var_21 += -var_7;
                var_22 += var_18;
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_23 += ((!(arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 2])));
                            var_24 = -32758;
                            var_25 = (min(var_25, (((!(arr_2 [i_3 + 1] [i_1] [i_3 + 1]))))));
                        }
                    }
                }
                arr_17 [i_0] [i_1] [i_1] [i_3 - 2] = (arr_10 [i_3 - 2] [i_3 + 1] [i_3 + 1]);
                var_26 += ((-(arr_12 [i_3 + 1] [i_1] [i_0] [i_0])));
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_27 = (arr_12 [i_0] [i_0] [i_0] [i_0]);
            var_28 = ((-((-(((arr_12 [i_0] [i_0] [i_6] [i_6]) ? var_17 : var_10))))));
            var_29 = ((min((arr_19 [i_6] [i_6] [i_0]), (arr_19 [i_0] [i_6] [i_6]))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_23 [i_7] [i_7] [i_0] = -var_17;
            var_30 = ((-(!var_0)));
            var_31 = (((arr_1 [i_7]) ? (arr_22 [i_7] [i_0]) : (arr_5 [i_7])));
            arr_24 [i_0] = (((arr_0 [i_0]) ? var_7 : (arr_5 [i_7])));
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_32 = (arr_0 [i_8]);
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_33 = ((-(arr_18 [i_10 - 2] [i_10 + 1] [i_10 + 1])));
                            var_34 += (((arr_28 [i_10 - 1] [i_10 - 2]) ? (arr_28 [i_10 - 2] [i_10 - 2]) : (arr_28 [i_10 + 1] [i_10 - 2])));
                            var_35 = (max(var_35, ((((arr_19 [i_9] [i_9] [i_11]) ? (arr_4 [i_11]) : 34)))));
                        }
                    }
                }
            }
        }
        var_36 = (((arr_8 [i_8] [i_8] [i_8]) <= (~231)));
        var_37 = (((arr_32 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (min(((var_7 ? (arr_22 [i_8] [i_8]) : var_4)), var_18)) : (min(var_13, (arr_2 [i_8] [i_8] [i_8])))));
    }
    var_38 = 60;
    var_39 = ((-(max(var_2, var_15))));
    #pragma endscop
}
