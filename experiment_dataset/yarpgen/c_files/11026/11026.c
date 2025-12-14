/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_11 = arr_7 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3];
                        var_12 = ((var_9 ? ((var_10 ? var_1 : (arr_1 [i_0]))) : var_7));
                        var_13 = (((((var_8 ? 32767 : var_1))) ? (((1757379243 ? (arr_6 [i_0] [i_0] [13] [i_0]) : 47843))) : ((-32757 ? (arr_2 [i_1]) : (arr_5 [i_0] [i_1] [i_1] [i_3])))));
                        arr_9 [i_0] [i_1] [i_0] [i_0] = (arr_4 [i_2] [15]);
                        arr_10 [i_0] [i_0] [i_1 - 1] [i_2] [i_1] = ((~(((66 && (arr_8 [i_3] [i_1] [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_14 -= var_10;
                        var_15 = 47843;
                        var_16 = ((0 ? 32745 : 203));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            var_17 = var_1;
                            var_18 = (((-32748 <= 52) ? -32750 : (((!17691) ? 311287641 : (arr_18 [i_5] [i_5])))));
                            var_19 = var_4;
                            var_20 = (min(var_20, ((max(-992986180, (~var_7))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_2] [i_1] [i_7] = (!127);
                            arr_25 [i_0] [3] [i_1 + 1] [i_1] [i_5] [i_7] = (((arr_8 [7] [i_1] [7]) ? 62650 : var_4));
                            var_21 &= var_9;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_29 [14] [0] [0] [i_5] [i_8] [i_8] &= (17692 + var_1);
                            arr_30 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_1] = ((((var_3 | (arr_11 [4] [4] [i_1] [i_1]))) + (((var_2 ? 1126650972 : var_6)))));
                        }
                        var_22 = ((((var_3 ? 196 : var_7)) <= (((47844 ? 1 : 54010)))));
                        arr_31 [i_0] [i_1 - 3] [8] [i_1] = (arr_4 [i_0] [19]);
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_23 = ((~((10 ? -32755 : (-32767 - 1)))));
                        var_24 = (arr_34 [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [4] [i_1] [20] [i_11] &= 0;
                                var_25 &= ((((min(14183835997307222036, (!var_2)))) ? (((arr_21 [i_0 - 1]) ? 954829840 : (arr_21 [i_0 - 1]))) : var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    arr_51 [i_14] [i_13] [i_14] = ((((min((arr_32 [i_12]), ((max(var_2, var_8)))))) ? var_3 : var_5));
                    arr_52 [i_12] [8] [i_14] = ((+(((arr_3 [i_12 + 1] [i_14] [i_13 + 1]) ? -var_8 : -3425016552201613160))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((max(66, (max(-104, -1126650972)))))));
                                var_27 = (min((((47844 <= 178) ^ -var_7)), (arr_55 [i_12] [i_13])));
                                arr_60 [i_14] [i_14] = 1986395169;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (var_9 ? (var_7 + -11341) : -var_3);
    var_29 = 13058544861516825027;
    var_30 = var_4;
    #pragma endscop
}
