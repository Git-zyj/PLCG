/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_0;
    var_19 = (max(var_19, ((max(2334434242824072204, var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_20 = (((arr_4 [i_0] [i_1] [i_2]) ^ (arr_4 [i_0] [i_1] [i_0])));

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_3] = (((((arr_3 [i_1]) - var_6))) ? 1 : var_6);
                        arr_13 [i_0] [i_1] [i_1] [i_4] = arr_1 [i_2] [i_4];
                        arr_14 [i_0] [i_0] [i_2] [i_1] [i_3] [i_1] = var_13;
                        var_21 = (min(var_21, ((((arr_7 [i_0] [16] [i_1] [i_3] [i_1] [6]) ? (arr_5 [i_2]) : var_15)))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_22 = (var_5 - 0);
                        var_23 = (!116);
                        arr_18 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] |= -3413012840033964786;
                        var_24 += (arr_0 [i_5] [i_3]);
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        arr_21 [i_3] [i_1] [i_2] [i_2] [i_6] [i_6] [i_2] |= (((((1923206925 ? var_4 : (arr_20 [i_0] [i_1] [i_6 + 2])))) ? (var_14 > var_14) : (arr_20 [i_6 + 1] [i_6 - 3] [i_6])));
                        var_25 ^= (arr_7 [i_6] [i_1] [i_2] [i_3] [i_6 - 2] [i_2]);
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        arr_24 [i_1] [i_3] [i_3] [i_3] [i_7] [i_2] &= (arr_7 [i_0] [i_1] [2] [i_0] [i_3] [i_0]);
                        arr_25 [i_1] [i_2] [i_3] [i_2] |= ((var_16 ^ (arr_15 [i_7 - 1] [i_7 - 1] [i_0] [i_7] [i_7])));
                    }

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_26 = ((((arr_22 [i_8] [16] [i_1] [i_8]) ? var_16 : var_15)));
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_16;
                        arr_30 [i_8] [14] [i_1] [i_3] [i_1] [i_1] [i_0] = var_13;
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_3] [i_9] = var_6;
                        arr_35 [i_0] [0] [i_0] [8] [i_2] &= var_0;
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_27 -= (((3191475694 ? 13 : (arr_17 [i_0] [i_0] [i_0] [i_0]))));
                        var_28 += 240;
                    }
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_29 -= (((arr_38 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_1]) ? var_15 : (arr_27 [i_0] [i_1] [i_11] [i_11])));
                        var_30 = (min(var_30, (((!(arr_38 [i_11 + 1] [i_1] [i_3] [i_11 + 1] [i_3] [i_1] [3]))))));
                    }
                    var_31 ^= 1030139803;
                    arr_41 [i_0] [2] [i_1] [i_3] = 8393593648458753530;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_45 [i_0] [i_1] [i_1] [i_1] = (~var_15);
                    var_32 += var_2;
                }
            }
            var_33 = (((!116) ? (~-1242100629902454285) : var_11));
            var_34 = (max(var_34, 3242));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_48 [i_13] [5] = ((1 & ((var_3 ? var_8 : 140))));
            var_35 -= (((arr_2 [i_0] [i_13] [i_13]) ? var_14 : ((-(arr_3 [i_0])))));
        }
        arr_49 [i_0] = var_1;
    }
    #pragma endscop
}
