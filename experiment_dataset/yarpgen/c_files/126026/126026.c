/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 |= (496091851 != 496091848);
        var_14 = ((max((!var_0), (var_0 && var_4))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (~1);
                            arr_17 [i_0] [i_0] [i_1] [5] [i_2 - 1] [i_3] [i_0] = ((1 ? (arr_7 [i_1] [i_2] [i_3] [i_2]) : 3818414380631010553));
                            var_16 = var_11;
                            var_17 = (arr_6 [i_0] [i_1 - 1] [i_2 - 1]);
                            arr_18 [i_4] [i_4] [i_2 - 1] [i_2] [i_4] [i_0] |= ((-(arr_0 [i_2 - 1] [i_3])));
                        }
                        arr_19 [i_0] = (((!496091845) ? (arr_16 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_2] [i_2 + 1] [i_0]) : ((-(arr_15 [i_0] [1] [i_1 - 1] [i_2 + 1] [i_1] [i_2])))));
                    }
                }
            }
        }
        var_18 ^= (max((arr_8 [i_0] [14] [i_0]), 21899184));
        var_19 = (max(var_19, ((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [16] [i_0]) : ((var_12 ? (arr_14 [18] [i_0] [i_0] [i_0] [18]) : -1285256658806285947)))))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_20 = ((!(((-(arr_8 [i_5 + 2] [i_5] [i_5 + 3]))))));
        var_21 = (!var_5);
        var_22 = (min(var_22, ((((((~(arr_4 [i_5] [14] [i_5])))) & (((var_0 ? var_2 : 1285256658806285948))))))));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        var_23 = min(3386830909, 3818414380631010579);
                        var_24 = (max(var_24, (((max(var_7, (~-1)))))));
                        var_25 = (max(var_25, ((((!var_10) ? -27049 : (arr_0 [i_7 + 2] [i_6 - 4]))))));
                        var_26 ^= (arr_26 [i_6 - 1] [i_6 - 1]);
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, (((-3818414380631010581 >> (var_1 + 20221))))));
    var_28 = 1;
    #pragma endscop
}
