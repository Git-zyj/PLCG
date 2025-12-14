/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 |= ((((-(max((arr_0 [i_0]), (arr_2 [i_0]))))) < (((11567 ? ((max(15935, 30366))) : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = ((32753 ? 14773 : 24439));
                    var_15 &= ((min((arr_0 [i_1]), (arr_2 [9]))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_3] [10] [7] [i_1] [i_1] [i_0] = ((((!(arr_6 [i_2] [i_2]))) ? var_0 : (~var_7)));
                        var_16 = -1046507558;
                        var_17 *= (-9223372036854775807 - 1);
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_2] [i_4] [i_0] = arr_1 [i_0];
                            arr_18 [i_4] = (+((var_6 ? (arr_6 [i_1 - 1] [8]) : -32744)));
                            var_18 &= var_4;
                            var_19 = (min(var_19, 43958));
                            arr_19 [i_4] = 65324;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_4] [i_1] = (arr_12 [i_0] [i_0] [i_2]);
                            var_20 = var_11;
                            var_21 = (-2147483647 - 1);
                            arr_24 [i_0] [i_4] [i_0] [i_6] = ((1225431930 * (((arr_10 [i_0]) / (arr_22 [i_6] [i_6] [i_4 + 2] [i_0] [i_1 - 1] [i_0] [i_0])))));
                            arr_25 [i_4] = -17520;
                        }
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            arr_28 [i_4] [i_1 - 1] [i_2] = -9832;
                            var_22 = (min((~var_8), (arr_1 [i_4 + 1])));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_23 = var_6;
                            var_24 = (-2147483647 - 1);
                            var_25 &= var_12;
                            arr_33 [i_4] [i_4] [i_4] [i_2] [i_0] [i_4] [16] = -607698574;
                        }
                        var_26 = (var_3 >= var_4);
                    }
                    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_1 + 1] [i_2] [i_9] = (max((arr_35 [i_1]), (arr_10 [i_0])));
                        arr_39 [i_1] [i_1] [i_2] [i_2] = (((((~(arr_8 [i_9 + 2])))) || (arr_8 [i_9 + 2])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_47 [i_0] [i_10] [i_2] = var_4;
                                var_27 -= var_11;
                                var_28 = 52364;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_53 [i_0] [i_1 - 1] [i_12] [i_0] = (min(((((var_7 ? var_7 : (arr_16 [i_0] [i_1 + 1] [i_1 + 1] [8] [3]))) & (arr_16 [i_12] [i_12 + 1] [i_2] [i_12] [i_13]))), var_2));
                                arr_54 [i_12] [i_0] [i_12] [i_12] [i_13] [i_13] = (max(((max((((arr_35 [i_0]) ? var_4 : (arr_12 [9] [16] [i_2]))), (arr_50 [i_1] [i_1] [i_2] [i_12] [i_13] [i_13])))), (arr_12 [i_1] [i_1 + 1] [i_1 + 1])));
                                arr_55 [i_12] = (max(31076, -846713862));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_0, ((1302557129 ? (!-1961893144) : ((min(-30737, 0)))))));

    for (int i_14 = 1; i_14 < 11;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_30 = (((((var_9 & (arr_12 [i_14] [i_14] [i_14])))) ? (((((min(-4617042038353466998, (arr_42 [i_14] [i_15] [i_14 + 1] [20] [4] [i_15]))) + 9223372036854775807)) >> (((~1891) + 1927)))) : (((~-747375088) & (min((arr_36 [20] [i_15] [i_15] [i_15]), (-9223372036854775807 - 1)))))));
            arr_62 [i_14] [i_15] = (((var_1 ? 6640557046388384998 : var_4)));
            var_31 = (max(var_31, (min(6496, ((59205 ? -1 : (var_4 / var_7)))))));
        }
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            var_32 = (arr_20 [i_16] [i_16] [i_16] [i_14] [9] [i_16 + 1]);
            var_33 = var_6;
            arr_67 [i_14] [i_16 + 1] [i_16] = (min(((((min(var_11, 6530624075828786185))) ? var_1 : (min((arr_59 [i_14]), var_12)))), (((!var_11) ? (min(var_7, 35569)) : ((((arr_6 [i_14] [i_14]) * -1024)))))));
        }
        arr_68 [i_14] [i_14 - 1] = min((arr_0 [i_14 + 1]), -661195235);
    }
    #pragma endscop
}
