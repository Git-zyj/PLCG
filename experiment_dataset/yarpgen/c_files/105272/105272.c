/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (1151361454638110045 + ((((11471 ? -17989 : 17996)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [15] [15] [i_0] = (((arr_4 [i_0] [i_1 - 2]) ? var_2 : ((-1 * (arr_5 [i_1 - 2] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] &= -17989;
                                arr_15 [0] [i_2] [i_3] [i_1] |= -28907;
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_15 = (min(var_15, -17989));
                        arr_19 [i_1] [i_1] [i_0] = (max(((-8085 | (var_5 > 8085))), (max(-8076, -30243))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_16 *= (max(((~(~-8083538189681924026))), 17988));
                            var_17 ^= (min(var_1, (max((arr_8 [i_1]), 14655))));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = (((arr_11 [i_2 + 2] [i_0] [i_2 + 2] [i_0] [i_0]) >> ((((max(-48, var_7))) ? (arr_21 [i_0] [9] [i_2] [i_1 - 2] [i_0]) : (!var_7)))));
                            arr_27 [i_0] [i_0] [1] [i_5] [20] = (8085 != 31744);
                        }
                        arr_28 [i_0] = (arr_25 [5]);
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        var_18 -= (arr_12 [i_0] [2] [i_1] [i_0] [8]);
                        arr_31 [i_0] [i_1] [i_0] [i_8 - 1] = 30261;
                        var_19 = ((((84 ? -17995 : 1391718805686121211)) / 37962));
                        var_20 = (!var_6);
                        arr_32 [i_0] [i_0] = (((~31744) == var_4));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_9] = 27573;
                        arr_38 [i_0] [i_1] [i_0] [i_9] = ((((arr_34 [i_0] [i_0] [i_0] [i_0]) ? 66 : 48413)));
                        var_21 = max((((((max(30, -30243))) ? (((61 == (arr_36 [13] [i_0] [19] [21])))) : -31745))), ((~(max(65535, var_4)))));
                        var_22 = 66;
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_2));
    #pragma endscop
}
