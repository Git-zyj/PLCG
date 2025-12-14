/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0]), ((~(arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = 23412;
        var_12 = var_0;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_13 = ((!(arr_7 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_17 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] = 1;
                        var_14 = ((1 || (((((max(9, 1635))) ? (((65527 ? 32767 : -31879))) : (((arr_11 [i_4 - 1] [i_4 - 1] [i_3] [i_4]) ? var_0 : (arr_12 [i_4 + 2] [8] [i_1]))))))));
                        var_15 = (min(var_15, (((((((((((arr_12 [i_1] [i_1] [i_3]) + 9223372036854775807)) << (((arr_5 [14]) - 3382234039706424811)))) - 15133))) ? ((((arr_1 [i_4 + 2] [i_4 + 2]) || 9223372036854775807))) : (arr_16 [23] [i_2] [2] [i_4]))))));
                        var_16 = ((-(min(32767, var_0))));
                    }
                }
            }
        }
    }
    var_17 = 17592183947264;
    var_18 = 20;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((~(((arr_24 [i_6] [i_7] [i_8]) % (arr_24 [i_5] [i_6] [i_8]))))))));

                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                            {
                                var_20 = (min(var_20, var_0));
                                var_21 = var_8;
                            }
                            for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                            {
                                arr_36 [19] [1] [i_8] [i_7] [i_6] [i_5] [i_5] = arr_11 [1] [i_7] [i_6] [i_5];
                                var_22 = (max(var_22, (((~(arr_26 [i_5] [i_7] [i_5]))))));
                                var_23 = (arr_18 [i_10] [i_5]);
                                arr_37 [i_5] [i_5] [i_5] [i_5] [i_10 + 1] = ((arr_12 [i_10 + 1] [i_10 - 2] [i_10 - 2]) ? (arr_12 [i_10 - 1] [11] [i_10 - 2]) : ((var_10 ? (arr_12 [i_10 - 2] [i_10 - 1] [i_10 - 2]) : var_0)));
                            }
                            arr_38 [i_5] [20] [20] [i_8] = (((arr_31 [i_5] [i_6] [20] [i_7] [i_8]) ^ (arr_19 [i_5])));
                            var_24 = ((((var_0 | (arr_7 [i_8]))) ^ (arr_7 [i_6])));
                        }
                    }
                }
                arr_39 [15] [15] = (arr_25 [0]);
            }
        }
    }
    var_25 = (max(var_25, var_5));
    #pragma endscop
}
