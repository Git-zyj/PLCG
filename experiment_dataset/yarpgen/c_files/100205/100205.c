/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] |= (arr_2 [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_0] [i_0] |= ((min(18070184360680195074, (var_1 || var_7))));
                                arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_1] = (arr_10 [i_4] [i_3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0] [i_0] = 54239;
                                arr_24 [i_0] [i_1] [i_1] = (((arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] [i_5] [i_6]) <= 11297));
                                var_19 = ((~((min((arr_15 [i_6] [i_1] [i_5] [i_1] [i_5 - 1]), (arr_7 [i_6] [i_6] [i_5 - 3] [i_5 - 4]))))));
                                arr_25 [i_0] [i_1] [i_0] = ((56 ^ (arr_12 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] [i_1])));
                            }
                        }
                    }
                    arr_26 [i_0] [i_1] [i_2] = ((390811485 < (((((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]) && ((((arr_13 [i_0] [i_1] [i_2] [i_0] [i_1]) << (var_16 - 1239280617))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                var_20 = (min(var_20, ((max((max(((max(660662458, var_14))), 9122947365830425965)), ((min((arr_27 [i_7]), (min(var_9, var_15))))))))));
                var_21 = (max(var_21, ((min((min((arr_27 [i_7 - 1]), var_6)), (((var_4 >= (arr_27 [i_7 + 1])))))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((arr_31 [i_7] [i_8] [i_8]) >> (arr_28 [i_8]))))));
                            var_23 = (min((((arr_36 [i_9] [i_8]) / 12247100141717475314)), ((max((arr_36 [i_7] [i_8]), (109 | 54239))))));
                            var_24 = (max(var_24, ((((((((arr_36 [i_7] [i_7]) - var_4)))) - ((var_15 | ((max(29972, -24002))))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_25 = (arr_31 [i_12] [i_13] [i_13]);
                            var_26 = (max(var_26, (((!((max((((arr_37 [i_12] [i_12] [i_12]) ? (arr_50 [i_11] [i_11] [i_13] [i_14]) : var_4)), -var_8))))))));
                            arr_51 [i_14] [i_14] = ((((((arr_42 [i_12]) ? (arr_33 [i_11] [i_12] [i_13] [i_11]) : (~var_9)))) ? (arr_43 [i_11] [i_11]) : (!var_6)));
                            var_27 = (max(var_27, ((((min(((987 <= (arr_31 [i_11] [i_13] [i_11])), (6199643931992076303 && 0)))))))));
                            var_28 = (var_8 < var_10);
                        }
                    }
                }
                var_29 = (((max((arr_41 [i_11]), (((arr_44 [i_12]) ? (arr_31 [i_12] [i_12] [i_12]) : 29690)))) | ((((((arr_34 [i_11] [i_12] [i_11] [i_12]) >> (54239 - 54237))) / var_12)))));
                arr_52 [i_11] [i_11] = var_15;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_30 = ((((var_9 ? ((368317316 ? (arr_33 [i_11] [i_12] [i_15] [i_12]) : 11297)) : (arr_58 [i_11] [i_15]))) | ((((!((max((arr_39 [i_11] [i_11]), 35865)))))))));
                            var_31 = ((((max((!54220), (1 < var_4)))) >> ((((min((arr_32 [i_12] [i_15]), var_13))) - 81))));
                            arr_59 [i_11] [i_11] |= 51308;
                        }
                    }
                }
            }
        }
    }
    var_32 = var_0;
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                {
                    arr_67 [i_17] [i_17] [i_17] [i_17] = (((((var_3 ^ (arr_43 [i_17] [i_19])))) || ((!(arr_63 [i_17] [i_18])))));
                    var_33 |= ((-((((12247100141717475314 ? var_3 : -29127)) - (arr_20 [i_18] [i_19] [i_17] [i_18])))));
                    arr_68 [i_17] [i_17] = (((((~(arr_57 [i_17] [i_17] [i_18] [i_18] [i_19] [i_19])))) ^ ((((max(var_12, 24001))) ? (arr_48 [i_17] [i_17] [i_17] [i_17]) : var_8))));
                    var_34 |= ((((!(54239 >= 23989))) || var_15));
                }
            }
        }
    }
    #pragma endscop
}
