/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 -= 171;
                            arr_13 [i_0] [i_0] [i_2] [i_3] = var_3;
                            var_14 = (max(var_14, (((((min((((arr_0 [i_0]) ? 4874068652329644861 : (arr_7 [i_0] [i_0] [i_0] [i_0]))), (arr_9 [i_3] [i_2 + 1] [i_2] [i_1] [i_2 + 1] [i_2 + 1])))) ? -1 : 12813548700966979221)))));
                            arr_14 [i_3 - 3] [i_0] = (((1 ? 9 : 31)));
                            var_15 += (((-9 ? var_1 : (((arr_6 [i_2] [i_2]) ? var_1 : 5633195372742572395)))));
                        }
                    }
                }
                arr_15 [i_0] [i_0] = 5633195372742572395;

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_16 += var_12;
                    arr_18 [i_0] [i_0] [i_0] [i_0] = 0;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_17 = var_5;
                    var_18 ^= var_0;
                    arr_23 [i_0] [i_0] = (arr_5 [i_0]);
                    var_19 -= var_8;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_28 [i_0] = ((!((!(arr_19 [i_0] [i_0] [i_0] [i_0])))));
                    var_20 = ((var_10 ? var_6 : (((arr_4 [i_0]) ? (arr_4 [i_0]) : 42))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_33 [i_7] = (arr_32 [i_7]);
        var_21 = 162;
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_22 = arr_27 [i_8] [i_8] [i_8] [i_8];
            arr_39 [i_8] [i_8] = (arr_31 [i_8] [i_8]);
        }
        var_23 = arr_31 [i_8] [i_8];
        arr_40 [i_8] = (min((((var_3 ? (arr_27 [i_8] [i_8] [i_8] [i_8]) : (arr_27 [i_8] [i_8] [i_8] [i_8])))), ((((max(0, 65))) ? (arr_32 [i_8]) : (arr_29 [i_8] [i_8])))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        arr_43 [i_10] = 15;
        var_24 = (((arr_16 [i_10] [i_10] [i_10]) ? ((~(arr_16 [i_10] [i_10] [i_10]))) : ((var_8 ? (arr_16 [i_10] [i_10] [i_10]) : (arr_16 [i_10] [i_10] [i_10])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 17;i_12 += 1)
            {
                {
                    var_25 = (((13 ? 250 : 82)));
                    arr_50 [i_12] [i_11] [i_10] = ((((min(var_5, 255))) ? (((var_9 ? (arr_29 [i_11] [i_11]) : ((-(arr_11 [i_12])))))) : (min(-9, (-9223372036854775807 - 1)))));
                }
            }
        }

        for (int i_13 = 3; i_13 < 17;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_60 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = var_10;
                        arr_61 [i_13] [i_13 - 2] [i_15] [i_13 - 2] [i_13 + 1] [i_13] = (arr_17 [i_14] [i_13] [i_14]);
                        var_26 += ((((((0 ? var_1 : 93)))) ? (((max(var_2, 213)))) : 3236907666200057495));
                        arr_62 [i_10] [i_14 + 1] [i_10] [i_10] = (arr_29 [i_14] [i_14]);
                        var_27 *= (min(((((min(17027897690705396522, var_1))) ? (((min(var_9, (arr_16 [i_10] [i_10] [i_13]))))) : var_4)), var_4));
                    }
                }
            }
            var_28 &= 192;
            arr_63 [i_10] [i_13 - 2] = (~213);
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_67 [i_16] [i_16] = ((235 ? (arr_30 [i_16] [i_16]) : (arr_30 [i_16] [i_16])));
            var_29 = (((arr_25 [i_10] [i_16] [i_16] [i_16]) ? (arr_25 [i_10] [i_10] [i_10] [i_10]) : (arr_25 [i_16] [i_16] [i_16] [i_16])));
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            arr_70 [i_10] [i_10] [i_17] = (arr_58 [i_17] [i_17] [i_17] [i_10]);
            arr_71 [i_10] [i_17] [i_17] = ((1 ? var_10 : (((arr_5 [i_10]) ? ((var_1 ? var_4 : (arr_10 [i_10] [i_10] [i_10]))) : (((1 ? var_2 : (arr_5 [i_17]))))))));
        }
        for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_30 = ((1 ? -557389743326735799 : 15));
                            arr_82 [i_10] [i_10] [i_10] [i_20] [i_20] [i_20] [i_20] = ((((max((arr_12 [i_20]), 557389743326735788))) ? -var_8 : (arr_12 [i_20])));
                        }
                    }
                }
            }
            arr_83 [i_10] [i_10] [i_10] = (!-7600646508795602695);
        }
        for (int i_22 = 0; i_22 < 18;i_22 += 1) /* same iter space */
        {
            arr_87 [i_22] = var_1;
            var_31 = (max(var_31, ((min(1, 1105033620223038014)))));
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 18;i_23 += 1) /* same iter space */
    {
        arr_92 [i_23] = ((30 ? (arr_7 [i_23] [i_23] [i_23] [i_23]) : var_12));
        arr_93 [i_23] = ((-5276418936797418830 ? var_2 : (arr_49 [i_23] [i_23] [i_23] [i_23])));
    }
    #pragma endscop
}
