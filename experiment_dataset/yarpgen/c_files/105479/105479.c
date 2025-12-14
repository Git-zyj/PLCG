/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 *= (((-32767 - 1) ? (!28969) : var_16));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = -var_14;
                        arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] = ((119 % (arr_4 [i_2] [i_1])));
                        arr_10 [i_1] = (var_18 % var_0);
                        var_20 |= ((!(arr_0 [i_0])));
                        var_21 ^= 249;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            {
                arr_15 [i_4] [i_5] = min((((((14 ? 25190 : 25171))) - (min((arr_6 [i_5] [i_5] [i_5] [i_4] [i_4]), 255)))), -0);
                arr_16 [i_4] [i_4] [i_5] = -32751;
                var_22 -= ((-25190 != ((min(219, -24782)))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        {
                            arr_22 [i_4] = (var_12 - var_17);
                            arr_23 [i_7] [i_4] [i_6] [i_5] [i_4] [i_4] = 283726776524341248;
                            arr_24 [i_4] [i_7] [i_4] [i_7] = ((((var_1 >= (arr_20 [i_4 - 1] [i_4] [i_7] [i_7] [i_7]))) ? (arr_20 [i_4 - 1] [i_4] [i_5] [i_5] [i_6]) : ((153 ? var_4 : (arr_20 [i_4 - 1] [i_6] [i_7] [i_7] [i_7])))));
                            var_23 += (~3);
                        }
                    }
                }
            }
        }
    }
    var_24 = -1;
    #pragma endscop
}
