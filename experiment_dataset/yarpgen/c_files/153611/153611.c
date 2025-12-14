/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = ((1604521501 ? -1183559630 : var_1));
                            var_18 = 112123125;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((-(arr_9 [i_0] [i_0] [6] [i_0]))))));
                                var_20 = var_6;
                            }
                        }
                    }
                    var_21 ^= ((((min((arr_0 [i_0]), -12))) ? ((((((-(arr_2 [i_0])))) ? 1183559630 : ((943132696889249775 ? (arr_8 [i_1] [i_4]) : (-2147483647 - 1)))))) : var_1));
                    var_22 = (arr_10 [i_0] [9] [i_4]);
                    var_23 *= 1183559641;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_24 = (min(67, 1604521501));
                    var_25 = 15364563917445590840;
                }
                var_26 = -65;

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_27 = ((var_13 ? var_6 : ((((var_8 ? 112123108 : (arr_13 [i_0]))) + (((-(-32767 - 1))))))));
                                var_28 += 0;
                                var_29 = var_11;
                                var_30 = 114;
                                var_31 = ((-((min(var_11, 0)))));
                            }
                        }
                    }
                    var_32 = (arr_1 [i_1]);
                    var_33 = 112123125;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_34 = (arr_8 [10] [2]);
                    var_35 = ((((max(((((arr_33 [i_0]) ? -127 : (arr_29 [i_0] [i_1] [i_11] [i_11] [i_11])))), 2206055702))) % ((~(arr_7 [i_1] [i_1])))));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_36 = (((((var_4 ? 2753754444565598927 : (arr_16 [i_0] [i_1] [i_1] [i_0] [i_0] [7])))) ? -var_9 : var_14));
                    var_37 *= (((-127 && 58569) ? (min((min(var_0, -150319817055551697)), var_15)) : ((((max(var_12, var_14))) ? var_0 : -4294967280))));
                    var_38 = ((-(0 >= 20)));

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_39 = ((-(arr_40 [i_0] [i_12] [i_12] [i_1] [i_1])));
                        var_40 ^= ((((max(1, 82))) < -1183559642));
                    }
                }
                var_41 = ((3609705617853866314 ? (((-((-(arr_31 [14] [14] [i_0] [i_1])))))) : (~10338046242787952134)));
            }
        }
    }
    var_42 = (((((((max(var_5, var_3))) ? -1183559626 : 1))) ? (max(713143759, -var_0)) : var_5));
    #pragma endscop
}
