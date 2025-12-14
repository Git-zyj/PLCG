/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((var_6 ? ((((arr_3 [i_0] [i_1]) || var_7))) : ((10981366859362787375 ? 16368 : (~1)))));
                var_17 &= -8978874145562139702;
            }
        }
    }
    var_18 = (max(var_18, var_3));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = var_14;
                    arr_13 [i_2] [i_3] [i_4] = ((~((max((arr_7 [i_4 - 1] [i_3]), var_0)))));
                }
            }
        }
        var_20 = (((~-7402569981909670317) - -11));
        var_21 = ((((10 ? var_6 : ((-(arr_1 [i_2]))))) >= 8186916239763614224));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_22 = (((~var_4) > 5325731318177168047));
        var_23 = (arr_14 [i_5 + 1] [i_5]);
        arr_18 [i_5] = (~(arr_14 [i_5 - 1] [i_5 - 1]));
        var_24 ^= (1 ? 1 : -14);
        arr_19 [i_5 - 1] [5] = 1;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        var_25 = (min(var_25, (((((var_11 ? 1 : (arr_21 [i_6 - 2] [21]))) >> ((((8866 ? var_14 : var_6)) - 97)))))));
        var_26 ^= 0;
        var_27 = 18446744073709551606;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_28 = ((var_10 ? (((62282 ? 1 : var_0))) : (arr_21 [i_7] [i_7 - 1])));
        arr_26 [i_7] [9] = ((~(arr_20 [i_7 + 1])));
    }
    var_29 = (((16630 < var_7) <= (5175585639212235082 >> 1)));
    #pragma endscop
}
