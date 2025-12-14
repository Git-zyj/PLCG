/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 += (arr_0 [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_18 -= (min(((((min(var_6, 9973))) + (!55563))), (max(((max(var_1, 5062))), 1360531481))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_0 + 2] [i_0 + 2]) ? (((arr_1 [i_3]) ? (arr_3 [i_0]) : var_6)) : (arr_7 [i_2] [i_2] [i_2] [i_2])));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = (arr_2 [i_0] [i_1]);
                        var_19 = ((!(arr_0 [i_2] [i_0 + 1])));

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_20 = (arr_3 [i_0]);
                            var_21 = ((var_11 || (arr_9 [i_0] [i_0] [i_1] [i_1])));
                        }
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = ((-(((min(var_5, var_10))))));
                        arr_17 [i_2] [i_1] [i_1] [i_2] [i_1] |= ((!(((-1360531480 ? (arr_13 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0]) : (((!(arr_7 [i_5] [i_2] [i_1] [i_0])))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_2] [i_5] = ((((~(arr_3 [i_0]))) < ((~(arr_3 [i_0])))));
                        var_23 = ((~(arr_16 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 = ((~(arr_5 [i_0] [i_1])));
                                var_25 = 1656497817622150034;
                                var_26 = (((!7183883190069432111) >= (((((15172 ? 40 : (arr_5 [i_1] [i_1])))) ? (~var_13) : (arr_9 [i_0 + 1] [i_6] [i_6] [i_6])))));
                            }
                        }
                    }
                    var_27 = (((((arr_15 [i_0] [i_0] [i_2] [i_0 + 2]) / ((((arr_6 [i_0] [i_0] [i_2]) ? 55593 : 58052))))) | (arr_9 [i_0] [i_0] [i_0] [i_0])));
                    var_28 = (min(var_28, ((((arr_21 [i_0] [i_0 + 2]) ? (((((var_2 ? var_7 : var_3))) ? -23513 : 1)) : 1114887713)))));
                }

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_29 = (((max((arr_5 [i_0 + 1] [i_8 - 1]), (arr_25 [i_0] [i_1]))) == 0));
                    var_30 = ((-(((!((min(var_14, var_4))))))));
                    var_31 = ((((((-32767 - 1) ? (arr_25 [i_0] [i_1]) : (arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((arr_25 [i_0 + 1] [i_1]) + var_15)) : (((-(arr_27 [i_0] [i_0] [i_8 - 1]))))));
                }
                var_32 = (((min(var_15, (((!(arr_24 [i_0] [i_0] [i_0] [i_1] [i_0])))))) | (arr_21 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
