/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = ((-(var_2 / 5434883304801871671)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] = (((((max(31, -20853))) + -1)));
                        arr_11 [i_3] [i_3] [i_2] [i_3 - 4] [i_3] [i_3] = ((((var_1 ? ((var_4 ? var_6 : var_0)) : (((-127 - 1) | var_4))))) ? var_0 : ((var_3 % (min(var_0, var_8)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0] [i_4] [i_4] [i_4] = ((!(((66 ? var_4 : var_7)))));
                        var_13 = (((arr_3 [i_0] [i_0]) ? (((var_0 - (-32767 - 1)))) : ((var_6 ? var_5 : var_9))));
                    }
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [0] [i_1] [i_1] = ((!((max(var_10, var_3)))));

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_14 = ((-(((arr_8 [i_0] [i_0] [i_0] [i_0]) ^ (max(var_8, var_9))))));
                            arr_22 [17] [17] [i_2] [i_1] [i_0] = 244;
                            arr_23 [i_0] [i_1] [i_2] = ((((((min(var_6, 18446744073709551615)) % (arr_17 [i_6 + 1])))) ? ((((((9446036332744900047 ? 1945492701 : 4339595003838004929)) <= (~var_7))))) : (min(((var_10 ? 2525984175 : var_9)), (!var_1)))));
                        }
                        arr_24 [i_2] = ((!(((-74 * (~75))))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_15 = ((max(9000707740964651588, -37)) << ((((~(arr_1 [i_0]))) - 3808827894)));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = ((~((max(4132173600, (arr_19 [i_0] [11] [i_2] [i_2] [i_7]))))));
                        var_16 *= -74;
                    }
                    var_17 = (max(1945492701, (min(5434883304801871645, 239))));
                    arr_28 [i_1] = -var_4;
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_32 [i_0] [i_0] [i_1] [i_8] = ((!((min((((var_10 << (var_4 - 16409)))), (~var_1))))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = min((((min(3383838840, 1242454581)))), (((arr_1 [i_1]) ? (var_10 + var_5) : (var_2 / var_3))));
                }
            }
        }
    }
    var_18 = (max(((((var_0 <= var_7) - var_2))), ((-((-1 ? var_5 : var_7))))));
    #pragma endscop
}
