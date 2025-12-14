/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 *= (min(17164339280693745177, 17164339280693745177));
                    var_22 = var_18;
                    arr_7 [i_1] [i_1] [i_0] = ((~(max((arr_5 [i_1]), var_2))));
                }
            }
        }
        arr_8 [i_0] = ((-(((((17164339280693745184 ? var_10 : (arr_2 [i_0] [i_0])))) ? (arr_5 [8]) : 2147483647))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_23 = (max(590031348094726774, ((6536481939247584628 ? 4 : -89))));
                        arr_17 [i_3] [i_4] [i_4 - 1] [i_5] [i_3] |= ((-((((min(-51, var_15))) ? (min(17164339280693745177, 17164339280693745177)) : 8124304723908873300))));
                        var_24 ^= (max((((arr_16 [i_4 - 2]) ? var_18 : (arr_16 [i_4 - 1]))), (~-2147483632)));
                        var_25 += 48928;
                    }
                }
            }
        }
        var_26 = (max((arr_2 [i_0] [i_0]), (arr_11 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((((((max((arr_22 [i_7]), 860649916))) * -53)) >= (((max((arr_28 [i_6] [i_7 + 1]), (arr_28 [i_6] [i_7 + 1])))))))));
                                arr_30 [i_8] [0] [i_8] [4] [22] [i_8] [i_8] = ((((((2147483647 | var_16) ? (-2147483625 & var_15) : (arr_26 [i_6] [i_6] [i_8] [i_9])))) ? ((((max(var_11, var_3))) + (arr_18 [i_8]))) : (((-1202170007446536746 / (arr_27 [i_7 + 1] [i_6] [i_7 - 1] [i_7] [i_6]))))));
                            }
                        }
                    }
                    arr_31 [7] = (min((min(18446744073709551611, ((min(1, var_14))))), (!-2147483621)));
                    var_28 = (~105);
                }
            }
        }
    }
    #pragma endscop
}
