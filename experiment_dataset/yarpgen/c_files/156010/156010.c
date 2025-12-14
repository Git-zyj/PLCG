/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((!(((var_12 ? var_3 : var_1)))))));
    var_21 = var_7;
    var_22 -= (!-2128206394);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_23 = min(var_3, ((~(arr_0 [i_0 - 1]))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = (((((arr_4 [i_1] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0 + 1] [i_1]))) & ((18446739675663040512 ? (arr_4 [i_0 + 3] [i_0]) : (arr_4 [i_0] [i_1])))));
            arr_7 [i_0] [i_1] [i_0] = (((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))) ^ (((arr_0 [i_0 + 4]) ^ (arr_0 [i_0 + 3])))));
            arr_8 [i_0] [i_0] [i_1] = var_0;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (var_6 - var_16)));
            var_25 = (((arr_9 [i_0 - 1] [i_2]) ? (arr_9 [i_0 - 1] [i_0]) : (arr_9 [i_0 + 3] [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] |= 0;
            arr_15 [i_0] [i_3] = var_18;

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_18 [i_4] [i_3] [i_0] [i_0] = (((((arr_9 [i_0] [i_3]) ? var_0 : var_10))) && (!var_15));

                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    arr_21 [i_5] [i_3] = (arr_3 [i_3]);
                    arr_22 [i_4] [i_3] = (~-24278);
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        arr_27 [i_0] [i_3] [i_4] [i_6] [i_7] = (((arr_25 [i_7] [i_7] [i_7 + 2] [i_7] [i_7]) ? (arr_24 [i_3] [i_3] [i_4] [i_6]) : 15));
                        arr_28 [i_0] = (arr_24 [i_7 - 2] [i_6 + 1] [i_0 - 1] [i_0]);
                    }
                    arr_29 [i_0] [i_3] [i_4] [i_6] [i_6] [i_6] = ((!(arr_19 [i_0] [i_0] [i_0 + 2] [i_4])));
                    arr_30 [i_0] [i_3] [i_4] [i_6] [i_3] = (arr_23 [i_0] [i_0 + 4] [i_0] [i_4] [i_0] [i_6 + 2]);
                }
                var_26 = (((var_2 / var_12) ? var_14 : (((-9223372036854775789 ? 63 : (arr_24 [i_4] [i_3] [i_3] [i_0]))))));

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        var_27 += (arr_36 [i_4] [i_4] [i_0] [i_0 + 3] [i_0] [i_0]);
                        var_28 = (~var_19);
                    }
                    var_29 *= (arr_4 [i_3] [i_0 - 1]);
                    var_30 = (((arr_35 [i_0] [i_3] [i_8] [i_4] [i_8] [i_4] [i_4]) ? ((-(arr_16 [i_0] [i_8] [i_3] [i_3]))) : var_5));
                }
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    arr_40 [i_0] [i_3] [i_4] [i_10] = (arr_38 [i_0] [i_4] [i_0 + 3] [i_4] [i_4]);
                    arr_41 [i_0] [i_3] [i_4] [i_10] = (arr_11 [i_0 + 1]);
                    arr_42 [i_3] = var_18;
                }
            }
            var_31 = (((arr_19 [i_0] [i_0] [i_0 - 1] [i_3]) != var_18));
            var_32 = 1;
        }
        arr_43 [i_0] [i_0] = (arr_20 [i_0] [i_0] [i_0] [i_0]);

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_46 [i_0] [i_11] [i_11] = var_7;
            arr_47 [i_0] [i_11] = 1;
            var_33 = (arr_2 [i_0 + 3]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_50 [i_12] [i_12] = (arr_25 [i_0] [i_0] [i_12] [i_12] [i_12]);
            arr_51 [i_12] = -8;
        }
    }
    var_34 = ((-(((((var_10 ? var_18 : var_18))) ? ((var_3 ? 2047 : var_0)) : -var_15))));
    #pragma endscop
}
