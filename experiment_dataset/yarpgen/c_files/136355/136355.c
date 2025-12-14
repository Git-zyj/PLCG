/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (max(var_20, (((((var_13 ? ((var_11 ? var_4 : var_12)) : (var_18 << 0))) | var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (((((!(arr_1 [i_0])))) - 32767));
                var_22 = max(((~(arr_1 [i_1]))), -24);
                var_23 = -8358874344066904474;
                var_24 = (((8358874344066904476 | 0) << (((max(((8358874344066904468 - (arr_3 [i_0]))), (arr_0 [i_0]))) - 8358874344066904468))));
                var_25 = (((~6254989371619211646) | ((~(arr_1 [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_13 [i_4] [i_3] [i_4] [i_5] = (((((arr_1 [i_2]) > var_10))) > ((((arr_10 [i_4 + 2] [i_4] [i_4 + 2] [8]) - -1410455273))));
                            var_26 = ((((min((arr_7 [i_2 + 2] [i_4 + 1] [i_4 + 3]), 595891472))) ? (((arr_1 [i_3]) | (((arr_4 [4] [0]) ? 24 : (arr_9 [i_4] [i_3] [i_4]))))) : ((((!((!(arr_12 [i_2] [i_4])))))))));
                            var_27 = ((-(((!(~var_6))))));
                            var_28 = (max(var_28, ((max(8358874344066904474, (--19))))));
                            arr_14 [i_3] [i_4] = ((-((-(arr_10 [i_2] [i_4] [i_2] [i_4 + 4])))));
                        }
                    }
                }
                var_29 = (((-30 | (~24))));
            }
        }
    }
    #pragma endscop
}
