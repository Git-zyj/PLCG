/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = ((((((-32767 - 1) ? 3550518758 : 115))) ? var_7 : (9989690671454927086 || 26053)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = var_5;
                        var_13 = (((arr_3 [i_3]) % ((38825 ? 1 : 1))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = 8216056326095579650;
                    }
                }
            }
            arr_10 [i_0] [i_0] = (var_6 == var_8);
        }
        arr_11 [14] [i_0] |= 4294967273;
        var_14 = (max(var_14, 0));
        var_15 = (((-10 ? 235 : (arr_7 [i_0] [i_0] [i_0] [i_0]))) % (arr_0 [2]));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_16 = (min(var_0, (var_1 && -90)));
            arr_14 [i_0] = ((var_7 - (min(9123268924099366348, (var_2 || 14)))));
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_17 *= (max(((23719 ? var_8 : (arr_6 [i_0] [i_0] [i_0] [i_5 + 2] [i_5]))), (-1505058236 + 1)));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_21 [i_0] [i_0] = 70;
                var_18 = -13842;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_19 = ((4294967279 * (max(((min(-1505058236, var_10))), var_8))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_20 = var_9;
                    var_21 = -13842;
                }
                var_22 &= min(var_5, ((((arr_3 [i_5 + 1]) ? 0 : -28))));
                arr_28 [i_0] = var_6;
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = 6089745086896018468;
        arr_32 [i_9] = (arr_17 [i_9] [i_9]);
    }
    var_23 = ((-2147483647 - 1) - 0);
    #pragma endscop
}
