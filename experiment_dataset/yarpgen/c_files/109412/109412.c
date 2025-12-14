/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(var_5 - var_14)));
    var_19 |= ((var_14 ? var_9 : (min((max(var_0, var_4)), ((var_0 ? var_15 : var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((-93 / (min((arr_7 [6] [i_0] [i_1 + 3] [5] [i_2]), (arr_7 [i_0] [i_1 + 2] [i_1 + 4] [i_4] [i_4])))));
                                var_21 = (min(var_21, var_12));
                                var_22 = (((((((max((arr_3 [i_1 - 1]), 37))) ? (arr_1 [i_1] [i_1]) : (((arr_3 [i_0]) | 93))))) ? (arr_1 [i_1] [i_1 - 1]) : (arr_4 [i_0] [i_1 + 2])));
                                var_23 ^= (arr_6 [i_3]);
                                arr_11 [i_0] = var_14;
                            }
                        }
                    }
                    var_24 = (min(var_24, (((-(((arr_1 [i_1] [i_1]) ? var_15 : ((((-1 > (arr_8 [i_1]))))))))))));
                    arr_12 [i_0] [13] [i_1] [i_2] = 18446744073709551615;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_25 -= ((((max((arr_7 [i_0] [i_0] [i_2] [i_2] [i_2]), (~18446744073709551615)))) ? (~4294967294) : (((max((arr_2 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1 - 2] [i_2] [i_5] [i_6] [i_6] [i_2])))))));
                                var_26 *= ((arr_14 [i_1 - 2] [i_1 + 1] [i_6] [i_6]) ? 38005321 : ((~(((arr_5 [i_1] [i_0]) ? 219 : 6717489892364786851)))));
                                var_27 = -7523;
                                arr_18 [i_0] [i_1] [i_1] [i_1] [i_6] = (((-4888535588917314914 + 9223372036854775807) << (((arr_17 [i_0] [7] [i_1 - 2] [i_6] [i_6] [i_6]) - 26603))));
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] [9] = (min(15, ((~(min(6173009213689660896, (arr_17 [i_0] [i_1 + 2] [i_1 + 3] [i_2] [i_5] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
