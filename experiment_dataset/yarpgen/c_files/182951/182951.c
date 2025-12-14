/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 += (4294967295 ? var_3 : var_1);
        var_13 = var_10;

        for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (~var_10);
                        var_15 = (!var_4);
                        arr_11 [i_2] = var_9;
                        var_16 = (max(var_16, (((var_1 ? 2569458371 : 1)))));
                    }
                }
            }
            arr_12 [i_0] [i_0] [i_0] = ((-32752 ? 3968 : ((3999 ? 255 : 13170147200572761406))));
            var_17 = ((var_8 ? var_7 : var_5));
            var_18 = (((arr_8 [12] [i_1 - 2]) ? (arr_8 [1] [1]) : var_7));
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_6] [i_4] [i_4] [i_4] [i_0] = -var_5;

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_19 = ((7769795063559201898 ? -19842 : 3968));
                        var_20 = 0;
                        var_21 = (~2569458366);
                    }
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_4 + 1]) ? (arr_5 [i_4] [i_4 - 2]) : var_10));
                    var_22 = (!242);
                    var_23 = ((~(arr_7 [i_4] [4] [i_4])));
                    var_24 -= var_6;
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 ^= ((-(arr_6 [i_4 - 2] [i_10 - 1])));
                            var_26 -= ((61568 ? var_5 : (arr_22 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                            arr_35 [i_4] [i_4] = (!1);
                        }
                    }
                }
                arr_36 [i_5] [i_4] [i_0] = ((var_4 ? 1725508917 : (arr_27 [i_4] [i_4 + 1] [i_4 - 2])));
                var_27 ^= (!8965894431943889636);
                arr_37 [i_0] [i_0] [i_5] [i_0] = (!1725508940);
            }
            arr_38 [i_0] [i_0] = (((arr_24 [i_0] [i_4] [i_0] [i_4 - 2]) ? (arr_24 [i_0] [i_4] [i_0] [i_4 + 2]) : 10));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_41 [i_11] = (var_8 ? (arr_14 [i_11] [i_11] [i_11]) : var_10);
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_53 [i_13] [i_11] = (!var_8);

                        for (int i_15 = 1; i_15 < 20;i_15 += 1)
                        {
                            var_28 = ((-1523653918 ? 1 : -1346934103));
                            var_29 = ((!(arr_43 [i_13 + 2] [i_13] [i_11])));
                            var_30 = ((1725508928 ? (-2147483647 - 1) : 31221));
                            var_31 = ((var_0 ? -1523653915 : 19844));
                            var_32 = ((-1523653915 ? var_1 : (arr_27 [i_13 - 2] [i_15 + 1] [i_15])));
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_33 = ((31221 ? (arr_24 [i_14 - 1] [i_16] [i_13] [i_16]) : (arr_24 [i_14 + 1] [i_14 + 1] [i_13] [i_12])));
                            var_34 = ((61540 ? 1725508944 : 100));
                            arr_60 [i_11] [i_11] [i_11] [i_11] [i_11] [i_14] [i_11] = ((~((-8577221793001209889 ? (arr_24 [i_14] [i_14] [i_12] [i_12]) : var_9))));
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            var_35 = ((-(arr_51 [i_11] [i_12] [i_11] [i_11] [i_11])));
                            arr_64 [i_11] [i_12] [i_11] [i_11] [i_11] = (((arr_2 [i_12 + 1]) ? (arr_2 [i_12 - 1]) : (arr_18 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 2])));
                        }
                    }
                }
            }
        }
        var_36 = (!4183748670);
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        arr_69 [i_18] = ((!((((arr_24 [i_18] [i_18] [i_18] [i_18]) ? var_1 : var_10)))));
        var_37 = ((2569458371 ? -1818090330 : 2442200473244709763));
    }
    #pragma endscop
}
