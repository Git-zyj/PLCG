/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_0] [i_0] [i_0] = ((((max(((477621766 ? 992 : 3861947906913523001)), -6865))) ? (((-(-6 - var_8)))) : (-1976606959 - 14584796166796028622)));
                                arr_14 [i_0] [i_0] [i_4] [i_4] [i_0] [i_1] [i_0] = ((!(arr_9 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [8])));
                                var_16 = (max(var_16, (((((((!3861947906913522980) ? var_7 : ((-(arr_1 [i_4])))))) ? 252 : -11385)))));
                            }
                        }
                    }
                    var_17 *= var_7;

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] = ((((min((arr_11 [i_0] [i_0] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (((var_2 ? -1306967122 : var_11)))))) ? (arr_19 [i_0] [0] [i_1] [i_1] [i_2] [i_5] [i_6]) : ((var_9 ? (arr_15 [i_2 + 4] [i_2 + 1] [i_2 + 1] [i_6] [i_2 + 1] [i_6]) : (arr_15 [i_2 - 2] [i_2] [i_2 + 1] [i_6] [i_6] [i_6])))));
                            arr_21 [i_0] [i_1] [i_5] [i_5] [i_5] [i_5] [12] = (max(((((arr_10 [i_0] [1] [i_2 + 1] [i_2] [i_2 + 1]) ? 1306967125 : 7470))), ((1 ? (((arr_19 [i_6] [i_6] [0] [i_6] [i_6] [i_6] [i_6]) ? 29986 : 2013292141)) : -34175608))));
                            arr_22 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) ? (min(-var_3, (var_5 - var_3))) : ((((arr_15 [3] [1] [1] [i_2 - 2] [i_2] [i_6]) ? 1 : var_11)))));
                        }
                        var_18 = (((~(arr_9 [i_2 - 2] [9] [9] [i_0] [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_19 = -var_4;
                        var_20 *= ((-(arr_15 [i_0] [i_7] [i_2] [i_2 + 3] [i_7] [i_7])));
                        var_21 -= -77;
                        var_22 = (!5387386973917571899);
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_23 = ((((max((arr_0 [i_2 - 2]), (arr_0 [i_2 + 4])))) ? (((arr_0 [i_2 + 3]) ? var_15 : (arr_0 [i_2 + 3]))) : ((61440 ? (arr_0 [i_2 + 3]) : -115))));
                        arr_29 [i_0] [i_0] [i_2] = (min(((min((arr_11 [i_0] [i_0] [i_8] [i_2] [i_2] [i_0] [i_2 + 1]), 1))), ((2281675167 ? -9223372036854775781 : -124))));
                    }
                }
            }
        }
    }
    var_24 = ((-var_1 != ((-(var_11 * var_4)))));
    #pragma endscop
}
