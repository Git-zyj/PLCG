/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = ((~(((~var_5) ? var_1 : var_1))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_3] = (((((arr_2 [i_0 - 1]) | var_7)) / (arr_2 [i_0 - 1])));
                                arr_18 [i_3] [i_3] [i_1] = var_8;
                                arr_19 [i_0] [4] [i_2] [i_2] [i_2] |= (arr_5 [i_0 - 2] [i_0 - 2] [i_4]);
                                arr_20 [i_4] |= ((var_3 ? ((((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? ((((arr_11 [i_4] [i_3] [i_1] [i_1] [i_0] [i_4]) ^ var_3))) : (max(var_5, var_6))))) : var_2));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0 - 2] [i_0] = (min(((~(1 ^ var_3))), ((var_9 ? (arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 4]) : (arr_7 [i_0 - 3] [i_0 - 2] [i_0 + 2])))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_28 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((((-116 && (arr_12 [i_2] [i_0 - 4])))));
                            var_12 = 1;
                            arr_29 [i_6] [i_1] [i_2] [i_1] [i_0 - 1] = (!var_4);
                            arr_30 [i_2] [i_0] = 65535;
                            var_13 = ((var_0 << ((((1 ? var_9 : 314301307)) - 764171963))));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            var_14 = -10527224580997526172;
                            var_15 += (((((var_2 ? var_9 : var_1))) ? var_6 : 1));
                            arr_33 [i_0] [i_7] [i_0 - 3] [i_0] [i_0] = ((var_8 + (arr_7 [8] [i_2] [i_0])));
                            var_16 *= var_5;
                            var_17 = ((var_2 ? var_4 : (arr_25 [i_0] [i_0] [i_0 - 4] [i_0 + 2] [i_0] [i_0 - 3] [i_0])));
                        }
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = (((arr_10 [0] [i_2] [i_1] [i_0]) ? (~var_7) : (((3980665987 ? (arr_25 [i_0 - 4] [i_5 + 3] [i_0 - 4] [i_5 + 2] [i_5] [i_5] [i_5 + 1]) : var_1)))));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_18 = min(1, 8363929006662318688);
                            var_19 = (max(var_19, var_0));
                            var_20 -= (!var_2);
                        }
                    }
                    var_21 = ((+(((arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_22 [i_0 + 2] [i_0] [i_0 + 1] [i_0]) : (arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
