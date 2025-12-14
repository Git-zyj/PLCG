/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = 119;
    var_18 += var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 *= (((-115 <= ((43012 ? (arr_1 [i_0]) : 8160)))));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] &= (arr_4 [i_0] [i_2]);

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((((!115) ? (max((~19), ((max((arr_10 [i_3] [i_2] [i_1 + 3]), var_0))))) : (arr_3 [i_3 + 3]))))));
                        var_21 -= ((arr_5 [i_3 - 1] [i_0] [i_0]) - ((max(((min(-99, 95))), (arr_0 [i_1] [i_3 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_22 = (~var_13);
                        var_23 -= ((!(542272124 % 8)));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_16 [i_4] [i_2] [i_4] [i_4] [i_5] = ((~(arr_11 [i_5] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0])));
                            var_24 = (max(var_24, -17579));
                            var_25 -= (arr_15 [i_1 + 4] [i_1 + 2] [i_1] [i_2 - 2] [i_2 - 1]);
                            var_26 = (min(var_26, -1868681872));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_27 = var_6;
                            var_28 -= -119;
                            var_29 = (max(var_29, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) & (arr_8 [i_0] [i_0] [i_1 + 2] [i_2 - 3] [i_4] [i_6]))))));
                            var_30 = (~(arr_14 [i_2] [i_2 + 1] [i_6]));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_31 -= ((~(((arr_5 [i_0] [i_0] [i_0]) ? 119 : (arr_21 [i_0] [i_1] [i_2])))));
                            arr_25 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = (((arr_10 [i_0] [i_0] [i_0]) <= (((arr_5 [i_0] [i_2] [i_0]) / (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_8] = (((arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0]) ? (((var_5 << (((arr_19 [i_2 - 3]) - 286209448))))) : (arr_23 [i_0])));
                        arr_29 [i_0] [i_2] [i_1] [i_1 + 1] [i_0] |= (arr_4 [i_0] [i_1 + 2]);
                        var_32 ^= (-(!var_8));
                        var_33 -= var_10;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_34 = (min((((((arr_1 [i_2]) & (arr_10 [i_1] [i_2] [i_1]))) | -99)), (((max((arr_30 [i_9] [i_2] [i_0] [i_0]), 32761))))));
                        var_35 = 45370;
                        arr_34 [i_0] [i_1 - 1] [i_2 - 2] [i_9] = (((((((arr_23 [i_0]) * var_15))) ^ var_2)));
                        var_36 ^= (max(((~(arr_27 [i_0]))), 2142009303));
                    }
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    var_37 &= 212;
                    arr_38 [i_0] [i_10] = ((((((min(106, 229)))) <= (0 & var_9))));
                }
            }
        }
    }
    #pragma endscop
}
