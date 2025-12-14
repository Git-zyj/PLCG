/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 -= var_3;
    var_17 = (-13314 ^ 20);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(((86 ? ((1 ? var_13 : var_3)) : (!var_14))), ((min(254, 37623)))));
        arr_3 [i_0] [6] &= (((!1) ? var_0 : (~var_3)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((!(((max(var_13, 30949))))));
                    var_20 -= ((((min(var_6, 12))) ? var_6 : var_4));
                }
            }
        }
        arr_10 [i_0] = ((!((((!-26) ? 45861 : (!var_1))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_21 = (min(var_21, 1));
        var_22 = (var_12 - var_9);
        var_23 = -var_14;
        arr_13 [i_3] = (((-20 * 88) ? ((var_3 ? 3341 : 255)) : var_12));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((!1) ? (((-2147483647 - 1) ? 254 : 18446744073709551615)) : (!1))))));
                                var_25 *= (max(var_6, (var_11 - var_2)));
                                arr_28 [i_5 - 1] [i_4] [10] [i_7 - 4] [i_8] [i_4] [i_8 - 1] = (var_8 ^ -var_5);
                                var_26 = ((max(var_8, var_7)));
                                var_27 = ((((max(var_14, var_2))) ? (var_9 / var_14) : var_5));
                            }
                        }
                    }
                    var_28 ^= var_8;
                    var_29 -= (26236 ^ 7);
                    var_30 += ((min(0, 7)));
                }
            }
        }
        arr_29 [i_4] = var_0;
        var_31 = (min(var_31, -var_8));
        var_32 = (min((((var_14 | var_12) ? (~var_11) : var_6)), (((~((max(var_5, 137))))))));
        var_33 = (max(var_33, (min((40456 - 1), -1510037747))));
    }
    #pragma endscop
}
