/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_18;
        var_19 *= (((arr_1 [i_0]) % 3));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_1] [i_3] [i_3] |= (~var_17);
                        var_20 *= (arr_4 [i_0] [i_2] [i_2]);
                    }
                }
            }
            arr_12 [i_0] [i_1] = ((arr_1 [i_1]) <= (arr_1 [14]));
            arr_13 [i_1] = 0;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_18 [i_0] [i_0] [i_4] = (((arr_10 [i_0] [i_0] [i_0] [i_4]) ? (arr_10 [i_0] [i_0] [i_0] [i_4]) : (arr_10 [i_4] [0] [i_0] [i_0])));
            arr_19 [i_0] [i_0] [i_0] = var_11;
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_22 [1] [i_5] = (!0);
            arr_23 [i_0] [i_5] [i_5 - 1] = ((var_11 * (arr_21 [i_5 + 1] [i_5 - 1])));
            arr_24 [i_5] = -var_0;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_27 [i_0] [i_6] [i_6] = (((arr_17 [i_0]) > var_18));
            arr_28 [i_6] = (536838144 ? var_7 : (arr_4 [i_0] [i_0] [i_0]));
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_31 [i_7] = 0;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_38 [i_7] [i_8] [i_8] = (min((min((((~(arr_30 [i_8])))), (arr_29 [i_8]))), 9223372036854775807));

                    for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_8] [i_8] [0] [i_10 + 4] [i_8] = ((536838144 - (~2431675555)));
                        var_21 = (max(var_21, (~3758129151)));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        arr_45 [i_7] [i_7] [5] [i_8] = ((2431675555 ? 30774 : 0));
                        arr_46 [i_7] [i_8] [i_8] [i_9] [i_9] [i_11] = arr_36 [i_7] [i_7] [i_11 + 3] [i_11 + 3];
                        var_22 = (min(var_22, -906609991));
                        arr_47 [i_8] = (!12);
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        arr_51 [i_7] [0] [i_8] [17] = (max((min(((3758129160 ? 2563802638 : 147)), 204)), var_5));
                        arr_52 [i_7] [i_7] [i_8] [i_7] [i_7] = ((!(((var_15 ? var_12 : (arr_36 [i_7] [i_7] [i_7] [11]))))));
                        arr_53 [i_7] [i_8] [i_7] [i_7] [i_7] = (1 + 1);
                        arr_54 [i_8] = ((!((min((((!(arr_35 [i_7] [i_8])))), ((var_10 ? 1 : var_1)))))));
                    }
                    arr_55 [i_7] [13] [i_9] [i_8] = (arr_32 [i_8]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_23 = 7731031835206227034;
        arr_58 [i_13] = ((521017355622558298 > (((var_16 ? var_9 : 116)))));
        var_24 = (min(var_24, var_17));
    }

    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_25 = (max(var_25, (((-110 ? 2047 : 1863291723)))));
        arr_62 [i_14] = -117;
        arr_63 [i_14] [7] = 1863291755;
    }
    var_26 = ((var_2 ? var_2 : var_11));
    var_27 = var_17;
    #pragma endscop
}
