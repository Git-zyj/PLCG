/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1 - 2] [i_1] [i_0] = (((((18446744073709551615 ? (var_3 - -52) : (max((arr_4 [i_0] [16] [16]), (arr_0 [i_0] [i_1])))))) ? (((((var_10 ? 73 : (arr_6 [i_0] [i_0])))) ? 64 : (~43867))) : (((arr_4 [i_1] [i_1 + 1] [i_1 - 1]) ? -108 : 21668))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 *= (~var_8);
                    var_17 = ((-64 ? (((1 != ((1 ? 1 : 60))))) : (68 * 73)));
                    var_18 = (((-68 | 21668) ? ((0 ? 195 : (((-34336628462929585 + 9223372036854775807) << (((-62 + 110) - 48)))))) : (((-(arr_6 [i_0] [i_1 + 1]))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_19 = (arr_17 [i_0] [i_0] [i_3] [1] [i_0] [i_5] [i_5]);
                                arr_19 [11] [11] [i_3] [i_4] [i_5] = ((!(((((min(51, 455795871))) ? (arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] [1] [i_0]) : (arr_11 [0] [i_1] [i_3]))))));
                                var_20 *= (((--455795871) / 61));
                            }
                        }
                    }
                    arr_20 [i_0] [i_3] [i_1] [i_3] = (((arr_3 [i_1 + 1]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 2])));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_0] [i_3] = (min((((arr_22 [i_3] [i_6 + 1] [i_3]) ? (arr_22 [i_3] [i_6 + 1] [i_3]) : (arr_10 [i_1] [9] [i_1 + 1]))), ((((arr_21 [i_3] [i_3]) / 73)))));
                        var_21 = (min((arr_1 [i_0]), 89));
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_22 = (max(var_22, (((((max(-7108825607586328253, 1))) ? (((arr_13 [i_1 + 2] [i_1 + 2] [i_7]) / 16899)) : (arr_2 [i_7]))))));
                    var_23 = ((((var_7 & 1) + -2305843009213693951)));
                }
                arr_27 [i_1] |= ((-(min(var_12, var_7))));
                var_24 = ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        }
    }
    var_25 = var_8;
    #pragma endscop
}
