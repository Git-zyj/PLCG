/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = 183;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_13 [19] [i_1] [i_2] [i_2] [i_3 - 2] = ((254 ? (arr_4 [i_0] [i_0]) : var_12));
                            var_20 = 0;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = (((arr_11 [i_0] [i_0] [i_2]) / ((((max(254, 0))) << (((arr_10 [i_0] [i_1] [i_2] [i_3]) - 66))))));
                                arr_17 [i_2] [i_1] [i_2] [i_3 - 1] [i_4] = ((2010973474 ? ((var_3 - ((max(255, 64))))) : -389095160));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_4 [i_0] [i_2]) << ((9 ? var_11 : 2010973469))));
                                var_21 *= (((((((max(223, 2146435072))) | ((4294967294 ? 2515041311 : var_12))))) ? 2515041311 : ((((((~(arr_1 [i_0])))) ? (max((arr_15 [i_0] [i_1] [i_0]), 1)) : ((var_9 ? 1 : var_3)))))));
                                var_22 += 1194777362;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_23 |= (((((2921057762 * (arr_2 [i_0])))) ? 1194777343 : 1719122877));
                                var_24 += (((arr_11 [i_1] [i_2] [i_2]) * (arr_11 [i_0] [i_3] [i_5])));
                                arr_21 [i_0] [i_2] = (((arr_4 [i_3 - 1] [i_3 + 1]) ? (arr_14 [i_2]) : 1719122877));
                                var_25 = (min(var_25, (((arr_20 [i_3 - 3] [i_5] [i_5] [i_5] [1]) ? 1 : (arr_20 [i_3 - 3] [i_5] [i_5] [i_5] [i_5])))));
                                arr_22 [i_0] [i_0] [i_1] [i_2] [1] [10] [i_2] = var_8;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_25 [i_2] [i_2] [10] [i_2] [i_6] [i_1] = (arr_15 [i_3] [i_1] [i_2]);
                                var_26 = (((arr_19 [3] [13] [i_2] [i_3 - 2] [i_6]) ? (((var_15 - var_4) ? (arr_14 [i_2]) : ((max(254, (arr_2 [i_3])))))) : (max(((3003666395 ? (arr_3 [i_0]) : (arr_1 [i_0]))), ((max(1, 1)))))));
                                arr_26 [i_2] = ((~((max((arr_12 [i_3] [i_1] [i_2] [i_3 - 2] [i_6] [i_2]), (arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_2] [i_2]))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_27 |= 106;
                                var_28 = ((~(arr_28 [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 2])));
                                arr_29 [i_0] [i_2] [i_2] [i_3 - 2] [i_2] = (~((var_17 ? (arr_28 [6] [6] [i_2] [6] [i_7]) : 1)));
                            }
                            arr_30 [i_0] [i_2] [i_2] [i_0] = var_4;
                        }
                    }
                }
                arr_31 [i_0] [i_0] = ((-(arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
