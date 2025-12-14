/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min((((-6177519559043772379 + 9223372036854775807) << (8738662681215544956 - 8738662681215544956))), 4255)) + var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((((arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]) <= (arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]))))) > (((((arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]) + 9223372036854775807)) >> (((arr_3 [i_0 - 2] [i_3 - 1] [i_4 + 1]) + 2811602725390021756)))))))));
                                arr_11 [i_0 + 1] [2] [i_2] [i_3] [i_4 - 2] &= ((+((~((var_14 ? (arr_7 [i_2] [i_2] [i_2] [14] [i_2]) : var_0))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = (((min(var_15, 26420))));
                            var_23 = (min(var_23, (((min(var_11, -9223372036854775807))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, (((var_13 ? var_16 : (var_16 > var_13))))));
    var_25 = ((var_18 ? (((var_14 & var_5) ? (~-4253) : var_0)) : var_16));
    var_26 = 127;
    #pragma endscop
}
