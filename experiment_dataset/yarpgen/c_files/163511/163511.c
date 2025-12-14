/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 += (~63519);
        var_19 = (~-1);
        var_20 ^= ((-(!0)));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_4 [i_1] = -1845591387;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_21 = var_11;
                        arr_11 [i_1] [i_4] [i_3] [i_4] = (~1845591408);
                        var_22 *= (min(var_17, (var_7 * -1845591387)));
                        arr_12 [i_1] [i_2] [i_3] [i_4] |= ((((var_5 * var_13) * (((1845591390 ? var_0 : 1845591386))))));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = (~1845591388);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (!1845591386);
        arr_18 [i_5] = ((var_13 ? (max(1845591360, ((min(var_8, var_0))))) : (min((min(-1845591388, -1845591387)), 1845591386))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_23 = (max(1845591386, -1845591387));
                    var_24 = (max(var_24, ((min(1845591386, (max((min(-1845591386, 1845591387)), -1845591361)))))));
                }
            }
        }
        var_25 = (max(var_25, (((((min(var_2, -1845591386))) ? ((min(var_3, var_6))) : ((-((var_13 ? 1845591377 : var_0)))))))));
        var_26 = (((max(1845591371, var_7)) <= ((min(-1845591396, -1845591387)))));
    }
    var_27 = ((~(((-1845591361 + 2147483647) >> (1845591386 - 1845591366)))));
    var_28 |= (max(var_15, (max((min(-1845591387, 1845591386)), ((-1845591361 ? -1845591386 : var_16))))));
    #pragma endscop
}
