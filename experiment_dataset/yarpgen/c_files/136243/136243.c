/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, ((((((1 ? var_1 : var_0))) ? (arr_7 [8] [i_1] [i_2] [i_3]) : var_2)))));
                        var_15 = ((((arr_2 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 51852)));
                        var_16 -= var_1;
                        var_17 = (max(var_17, (((((((arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]) ? (arr_7 [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_1 + 1]) : (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 + 4])))) ? (((arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 3]) ? (arr_7 [i_1 - 2] [i_1] [i_1 + 4] [i_1 + 4]) : (arr_7 [i_1 + 2] [4] [i_1 + 1] [i_1 - 1]))) : (((arr_7 [i_1 + 1] [4] [i_1 - 2] [i_1 - 2]) ? (arr_7 [i_1 - 2] [2] [i_1 + 2] [i_1 + 2]) : (arr_7 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 2]))))))));
                        var_18 = (min((((arr_3 [i_1 - 2] [i_0] [3]) & (arr_2 [i_1 + 3] [i_1 + 1] [i_1 + 2]))), 1));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_6] [i_6] = var_8;
                    var_19 = ((+((((min((arr_12 [i_5] [i_4]), var_10))) ? ((min(var_2, (arr_11 [3])))) : ((((arr_14 [i_5] [7]) <= 42)))))));
                    var_20 = var_1;
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 -= ((((min((max(3082, 7658956340323602197)), (((42 ? (arr_11 [i_4]) : 42)))))) ? (((((var_3 ? (arr_12 [i_8] [i_4]) : (arr_20 [6] [i_5] [i_8])))) ? ((((arr_17 [i_8]) ? var_5 : var_1))) : -63)) : ((((((arr_23 [5] [i_5] [i_6] [i_7 - 1] [i_8]) - 45786)))))));
                                arr_25 [i_6] = (((((var_9 ? 65535 : (min(var_1, 3556595336))))) ? var_11 : ((max(var_5, (arr_17 [i_6]))))));
                                var_22 = min((arr_11 [i_4 - 1]), ((((1 ? 51852 : var_5)) & ((max(16150, (arr_12 [i_6] [i_4])))))));
                                var_23 = (((arr_24 [i_5] [i_6]) ? (((arr_20 [i_5] [i_6] [i_6]) ? 237094349 : 45)) : ((30015 ? var_10 : var_9))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_30 [i_9] [i_9] = (min((((arr_12 [i_4 + 1] [9]) / (arr_12 [i_4 - 3] [i_9]))), ((var_2 ? (arr_12 [i_4 + 2] [i_9]) : var_9))));
            arr_31 [i_9] = (((~0) ? ((var_0 ? (arr_19 [i_4 - 1] [i_9] [i_4 - 1]) : (arr_19 [i_9] [i_9] [i_9]))) : ((var_8 ? (arr_19 [i_9] [i_9] [i_9]) : (arr_19 [i_4] [i_9] [i_9])))));
            var_24 = (arr_22 [i_9] [i_9] [i_9] [i_9] [i_9]);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_25 = (arr_26 [i_10]);
                        var_26 = ((!(((min(214, var_1))))));
                        var_27 = (((arr_39 [i_4] [7] [i_12]) ? (~var_4) : var_9));
                    }
                }
            }
            var_28 = var_8;
        }
        arr_41 [i_4] [i_4] = var_1;
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 10;i_13 += 1)
    {
        var_29 += var_0;
        var_30 &= 58885;
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            {
                var_31 = ((-(arr_46 [i_14])));
                var_32 = (((((((max(var_0, 512))) ? (arr_49 [i_14]) : var_3))) ? (arr_52 [i_15] [i_15]) : (arr_46 [i_15])));
                arr_53 [i_14] [i_15] = -521;
            }
        }
    }
    #pragma endscop
}
