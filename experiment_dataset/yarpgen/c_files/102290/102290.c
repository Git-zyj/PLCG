/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 += ((var_1 ? (arr_6 [i_0 - 3]) : -var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = ((58065 * (65535 / 9223372036854775807)));
                                arr_13 [6] [i_0 - 1] [4] [i_1] [i_2] [i_3] [i_4] &= (((arr_8 [2] [i_1] [i_1]) ? (((((-4642521372438254689 > var_1) || var_7)))) : (-9223372036854775807 - 1)));
                                arr_14 [i_2] [i_3] [i_1] [i_2] [i_1] [i_0] [i_2] = var_2;
                                arr_15 [i_2] [i_1] [i_2] [i_3] [8] = ((-((max((arr_7 [i_1] [i_2] [5]), var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_7 ? (!1258971411) : (((var_17 / 36028797018898432) ? -77 : var_6))));
    var_21 &= (max((1 & var_2), -var_8));
    var_22 += var_13;
    #pragma endscop
}
