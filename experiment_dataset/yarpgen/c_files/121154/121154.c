/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_12 [i_0] [i_3] [i_3] [i_2] [i_1] [0] [i_0] = ((((min((arr_5 [i_0] [i_1 - 2] [i_0]), (arr_5 [i_0] [i_1 - 1] [i_0])))) ? ((min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_5 [i_0] [i_1 - 2] [i_0])))) : ((min(-12916, (arr_5 [i_0] [i_1 + 1] [i_0]))))));
                                var_20 ^= ((-12916 ? (arr_5 [i_3] [i_1] [i_3]) : (arr_2 [i_0] [i_3] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                arr_17 [i_0] = (min((arr_14 [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_5] [i_5]), (~-12918)));
                                arr_18 [i_0] [i_0] = 133143986176;
                                var_21 = (min(12893, (((arr_3 [i_0] [1]) ? ((var_6 % (arr_5 [i_0] [i_1] [i_2]))) : (arr_3 [i_0] [i_0])))));
                                var_22 -= -12912;
                            }
                            for (int i_6 = 2; i_6 < 16;i_6 += 1)
                            {
                                var_23 -= ((min((arr_13 [i_1 - 2] [i_1 - 2] [i_2] [16] [i_6 + 2]), (~12915))));
                                var_24 *= -12918;
                                var_25 = (arr_2 [i_6] [i_0] [i_0]);
                            }
                            var_26 ^= (min(var_13, (min(12942, (min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_1]), 1740764018))))));
                        }
                    }
                }
                var_27 = (((arr_3 [i_0] [i_1]) / (arr_8 [i_0] [11] [i_0])));
                var_28 ^= (arr_14 [16] [16] [16] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_37 [i_8] [i_8] = var_0;
                                arr_38 [i_7] [i_8] [i_9] [16] [i_11] [i_8] [i_8] = (((arr_36 [i_7]) && var_13));
                                var_29 ^= ((((~((min(var_5, (arr_35 [i_7] [i_8] [i_8] [16] [i_9] [i_10] [i_11])))))) % (arr_32 [6])));
                                var_30 ^= -12921;
                                var_31 ^= var_6;
                            }
                        }
                    }
                    var_32 = (min(3513427521, (((~(~-3495))))));
                    arr_39 [i_8] [i_8] [i_9] = (min((arr_35 [i_8 + 1] [i_8 + 2] [i_8 + 3] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_9]), ((((arr_35 [i_8 + 1] [3] [i_8 + 3] [i_8 + 3] [i_8] [i_8 + 2] [i_8 + 2]) == 3513)))));
                }
            }
        }
    }
    #pragma endscop
}
