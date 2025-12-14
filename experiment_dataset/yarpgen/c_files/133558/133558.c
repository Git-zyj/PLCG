/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 || ((min(var_4, ((var_6 ? var_3 : var_0)))))));
    var_14 += 33583;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] &= (min(((min(37, 53))), 65501));
                    arr_8 [i_0] [i_1] [i_0] = (((((((max(var_3, var_7))) ? (max((arr_2 [i_2]), (arr_5 [i_0] [i_1] [i_2]))) : (!2751341249)))) ? (var_12 != var_0) : var_10));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_1] = -0;
                        var_15 = (65498 | var_12);
                    }

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_16 = 2004330998;
                        arr_16 [i_1] [i_1] [i_2] [i_4] [i_1] = ((((((arr_14 [i_2 - 1] [i_2 - 1] [i_4 - 1] [i_4 - 1]) + 12134))) && ((((0 ? 1733714221 : 18))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [1] [i_2] [i_5] [i_6] [i_1] = 13334268555837058804;
                            var_17 = ((!((((var_1 * 95) ? (max(var_1, 31956)) : 13746487153569504913)))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_27 [i_1] = (arr_25 [i_1] [i_2]);
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_1] = (((arr_3 [i_1] [i_7]) ? ((max(1, 4294967291))) : ((((max((arr_0 [i_1] [i_7]), var_6))) ? var_11 : var_3))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_33 [i_0] [i_1] = 33601;
                            arr_34 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8] = 16;
                            var_18 = -2962842629352376309;
                        }
                        var_19 = ((((max(-1, var_10))) ? -9 : (-12116 && 2004330998)));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_20 = (min((((arr_29 [i_0] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) / 8388607)), (max(0, 18446744073709551610))));
                            var_21 = 11780445918866098883;
                            arr_39 [i_1] [10] [i_2] [7] [i_5] [i_9] = var_8;
                            arr_40 [i_0] [i_1] [i_0] [i_5] [i_9] = var_4;
                            arr_41 [i_0] [i_1] [i_0] [i_1] [i_2 - 1] [i_5] [i_9] = 2751341231;
                        }
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_22 += (((((((var_12 ? -12134 : 4108668865))) % 4398046511103))) ? ((((min(14, 1))) >> (((arr_26 [i_0] [i_0] [i_0] [i_2] [i_2 - 1]) - 144)))) : (((!(arr_35 [i_0] [i_10] [i_1] [8] [i_10] [i_10])))));
                        var_23 = (max(var_23, ((max((((arr_37 [0] [i_10]) ? (~1710603338) : (arr_29 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [6] [i_10]))), (arr_5 [i_0] [i_0] [i_2]))))));
                    }
                }
            }
        }
    }
    var_24 = (((((824079093 >= (max(var_3, 1710012757))))) > var_11));
    #pragma endscop
}
