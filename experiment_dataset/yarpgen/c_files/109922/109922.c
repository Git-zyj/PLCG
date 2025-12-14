/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-var_4 ? (((1323223446 ? var_3 : var_10))) : (max(var_0, 752319673)))) * ((var_0 * (((var_5 ? var_8 : var_12)))))));
    var_14 -= ((((max(var_12, var_6))) != ((var_11 ? var_12 : var_0))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((((min(var_8, (arr_1 [i_0] [i_0]))))) ? ((((max((arr_0 [i_0]), var_7))) ? (((var_8 ? var_5 : (arr_0 [i_0])))) : (((arr_1 [i_0] [i_0]) / var_9)))) : -228148030));
        arr_2 [9] = ((((((var_10 * var_1) | 1))) - ((var_10 ? (var_12 * var_3) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = var_12;

        /* vectorizable */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            var_16 = ((-((var_12 ? var_2 : var_7))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_17 = var_9;
                            var_18 = (max(var_18, ((((1188098520 - 11) ? var_4 : (arr_15 [i_1]))))));
                            var_19 = (((~var_8) ? var_4 : (arr_14 [1] [i_1] [1] [i_2] [i_2 + 4])));
                            var_20 = (!3542647623);
                        }
                    }
                }
            }
        }
        var_21 |= ((~(((((var_1 ? var_6 : (arr_10 [i_1] [i_1] [i_1] [i_1])))) ? (~var_7) : var_4))));
        var_22 = ((~(1188098520 ^ var_1)));
        var_23 = (~var_12);
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 24;i_6 += 1)
    {
        var_24 = ((-(((arr_19 [i_6] [i_6]) / (arr_18 [i_6])))));
        var_25 ^= ((var_12 ? var_4 : var_2));
        arr_20 [i_6] = (((arr_18 [i_6 - 3]) ? (arr_18 [i_6 + 1]) : (arr_18 [i_6 + 1])));
    }
    var_26 = (max(var_26, (((~(((((var_7 ? var_2 : var_6)) == var_6))))))));
    #pragma endscop
}
