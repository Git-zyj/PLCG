/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_15, (min((max(var_2, var_13)), (~var_7)))));
    var_20 = var_18;
    var_21 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-1 / (arr_2 [i_0]));
        arr_4 [9] = 65;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (((arr_5 [i_1] [i_1] [i_1]) / (arr_5 [i_0] [i_1] [i_1])));
            arr_8 [i_1] [i_0] [i_1] = (((arr_0 [i_0]) ? (arr_2 [i_1]) : (arr_6 [i_0] [i_1])));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_13 [i_2] [i_2] [i_2] = (2147483647 > -1991200787);

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_17 [i_0] [i_0] [i_2] [i_2] = ((((((arr_16 [i_2 + 1] [i_2] [i_2]) ? var_18 : -38))) ? (arr_2 [i_0]) : var_3));

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_22 = (~6);
                    var_23 = (arr_14 [i_2] [i_2 + 1] [i_4]);
                    arr_20 [i_0] [i_2] [i_3] [i_4] [2] = (arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    arr_24 [i_2] [i_3] [i_3] [i_5] = (arr_1 [i_2 + 1] [i_5 + 1]);
                    var_24 = (((arr_23 [i_2] [i_2 - 1] [i_2] [1] [i_2 + 1]) < (var_12 | var_0)));
                    arr_25 [i_0] [i_2] [i_3] = (((arr_10 [i_5] [i_5 - 1]) / 11));
                    var_25 = (((arr_23 [i_2 + 1] [i_2] [i_2 + 1] [1] [9]) ? var_1 : (arr_0 [i_2 - 1])));
                    var_26 = var_6;
                }
                for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    var_27 = ((9452994270373168123 ? (arr_11 [i_2 + 1] [i_6 + 1]) : var_16));
                    var_28 = (((arr_19 [i_6 + 2] [i_6] [i_6 + 2] [8]) ? (arr_19 [i_6 + 4] [i_6] [i_6] [i_6 + 2]) : (arr_19 [i_6 + 1] [12] [i_6 + 4] [i_6])));

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_32 [i_0] [6] [i_3] [3] [i_2] = (((arr_19 [i_7] [i_7] [i_7] [i_7]) ? 13 : var_11));
                        var_29 = ((-((1202559654 ? (arr_27 [i_0] [1] [i_6] [i_7]) : var_10))));
                        arr_33 [i_7] [i_7] [i_2] [i_2] [i_2] [i_0] = -75;
                        var_30 = (-((var_17 + (arr_2 [i_2]))));
                    }
                }
                var_31 = (((arr_16 [8] [i_2 - 1] [i_2]) ? (arr_16 [12] [i_2 - 1] [i_2]) : (arr_16 [i_2] [i_2 + 1] [i_2])));
                var_32 = 12895316699125254945;
            }
            arr_34 [i_2] [i_2] = 0;
        }
    }
    #pragma endscop
}
