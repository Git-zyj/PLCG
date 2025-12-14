/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = (min(var_4, var_9));
                    var_11 ^= ((var_4 ? ((min((min(var_7, var_3)), (arr_5 [i_2] [i_2 - 1] [i_2 - 2])))) : ((var_4 * (arr_3 [6] [7])))));
                    arr_7 [i_0] [i_0] = (min((arr_5 [i_0] [11] [i_2]), (arr_2 [i_1 - 1] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((var_0 && (((-(((var_3 && (arr_4 [i_2 + 2])))))))));
                                var_12 = var_4;
                                var_13 = var_8;
                                var_14 = ((-(4629779401510434463 && 1)));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = (var_0 % -2898524783755768394);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_17 [i_0] [i_0] [i_0] = var_5;
            var_15 = (arr_12 [i_0] [1] [i_0] [i_5] [i_0] [i_0]);
            var_16 = (min(var_16, ((((var_1 ? var_8 : 4629779401510434463))))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_17 = (((arr_15 [i_6]) - var_8));
                arr_20 [i_0] [i_5] [1] [i_6] = (((arr_0 [i_6] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_5] [i_6] [i_6]) : var_0));
                var_18 |= (((arr_16 [i_0] [i_0]) ? var_1 : -2683));
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_7] [i_7] = ((((((((~(arr_11 [i_7])))) ? var_0 : -var_4))) ? (((1 ^ var_0) ? (min(2703, var_4)) : (arr_18 [i_0] [i_7] [i_7]))) : ((((arr_18 [i_0] [i_0] [5]) ? (!var_9) : (((40 && (-127 - 1)))))))));
            var_19 ^= ((((min((arr_2 [i_7] [i_0]), ((1 ? 2563908943 : 0))))) ? (((arr_19 [i_0] [i_7] [i_7] [i_7]) ? var_9 : var_7)) : ((((!(arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
            var_20 = (((((arr_19 [i_0] [i_0] [i_0] [i_0]) && (arr_19 [i_0] [i_7] [i_7] [i_7]))) ? (((((6 ? (arr_5 [i_7] [i_7] [1]) : (arr_8 [i_7] [i_7] [i_7] [i_0]))) >> (var_4 - 1318799638183881206)))) : (((var_9 && var_1) % var_1))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_28 [i_0] [i_8] = (((arr_10 [i_0] [i_0] [i_0] [i_0] [1]) ? (min((((var_7 + 9223372036854775807) << (57579 - 57579))), var_8)) : (((var_4 ? (((var_5 << (((arr_12 [i_0] [i_0] [i_0] [1] [6] [i_8]) + 1567280144214978489))))) : (var_6 & var_8))))));
            var_21 ^= (((((var_0 ? (arr_27 [i_0]) : (arr_27 [i_0])))) ? (((!(arr_27 [i_0])))) : ((min((arr_27 [i_8]), (arr_27 [i_0]))))));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_22 = (min((((((-(arr_30 [i_0] [i_8]))) > (!var_8)))), (((arr_9 [i_0] [i_8] [i_8] [i_0] [i_10] [i_11]) % var_7))));
                            arr_37 [0] [0] [i_9] [0] [i_10] [i_10] [i_11] = (arr_29 [i_0]);
                            var_23 ^= (arr_12 [i_0] [i_8] [i_0] [i_10] [4] [i_11 + 1]);
                            arr_38 [i_10] [i_9] [i_10] [12] = var_5;
                        }
                    }
                }
            }
            var_24 = (max(var_24, var_5));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_25 = ((-(min(-var_9, (7956 & -2703)))));
                                var_26 &= var_9;
                            }
                        }
                    }
                    arr_49 [i_0] [i_0] = ((((var_2 ? (arr_22 [i_0] [i_13] [i_13]) : (arr_22 [i_0] [i_13] [i_0]))) > var_0));
                    var_27 = (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
        var_28 &= ((~(min(-var_6, var_2))));
    }
    var_29 += (min(((((min(var_0, var_3))) ? -2281326186457699308 : ((var_5 ? var_7 : var_9)))), (((-((var_7 ? var_9 : var_3)))))));
    #pragma endscop
}
