/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, ((-((-(arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = 12736;
                        var_18 *= ((!((min((((var_15 << (var_2 - 7634)))), ((1754658022 ? 98304 : 8388608)))))));
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = var_14;

        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            arr_18 [i_4] [i_5] = 0;
            var_19 ^= arr_12 [i_5];
            var_20 = ((var_0 << ((((((min((!0), (arr_16 [i_5 + 4])))) + 123)) - 21))));
            var_21 = (min(var_21, 0));
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_22 = 54043195528445952;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [i_8] [i_7] [i_8] [i_8] = (((arr_8 [i_4] [i_6] [1] [i_4]) < (~1754658022)));
                        var_23 = (((var_2 || -18) && (arr_6 [i_7 + 2] [14] [i_7] [i_7 + 2])));

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_30 [i_4] [i_6] [9] [i_8] [10] [i_8] = ((1024 && (arr_20 [i_6] [4] [5])));
                            var_24 = ((((8388480 ? (arr_25 [i_4] [i_4] [i_4] [i_9]) : 0)) / (var_1 - -18)));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            arr_33 [5] = (((((((~(arr_25 [i_4] [i_4] [i_10] [i_10]))) & (~-1754658023)))) ? (~1754658022) : (((arr_12 [i_10]) & (((arr_7 [i_4]) & (arr_20 [i_4] [i_10] [i_4])))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    {
                        var_25 = (!0);
                        arr_38 [i_12] [i_12] = (min((arr_35 [i_4]), 1754658022));
                        var_26 = (((((min(0, 17)) >> (((arr_32 [i_12 + 1]) - 51407)))) - var_2));
                        arr_39 [i_4] [i_12] = (arr_14 [i_4]);
                        arr_40 [i_10] [3] [i_12] [i_12 - 1] = ((+((min((arr_31 [i_10]), (arr_5 [i_4] [i_12]))))));
                    }
                }
            }
            var_27 = ((var_14 ? ((min((min(20167, (arr_22 [11] [18]))), -2373297005436853147))) : (min(4873740039733013641, (-1754658038 ^ var_15)))));
        }
    }
    var_28 = var_6;
    #pragma endscop
}
