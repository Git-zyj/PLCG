/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = ((((min(var_6, (max((arr_0 [i_0] [i_0]), var_8))))) ? ((max(((((arr_0 [i_0] [i_0]) && var_7))), (min(var_11, var_9))))) : ((((min(var_8, var_13))) ? ((max(-936, var_6))) : var_0))));
        var_15 = -922;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_16 = (~129);
            var_17 = (921 ? -var_3 : ((var_0 ? (arr_4 [i_2] [1] [i_2]) : var_5)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 &= 57;
                        var_19 -= 958;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_20 = 1;
                            var_21 = (arr_23 [i_1] [i_8] [i_6] [i_8] [i_6]);
                        }
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            var_22 -= (((1 >> (-952 + 963))));
                            arr_26 [i_1] [i_5] [i_6] [i_6] [i_7] [i_9] = 1;
                        }
                        arr_27 [i_7] [i_5] [i_5] [i_1] = (arr_25 [i_1] [3] [i_6] [i_6] [i_7]);
                        var_23 = (((arr_10 [i_1 + 1] [i_1 - 3] [i_1] [i_6] [i_6] [i_6]) ? (~26) : var_4));
                        var_24 = ((var_1 ? var_8 : var_6));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_25 = (max(var_25, -29921));
                var_26 = var_8;
            }
            arr_30 [i_1] [i_1] [i_1] = (~var_3);

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_27 = ((~(arr_22 [i_1 - 1] [i_1 - 1] [i_11] [i_11])));
                var_28 = 18446744073709551614;
                var_29 = (max(var_29, ((+((28797 ? (arr_28 [i_11] [i_5] [i_1 - 1]) : var_11))))));
            }
        }
        var_30 = 40479;
    }
    var_31 &= (min(var_12, var_5));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_32 = (max(var_32, var_5));
                        arr_46 [i_15] [i_13] [8] = ((-(!var_1)));
                        var_33 = (~var_9);
                    }
                }
            }
        }
        var_34 *= (arr_43 [i_12] [i_12] [i_12]);
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 20;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            {
                arr_55 [i_16] = (arr_47 [i_17]);

                /* vectorizable */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            {
                                var_35 = ((-(~-600458699)));
                                arr_63 [6] [6] [10] [i_19] [i_19] = (arr_62 [9] [i_19] [i_19] [i_18] [i_17] [i_16 - 1]);
                                arr_64 [10] [10] [i_17] [i_18] [i_19] [i_20] = ((~((var_6 >> (var_6 - 1321581567)))));
                                var_36 = (arr_53 [i_17] [i_19]);
                                var_37 = var_3;
                            }
                        }
                    }
                    var_38 = (arr_52 [i_17]);
                }
                var_39 = min(-112, -5256);
            }
        }
    }
    #pragma endscop
}
