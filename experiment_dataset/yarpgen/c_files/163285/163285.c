/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [1] = ((var_3 | ((min(var_15, (!var_15))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_2] = ((!0) || (!var_19));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_20 ^= (((1 ^ var_14) ? (var_13 | 1) : (~0)));
                        arr_13 [i_4 - 1] [i_2] [i_0] [i_2] [i_0] [i_0] [1] = (((0 ? (arr_9 [i_0] [i_1] [i_0] [i_0] [i_4 - 1] [i_0]) : var_15)) < 1);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_0] [i_3] [i_2] [i_0] = (~1);
                        arr_19 [i_0] = ((arr_11 [i_0] [i_0] [i_0] [i_2] [1] [i_5] [i_0]) == (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_5]));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_23 [i_6 + 1] [i_0] [i_0] [i_0] = (var_7 > (((arr_11 [i_0] [i_1] [i_6 + 1] [i_6 + 1] [1] [i_1] [i_3]) >> 0)));
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] = -var_13;
                        var_21 = (((!1) ? var_13 : (((arr_1 [i_1] [i_6]) ? var_14 : var_18))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_3] [i_3] [i_7] = (!(((var_1 ? var_9 : var_9))));
                        var_22 = ((var_16 ? (!0) : ((var_11 ? 0 : (arr_15 [i_0] [i_1] [i_0] [i_1] [i_3] [i_0])))));
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_23 = ((((((arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] [i_8]) ? 0 : 1))) ? (((arr_0 [i_0]) ? var_0 : (arr_25 [i_1]))) : (((arr_26 [i_8] [i_3] [1] [i_1] [i_0] [i_0]) ? (arr_17 [i_0] [i_1] [1] [i_8] [i_8] [i_8]) : var_4))));
                        var_24 = ((var_2 * 1) > (~0));
                        arr_31 [i_0] [i_3] [i_0] [i_3] [i_8] [i_3] [1] = (0 / var_7);
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_8] = var_7;
                    }
                    var_25 = arr_29 [i_0] [i_3] [i_2] [i_1] [i_0];

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] = var_13;
                        var_26 = (min(var_26, ((((0 / var_6) ? 0 : (((arr_6 [i_9 - 1] [i_0]) / 1)))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_27 = (0 >> 0);
                        arr_40 [i_0] = ((1 ? 0 : -1));
                        arr_41 [i_0] [i_0] [1] [1] [i_10] = 1;
                        arr_42 [i_0] [i_0] [i_3] [i_10] = 1;
                        var_28 = (((((arr_0 [i_0]) ? 1 : var_7))) && (((1 - (arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1])))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_47 [i_0] [i_0] [i_2] [i_0] [i_0] = 0;
                        arr_48 [i_0] [i_0] = ((var_5 ? var_12 : 1));
                        arr_49 [i_0] [1] [i_0] [1] [i_2] = ((-(~var_1)));
                        arr_50 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [i_11] = (((arr_6 [i_0] [i_3]) ? ((((arr_11 [1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_0]) == var_5))) : (1 >> var_7)));
                    }
                }
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_29 -= (((arr_33 [i_0] [i_1] [1] [i_12] [i_12] [i_12]) ? (((arr_14 [i_0] [i_1] [i_12] [i_1] [i_0]) ? 1 : var_18)) : 1));
                var_30 = -var_16;
            }
            var_31 = (min(var_31, (((1 ? 0 : 1)))));
        }
        var_32 = var_19;
        arr_54 [i_0] [i_0] = 1;
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        var_33 += ((~(((min(var_9, var_1)) ? ((var_14 ? (arr_22 [i_13] [i_13] [1] [i_13] [i_13] [i_13]) : var_13)) : 1))));
        arr_59 [i_13] = (((arr_45 [i_13] [i_13] [i_13] [i_13] [i_13]) ? (1 <= 1) : ((var_7 ? var_0 : ((max(1, 1)))))));
    }

    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        var_34 = ((-(!var_11)));
        var_35 = ((((((min(var_15, (arr_60 [i_14]))) ? (arr_61 [i_14]) : var_12))) ? ((((((arr_60 [1]) ? var_9 : var_4))) ? 0 : ((var_1 ? 1 : 1)))) : (arr_61 [i_14])));
    }
    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        var_36 ^= (((((1 * ((min(var_0, 1)))))) ? ((1 ? (arr_12 [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1] [i_15]) : var_5)) : ((min(var_12, 1)))));
        var_37 = (min(var_37, ((((((~var_0) >= (!var_9))) ? ((1 ? var_0 : ((var_18 - (arr_60 [i_15]))))) : (~1))))));
        arr_66 [i_15 - 1] = max((((arr_21 [1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]) || (arr_21 [i_15] [i_15 - 1] [i_15] [i_15] [i_15 - 1]))), (max(var_4, (arr_21 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        arr_70 [i_16] = ((min(var_12, (arr_68 [i_16] [i_16]))));
        arr_71 [i_16] = ((1 ? 1 : 1));
    }
    #pragma endscop
}
