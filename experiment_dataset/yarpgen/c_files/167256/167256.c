/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((!(((-var_19 - (var_17 < var_8))))));
    var_21 = ((((((!(~var_13))))) & ((-(var_18 * var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= ((var_9 < ((((var_13 * var_10) < -var_16)))));
                arr_7 [i_0] [i_0] = var_13;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = var_4;
                                var_23 |= (((((((~var_18) && (var_0 & var_19))))) ^ ((~(var_5 & var_0)))));
                                var_24 = (min(var_24, var_5));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                                var_25 = ((~(min(var_11, (var_1 + var_13)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((((var_0 * (var_6 & var_15))) & (((-var_13 / (var_11 != var_2)))))))));
                            var_27 = ((((((max(var_4, var_0)) * -var_3))) && (!-1709135794)));
                            var_28 = ((!(((var_11 ^ (var_10 & var_8))))));
                            arr_22 [i_0] [i_5 - 2] [i_0] [i_0] = var_8;
                        }
                    }
                }
            }
        }
    }
    var_29 = (((-var_19 & var_5) < (((((max(var_5, var_14)) < (~var_17)))))));
    var_30 = ((-(((~var_16) * var_15))));
    #pragma endscop
}
