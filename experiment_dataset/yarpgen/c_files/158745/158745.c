/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 *= ((var_1 <= (arr_0 [i_0 - 2] [i_0])));
        var_14 -= var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] &= 2038742716;
                    arr_10 [i_0 - 2] [i_1] [1] = var_8;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 += ((-(arr_6 [i_0] [i_3] [i_4] [i_0])));
                    var_16 = 0;
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        var_17 ^= (arr_14 [i_5] [i_5] [i_5 - 2] [i_5]);
        arr_19 [i_5] = (arr_12 [i_5]);
        var_18 = var_8;

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_24 [i_5] [i_6] = var_11;
            arr_25 [i_5] [i_6] = (arr_2 [1] [i_6] [i_6]);
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = -var_5;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_31 [i_7] [i_8] = var_7;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_42 [i_7] [6] = var_0;
                            var_19 = (max(var_19, var_11));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_20 -= arr_2 [i_7] [5] [i_9];
                            arr_45 [i_12] [i_10] [i_7] [1] [i_7] = var_4;
                        }
                        var_21 += 60148;
                        var_22 ^= ((-(~var_5)));
                        var_23 ^= var_4;
                    }
                }
            }
            arr_46 [i_7] [i_8] [i_7] = var_11;
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_24 = (min(var_24, (((~(arr_11 [i_7] [i_13]))))));

                /* vectorizable */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_25 = (min(var_25, (arr_22 [i_13] [i_15])));
                    var_26 = (min(var_26, (~1169995338)));
                }
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_27 += var_11;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 10;i_18 += 1)
                    {
                        {
                            arr_63 [i_7] [i_7] [i_7] [i_7] [i_7] = ((!((!(arr_44 [2] [i_7] [2] [i_17] [9])))));
                            arr_64 [i_7] [i_17] [i_17] [i_16] [i_13] [i_7] = (arr_62 [i_18] [i_7] [i_16] [i_7] [i_7]);
                        }
                    }
                }
                arr_65 [2] [i_16] &= var_9;
                var_28 += (((-12978 + 2147483647) << (7904577048231280473 - 7904577048231280473)));
                var_29 = 3581;
            }
            var_30 = (min(var_30, (((~(17867 - -3991971998))))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 10;i_20 += 1)
                {
                    {
                        var_31 = 8974357441577455751;
                        var_32 ^= 3124971951;
                        arr_70 [i_7] = (!1);
                    }
                }
            }
        }
        var_33 = (min(var_33, var_5));
    }
    /* LoopNest 3 */
    for (int i_21 = 1; i_21 < 8;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 11;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 11;i_23 += 1)
            {
                {
                    arr_80 [i_21 + 1] [8] [i_23] [i_22] = (((arr_73 [i_21]) / 37555));
                    var_34 = (arr_77 [i_23] [i_23] [i_22] [i_21]);
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 8;i_25 += 1)
                        {
                            {
                                arr_86 [8] [i_22] [9] [9] [i_22] = var_11;
                                arr_87 [4] [i_22] [i_23] = var_0;
                                arr_88 [4] [i_22] [4] [i_22] [i_22] = 9443;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 3; i_26 < 10;i_26 += 1)
                    {
                        for (int i_27 = 4; i_27 < 9;i_27 += 1)
                        {
                            {
                                arr_94 [4] [i_22] [i_26] [10] = (((arr_14 [i_21 + 1] [i_21] [3] [i_21]) <= var_2));
                                var_35 = (max(var_35, (((!(((arr_14 [i_21] [i_23] [i_26] [i_27]) != var_11)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = ((~(!var_11)));
    #pragma endscop
}
