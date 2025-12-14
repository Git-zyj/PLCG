/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 &= ((-(((var_8 && ((!(-127 - 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = ((!(((~(min(2918188555, var_10)))))));
                                var_22 = (max(var_22, var_14));
                                var_23 = (max(var_23, (36327 != -3165437303)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_24 = (var_1 ? (((arr_11 [6] [i_1]) ? (~14673451492541230949) : (((var_10 ? (arr_17 [20] [20] [i_5] [i_6]) : (arr_5 [1] [13] [i_2] [i_5])))))) : ((~((var_17 ? 60119 : var_5)))));
                                var_25 -= var_14;
                                var_26 += min(((((arr_18 [i_0]) ? (-127 - 1) : var_15))), (min((arr_18 [i_0]), 1172999093)));
                                var_27 = (min((((arr_16 [i_5 + 1] [2] [i_5 + 1] [i_6]) ? var_5 : var_18)), (((var_14 >> (((arr_16 [i_5 - 1] [i_5 - 1] [18] [i_6]) - 45031)))))));
                            }
                        }
                    }
                    var_28 = (arr_10 [i_0] [i_0] [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_8] [i_0] = (((((-((-(arr_4 [22] [22] [i_2])))))) ? (((var_18 % 11569345925708897678) ? (var_10 / 4086760068) : (((var_2 ? (arr_11 [i_0] [i_7 + 1]) : var_11))))) : (((((arr_9 [i_7] [i_7 - 1] [i_8] [i_7 - 1]) && (arr_1 [i_7 + 3])))))));
                                var_29 = (~var_15);
                                var_30 = (max(var_30, ((((min((arr_6 [i_7 - 1] [i_7 + 3] [i_7] [i_7]), ((var_6 & (arr_5 [i_1] [i_1] [i_1] [i_0])))))) ? (arr_16 [i_0] [i_0] [i_2] [i_7 - 1]) : ((var_16 ? var_5 : var_13))))));
                                arr_29 [i_0] |= ((~(~var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
