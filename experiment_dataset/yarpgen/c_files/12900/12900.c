/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (~var_9);

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_1] = 1;

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                arr_10 [i_1] = var_6;
                arr_11 [i_0] [i_0] [i_1] [i_0] = (arr_3 [i_1 - 2] [i_2 + 2]);
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_18 = (min(var_18, var_16));
                arr_15 [i_3] = (1 * 64);
                arr_16 [i_0] [i_1 + 1] [i_3] [i_3] = ((16384 ? (152 * 220) : (arr_3 [i_1 + 2] [i_1])));

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_19 = var_15;
                    arr_19 [i_4] &= var_15;

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_24 [i_0] [i_5] &= ((-(((arr_22 [i_0] [i_1] [i_3] [i_4] [i_4] [i_5]) * (arr_21 [i_4] [i_1])))));
                        arr_25 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] [3] = (arr_8 [i_4]);
                        arr_26 [i_3] = (((((1 ? 1 : 2758199985))) && 764476084));
                        var_20 = (min(var_20, var_5));
                    }
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_29 [i_6] [i_3] [19] [i_3] [i_0] = (0 * -37);
                    var_21 = 1;
                }
                arr_30 [i_3] [i_1 - 2] [i_3] [i_3] = (((arr_22 [i_0] [i_0] [i_1] [i_1 + 4] [i_1] [i_3]) ? var_3 : (arr_12 [i_1 - 3])));
            }
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                var_22 *= (35 * 0);
                var_23 = 0;

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    arr_36 [i_0] [i_1] [10] [i_8] |= (arr_21 [i_7 + 1] [i_1 + 1]);
                    var_24 = 1;

                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_8] [i_8] [i_8] [i_7 + 4] = (((~var_1) * (arr_35 [i_1 + 3] [i_7 - 2] [i_7 - 2] [i_7] [i_9 - 1])));
                        var_25 = (~var_1);
                    }
                    for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_8] [i_0] [i_8] = ((!(arr_23 [i_7] [i_7] [i_7 + 2] [i_7] [i_10 + 2])));
                        var_26 = (min(var_26, (arr_40 [i_0] [i_0] [i_7])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_45 [i_11] [i_8] [i_0] [i_0] [i_0] |= (arr_8 [i_1 - 3]);
                        arr_46 [i_0] [i_8] [i_1] [i_0] [i_8] [i_8] [i_11] = ((-(15 * -19484)));
                        arr_47 [i_11] [i_1] [i_8] [i_8] [i_1] [i_0] = (arr_18 [i_7 + 1] [i_7] [i_11] [i_11]);
                    }
                }
                var_27 &= (~var_3);
                arr_48 [i_0] [i_1 + 4] [18] [i_7 + 2] = 1;
            }
            arr_49 [i_1] [i_1] [i_0] |= ((3979157296 ? (arr_40 [i_1] [i_0] [i_1 - 3]) : (arr_40 [i_0] [i_0] [i_1 + 3])));
            arr_50 [i_1] = ((55219 ? 41 : 1));
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_28 = (max(var_28, (((11852 * ((var_11 ? -120 : (arr_37 [i_0] [16] [i_0] [i_0] [i_0] [1]))))))));
            arr_53 [i_0] = ((var_6 ? 31 : (arr_3 [i_0] [12])));

            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {
                arr_57 [i_13] [i_0] = ((var_5 * (100 * 1993492287)));
                arr_58 [i_0] [i_0] [i_0] = (-127 - 1);
            }
        }
        var_29 = ((var_7 / ((((arr_8 [i_0]) * 2593674716)))));
        var_30 = (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_33 [i_0] [i_0])));

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_61 [i_14] = ((-26 * (~0)));
            var_31 = (arr_56 [i_0] [i_0]);
        }
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            arr_64 [i_0] &= ((var_7 ? (((arr_31 [i_0]) + var_11)) : (arr_6 [i_15] [i_15] [i_15 + 1])));
            arr_65 [i_0] [i_0] [i_0] |= (((arr_18 [i_15 + 1] [i_15] [4] [i_15]) * 3817054675));
        }
    }
    #pragma endscop
}
