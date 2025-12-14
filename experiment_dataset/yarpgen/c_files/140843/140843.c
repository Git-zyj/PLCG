/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 3] [i_0] = (arr_0 [i_1]);
                    var_19 = var_2;
                    var_20 = (((((-19286 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_1] [i_1 - 2] [i_1 - 2])))) ? (arr_1 [i_2]) : (~2809960510)));
                    var_21 = (arr_1 [i_0]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_22 = ((((min((arr_10 [i_1 - 2] [i_1 + 1] [i_1 - 1]), var_18))) <= 3056024388115797094));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_23 = (arr_8 [i_4] [i_0] [i_4] [i_4] [i_4]);
                            var_24 = var_0;
                            arr_15 [i_0] [i_0] [i_2] [i_4] [i_4 + 3] = (((var_13 ? (arr_9 [i_0] [i_2]) : -var_6)));
                            arr_16 [i_0] [i_4] [i_2] [i_3] [i_4 - 1] = (arr_5 [i_0] [i_0] [i_1] [i_1 + 1]);
                        }
                        var_25 = var_0;
                    }
                }
            }
        }
        var_26 = (-3056024388115797080 > 3056024388115797094);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_27 = (((((-(arr_0 [i_5])))) ? ((max((arr_0 [i_5]), (arr_0 [i_5])))) : (arr_0 [i_5])));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_28 = (max(var_28, (arr_18 [i_5] [i_6])));
            arr_21 [i_5] [i_5] = var_15;
            arr_22 [i_6] = var_11;
            arr_23 [i_5] = (arr_3 [i_5] [i_5] [i_5]);
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_29 = (max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_7]), ((-((((arr_25 [i_5]) || var_2)))))));
            var_30 = (max(var_30, (arr_12 [i_5] [i_7] [i_5] [i_5] [i_7] [i_7])));
            var_31 = -16;
        }
    }
    var_32 = var_0;
    #pragma endscop
}
