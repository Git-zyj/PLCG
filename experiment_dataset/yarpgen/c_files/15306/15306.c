/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~6716747223690020283) - -108))) ? (min((((0 ? -46 : var_11))), var_13)) : ((((46 ? var_2 : var_10)) + (((max(0, 39555))))))));
    var_18 = var_12;
    var_19 += (((var_2 + 9223372036854775807) << (((((min(var_11, var_15)) + 14581)) - 43))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    arr_6 [21] [i_1] = (!29011);
                    arr_7 [i_0] = ((((((arr_4 [i_0]) + 9223372036854775807)) << (var_9 - 120))));
                    var_20 *= 0;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_21 = ((~(0 & 29014)));
                    arr_12 [i_0] [i_1] [i_1] = ((-((64 ? 29011 : -46))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_22 = (min(var_22, (((228 ? 65535 : 4294967279)))));
                        var_23 = var_12;
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_3] [i_5 - 1] [i_6] = (!1434);
                            arr_24 [i_1] [i_1] [i_5] [i_1] [i_6] [i_6] = var_6;
                            arr_25 [1] = var_8;
                        }
                        var_24 = (min(var_24, (arr_20 [i_5 - 1] [i_3] [i_1] [i_0])));
                        arr_26 [i_5] [i_3] [i_1] [i_0] = (!var_10);
                        arr_27 [i_0] [i_1] [i_5 + 2] &= (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]);
                    }
                }
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    var_25 = -11135;
                    var_26 = (max(65535, 48));
                    arr_30 [i_0] [i_1] [i_1] [i_7 - 1] |= (!(((var_2 ? (arr_3 [i_0] [i_1]) : (1 || 0)))));
                }
                var_27 = ((((((52606 < 193) ? (arr_29 [i_0] [i_0] [i_1] [i_1]) : ((var_1 ? -48 : 48))))) ? 48 : ((2941 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_1])))));
                arr_31 [i_1] [i_1] = ((!(((~((65534 ? 4260 : var_6)))))));
                var_28 = (((-var_8 ? (arr_17 [i_0] [i_0] [i_0] [12]) : ((199 ? var_13 : 1)))));
            }
        }
    }
    #pragma endscop
}
