/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, 4096));
        var_14 = 4098;
        var_15 = (max(var_15, ((((61440 ? var_7 : 61435))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((min((arr_3 [i_1]), (((arr_3 [i_1]) ? (arr_3 [i_1]) : 61459))))) ? 61440 : ((min((min((arr_3 [i_1]), var_0)), (min(var_8, 4097))))));
        var_16 ^= ((min((((arr_3 [i_1]) ? (arr_2 [8]) : (arr_2 [i_1]))), 61459)));
        arr_5 [i_1] = ((((min(((((arr_3 [i_1]) ? 61441 : 4095))), (min((arr_2 [i_1]), var_1))))) ? (((arr_2 [i_1]) ? ((min(var_10, 61455))) : ((min((arr_3 [19]), (arr_3 [i_1])))))) : (((((arr_2 [i_1]) ? (arr_3 [i_1]) : 61436))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = (((min(var_0, var_9))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_5] [i_3] [i_4] [i_3] [i_3] [i_2] = ((((((((61420 ? (arr_22 [10] [i_3] [i_4] [i_5] [1]) : (arr_20 [9] [i_6])))) ? ((min(61441, 61459))) : ((var_6 ? var_12 : 61462))))) ? (min((min(var_5, var_3)), (((var_9 ? 61438 : 4095))))) : ((var_2 ? (((var_1 ? var_3 : var_11))) : (min((arr_15 [i_2] [i_2]), (arr_2 [i_2])))))));
                                arr_24 [i_3] [i_5] [i_5] [i_5] [i_5] = ((((((((arr_1 [i_2]) ? var_8 : 4074))) ? var_3 : (arr_7 [i_6])))) ? ((((min(4080, 61436))))) : (min(((61436 ? (arr_20 [i_2] [i_3]) : var_7)), var_1)));
                                arr_25 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] = (min(((min(((min(61455, (arr_6 [i_3] [i_5])))), ((4074 ? 61413 : var_4))))), ((((min(var_5, var_6))) ? (arr_15 [2] [12]) : ((((arr_11 [i_2] [i_3] [i_4]) ? (arr_0 [i_3]) : (arr_18 [i_6] [i_5] [i_4] [i_3] [10]))))))));
                            }
                        }
                    }
                    arr_26 [11] [i_3] [i_3] [12] = ((min(61439, ((4094 ? var_3 : (arr_18 [i_2] [2] [6] [1] [i_2]))))));
                    var_18 -= ((((((61440 ? 4080 : 4095)))) ? ((((min((arr_11 [i_2] [i_3] [i_4]), var_0))))) : ((61425 ? (arr_11 [i_2] [i_3] [i_4]) : 61441))));
                }
            }
        }
        arr_27 [4] = (((((((arr_1 [i_2]) ? (arr_17 [i_2] [i_2] [i_2] [i_2]) : var_1)))) ? (min((arr_9 [i_2]), (arr_9 [i_2]))) : ((((min(var_5, 4080)))))));
    }
    var_19 -= ((((((var_3 ? var_9 : var_4))) ? (((var_3 ? 4073 : var_10))) : ((4095 ? 61480 : var_7)))));
    var_20 = (((min(var_4, ((min(4100, 4095)))))) ? (min((min(var_7, var_5)), var_11)) : ((((min(var_4, 61433))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 10;i_8 += 1)
        {
            {
                arr_33 [i_7] [2] [i_7] = (min((((((var_4 ? var_10 : 61435))) ? var_7 : ((4103 ? var_5 : (arr_17 [i_7] [i_8] [11] [i_8]))))), ((((((var_5 ? var_5 : var_1))) ? (((min((arr_0 [i_8]), 4103)))) : (min(var_9, var_8)))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_21 = (min(61446, ((min(((min(var_8, var_12))), ((61432 ? (arr_19 [i_7] [i_7] [i_7] [9] [0]) : 4109)))))));
                            var_22 = ((min((arr_15 [i_8] [i_10]), 4075)));
                            var_23 ^= (min(((min(4073, (min(4103, 4103))))), ((var_12 ? ((61427 ? 4101 : (arr_10 [i_7]))) : 4093))));
                            var_24 = (((((((arr_29 [i_7]) ? (arr_8 [i_7]) : (arr_35 [i_7] [0] [1] [i_7])))) ? (((min(4109, 61464)))) : var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_25 ^= min(((min((arr_28 [i_11] [i_12]), var_5))), ((((((arr_38 [11] [i_11 + 3]) ? (arr_31 [i_12] [i_12] [i_12]) : 4093))) ? (((min(4103, var_10)))) : (min((arr_39 [i_7] [i_7]), 61435)))));
                            var_26 = ((((min((((4101 ? 61435 : 61408))), (min(4110, (arr_39 [5] [i_11])))))) ? ((min(var_0, (min(61407, 4090))))) : 61425));
                        }
                    }
                }
                arr_46 [i_7] [i_7] [i_7] |= (min(((4129 ? (((arr_9 [i_8]) ? var_6 : var_6)) : ((min(4115, var_10))))), (((min(4115, 61427))))));
            }
        }
    }
    #pragma endscop
}
