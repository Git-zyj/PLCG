/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_3));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (--4181480306);
                                arr_16 [i_2] [i_2] [i_1] [18] [i_2 - 1] = var_16;
                                arr_17 [17] [i_1] [i_1] [i_1] [i_0] = -1;
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((-(!var_9)));
                    var_21 = ((((max(var_12, (arr_10 [i_0] [i_2 + 1])))) ? ((max((arr_12 [i_2 - 1] [i_1] [i_1] [i_0]), var_8))) : (!var_1)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_25 [i_0] = (!var_6);
                        arr_26 [i_0] [15] [15] [i_7] = var_11;
                        var_22 += ((((var_11 ? (arr_20 [i_0] [i_6 - 1] [i_6 - 1]) : var_11))) ? (min((arr_21 [i_6 - 1] [i_0]), var_4)) : (arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_0] [i_0] [i_0]));
                    }
                }
            }
        }
        var_23 = ((!(((((((arr_15 [i_0]) ? var_1 : (arr_24 [i_0] [i_0] [i_0] [i_0] [1] [i_0])))) ? -125 : ((-(arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
        var_24 = ((!(((-(var_11 % var_1))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            var_25 |= ((((max((max(127, (arr_4 [i_8] [1]))), (~var_0)))) ? ((((22 ? var_1 : (arr_7 [6] [6]))))) : (((var_11 <= (arr_8 [i_8] [i_9] [i_9 + 1]))))));
            var_26 = max((max((arr_28 [i_9 - 2]), 0)), (!31));
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_27 ^= (arr_9 [i_8] [i_8]);
                        arr_38 [i_8] [i_8] [i_8] [i_9] = (((max((arr_6 [i_9] [i_9]), (arr_37 [i_8] [i_9 + 1] [i_10 - 1] [i_9]))) | (arr_23 [i_8] [i_9] [i_9] [i_10 + 2] [i_11])));
                    }
                }
            }
            arr_39 [i_9] [i_9] = (min(-1, (((((arr_3 [i_8]) | var_7))))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            arr_42 [i_8] [i_12] [1] = (var_9 ? 7827230654280539775 : var_12);
            arr_43 [i_12] [i_12] [i_12] = (((arr_27 [i_8] [i_12 + 2]) - (arr_27 [i_8] [i_12])));
            arr_44 [i_12] = ((~(arr_29 [i_8] [i_12] [i_12 - 1])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    {
                        var_28 = ((6 ^ (arr_46 [i_12])));
                        arr_50 [7] [i_12] [i_13] [i_14] = (((arr_6 [i_12 + 1] [i_12]) ? (arr_6 [i_12 + 2] [i_12]) : var_16));
                        arr_51 [i_8] [i_12] [i_13] [i_12] = (arr_1 [i_14 - 2] [i_14 - 1]);
                        arr_52 [i_8] [i_12] = ((-11805 ? -17021 : (~var_15)));
                    }
                }
            }
            arr_53 [i_12] [i_12] = ((arr_28 [i_12 + 2]) ? var_17 : (arr_28 [i_12 + 1]));
        }
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                arr_59 [i_8] [i_15] [i_16] [i_16] = (arr_46 [i_15]);
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_65 [1] [i_15] [i_16] [i_17] [i_18] = (arr_27 [i_15] [i_18]);
                            arr_66 [i_15] = (15517624539478433921 / 2290089516);
                            var_29 = ((!-var_2) > var_4);
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_30 -= 3145235686922286501;
                var_31 = (min(var_31, ((min((arr_1 [i_8] [i_8]), ((~(var_10 < var_9))))))));
            }
            arr_71 [i_15] [i_15] = 2363175538;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            arr_76 [11] [i_20] [i_20] = (!var_7);
            var_32 = (arr_54 [i_8]);
            var_33 = ((~(arr_30 [i_8])));
            var_34 = (((var_10 ? var_9 : (arr_3 [i_8]))));
            var_35 = ((var_4 << (((arr_10 [i_20] [i_20]) - 3768064378))));
        }
        var_36 = (((((((1315929750 & (arr_69 [2] [i_8] [i_8] [i_8])))) != (max(5509596878200254170, 1959291221)))) ? ((-((var_4 >> (3995168085 - 3995168079))))) : (!4294967295)));
    }
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        arr_79 [9] = ((!((max(((17470 + (arr_3 [i_21]))), -var_8)))));
        arr_80 [i_21] [i_21] = (max(((((max(var_15, 0))) ? ((((!(arr_9 [i_21] [i_21]))))) : (min((arr_14 [i_21] [i_21] [i_21] [14] [i_21]), var_0)))), (((((((min(var_7, var_6))) + 2147483647)) << (var_10 - 1))))));
        arr_81 [i_21] = 1;
        var_37 = (max(var_37, (((~((~(18119190312556175583 | var_1))))))));
    }
    var_38 = (min(var_38, (((min((8855919549458734432 || var_3), var_18))))));
    var_39 = var_7;
    var_40 = (min((!var_5), 123));
    #pragma endscop
}
