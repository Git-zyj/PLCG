/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] [i_1 - 3] = (((~var_4) ? ((((25547 && var_6) > ((min((arr_1 [i_0]), 220)))))) : (!38)));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (((((25547 ? 217 : (arr_3 [i_0])))) ? (~var_5) : 219));
                        var_17 = (arr_0 [1]);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_3 - 2] = ((arr_6 [i_0] [i_3 - 1] [i_1 - 1] [i_3]) || (((25557 >> (var_3 - 124)))));
                            var_18 = (~0);
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] [i_4] [i_4] = (((arr_4 [i_4] [i_2] [i_0]) ? 1 : var_12));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_1] [i_0] = ((((((arr_7 [i_0] [i_0] [i_4]) ? 1 : var_9))) ? (arr_2 [i_3 - 1]) : 23824));
                        }
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = (((!0) || var_15));
                        var_19 = -var_15;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_20 = (var_14 == 3);

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_24 [i_5] [i_6] = (~var_2);
            arr_25 [i_5] [i_5] = 57770;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                arr_33 [i_5] [i_5] [i_5] = ((1 ? var_13 : 255));
                var_21 = (!var_8);
            }
            arr_34 [i_5] [i_5] [i_5] = -1273;
        }
    }
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_22 = ((255 << (162 - 146)));

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            arr_50 [i_9] [10] [i_9] [i_12] [i_12] [i_11] = 255;
                            var_23 = ((!(((((max(37, var_3))) ? ((16132 ? var_4 : var_12)) : var_4)))));
                        }
                        arr_51 [i_9 - 2] [1] [i_11] [i_12] [i_12] [1] = var_0;
                    }
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        var_24 = (max(((-25558 ? 0 : 4)), (~7765)));
                        var_25 = (max(((~(!0))), ((~(var_3 & var_8)))));
                        var_26 = var_3;
                        arr_54 [i_14] [i_10] [i_11] [i_14] = (max((((((~(arr_44 [i_9] [i_10] [i_11] [1])))) ? ((var_14 ? 1 : var_10)) : var_5)), (((((var_2 ? (arr_38 [i_10]) : var_13)) != 19762)))));
                    }

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_57 [i_15] [i_15] = ((((var_1 && (arr_38 [i_11 - 1]))) ? ((min(var_14, var_8))) : (!8)));
                        var_27 = ((var_7 ? ((var_9 ? var_3 : var_7)) : (((arr_47 [i_9 + 1] [i_10] [i_9 + 1] [i_15]) << (65168 - 65153)))));
                        var_28 = ((1 ? (~var_7) : (-25558 & var_2)));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_60 [i_9] [i_10] [i_16] [i_16] = var_6;
                        arr_61 [i_16] = ((var_11 ? -11403 : -5937));
                        arr_62 [i_9] [i_16] [i_16] [i_9] = ((65168 ? (arr_45 [i_11 - 2] [i_11 - 2] [i_11 - 3]) : var_5));
                        var_29 = var_15;
                        var_30 = (((var_8 % 1) ? (arr_38 [i_9]) : 13967));
                    }
                }
            }
        }
        arr_63 [i_9] [i_9] = (min((var_14 * 1), (((var_1 * var_7) * -0))));

        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            arr_68 [i_17] [i_9 - 1] = (!-368);
            var_31 = (((((~((1 ? var_6 : var_2))))) ? ((min(1, var_6))) : ((max((max(1, 63241)), var_7)))));
            arr_69 [i_17] [i_9] = (((!var_13) && (var_10 && var_13)));
            arr_70 [i_9] [i_17] = ((((((~(arr_66 [i_9] [i_17] [i_17]))))) ? 1 : (((arr_44 [i_9 - 2] [i_17] [i_17] [i_17]) ? var_6 : (!var_0)))));
        }
        arr_71 [i_9 - 2] [i_9] = ((~((min(var_10, var_2)))));
    }
    for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
    {
        arr_76 [i_18] [i_18 + 3] = 133;
        arr_77 [9] = -583;
        arr_78 [i_18] [i_18] = ((~(((var_10 || var_0) ? ((min(22526, 1))) : (var_12 || 1)))));
        var_32 = (!36);
    }
    for (int i_19 = 1; i_19 < 16;i_19 += 1) /* same iter space */
    {
        arr_83 [i_19 + 2] [i_19] = -1;
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    {
                        var_33 = ((0 ? 254 : 0));
                        arr_92 [i_20] [i_20] [i_21] = (max((1 - var_9), ((-32751 ? 171 : 3))));
                    }
                }
            }
        }
        arr_93 [i_19 + 1] [i_19 + 1] = (((~14939) % ((1 ? 61357 : 14939))));
    }
    #pragma endscop
}
