/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_10));
    var_15 *= ((((var_6 ? ((max(var_0, var_4))) : (min(var_7, var_7)))) / (min((var_0 | var_1), ((var_9 ? var_7 : var_10))))));
    var_16 += ((((var_13 ? var_13 : (92 | 1177574514)))) ? (((-(var_5 + 84)))) : (max(var_13, ((1004455374 ? 11140638061228587488 : 60)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = 1177574514;
                                var_18 *= (arr_5 [i_1] [6] [6] [i_1]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = ((-(arr_1 [i_5])));

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_20 = arr_6 [i_0] [i_7 + 1] [i_5] [i_6];
                            var_21 = ((((max((((arr_1 [i_1]) | 1)), var_9))) ? (((arr_22 [i_6] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1]) | ((4194303 / (arr_2 [i_0] [i_5]))))) : (arr_22 [i_6] [i_1] [i_1] [20] [i_1] [i_1] [i_1])));
                            var_22 = var_0;
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_23 = (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((((((((arr_12 [i_0] [i_0] [i_0]) + 2147483647)) << (((-1177574514 + 1177574538) - 24))))) ? -1177574514 : 1761846074841149493))));
                            var_24 = ((-(((arr_11 [i_5] [i_8 + 1] [3] [i_8] [i_8 + 1] [i_8 - 1]) ? (arr_11 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_11 [i_1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])))));
                            var_25 = ((((min(var_8, (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 5992968570920559336 : (arr_20 [i_0] [i_1] [i_5])))))) ? (arr_26 [i_1] [i_1] [i_6] [11] [11] [i_1] [i_6]) : var_0));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_26 = (arr_4 [i_5]);
                        var_27 &= var_0;
                        var_28 = (((((179 ? (arr_20 [i_0] [i_5] [i_5]) : var_5))) ? (arr_26 [i_0] [i_1] [i_0] [i_9] [i_0] [12] [i_1]) : (arr_27 [i_0])));
                        var_29 = (arr_18 [i_9]);
                        var_30 = (min(var_30, (((~((1 ? (arr_9 [i_0] [i_1] [i_5]) : (arr_5 [8] [i_1] [i_1] [i_9]))))))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_31 = ((arr_2 [i_0] [i_5]) / (arr_2 [i_0] [i_10]));
                        var_32 = -16809;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_33 = (max(-1761846074841149493, (((37 ? (arr_12 [i_11] [i_1] [i_0]) : ((1645884583722802072 ? (arr_31 [i_0] [i_0] [i_5] [i_11] [13]) : var_4)))))));
                                var_34 = 1177574514;
                            }
                        }
                    }
                    var_35 = (arr_24 [i_0] [i_0] [10] [i_1] [i_5] [i_5]);
                    var_36 = -78;
                }
            }
        }
    }
    #pragma endscop
}
