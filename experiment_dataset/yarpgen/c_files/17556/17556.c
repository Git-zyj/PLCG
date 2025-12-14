/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((max((arr_0 [i_2 + 2]), (arr_3 [i_0] [i_2 - 1]))) + ((((((~(arr_0 [i_2]))) < (((9 ? 14 : 0))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_1] [i_2] [i_2] [i_3 - 2] [i_4] = ((!(((var_6 ? (max((arr_6 [1] [i_2 - 1] [i_1]), 14)) : (arr_7 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]))))));
                                var_11 = ((((min(14, (arr_9 [i_3] [i_3 - 2])))) % ((((arr_9 [i_3] [i_3 - 1]) > -17207)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((-(((8 ? 8 : 0)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                arr_18 [23] [i_6] [i_5] = (arr_15 [i_6] [i_5] [i_5]);
                var_13 = -1340186995;
                var_14 ^= (((((arr_15 [i_5] [i_5] [i_6]) + 2147483647)) >> (((max(-65522, (((arr_16 [i_5] [i_5] [i_5]) | var_6)))) - 31293))));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_15 &= ((((((~(arr_17 [i_6] [i_5]))) + (424075414783160292 && 0))) & (((-32763 + 2147483647) << (8 - 8)))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_16 ^= ((0 ? ((((arr_22 [i_8]) ? 17206 : (arr_19 [0] [i_8 - 2] [i_5] [i_8 - 1])))) : (((arr_19 [i_5] [18] [i_8] [i_8 + 1]) ? 5625654343319924929 : (arr_19 [i_5] [i_6] [i_6] [i_8 + 2])))));
                                var_17 = (((((((arr_23 [i_5] [i_6] [i_6] [17] [i_8] [i_9]) || var_4))) > (arr_15 [i_5] [i_6] [i_7]))) ? (((((min(var_2, (arr_21 [i_5] [i_6] [i_8] [i_8] [i_9])))) && (arr_13 [i_5])))) : (!55));
                                var_18 = ((((min(-2367, 65521))) < (((arr_16 [i_5] [i_6] [i_7]) << (var_5 - 592406238)))));
                            }
                        }
                    }
                }
                arr_26 [i_5] [i_5] [i_5] = (min((((arr_20 [i_5] [i_5] [i_6]) ? ((255 ? 5464529164526806235 : 94)) : 65522)), (arr_13 [i_5])));
            }
        }
    }
    #pragma endscop
}
