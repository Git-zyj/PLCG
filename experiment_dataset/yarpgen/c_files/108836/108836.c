/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (min((min((max(62215, 3835233504)), ((((arr_2 [i_0] [i_0]) ? 147 : var_9))))), (max((arr_1 [i_0 - 2] [i_0 + 1]), var_2))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = var_10;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_17 = ((((arr_6 [i_0 - 1] [i_0] [i_0]) ? (arr_9 [i_0 - 2] [i_0] [i_0] [i_0]) : 45)));
                        arr_15 [i_0] [i_1] [i_0] = var_9;
                        var_18 = 62;
                        arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = ((((((arr_6 [i_0 - 1] [i_0] [i_0 + 1]) ^ var_2))) ? (max(var_11, (arr_6 [i_2] [i_2] [i_2]))) : (((max((arr_5 [i_1] [i_1] [i_0]), (arr_6 [i_2] [i_1] [i_3])))))));
                        var_19 = (max(var_10, (32740 % 125)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = arr_9 [i_4] [i_1] [i_1] [i_0];
                        arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2] [i_0] = (arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4]);

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_21 = (min(var_21, (((-(max(125, ((788467350 ? (arr_9 [i_0] [i_0] [i_2] [i_0]) : (arr_9 [1] [i_0 - 1] [i_2] [i_0 - 1]))))))))));
                            var_22 = (((((arr_6 [i_4] [i_4] [i_2]) ? var_0 : 3835233504))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_24 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0] = (arr_11 [i_1] [i_4] [i_6]);
                            var_23 = (max((max(0, 2056748212)), (arr_13 [i_1] [i_4] [i_1])));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (max((arr_7 [i_0] [i_0 - 1] [i_2]), (max(2972649093, 109))));
                            var_24 *= ((((max((arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6]), (((arr_6 [i_0] [i_0] [6]) ? 161 : (arr_17 [i_6] [i_1] [i_1] [i_1])))))) ? (arr_21 [i_1] [i_1] [i_2] [i_1]) : (arr_13 [i_1] [6] [i_2])));
                            var_25 *= var_2;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_26 = ((var_9 ? (arr_22 [i_0] [i_1]) : (arr_2 [i_0 - 2] [i_0 - 1])));
                            var_27 = (((arr_0 [i_1] [i_7]) != (arr_2 [i_2] [i_0 + 1])));
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, -32740));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_29 *= ((((((((var_4 / (arr_35 [i_8] [i_8])))) ? ((max(176, (arr_33 [i_11] [i_11] [i_11])))) : ((max((arr_36 [i_8] [i_9 + 2] [i_8] [i_11]), var_10)))))) ? ((((arr_36 [i_10 + 2] [i_9 - 2] [i_10] [i_10]) == 147))) : (-9223372036854775800 != 3835233504)));
                                var_30 = ((((125 ? 126976 : -23754))) ? (min(63225, 3835233504)) : (3835233484 == 2732231859));
                                arr_42 [i_8] [i_8] [i_10] = ((var_2 ? (arr_30 [i_8] [i_8]) : ((((max((arr_35 [i_8] [i_9]), 9))) ? (max((arr_32 [i_10] [i_10]), 211)) : (((734572586 << (72249450 - 72249445))))))));
                            }
                        }
                    }
                    var_31 *= (((((var_7 && (arr_36 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2])))) < (((max((arr_33 [i_8] [i_8] [i_8]), (arr_39 [i_8] [i_8] [i_10 - 2] [11])))))));
                }
            }
        }
        var_32 *= arr_35 [i_8] [i_8];
        var_33 = (max(var_33, var_0));
    }
    var_34 = var_13;
    var_35 = (max(((max(53, 667023614))), var_11));
    var_36 = 94;
    #pragma endscop
}
