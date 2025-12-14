/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((59984 ? var_5 : var_8))) ? (max(var_11, var_2)) : ((var_9 ? var_7 : var_12))))) ? (((var_8 + 289572210) + (var_13 - var_11))) : -var_7));
    var_16 = ((((((((0 ? 2546952911693406688 : 2546952911693406687))) ? var_13 : (var_2 > var_14)))) ^ ((((min(var_5, 5550))) ? ((var_14 ? 312697021 : var_12)) : (((var_14 ? var_0 : var_6)))))));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_3] [i_3] = 15899791162016144925;
                                var_18 = 59985;
                            }
                        }
                    }
                    var_19 = ((~(~var_1)));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] &= (min((((var_14 && (var_8 > var_11)))), (arr_15 [i_0] [i_1] [i_5] [i_1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((+((((((arr_8 [i_0] [23] [i_5] [9] [i_6] [i_7]) | (arr_9 [i_0] [i_5] [i_0] [i_0])))) ? (((arr_1 [i_7]) / var_5)) : var_13)))))));
                                var_21 &= (max(var_4, (220 | -496016610)));
                                var_22 = 14795549101918944447;
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_0] = (((arr_6 [i_0] [i_1] [i_1]) <= (arr_8 [i_0] [i_1] [i_5] [16] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_23 = (max((((40 > (arr_10 [i_0] [i_0] [i_5] [9] [i_8] [i_8] [i_9])))), (max(496016597, 103))));
                                var_24 = (max(var_10, (((!((max(var_3, (arr_5 [i_5] [i_8])))))))));
                                var_25 = (((((~((var_13 ? var_12 : (arr_4 [i_0] [24])))))) ? (min((max(var_12, (arr_9 [i_0] [i_1] [i_5] [i_9]))), ((max(var_6, var_10))))) : var_8));
                            }
                        }
                    }
                    var_26 ^= ((!(arr_8 [24] [i_1] [i_1] [i_1] [i_1] [15])));
                }

                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    arr_30 [i_10] [i_1] [i_0] [i_10] = -var_13;

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_33 [i_11] [i_11] [i_10] [i_11] [i_11] [i_11] = (arr_27 [i_0] [i_0] [i_1] [16] [i_11]);
                        arr_34 [i_10] [i_10] [i_10] [6] = ((((((((arr_23 [i_10] [i_0]) && var_3)) ? var_3 : var_2))) ? (!97) : ((var_6 ? (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_23 [i_0] [i_0]))) : var_13))));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_27 = var_13;
                        arr_38 [i_10] [i_10] = (~var_5);
                        arr_39 [i_0] [i_1] [i_10 + 2] [i_12] [i_10] = (arr_23 [i_1] [i_10 - 2]);
                        arr_40 [i_0] [i_10] [i_10] [i_12] [i_1] [7] = 34809;
                    }
                }
                var_28 = (((((max(289572198, (arr_23 [i_0] [i_1]))))) ? ((((((var_6 + 2147483647) << (((arr_1 [i_1]) - 2439817351582593220))))) ? ((-(arr_3 [i_0] [i_1] [i_1]))) : ((var_7 ? var_13 : var_7)))) : (0 || 2191135521)));
            }
        }
    }
    #pragma endscop
}
