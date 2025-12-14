/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                arr_14 [i_4] [i_1] [i_0] = (min((((31 ? -1 : -1))), 14487752254713964643));
                                var_11 = 8;
                                var_12 = (max((((arr_8 [i_0]) >> (18446744073709551598 - 18446744073709551570))), (~var_3)));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_13 = var_7;
                                arr_17 [8] [19] [i_2] [i_3] [i_5] [i_5] = (arr_5 [i_0] [i_2] [i_5]);
                            }
                            arr_18 [10] [10] [i_2] [i_1] [i_1] = ((13653 ? 32704 : -1));
                        }
                    }
                }
                var_14 = 20619;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 7;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            arr_32 [10] [10] [i_8] [i_9] [i_10] = ((2450801772120274432 ? ((51885 ? 1 : -1783419058)) : (arr_31 [i_8] [i_8] [i_8])));
                            var_15 = ((((var_9 ? 41541412046001826 : (arr_4 [14])))));
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_36 [i_11] [i_9] [i_8] [i_6] [i_6] = (((arr_24 [i_7 + 1] [5] [i_9 - 3]) - (arr_24 [i_7 - 1] [i_7 - 1] [i_9 + 1])));
                            var_16 = (arr_9 [21] [i_7 - 1] [21] [i_9]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            arr_39 [i_6] [i_6] [i_6] [i_6] [2] = (!var_5);
                            var_17 = (18446744073709551608 ^ 41541412046001826);
                        }
                        arr_40 [i_9] [i_8] [i_7] [9] = (arr_12 [5] [7] [i_7 - 1] [i_8] [4] [i_9]);
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_43 [10] [10] [i_8] [i_13] = 1;
                        var_18 = (((((var_3 ? (2 | var_1) : ((var_2 ? (arr_27 [i_6] [1] [i_6]) : var_3))))) ? var_8 : ((min(-21, 4609738861335251095)))));
                        var_19 = 149;
                        arr_44 [i_6] [i_13] = (min((min(8323072, var_0)), (arr_24 [i_7 - 1] [i_8 + 1] [i_8 - 1])));
                    }
                    arr_45 [i_6] [i_7 + 1] [i_7 + 1] = (~-251380875);
                }
            }
        }
    }
    #pragma endscop
}
