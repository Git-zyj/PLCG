/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((6016 | -2704), 2147483647));
    var_19 = var_10;
    var_20 = (max((~var_14), ((((~var_7) ? var_0 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_21 += 1;
                                var_22 = (i_4 % 2 == 0) ? ((((((max((var_4 | var_9), ((var_1 ? (arr_0 [i_3]) : (arr_3 [i_0 + 4] [i_0 + 4]))))) + 2147483647)) << ((((min((arr_13 [i_0 + 4] [i_1 + 1] [i_4] [i_4] [i_4 + 1] [i_0 + 4]), (arr_13 [i_0 + 3] [i_1 - 3] [i_4] [i_4] [i_4 + 1] [i_1 - 3])))) - 30401))))) : ((((((max((var_4 | var_9), ((var_1 ? (arr_0 [i_3]) : (arr_3 [i_0 + 4] [i_0 + 4]))))) + 2147483647)) << ((((((min((arr_13 [i_0 + 4] [i_1 + 1] [i_4] [i_4] [i_4 + 1] [i_0 + 4]), (arr_13 [i_0 + 3] [i_1 - 3] [i_4] [i_4] [i_4 + 1] [i_1 - 3])))) - 30401)) - 4789)))));
                            }
                            for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_23 = ((!(!var_12)));
                                var_24 = (min(var_24, 4082));
                                var_25 = (((min((max((arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5 + 1] [i_1]), (arr_5 [i_0] [i_0] [i_2] [i_0]))), (~-2147483632)))) ? (~var_14) : ((((arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_5]) ? (arr_15 [i_0 + 3] [i_1 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]) : ((-1571594582 ? (arr_1 [i_0] [i_3]) : var_4))))));
                                var_26 = (((((-16777367563319719396 - (((var_1 ? 2717 : -3159)))))) ? ((((arr_16 [i_1 + 1] [i_0] [i_2] [i_1 - 3] [i_0]) & (arr_9 [11] [i_1] [i_2] [i_1 - 1] [i_5 - 1])))) : (((arr_8 [i_0] [i_0] [i_1]) ? 62888 : (min((arr_3 [i_0] [i_0]), var_2))))));
                            }
                            for (int i_6 = 2; i_6 < 21;i_6 += 1)
                            {
                                var_27 = (min((arr_18 [i_0] [i_1] [i_0 + 1] [i_3]), 47501));
                                var_28 = var_13;
                                var_29 = ((((arr_6 [i_6] [i_1] [i_2] [i_0 + 4]) ? (arr_11 [i_0 + 3] [i_1] [i_0 + 3] [i_0 + 1] [i_0 + 3]) : (arr_11 [i_0] [3] [3] [i_0 - 1] [i_6]))));
                                var_30 = (min((arr_3 [i_0] [i_0]), var_1));
                                var_31 = ((62819 + ((((max(var_3, (arr_1 [i_3] [i_3])))) ? (min(var_14, 48)) : var_13))));
                            }
                            var_32 *= ((((((((arr_18 [i_3] [i_2] [i_1] [i_0]) ? var_16 : var_15)) / (((max(var_8, 41649))))))) ? (((~var_2) << var_10)) : var_15));
                        }
                    }
                }
                var_33 = (((arr_3 [i_0] [i_0 + 3]) ? (761364030 / var_13) : (arr_3 [i_0] [i_0 + 3])));
            }
        }
    }
    #pragma endscop
}
