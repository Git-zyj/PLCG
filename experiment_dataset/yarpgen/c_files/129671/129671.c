/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = 3635590880;
        arr_3 [i_0] = ((!(arr_0 [i_0])));
        var_11 = (min(var_11, (((((~(arr_1 [i_0]))) - ((-(arr_1 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_12 = (3635590880 - 65511);
            var_13 = (((14740 - 3635590897) || var_1));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_14 = var_5;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 = (+(max((~var_3), (var_1 ^ 37))));
                        var_16 = ((~(((arr_11 [i_0] [i_0] [i_0]) ? (arr_11 [i_3] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0])))));
                        var_17 = ((!(((~(arr_7 [i_0] [i_4] [i_3]))))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_18 = (arr_5 [i_0]);
                            var_19 = (min(var_19, (arr_7 [i_5] [i_4] [3])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_20 = ((var_1 ? ((((arr_17 [i_0] [i_4] [i_0] [i_0] [i_0]) ? (arr_17 [i_0] [i_2] [i_3] [i_4] [i_6]) : 42))) : (max(((1148140102 ? 144112989052600320 : var_5)), (arr_14 [1] [i_0] [i_3])))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] = (min((min((arr_2 [i_0] [i_4]), ((-(arr_4 [i_6]))))), (((113 * (arr_8 [i_0]))))));
                            var_21 = var_5;
                            var_22 |= arr_19 [i_0] [i_2] [i_3] [i_0] [i_4] [9];
                        }
                    }
                }
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_23 [i_0] [i_2] [0] = (min(1, (((((((arr_9 [i_7]) >= var_0)))) * (arr_2 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_23 = (!-659376415);
                            var_24 = (min(var_24, ((((arr_2 [i_8] [i_7]) <= (!var_4))))));
                            var_25 = (max((arr_13 [i_8] [i_7] [i_7] [18]), ((min(1, (arr_7 [10] [i_2] [i_2]))))));
                        }
                    }
                }
                arr_32 [i_0] = (max((max((arr_29 [i_0] [i_0] [i_0] [i_2] [4]), ((119 ? (arr_24 [i_0]) : (arr_2 [i_0] [i_2]))))), var_0));
                var_26 = 3635590880;
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_27 = var_7;
            var_28 = var_9;
            arr_36 [23] [23] [23] = ((-(((!(arr_28 [i_10] [i_10] [5] [i_10] [5] [i_0]))))));
        }
        var_29 = (((((~(arr_5 [2])))) < -67104768));
    }
    var_30 = (max(var_30, var_4));
    #pragma endscop
}
