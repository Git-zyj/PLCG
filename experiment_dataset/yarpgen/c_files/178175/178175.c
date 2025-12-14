/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (!-6913785634094318627);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((var_17 ? -6913785634094318632 : -6913785634094318634));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [17] = ((-(((arr_6 [i_0] [i_1] [i_1]) / (arr_6 [i_0] [i_1] [i_1])))));
            var_21 = ((var_15 & (arr_4 [i_0] [1] [i_0])));
            var_22 = (max(var_22, (arr_1 [i_1])));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_23 &= (~-6913785634094318627);
                arr_13 [i_0] [i_2] [i_3] = ((!(arr_0 [i_2 + 1])));
                var_24 = (-19 && 1717424401585585309);
            }
            var_25 = var_3;

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_26 = (max(var_26, var_11));

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    arr_18 [2] [i_5] &= (((arr_4 [i_5 + 1] [i_2 + 1] [i_2 + 1]) != (arr_10 [i_2 + 1])));
                    arr_19 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] = (arr_6 [i_2] [13] [i_5 - 1]);
                    var_27 = var_2;
                }
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    arr_22 [i_0] [i_4] [i_4] [i_4] [i_4] &= ((var_11 ? (arr_10 [i_6 + 2]) : (((arr_8 [i_0]) & -6913785634094318632))));
                    var_28 ^= (arr_21 [i_2 + 1] [i_4] [i_0]);
                    var_29 = (((arr_8 [i_6 + 1]) ^ (((-19 ? var_11 : var_17)))));
                    arr_23 [i_0] [i_2 + 1] [i_4] [i_6 - 1] [i_6] [i_6] = ((-15 ? (var_11 || -6933) : (((arr_16 [i_0] [i_2 + 1] [i_0]) << (arr_2 [i_2] [i_2])))));
                    arr_24 [i_0] |= var_17;
                }
                var_30 = (((arr_2 [i_2 + 1] [i_2 + 1]) ? ((6933 >> (-6913785634094318627 + 6913785634094318647))) : var_17));
            }
            var_31 = ((var_15 != (arr_14 [i_2 + 1])));
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] = -var_9;
            var_32 = var_17;
            var_33 = ((arr_6 [i_0] [i_7] [i_7]) << ((var_0 / (arr_1 [i_0]))));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_30 [i_8] = ((arr_16 [i_8] [i_8] [i_0]) * var_4);
            arr_31 [i_8] [19] = ((var_18 ? 3195176784673569691 : 627523119));
            var_34 = ((6913785634094318611 ? 6933 : 3667444177));
            var_35 = (max(var_35, (((((var_18 ? (arr_21 [i_0] [i_8] [i_0]) : var_3)) <= (((var_6 ? var_18 : var_12))))))));
        }

        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            var_36 = (max(var_36, (arr_3 [i_9 - 2] [i_9 + 2])));
            arr_34 [i_9] = ((!(arr_21 [i_9 + 1] [1] [i_9])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_40 [i_9] [i_10] [i_11] = (((arr_20 [1] [i_9 - 2] [i_10] [i_11 + 1] [i_11]) > -13));
                        var_37 = (min(var_37, var_7));
                        arr_41 [i_9] [i_11 + 1] [19] [i_9] [i_9] = -6913785634094318656;
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_38 = (max(var_38, -0));
            arr_46 [i_12] [i_0] = ((!(arr_1 [i_0])));
            arr_47 [i_0] [i_0] = var_4;
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_50 [15] = ((((min(-var_18, (var_15 || var_7)))) ? -13 : (arr_10 [i_13])));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            var_39 = (max(var_39, ((((arr_39 [i_13]) ? var_12 : (arr_28 [i_13]))))));
            arr_53 [i_13] |= ((13675 ? ((51855 ? var_0 : -71)) : (arr_2 [i_13] [10])));
            var_40 ^= 681470476;
            var_41 = (((((var_4 ? (arr_1 [i_13]) : var_6))) && var_13));
        }
    }
    #pragma endscop
}
