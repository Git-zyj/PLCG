/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (var_12 & 107)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((var_13 || (arr_2 [i_2] [i_1] [i_2]))) ? ((((0 > var_0) || ((min(255, 16215051337128696862)))))) : (((!(arr_0 [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((((max((arr_3 [i_0] [i_0]), 18282260958807514419)) / ((0 ? var_0 : (arr_6 [i_0] [i_0] [i_2])))))) ? (((arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 + 3] [i_3 - 2] [i_3 + 2] [i_3 - 3]) ? ((var_9 ? (arr_0 [i_1] [i_2]) : var_11)) : -255)) : ((((250 * 1) ? 54947 : 9790)))));
                                arr_13 [2] [i_0] [i_2] [i_0] [10] = (((max((var_7 ^ 6558737764720374520), ((min((arr_11 [i_0] [i_2] [i_2] [i_3 - 1] [i_1] [i_3 - 2] [16]), var_12))))) < ((((arr_8 [i_3 + 1] [i_3] [i_0] [i_3 + 2] [i_3 + 3]) & 32739)))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((((255 ? ((var_8 ? 255 : 9007199254740991)) : 55)) < 32763));
        var_20 = (((((((arr_7 [i_0] [i_0]) / var_15)))) == (((arr_1 [i_0]) | 8559))));
        var_21 = ((((((1 ? 63 : 56977)))) == (min(((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [4] [i_0]) != 12854250770263785379))), ((var_0 ? var_12 : 1))))));
    }
    var_22 = 192;
    var_23 = ((var_0 ? var_14 : var_12));
    var_24 = (max(var_24, ((((90 <= (!-2702)))))));
    #pragma endscop
}
