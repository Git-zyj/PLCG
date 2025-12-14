/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 ? 28 : (max(var_7, (96 * var_9)))));
    var_20 = 2147483647;
    var_21 = -22;
    var_22 = -2315063357578660927;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_23 += ((((max((((arr_0 [i_0]) / var_10)), (max(var_11, 2392132450850671916))))) ? (((((var_11 ? var_2 : var_13))))) : (min(var_2, (var_12 == var_11)))));
        arr_2 [i_0] = ((-402 ? 4095 : (min((4095 != 1476036204), (max(-409, 637947086))))));
        var_24 |= ((var_0 * (max(var_14, (arr_0 [i_0])))));
        var_25 = (max(var_25, ((((((min(-127, (max(42224, -72)))))) < ((var_11 ? ((412984084 ? 11426765736575617761 : (arr_0 [i_0]))) : (var_14 * 205))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (~-8065);
        var_26 = ((arr_3 [i_1]) ? (var_11 * var_5) : (var_18 / 401));
        var_27 += ((402 ? (((30956 / (arr_4 [i_1])))) : (arr_3 [4])));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_28 -= (~1);
            arr_8 [1] |= ((((var_10 ? var_4 : 2977364428587682169)) * 0));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_13 [i_3] [i_1] = ((-(28 / 2011347202)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_29 |= (~var_12);
                            arr_18 [i_5] [i_5] [i_1] [i_5] [i_6] = var_15;
                            var_30 = (min(var_30, (((1 ? 4294967295 : 1)))));
                        }
                    }
                }
            }
            arr_19 [i_1 + 1] [i_1] [i_1] = ((var_5 ? 1 : 60));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_29 [6] |= (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : var_4));
                            var_31 += (var_7 - (var_16 < 1476036187));
                            var_32 = var_14;
                            arr_30 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = (arr_12 [i_9] [i_8 - 1] [i_7] [i_1]);
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_33 [i_1] [i_10] = ((((var_3 << (var_7 - 6))) == 1));
            var_33 = var_17;
        }
    }
    #pragma endscop
}
