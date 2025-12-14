/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = (max(var_12, ((((arr_8 [i_2] [i_2] [i_2] [i_2 + 1]) > 4175907241)))));
                        var_13 = (((-92 ? (0 / var_11) : (((var_0 + 9223372036854775807) << 0)))));
                        var_14 = 1;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [9] [i_3] [i_2] = (arr_4 [i_0] [i_1]);
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_0] &= ((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + var_3)))) + (arr_11 [i_0] [i_1] [i_1] [i_3] [i_3]));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_15 = (max(var_15, -5686));
                            var_16 -= 0;
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [21] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_17 = (max(var_17, ((max((min((arr_5 [i_0]), 0)), var_7)))));
                            var_18 -= (!var_4);
                            arr_23 [i_0] [i_1] [i_0] [i_3] [i_1] [i_3] [i_1] |= ((max((max((arr_3 [i_3]), 1)), ((((arr_10 [i_6] [i_6] [i_2 + 2] [i_6]) == (arr_1 [i_1] [i_3])))))));
                            arr_24 [i_6] [i_2] [i_2] [i_2] [i_0] = var_6;
                            arr_25 [i_1] [i_1] |= (arr_9 [i_2] [i_2]);
                        }

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_2] = (min(0, 96));
                            var_19 = (max(5686, ((-(min(4294967295, (arr_18 [i_7] [i_1])))))));
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_3] [i_8] = ((((max((arr_15 [i_8] [i_8] [i_8 + 1] [i_8] [i_8]), (61 && 1)))) ? var_1 : (((!(arr_22 [i_2 + 2] [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 + 4]))))));
                            var_20 = (((var_0 * ((7326 ? 0 : (arr_12 [i_1] [i_1]))))));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_34 [i_9] [i_9] [i_2 - 1] [i_2 + 2] [i_2] [i_2] |= ((!((min((min(160, (arr_10 [i_0] [i_1] [i_3] [i_3]))), var_1)))));
                            var_21 = (((((((max(96, 1))) * ((min(7, 0)))))) ? (!32512) : ((((var_1 ? -3155166582293567466 : 7326))))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_22 = 78;
                            arr_39 [i_2] [i_10] [i_10 - 1] = (min((((((((arr_32 [i_0] [i_2] [i_2] [i_2 - 2] [i_2] [i_0]) ? var_0 : 156))) ? var_10 : var_1))), (min(358412271, (-2147483647 - 1)))));
                            arr_40 [i_2] [i_1] [i_2] [i_10 + 1] [i_11] [i_11] = ((~(4873112956497312173 % 7326)));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_23 &= (min(-90, 0));
                            var_24 = ((10665 ? 1 : 7326));
                            arr_43 [i_2] = var_2;
                        }
                        arr_44 [i_1] [i_1] [i_0] |= ((3521041079801300470 ? 46631 : 0));
                    }
                    arr_45 [i_2] [i_2] = (arr_7 [i_0] [i_0]);
                    var_25 ^= ((119060055 ? 10665 : 1));
                    var_26 = (min(4175907241, 6175917363361658216));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 23;i_14 += 1)
                        {
                            {
                                arr_52 [21] [21] [i_2] [i_13] [i_13] [i_13] [i_13] = (((46856 ? 1354 : 1)));
                                var_27 = (arr_10 [i_14] [16] [i_0] [i_0]);
                                var_28 = (!1635499602);
                                var_29 = (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> 0));
                            }
                        }
                    }
                }
                arr_53 [i_0] [i_0] = (!46643);
                var_30 = ((65535 ? (arr_9 [i_0] [i_1]) : (arr_19 [i_0] [i_0] [i_0] [i_0] [13] [i_0] [i_0])));
                arr_54 [i_0] [i_0] = var_8;
            }
        }
    }
    var_31 = (57 - 187);
    #pragma endscop
}
