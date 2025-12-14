/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_13 = ((var_12 ? (var_12 % var_2) : ((min(17763358697722097008, (arr_4 [i_0] [18] [18] [i_0]))))));
                    var_14 = (min(var_14, var_8));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_15 = (var_6 ^ (arr_5 [i_0] [i_0]));
                    var_16 = 36857;
                    var_17 = (!(arr_5 [10] [10]));
                    var_18 = var_8;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (((var_7 ? (arr_9 [i_0] [i_1] [i_3]) : var_5)));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_19 |= var_1;
                    var_20 = (((((65535 ? (arr_5 [6] [i_1]) : var_9))) ? ((var_12 ? var_2 : (arr_4 [i_0] [i_0] [i_0] [i_0]))) : (arr_9 [i_0] [i_1] [i_4])));
                    var_21 = (!-5256018996661804292);

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_22 = var_7;
                        var_23 &= (((1 ? -4502197173123978460 : var_6)));
                        var_24 ^= -var_7;
                        var_25 = 39164;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_4] [13] [i_6] [i_0] = ((-(arr_12 [i_4] [i_1])));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_26 = (max(var_26, -var_6));
                            var_27 = (((((arr_20 [i_0] [i_0] [i_0] [i_0]) ? var_5 : (arr_4 [i_0] [i_0] [i_4] [3]))) * (!var_4)));
                            arr_24 [i_0] [i_1] [i_6] [i_7] = ((17763358697722097017 ? var_9 : (arr_5 [i_0] [i_6])));
                        }
                        arr_25 [i_0] [i_4] [i_1] [i_1] [i_0] &= -var_12;
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_28 = ((var_7 ^ ((~(arr_4 [i_1] [i_1] [i_4] [i_8])))));
                        var_29 = var_10;
                    }
                }
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    var_30 = ((var_9 | ((((arr_10 [i_0] [i_1] [i_9] [i_0]) & (arr_10 [i_9 + 2] [i_1] [i_0] [i_0]))))));
                    var_31 ^= (((!(arr_9 [i_0] [i_0] [i_9 - 2]))) ? (((!(arr_3 [i_9 + 2] [i_1] [i_0])))) : (((!(arr_3 [i_0] [i_0] [i_0])))));
                    arr_30 [i_0] [i_0] [i_9] [7] = (((~-var_12) ? ((((((var_8 ? var_6 : var_12))) && (((~(arr_0 [2]))))))) : (((var_11 > (~-2305843009213693952))))));
                    arr_31 [i_9] [i_0] [i_0] = (max(((var_1 ? var_0 : 0)), (((var_2 / (arr_12 [i_9 - 2] [i_9 - 2]))))));
                }
            }
        }
    }
    var_32 = ((26354 + (((((var_10 ? var_1 : var_12)) != var_12)))));
    #pragma endscop
}
