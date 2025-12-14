/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_13 = (max(var_13, ((min((max((arr_0 [i_0 - 3]), (arr_0 [i_0 + 3]))), (max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 ^= ((((((((arr_0 [i_0]) ? var_6 : (arr_9 [i_0] [i_1] [i_1] [i_2])))) ? (arr_0 [i_1]) : (max((arr_7 [i_1]), (arr_6 [i_0] [i_0]))))) != (((((!(arr_7 [i_1]))) ? (arr_4 [i_0]) : var_11)))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_14 [i_2] [i_2] [i_3] [i_3] = (max(var_1, ((((((arr_10 [5] [5] [i_1] [5]) + (arr_10 [i_0] [i_0] [i_0] [9])))) ? ((max((arr_3 [i_0] [i_0]), 1))) : var_9))));
                        arr_15 [i_3] [i_2] [i_3] = var_7;
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        arr_18 [i_2] [i_2] = var_2;
                        var_15 = (!var_10);
                        var_16 = ((max((~0), ((1 ? 20 : 8273050137973664771)))));
                        arr_19 [i_4] [i_4] [i_4] [10] = (((((max(var_4, 1)))) ? ((min(((1 ? 1 : 116)), -var_3))) : (arr_12 [i_0 + 2] [i_0 + 2] [i_1] [i_4] [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_23 [i_5] [6] = (arr_7 [i_1]);
                        arr_24 [i_5] [i_1] [i_2] [i_0 - 3] [i_2] = var_12;
                        arr_25 [i_0] [i_1] [i_1] [14] [i_1] &= 1;
                        arr_26 [i_0 + 1] [i_0] [i_0] [i_0] [i_5] = var_7;
                        arr_27 [i_0] [i_0] [i_0] [i_5] [i_2] [i_1] &= arr_6 [i_2] [i_1];
                    }
                    var_17 |= (((!var_12) ? (max((arr_22 [i_0] [i_1] [8] [i_2]), var_8)) : (((-((min(var_1, (arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0])))))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_31 [1] = (!var_9);

        /* vectorizable */
        for (int i_7 = 4; i_7 < 23;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_37 [i_8] [i_8] [i_8] [i_6] = (((arr_29 [i_8]) ? 1 : ((((arr_28 [i_8]) >= var_3)))));
                var_18 = (((arr_32 [i_7] [i_8]) ? var_1 : (arr_35 [i_6] [i_7 - 2] [i_7 - 2])));
                var_19 = ((((arr_29 [i_8]) ? (arr_30 [1]) : (arr_34 [i_7] [i_8]))));
                arr_38 [i_6] [i_8] [i_6] = var_5;
            }
            var_20 = (~var_1);
            arr_39 [i_6] [i_6] [20] = var_0;
        }
        arr_40 [i_6] = (!var_12);
    }
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 17;i_12 += 1)
                {
                    {
                        var_21 -= (((((~(arr_50 [i_10 - 2] [i_12 + 2] [i_12 + 2] [i_12])))) ? ((((min((arr_29 [i_9]), var_5))) ? ((var_0 ? 0 : 77)) : ((min((arr_0 [i_11]), 4064))))) : ((-(arr_44 [1])))));
                        arr_53 [i_9] [i_10] [i_9 + 3] [i_10 + 1] = ((1 ? -5411953658652652917 : 1));
                        arr_54 [i_9] [i_9] = ((max((!53427), var_11)) && ((!(arr_51 [i_12] [i_9] [4] [i_9] [i_9]))));
                        var_22 -= (arr_50 [7] [7] [i_9 - 3] [i_9 - 3]);
                    }
                }
            }
        }
        var_23 = (min(var_23, (~var_6)));
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_63 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9] [i_15] = ((max(var_7, (35418 && var_7))));
                        arr_64 [i_9] [i_13] = 259154961468643578;
                        var_24 *= (((arr_4 [i_9 - 3]) * (min((arr_29 [i_13 - 1]), (max(var_10, var_9))))));
                        arr_65 [i_9] [i_9] [i_14] [i_9] = ((((arr_4 [i_13 - 1]) ? (arr_4 [i_15]) : var_7)));
                    }
                }
            }
        }
        arr_66 [i_9] [i_9] = ((var_11 ? (arr_20 [i_9]) : 36223));
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_69 [i_16] = 0;
        var_25 = (((((((min(var_6, (arr_49 [i_16] [i_16] [12] [12])))) ? (min(1893374671, var_5)) : var_8))) ? 102 : ((((((var_6 ? (arr_35 [i_16] [i_16] [4]) : (arr_48 [i_16] [i_16] [i_16])))) || (arr_60 [4] [i_16]))))));
        var_26 = (min(var_26, (((((min(var_5, 1)) | (((var_4 ? var_8 : var_4)))))))));
    }
    var_27 += (88 - -16079732051744040584);
    var_28 = (min(var_28, ((min(((min(163, 776629078))), (((var_5 ? var_7 : 1))))))));
    var_29 = ((~(min(var_10, ((max(var_9, var_11)))))));
    var_30 = (max(((max(var_7, var_5))), (max(var_4, (var_11 * var_0)))));
    #pragma endscop
}
