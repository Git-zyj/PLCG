/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = ((0 + ((max(var_12, (max((arr_1 [i_0] [1]), var_0)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_18 = ((-((min((arr_3 [i_0 - 3] [i_1 - 1] [i_1]), (arr_3 [2] [i_1 - 2] [i_1]))))));
                        arr_10 [i_0] [i_1] [i_3] [i_3] = var_11;
                        var_19 |= (((var_2 / (arr_0 [i_0 - 3]))));
                        var_20 = (var_8 && var_14);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [1] [i_0] = ((-(-1453866331 / var_13)));
                        var_21 = (max(var_21, ((((arr_13 [i_0 - 1] [i_4] [i_1 - 2] [i_4]) / (arr_13 [i_4] [i_4] [i_1 + 1] [1]))))));

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_22 *= (((((var_7 ? var_12 : (-127 - 1)))) ? ((var_13 ? var_6 : (arr_4 [i_0] [i_1] [i_1 + 1]))) : ((16777216 | (arr_15 [i_5] [i_4] [i_2] [i_2] [i_1 + 1] [i_0] [i_0])))));
                            var_23 = ((var_7 ? 1 : (arr_1 [i_0 - 2] [i_5])));
                        }
                        var_24 = ((var_2 <= (arr_15 [i_4] [i_4] [i_1 - 1] [i_1] [i_1 + 1] [3] [i_0 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [i_6] [i_1] [i_2] [i_6] [i_7] = (((arr_2 [i_0 - 2] [i_1]) ? (arr_19 [i_6 + 1] [i_1 - 2] [i_1] [i_0 - 3]) : 1));
                                var_25 = (max(var_25, ((min((((1 ^ 28) ? -1 : (arr_1 [i_0 - 3] [i_1 + 1]))), ((((((1 ? (arr_1 [i_0] [3]) : var_1))) ? ((var_6 ? (arr_18 [i_6] [i_7] [i_6] [i_6]) : var_14)) : (((var_12 ? var_2 : -122)))))))))));
                                arr_23 [i_7] [i_2] [i_6] [6] [i_7] [7] [i_0] = ((((max(((16711381680564756950 ? var_4 : var_0)), 1))) ? ((128 ? (min((arr_1 [i_0] [i_0]), var_0)) : (arr_11 [i_0] [i_1]))) : (~1)));
                            }
                        }
                    }
                    var_26 &= (~1);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_27 -= (max((arr_27 [i_9 + 1] [i_9]), ((var_9 + (arr_33 [i_9 + 1] [i_9 + 1] [i_9 + 3] [i_9 - 2] [i_9] [i_10 - 1])))));
                        var_28 = (arr_32 [i_8]);
                        arr_35 [i_11] [i_10] [i_9] [i_8] [i_8] = 1237469617;
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_38 [24] [i_12] = (max((max((arr_26 [i_8]), (arr_25 [i_12]))), ((((arr_24 [i_8]) < var_13)))));
            var_29 *= ((max(var_15, (arr_27 [i_8] [i_8]))) << 63047);
        }
        for (int i_13 = 3; i_13 < 21;i_13 += 1)
        {
            var_30 = (min(var_30, ((((((var_13 ? (arr_36 [i_8]) : 25611)) | (arr_25 [21])))))));
            arr_42 [i_13] = ((((max(6036747736920121058, (~var_7)))) ? (((!(arr_30 [i_13 + 4])))) : (((((-1453866331 ? var_0 : var_12))) ? 1 : (var_2 - 18678)))));
            var_31 -= var_2;
            arr_43 [i_13] = 1;
        }
    }
    for (int i_14 = 3; i_14 < 15;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 15;i_16 += 1)
            {
                {
                    arr_51 [i_16] [i_14] [i_14] = ((((((var_3 ? var_9 : var_0)))) ? (((arr_30 [i_14 - 2]) - 102)) : ((((((var_3 ? 9007199254736896 : 9007199254736908))) ? (arr_40 [i_16 - 2] [i_14 - 3]) : (((arr_33 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14]) ^ -1453866332)))))));
                    arr_52 [i_14] [i_15] [i_14] = (arr_29 [i_14]);
                    arr_53 [i_14] [i_15] [i_16] = ((((max((arr_27 [i_14] [i_14]), (arr_27 [i_16 - 2] [i_14 - 1])))) ? (max(var_10, 1)) : (((~(arr_27 [i_15] [i_14]))))));
                    var_32 = (((((max(var_7, var_7)) & (min(var_8, 21403))))));
                    arr_54 [i_14] [16] [i_16 - 3] [i_14] = var_11;
                }
            }
        }
        arr_55 [i_14] = ((min((((var_10 ? var_5 : 18678))), (max(var_3, 0)))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 16;i_18 += 1)
            {
                {
                    arr_61 [i_14] [i_17] [i_14 - 2] [i_14] = var_14;
                    var_33 -= (((1 ? -18686 : (arr_27 [i_18 + 1] [i_17]))));
                    var_34 = (min(var_34, (((((arr_46 [6]) ? var_15 : (max(var_4, (arr_30 [i_14]))))) * (!var_11)))));
                    arr_62 [i_18] [i_14] [i_14] [i_14] = ((min((var_0 + 7035343304805266055), ((min(6291456, 1))))));
                }
            }
        }
    }
    for (int i_19 = 3; i_19 < 15;i_19 += 1) /* same iter space */
    {
        arr_66 [15] = var_12;

        /* vectorizable */
        for (int i_20 = 1; i_20 < 16;i_20 += 1)
        {
            var_35 ^= ((((var_15 ^ (arr_59 [2] [i_20] [i_20]))) << ((var_7 ? 1 : 106))));
            var_36 *= var_15;
        }
    }
    var_37 = (((((-(max(var_11, var_8))))) - (max((max(var_13, var_8)), (max(var_5, var_13))))));
    var_38 = var_6;
    #pragma endscop
}
