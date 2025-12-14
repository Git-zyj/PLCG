/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~(-20838 & 3503725629)))) ? (((-2 + 2147483647) >> ((((var_3 ? 24576 : var_11)) - 24547)))) : var_10));
    var_13 = var_3;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = 791241666;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [2] [1] [i_4] = var_3;
                                var_15 = ((((max(var_9, var_10))) ? 40695 : (((arr_9 [i_3] [16] [i_4 + 1] [i_4]) ? (var_1 / 53530) : 19))));
                                var_16 = (arr_1 [4]);
                            }
                        }
                    }
                    var_17 = ((~(((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : var_11))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 20;i_6 += 1)
            {
                {
                    var_18 = (max(var_18, var_11));
                    var_19 += (max((((arr_4 [i_0]) ? (arr_4 [7]) : (arr_16 [i_0] [i_0]))), -124));
                    var_20 *= (min(var_3, (!var_4)));
                }
            }
        }
        var_21 = var_10;
        arr_23 [i_0] [i_0] = -13;
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_22 = (max(var_22, ((((arr_24 [i_7 - 2]) == -26484)))));
        arr_26 [i_7] = ((arr_25 [i_7 - 2] [i_7 - 2]) ? -8 : 12);
        var_23 = (min(var_23, ((((((135 ? 18446744073709551615 : var_5))) ? ((~(arr_24 [6]))) : -1852)))));
    }
    var_24 = (max(var_4, (((((0 ? var_9 : var_3))) ? var_5 : (~1085429746)))));
    #pragma endscop
}
