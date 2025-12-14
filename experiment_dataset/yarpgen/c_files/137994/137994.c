/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(536870911, (min(1920, (min(var_19, var_10))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = (((((1 & (min((arr_4 [i_0] [i_0]), var_13))))) ? (min((arr_4 [i_0] [i_1]), ((var_19 * (arr_3 [i_0] [i_0]))))) : 16272860576341907609));
            arr_6 [i_0] [i_0] = ((((min(var_14, (arr_0 [i_0] [i_0])))) ? (((arr_3 [i_0] [i_1]) | (arr_0 [i_0] [i_1]))) : (((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_1] [i_1])))));
            arr_7 [i_0] = ((+(((arr_4 [i_0] [i_1]) ? 3417956651218914156 : (arr_1 [i_1])))));
            var_21 = (max(123, (arr_2 [i_0])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = arr_2 [i_0];
            var_23 ^= ((4092 ? 18014398509350912 : -27038));
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            var_24 += (~0);
            arr_12 [i_0] [i_0] [i_3] = (((arr_11 [i_0]) ? (max((arr_11 [i_3 - 1]), var_0)) : (arr_8 [i_0] [i_3 - 1] [18])));
            var_25 ^= (max((max((arr_8 [i_0] [i_0] [10]), 2048)), 2048));
            var_26 = ((~(4076 < 3417956651218914167)));
            arr_13 [i_0] [i_0] [i_0] = ((((((((arr_1 [i_0]) ? var_18 : (arr_2 [i_0]))) <= 7134880304200906086))) / (((arr_3 [i_0] [i_3]) ? 3482823225499432227 : (!var_12)))));
        }
        var_27 = (max(var_27, (((-((15360 / (arr_1 [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_4] [i_4] [i_4] = var_19;
                        var_28 = ((!(((min(-4104, 1))))));
                        arr_25 [i_4] [i_4] = (var_1 + var_13);
                    }
                }
            }
        }
        var_29 |= 14310;
        arr_26 [i_4] [i_4] = ((3840 ? 2251782633816064 : 3737324239));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            {
                var_30 |= (1073741824 ? var_7 : (min(-var_18, (min((arr_28 [2]), var_1)))));
                arr_31 [i_8] [i_8] [i_8] = (min(((((-(arr_19 [i_8]))) - (arr_29 [i_8]))), (!-46373)));
                var_31 = ((~(arr_3 [i_8] [i_9])));

                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    var_32 = (arr_29 [i_9]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_33 = (max(var_33, (arr_21 [i_8] [i_9] [i_10 - 1])));
                                var_34 = ((-(arr_33 [i_12 - 1])));
                                var_35 *= ((!(((32760 ? (arr_39 [i_10 + 1] [i_10] [i_10] [i_10 - 1] [i_10 + 1]) : 18446744073172680704)))));
                            }
                        }
                    }
                    arr_41 [i_8] [i_8] [i_8] [i_10 + 1] = (min((min((((arr_19 [i_9 + 2]) << (var_1 - 15871392310273387469))), ((min((arr_8 [i_8] [i_8] [i_8]), (arr_28 [i_8])))))), ((((arr_30 [i_8] [i_8]) / (arr_38 [i_8] [i_8]))))));
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_36 = (min(var_36, (((((((var_5 ? (arr_40 [i_8] [i_9 - 1] [i_9 - 1] [i_13] [i_13] [i_13] [i_9]) : var_2)) % (((~(arr_2 [i_13])))))) << (((((arr_27 [2]) | ((var_7 | (arr_17 [i_13]))))) - 29802)))))));
                    arr_44 [i_8] [i_9] [14] [14] |= -var_17;
                    arr_45 [10] [i_9] [10] &= var_5;
                }
            }
        }
    }
    var_37 = var_2;
    #pragma endscop
}
