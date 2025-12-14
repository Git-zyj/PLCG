/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((~(59346 | 144))), (!2)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (~-7);
        arr_5 [i_0] = -var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 -= (min((((arr_9 [i_2 - 1] [i_2] [i_2 - 1]) ^ 6)), ((max(((max((arr_8 [4] [i_1]), var_4))), var_1)))));
                    var_14 = (max(var_14, ((((min(var_0, (((arr_6 [i_0] [i_0] [i_0]) ? 6189 : (arr_9 [i_0] [i_1] [i_2]))))) + (1743982090 + var_5))))));
                    arr_11 [i_0] [i_0] [i_0] = ((var_3 + ((((min((arr_2 [i_0]), var_10))) ? (max(var_0, var_8)) : (((-63 ? 0 : -32766)))))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = -var_0;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_22 [10] [i_4] [8] = ((6190 ? ((max((arr_20 [i_4] [i_4]), (arr_20 [i_5] [i_4])))) : var_10));

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_26 [i_6] [i_4] [i_5] [20] [i_5] = ((-((-(arr_25 [1] [i_3] [i_6] [i_3 + 1] [3])))));

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_15 = ((-(min(((((arr_28 [i_3] [i_4] [22] [i_4] [i_7]) + 30))), var_11))));
                            var_16 = (!2707461436);
                        }

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            arr_33 [i_6] = (((arr_17 [i_3 - 1] [i_6 + 3]) + (arr_17 [i_3 - 1] [i_6 + 4])));
                            var_17 -= var_10;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_18 = (max((((arr_23 [i_3] [2] [i_3] [i_3]) | ((~(-32767 - 1))))), (((arr_23 [i_3] [8] [i_6 + 2] [i_9]) | (arr_16 [i_5] [i_3])))));
                            arr_38 [i_9] [i_9] [6] [i_6 + 2] [i_9] |= ((var_11 ? (~1) : (((arr_32 [i_3] [i_4] [i_4] [i_4] [i_9]) & (~var_2)))));
                            var_19 = 4294967294;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_41 [i_3] [i_3] [i_6] [i_6] [i_3] [i_6] [i_6] = 9223372036854775794;
                            var_20 -= 65;
                        }
                        arr_42 [i_3] [i_6] [i_5] [i_3] = (min((~var_8), (9223372036854775806 - 1854392108256833774)));

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_45 [i_6] = var_3;
                            var_21 = (27162 + 3100002787);
                            var_22 += 4143313661;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
