/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min((min((((1588638975 ? 19900 : 233))), (max(11435817011465309720, var_9)))), (var_2 > 44513)));
    var_15 = ((1588638975 ? (~var_11) : (((~var_9) | ((1 ? var_3 : 120493359))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_16 = (min(var_16, (((((min(1, (6221 / 121)))) ? (((31 ? var_12 : var_7))) : ((-(arr_2 [i_0 - 1] [i_0 - 1]))))))));
        var_17 ^= 2706328320;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_10));
                            arr_13 [6] [i_0] [i_2] [1] [6] = var_12;
                        }
                    }
                }
            }
            var_19 = ((arr_4 [i_0] [i_0 - 1]) ? (arr_4 [i_0] [i_0 - 1]) : var_2);
            arr_14 [i_0] [i_0] = var_8;
            var_20 |= (((((0 ? 1 : 1))) ? 11 : (var_0 & 12697002718748159274)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_18 [i_0] [i_0] [i_0] = (((arr_15 [i_0] [i_0 + 1] [i_0]) ? 17034312273231849141 : (arr_15 [i_0] [i_0 + 1] [i_0])));
            arr_19 [i_0] = -120493360;
            arr_20 [i_0] = var_10;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_21 = (min(var_21, 393937556));
        var_22 = 233;
        var_23 = (min(var_23, 1));
        arr_23 [i_6] = (!var_13);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_36 [10] [i_7] [i_9] [i_7] [i_7] = var_1;
                                var_24 = (max(var_24, var_7));
                                var_25 += ((-(min(((1942315261 ? var_4 : var_1)), ((10933420867179257935 ? (arr_28 [i_9 - 1] [i_8]) : var_9))))));
                            }
                        }
                    }
                }
                arr_37 [i_7] = var_9;
                arr_38 [i_7] [i_8] = ((((15360 ^ (arr_35 [1] [i_7] [1] [i_8] [i_8] [i_8] [1]))) & ((((arr_15 [i_7] [i_8] [i_7]) ? 7122 : 1)))));
                var_26 = (min(var_26, (min(((max(49, (arr_9 [i_7] [i_8] [i_8] [i_8] [2] [i_8])))), ((182 ? var_2 : var_2))))));
            }
        }
    }
    #pragma endscop
}
