/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (~17976);
                var_21 = (max(var_21, (((!(((157 || 2569763472) >= 242)))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_22 = ((max(((min(-1699609655, (arr_4 [i_0] [i_0]))), (arr_0 [i_3] [i_1 + 1])))));
                            var_23 = (4294967292 - -7050);
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_24 = (arr_8 [i_4] [4] [i_4] [5] [i_4]);
                    arr_17 [7] [i_5] [i_6] = (((arr_1 [13] [i_5]) << (var_1 - 3523521254)));
                    var_25 = var_13;
                    var_26 = var_6;
                    arr_18 [4] [8] = (((arr_7 [i_4] [i_4] [i_4]) ? 11101 : 1));
                }
            }
        }
        var_27 = (min(var_27, ((var_16 ? (arr_2 [i_4]) : var_14))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 7;i_7 += 1)
    {
        var_28 = (31189 && var_17);
        var_29 |= ((~((-2147483626 ? 1 : 229))));
        arr_22 [i_7] [i_7 + 2] = ((var_15 <= ((var_12 ? -534055686638878650 : var_4))));
        var_30 = (((arr_8 [3] [i_7 + 2] [i_7 - 3] [2] [i_7]) ? 13 : (arr_8 [i_7 - 1] [23] [i_7 - 3] [i_7] [i_7])));
    }
    var_31 = var_15;
    #pragma endscop
}
